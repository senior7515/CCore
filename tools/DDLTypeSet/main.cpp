/* main.cpp */ 
//----------------------------------------------------------------------------------------
//
//  Project: DDLTypeSet 1.00
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2013 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#include <CCore/inc/Exception.h>
#include <CCore/inc/Cmp.h>
#include <CCore/inc/Sort.h>
#include <CCore/inc/CompactMap.h>
#include <CCore/inc/OwnPtr.h>

#include "Data.h"

namespace App {

/* class PrintType */

class PrintType : NoCopy
 {
   struct ProcessSwitch : DDL::TypeSwitch
    {
     PrintType *pro;
     bool use_alias;
     DDL::TypeNode *type_node;
     
     explicit ProcessSwitch(PrintType *pro_,bool use_alias_) : DDL::TypeSwitch(this),pro(pro_),use_alias(use_alias_) {}
     
     void set(StrLen name)
      {
       type_node=0;
       pro->add(name);
      }
     
     void do_sint8(DDL::TypeNode_suint<DDL::imp_sint8> *) { set("DDL::imp_sint8"); }
     void do_uint8(DDL::TypeNode_suint<DDL::imp_uint8> *) { set("DDL::imp_uint8"); }

     void do_sint16(DDL::TypeNode_suint<DDL::imp_sint16> *) { set("DDL::imp_sint16"); }
     void do_uint16(DDL::TypeNode_suint<DDL::imp_uint16> *) { set("DDL::imp_uint16"); }

     void do_sint32(DDL::TypeNode_suint<DDL::imp_sint32> *) { set("DDL::imp_sint32"); }
     void do_uint32(DDL::TypeNode_suint<DDL::imp_uint32> *) { set("DDL::imp_uint32"); }

     void do_sint64(DDL::TypeNode_suint<DDL::imp_sint64> *) { set("DDL::imp_sint64"); }
     void do_uint64(DDL::TypeNode_suint<DDL::imp_uint64> *) { set("DDL::imp_uint64"); }

     void do_text(DDL::TypeNode_text *) { set("StrLen"); }
     void do_ip(DDL::TypeNode_ip *) { set("DDL::imp_uint32"); }

     void do_ptr(DDL::TypeNode_ptr *ptr_node) 
      {
       type_node=ptr_node->type_node;
       pro->addSuffix(" *");
      }

     void do_array(DDL::TypeNode_array *array_node) 
      {
       type_node=array_node->type_node;
       pro->add("PtrLen<"," >");
      }
     
     void do_array_len(DDL::TypeNode_array_len *array_node) 
      {
       type_node=array_node->type_node;
       pro->add("PtrLen<"," >");
      }
     
     void do_struct(DDL::StructNode *struct_node)
      {
       type_node=0;
       pro->addStruct(struct_node->index);
      }
     
     void do_struct(DDL::TypeNode_struct *type) { do_struct(type->base_struct); }

     void do_ref(DDL::TypeNode_ref *type) 
      {
       if( DDL::AliasNode *alias=type->alias_node )
         {
          if( use_alias )
            {
             type_node=0;
             pro->addAlias(alias->index);
            }
          else
            {
             alias->result_type->dispatch(*this);
            }
         }
       else
         {
          do_struct(type->struct_node);
         }
      }
    };
    
   ProcessSwitch ts_process;
   
   static DynArray<StrLen> PrefixList;
   static DynArray<StrLen> SuffixList;
   
   ulen struct_index;
   ulen alias_index;
   
  private:
   
   void add(StrLen name) 
    { 
     PrefixList.append_copy(name); 
    }
   
   void add(StrLen prefix,StrLen suffix)
    {
     PrefixList.append_copy(prefix);
     SuffixList.append_copy(suffix);
    }
   
   void addSuffix(StrLen suffix)
    {
     SuffixList.append_copy(suffix);
    }
   
   void addStruct(ulen index) 
    { 
     struct_index=index; 
    }
   
   void addAlias(ulen index) 
    { 
     alias_index=index; 
    }
   
  public:
 
   explicit PrintType(DDL::TypeNode *type_node,bool use_alias=false)
    : ts_process(this,use_alias),
      struct_index(0),
      alias_index(0)
    {
     PrefixList.shrink_all();
     SuffixList.shrink_all();
    
     while( type_node )
       {
        type_node->dispatch(ts_process);
        
        type_node=ts_process.type_node;
       }
    }
   
   ~PrintType()
    {
    }
   
   template <class P>
   void print(P &out) const
    {
     for(StrLen str : PrefixList ) Putobj(out,str);
     
     if( struct_index ) Printf(out,"S#;",struct_index);
     
     if( alias_index ) Printf(out,"A#;",alias_index);
     
     for(StrLen str : RangeReverse(SuffixList) ) Putobj(out,str);
    }
 };

DynArray<StrLen> PrintType::PrefixList(DoReserve,100);
DynArray<StrLen> PrintType::SuffixList(DoReserve,100);

/* class PrintName */

class PrintName : NoCopy
 {
   static DynArray<StrLen> Stack;
   
   StrLen name;
   
  public:

   template <class T>  
   explicit PrintName(const T &node)
    {
     name=node.name.name.token.str;
     
     Stack.shrink_all();
     
     for(auto *scope=node.parent; scope ;scope=scope->parent)
       {
        Stack.append_copy(scope->name.name.token.str);
       }
    }
   
   ~PrintName()
    {
    }
   
   template <class P>
   void print(P &out) const
    {
     for(StrLen str : RangeReverse(Stack) ) Putobj(out,str,"#");
     
     Putobj(out,name);
    }
 };

DynArray<StrLen> PrintName::Stack(DoReserve,100);

/* struct NameS */

struct NameS
 {
  ulen index;
  
  explicit NameS(ulen index_) : index(index_) {}
 };

/* struct NameA */

struct NameA
 {
  ulen index;
  
  explicit NameA(ulen index_) : index(index_) {}
 };

/* struct Name */

struct Name
 {
  enum Type
   {
    Type_S = 1,
    Type_A = 2
   };
  
  Type type;
  ulen index;
  
  Name(NameS name) : type(Type_S),index(name.index) {}
  
  Name(NameA name) : type(Type_A),index(name.index) {}
  
  // print object
  
  friend const char * GetTextDesc(Type type)
   {
    switch( type )
      {
       case Type_S : return "S"; 
       case Type_A : return "A";
       default: return "???";
      }
   }
  
  template <class P>
  void print(P &out) const
   {
    Printf(out,"#;#;",type,index);
   }
 };

/* class NameDirectory */

class NameDirectory : NoCopy
 {
   static DynArray<StrLen> Stack;
   
   struct Key : CmpComparable<Key>
    {
     StrLen name;
     
     // constructors
     
     Key() {}
     
     Key(StrLen name_) : name(name_) {}
     
     // cmp objects
     
     CmpResult objCmp(Key obj) const { return StrCmp(name,obj.name); }
     
     // print object
     
     template <class P>
     void print(P &out) const
      {
       Putobj(out,name);
      }
    };
   
   struct Entry
    {
     Name result;
     
     explicit Entry(Name result_) : result(result_) {}
     
     // print object
     
     template <class P>
     void print(P &out) const
      {
       Putobj(out,result);
      }
    };
   
   struct DirName
    {
     ulen index;
     ulen extra_index;
     
     DirName() : index(0),extra_index(0) {}
     
     // print object
     
     template <class P>
     void print(P &out) const
      {
       if( index )
         Printf(out,"S#;",index);
       else
         Printf(out,"D#;",extra_index);
      }
    };
   
   struct Dir : DirName , MemBase_nocopy
    {
     CompactRBTreeMap<Key,Entry> entries;
     CompactRBTreeMap<Key,OwnPtr<Dir> > dirs;
     
     Dir() {}

     DirName getName() const { return *this; }
     
     Dir * dir(StrLen name) 
      { 
       OwnPtr<Dir> *ptr=dirs.find_or_add(name);
       
       if( !*ptr ) ptr->set(new Dir());
       
       if( entries.find(name) )
         {
          Printf(Exception,"Unexpected name duplication");
         }
       
       return ptr->getPtr(); 
      }
     
     void entry(StrLen name,Name result) 
      { 
       if( !entries.find_or_add(name,result).new_flag )
         {
          Printf(Exception,"Unexpected name duplication");
         }
       
       if( dirs.find(name) )
         {
          Printf(Exception,"Unexpected name duplication");
         }
      }
     
     void setIndex(ulen index_)
      {
       if( index )
         {  
          Printf(Exception,"Unexpected name duplication");
         }
       
       index=index_;
      }
     
     void complete(DynArray<Dir *> &struct_list,DynArray<Dir *> &extra_list)
      {
       if( index )
         {
          struct_list[index]=this;
         }
       else
         {
          extra_index=extra_list.getLen();
         
          extra_list.append_copy(this);
         }
       
       dirs.applyIncr( [&] (const Key &,const OwnPtr<Dir> &dir) { dir->complete(struct_list,extra_list); } );
      }
     
     void complete_root(DynArray<Dir *> &struct_list,DynArray<Dir *> &extra_list)
      {
       dirs.applyIncr( [&] (const Key &,const OwnPtr<Dir> &dir) { dir->complete(struct_list,extra_list); } );
      }
     
     template <class P>
     void printUsing(P &out,StrLen prefix) const
      {
       if( entries.getCount()+dirs.getCount() ) Putch(out,'\n');
       
       entries.applyIncr( [&,prefix] (const Key &key,const Entry &entry) { Printf(out,"    using #; = #;#; ;\n",key,prefix,entry); } );
       
       dirs.applyIncr( [&,prefix] (const Key &key,const OwnPtr<Dir> &dir) { Printf(out,"    using #; = #;#; ;\n",key,prefix,dir->getName()); } );
      }
     
     // print object
     
     template <class P>
     void print(P &out,StrLen name={},ulen off=0) const
      {
       if( index ) 
         Printf(out,"#;#; -> S#;\n",RepeatChar(off,' '),name,index);
       else if( extra_index )
         Printf(out,"#;#; -> D#;\n",RepeatChar(off,' '),name,extra_index);
       else
         Printf(out,"#;(root)\n",RepeatChar(off,' '));
       
       entries.applyIncr_const( [&out,off] (const Key &key,const Entry &entry) { Printf(out,"#;#; = #;\n",RepeatChar(off+2,' '),key,entry); } );
       
       dirs.applyIncr_const( [&out,off] (const Key &key,const OwnPtr<Dir> &dir) { dir->print(out,key.name,off+2); } );
      }
    };
   
   Dir root;
   DynArray<Dir *> struct_list;
   DynArray<Dir *> extra_list;
  
  public:
 
   NameDirectory() : extra_list(DoReserve,100) { extra_list.append_default(); }
   
   ~NameDirectory() {}
   
   void add(PtrLenReverse<StrLen> path,StrLen name,NameS result)
    {
     Dir *ptr=&root;
     
     for(; +path ;++path) ptr=ptr->dir(*path); 

     ptr->dir(name)->setIndex(result.index);
    }
   
   void add(PtrLenReverse<StrLen> path,StrLen name,NameA result)
    {
     Dir *ptr=&root;
     
     for(; +path ;++path) ptr=ptr->dir(*path); 

     ptr->entry(name,result);
    }
   
   template <class T,class N>
   void add(T &node,N name)
    {
     Stack.shrink_all();
     
     for(auto *scope=node.parent; scope ;scope=scope->parent)
       {
        Stack.append_copy(scope->name.name.token.str);
       }
     
     add(RangeReverse(Stack),node.name.name.token.str,name);
    }
   
   void add(DDL::StructNode &node)
    {
     add(node,NameS(node.index));
    }
   
   void add(DDL::AliasNode &node)
    {
     add(node,NameA(node.index));
    }
 
   void complete(ulen struct_lim)
    {
     struct_list.extend_default(struct_lim);
     
     root.complete_root(struct_list,extra_list);
    }
   
   template <class P>
   void printStruct(P &out,StrLen prefix,DDL::StructNode &node) const
    {
     Dir *dir=struct_list[node.index];
     
     dir->printUsing(out,prefix);
    }
   
   template <class P>
   void printExtra(P &out,StrLen prefix,ulen ind) const
    {
     Dir *dir=extra_list[ind];
     
     dir->printUsing(out,prefix);
    }
   
   template <class P>
   void printRoot(P &out,StrLen prefix) const
    {
     root.printUsing(out,prefix);
    }
   
   ulen getExtraLim() const { return extra_list.getLen(); }
   
   // print object
   
   template <class P>
   void print(P &out) const
    {
     Putobj(out,root);
    }
 };

DynArray<StrLen> NameDirectory::Stack(DoReserve,100);

/* Process() */

void Process(StrLen input_file_name,StrLen output1_file_name,StrLen output2_file_name)
 {
  Data data(input_file_name);
  PrintFile out1(output1_file_name);
  PrintFile out2(output2_file_name);
  
  ulen struct_lim;
  NameDirectory dir;
  
  // 1
  {
   Putobj(out1,"/* struct TypeDefCore */\n\n");
   
   Putobj(out1,"struct TypeDefCore\n"); 
   Putobj(out1," {\n"); 
   Putobj(out1,"  // types\n\n"); 
  }
  
  // 2
  {
   ulen ind=1; 
    
   for(auto &node : data->struct_list )
     {
      Printf(out1,"  struct S#;; // #;\n",ind,PrintName(node));
      
      node.index=ind++;
     }
   
   struct_lim=ind;
   
   Putch(out1,'\n');
  }
  
  // 3
  {
   ulen ind=1; 
    
   for(auto &node : data->alias_list )
     {
      Printf(out1,"  using A#; = #; ; // #;\n",ind,PrintType(node.result_type),PrintName(node));
      
      node.index=ind++;
     }
   
   Putch(out1,'\n');
  }
  
  // 4
  {
   for(auto &node : data->struct_list ) dir.add(node);
   
   for(auto &node : data->alias_list ) dir.add(node);
   
   dir.complete(struct_lim);
  }
  
  // 5
  {
   for(ulen ind=1,lim=dir.getExtraLim(); ind<lim ;ind++) Printf(out1,"  struct D#;;\n",ind);
   
   Putch(out1,'\n');
  }
  
  // 6
  {
   Putobj(out1,"  using XXX8226D906_9897_43AA_B1BE_D60B0A6E31C8 = TypeDefCore ;\n\n");
   Putobj(out1,"  // structures\n\n");
  }
  
  // 7
  {
   for(auto &node : data->struct_list )
     {
      Printf(out1,"  struct S#;\n",node.index);
      Putobj(out1,"   {\n");
      
      for(auto &field : node.field_list )
        {
         Printf(out1,"    #; #;;\n",PrintType(field.type_node,true),field.name.name.token.str);
        }

      dir.printStruct(out1,"XXX8226D906_9897_43AA_B1BE_D60B0A6E31C8::",node);
      
      Putobj(out1,"\n    struct Ext;\n");
      Putobj(out1,"   };\n\n");
     }
  }
  
  // 8
  {
   Putobj(out1,"  // extra\n\n");
  }
  
  // 9
  {
   for(ulen ind=1,lim=dir.getExtraLim(); ind<lim ;ind++) 
     {
      Printf(out1,"  struct D#;\n   {\n",ind);
      
      dir.printExtra(out1,"XXX8226D906_9897_43AA_B1BE_D60B0A6E31C8::",ind);
      
      Printf(out1,"   };\n\n");
     }
  }
  
  // 99
  {
   Putobj(out1," };\n\n"); 
  }
  
  // 100
  {
   Putobj(out1,"using XXX212CD757_09B2_4D89_BE20_65C1E4E5A819 = TypeDefCore ;\n\n");
   
   Putobj(out1,"namespace TypeDef {\n"); 
  }
  
  // 101
  {
   dir.printRoot(out1,"XXX212CD757_09B2_4D89_BE20_65C1E4E5A819::");
  }
  
  // 199
  {
   Putobj(out1,"\n} // namespace TypeDef\n\n"); 
  }
  
  // 200
  {
   Putobj(out2,"/* struct TypeSet */\n\n");
   
   Putobj(out2,"struct TypeSet : TypeDefCore , DDL::MapHackPtr\n"); 
   Putobj(out2," {\n");
   Printf(out2,"  ulen indexes[#;];\n",Max<ulen>(data->struct_list.count,1));
   Printf(out2,"  DynArray<ulen> ind_map;\n\n");
   
   Putobj(out2,"  DDL::FindNodeMap map;\n\n");
  }
  
  // 201
  {
   Putobj(out2,"  explicit TypeSet(ulen len)\n");
   Putobj(out2,"   : ind_map(len)\n");
   Putobj(out2,"   {\n");
   Putobj(out2,"    Range(indexes).set(ulen(-1));\n\n");
     
   for(auto &node : data->struct_list )
     {
      Printf(out2,"    map.add(#;,#.q;",node.index,node.name.name.token.str);
      
      for(auto *scope=node.parent; scope ;scope=scope->parent)
        {
         Printf(out2,",#.q;",scope->name.name.token.str);
        }
      
      Printf(out2,");\n");
     }
   
   Putobj(out2,"\n    map.complete();\n");
   Putobj(out2,"   }\n\n");
  }
  
  // 202
  {
   Putobj(out2,"  DDL::MapSizeInfo structSizeInfo(DDL::StructNode *struct_node)\n");
   Putobj(out2,"   {\n");
   Putobj(out2,"    DDL::MapSizeInfo ret;\n\n");
   
   Putobj(out2,"    switch( map.find(struct_node) )\n");
   Putobj(out2,"      {\n");
   
   for(auto &node : data->struct_list )
     {
      Printf(out2,"       case #; :\n",node.index);
      Putobj(out2,"        {\n");
      Printf(out2,"         indexes[#;]=struct_node->index;\n",node.index-1);
      Printf(out2,"         ind_map[struct_node->index]=#;;\n\n",node.index);
      
      Printf(out2,"         ret.set<S#;>();\n\n",node.index);
      
      Putobj(out2,"         DDL::SetFieldOffsets(struct_node,\n");
      
      for(auto &field : node.field_list )
        {
         Printf(out2,"                              #.q;,offsetof(S#;,#;)",field.name.name.token.str,node.index,field.name.name.token.str);
         
         if( field.next ) Putch(out2,',');
         
         Putch(out2,'\n');
        }
      
      Putobj(out2,"                             );\n");

      Putobj(out2,"        }\n");
      Putobj(out2,"       return ret;\n\n");
     }
   
   Putobj(out2,"       default: Printf(Exception,\"Unknown structure\"); return ret;\n");
   Putobj(out2,"      }\n");
   Putobj(out2,"   }\n\n");
  }
  
  // 203
  {
   Putobj(out2,"  template <class T> struct IsStruct;\n\n");
   
   Putobj(out2,"  template <class T>\n");
   Putobj(out2,"  bool isStruct(DDL::StructNode *struct_node) const { return IsStruct<T>::Do(indexes,struct_node->index); }\n\n");
  }
  
  // 204
  {
   Putobj(out2,"  void guardFieldTypes(DDL::MapTypeCheck &type_check,DDL::StructNode *struct_node) const\n");
   Putobj(out2,"   {\n");
   Putobj(out2,"    switch( ind_map[struct_node->index] )\n");
   Putobj(out2,"      {\n");
   
   for(auto &node : data->struct_list )
     {
      Printf(out2,"       case #; :\n",node.index);
      Putobj(out2,"        {\n");
      Putobj(out2,"         DDL::GuardFieldTypes<\n");
      
      for(auto &field : node.field_list )
        {
         Putobj(out2,"                              ",PrintType(field.type_node,true));
         
         if( field.next ) Putch(out2,',');
         
         Putch(out2,'\n');
        }
      
      Putobj(out2,"                             >(*this,type_check,struct_node);\n");
      Putobj(out2,"        }\n");
      Putobj(out2,"       break;\n\n");
     }
   
   Putobj(out2,"       default: Printf(Exception,\"Unknown structure\");\n");
   Putobj(out2,"      }\n");
   Putobj(out2,"   }\n");
  }
  
  // 205
  {
   Putobj(out2," };\n\n"); 
  }
  
  // 206
  {
   Putobj(out2,"template <class T>\n"); 
   Putobj(out2,"struct TypeSet::IsStruct\n"); 
   Putobj(out2," {\n"); 
   Putobj(out2,"  static bool Do(const ulen *,ulen) { return false; }\n"); 
   Putobj(out2," };\n\n"); 
  }
  
  // 207
  {
   for(auto &node : data->struct_list )
     {
      Putobj(out2,"template <>\n");
      Printf(out2,"struct TypeSet::IsStruct<TypeDefCore::S#;>\n",node.index); 
      Putobj(out2," {\n");
      Printf(out2,"  static bool Do(const ulen *indexes,ulen index) { return index==indexes[#;]; }\n",node.index-1);
      Putobj(out2," };\n\n"); 
     }
  }
 }

} // namespace App

/* main() */ 

using namespace App;

int main(int argc,const char *argv[])
 {
  ReportException report;
  
  try
    {
     {
      Putobj(Con,"--- DDLTypeSet 1.00 ---\n--- Copyright (c) 2013 Sergey Strukov. All rights reserved. ---\n\n");

      if( argc!=4 ) 
        {
         Putobj(Con,"Usage: DDLTypeSet <input-file-name> <typedef-output-file-name> <typeset-output-file-name>\n");
         
         return 1;
        }

      Process(argv[1],argv[2],argv[3]);
     }
     
     report.guard();
     
     return 0;
    }
  catch(CatchType)
    {
     return 1;
    }
 }
 
