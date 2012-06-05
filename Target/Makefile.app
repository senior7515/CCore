# Makefile.app
#----------------------------------------------------------------------------------------
#
#  Project: CCore 1.02
#
#  Tag: General
#
#  License: Boost Software License - Version 1.0 - August 17th, 2003 
#
#            see http://www.boost.org/LICENSE_1_0.txt or the local copy
#
#  Copyright (c) 2009 Sergey Strukov. All rights reserved.
#
#----------------------------------------------------------------------------------------

SRC_PATH_LIST ?= .

OBJ_PATH ?= .

TARGET ?= main.exe

RULES_FILE = $(CCORE_ROOT)/Target/Makefile.app.rules

include $(CCORE_ROOT)/Target/$(CCORE_TARGET)/Makefile.tools

all: $(TARGET)

Makefile.files:
	find $(SRC_PATH_LIST) -name "*.cpp" > Makefile.cpp-files
	find $(SRC_PATH_LIST) -name "*.s" > Makefile.s-files
	MakeList $(OBJ_PATH) Makefile.cpp-files Makefile.s-files

ifneq ($(MAKECMDGOALS),list)

include Makefile.files

endif

list:
	find $(SRC_PATH_LIST) -name "*.cpp" > Makefile.cpp-files
	find $(SRC_PATH_LIST) -name "*.s" > Makefile.s-files
	MakeList $(OBJ_PATH) Makefile.cpp-files Makefile.s-files

