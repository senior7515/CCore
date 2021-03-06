/* AM3359.cpp */
//----------------------------------------------------------------------------------------
//
//  Project: CCore 1.08
//
//  Tag: Target/BeagleBoneBlack
//
//  License: Boost Software License - Version 1.0 - August 17th, 2003 
//
//            see http://www.boost.org/LICENSE_1_0.txt or the local copy
//
//  Copyright (c) 2014 Sergey Strukov. All rights reserved.
//
//----------------------------------------------------------------------------------------

#include <CCore/inc/dev/AM3359.h>

namespace AM3359 {
namespace CP15 {

/* functions */

#if 0

 // Fake code

Type_CPSR GetCPSR() { return Type_CPSR(0); }

Type_MainID GetMainID() { return Type_MainID(0); }

Type_CacheType GetCacheType() { return Type_CacheType(0); }

Type_TLBType GetTLBType() { return Type_TLBType(0); }

Type_SecureConfig GetSecureConfig() { return Type_SecureConfig(0); }

void SetSecureConfig(Type_SecureConfig) {}

Type_DataFaultStatus GetDataFaultStatus() { return Type_DataFaultStatus(0); }

Type_InstructionFaultStatus GetInstructionFaultStatus() { return Type_InstructionFaultStatus(0); }

Type_DataFaultAddress GetDataFaultAddress() { return Type_DataFaultAddress(0); }

Type_InstructionFaultAddress GetInstructionFaultAddress() { return Type_InstructionFaultAddress(0); }

Type_Control GetControl() { return Type_Control(0); }

void SetControl(Type_Control) {}

Type_CacheSizeID GetCacheSizeID() { return Type_CacheSizeID(0); }

void SetCacheSizeSel(Type_CacheSizeSel) {}

Type_DomainAccessControl GetDomainAccessControl() { return Type_DomainAccessControl(0); }

void SetDomainAccessControl(Type_DomainAccessControl) {}

Type_TTBase0 GetTTBase0() { return Type_TTBase0(0); }

void SetTTBase0(Type_TTBase0) {}

Type_TTControl GetTTControl() { return Type_TTControl(0); }

void SetTTControl(Type_TTControl) {}

Type_AuxControl GetAuxControl() { return Type_AuxControl(0); }

void SetAuxControl(Type_AuxControl) {}

Type_FCSE GetFCSE() { return Type_FCSE(0); }

void SetFCSE(Type_FCSE) {}

Type_ContextID GetContextID() { return Type_ContextID(0); }

void SetContextID(Type_ContextID) {}

Type_NonsecureAccessControl GetNonsecureAccessControl() { return Type_NonsecureAccessControl(0); }

void InvalidateTLB() {}

void InvalidateInstructionCaches() {}

void InvalidateDataCacheL1(uint32 set,uint32 way) {}

void InvalidateDataCacheL2(uint32 set,uint32 way) {}

Type_L2CacheAuxControl GetL2CacheAuxControl() { return Type_L2CacheAuxControl(0); }

uint32 VAtoPA(uint32 address) { return address; }

CPUFeatures::CPUFeatures()
 {
  regs[0]=1;
  regs[1]=2;
  regs[2]=3;
  regs[3]=4;
 }

#endif

void InvalidateDataCaches()
 {
  for(uint32 way=0; way<4 ;way++) 
    for(uint32 set=0; set<128 ;set++)
      InvalidateDataCacheL1(set,way);
  
  for(uint32 way=0; way<8 ;way++) 
    for(uint32 set=0; set<512 ;set++)
      InvalidateDataCacheL2(set,way);
 }

} // namespace CP15
} // namespace AM3359
