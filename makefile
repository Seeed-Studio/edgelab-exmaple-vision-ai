##
# Application makefile
##


RM = rm -rf
DL = curl -Ls -f
UNZIP = unzip

SDK_LINK = https://files.seeedstudio.com/grove_ai_vision/vision_ai_sdk_v01.zip
SDK_LOC = .
SDK_NAME = vision_ai_sdk_v01.zip


APP?=fomo
HW?=grove_vision_ai
##
# root dir of embARC
##
EMBARC_ROOT = .
COMPONENT_ROOT = components
APP_ROOT ?= ./examples/$(APP)

# download:
# 	@echo 'downloading'
# 	@$(DL) $(SDK_LINK)  -o $(SDK_NAME)
# 	@$(UNZIP) -o $(SDK_NAME) -d $(SDK_LOC)
# 	@$(RM) $(SDK_NAME)


#user define linker script
USER_LINKER_SCRIPT_FILE = $(COMPONENT_ROOT)/linker/$(HW).ld


include $(COMPONENT_ROOT)/component.mk

include $(APP_ROOT)/app.mk


COMMON_COMPILE_PREREQUISITES += makefile

APPL_DEFINES += -D$(shell echo $(HW) | tr a-z A-z)
APPL_DEFINES += -DNDEBUG -Os


override EMBARC_ROOT := $(strip $(subst \,/,$(EMBARC_ROOT)))
-include $(EMBARC_ROOT)/himax_we1_sdk/options/options.mk
