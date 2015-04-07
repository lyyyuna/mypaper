# Copyright 1994-2007 The MathWorks, Inc.
#
# File    : accel_lcc.tmf   $Revision: 1.19.4.19.2.1 $
#
# Abstract:
#	Accelerator template makefile for building a PC-based,
#       RTW generated mex-file of Simulink model using generated C code. 
#	     LCC compiler version 2.4.
#
# 	This makefile attempts to conform to the guidelines specified in the
# 	IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (gmake) which is located in matlabroot/bin/win32.
#
# 	Note that this template is automatically customized by the Real-Time
#	Workshop build procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#	build:
#
#         MEX_OPTS       - User specific mex options.
#	  OPT_OPTS       - Optimization options. Default is none. To enable 
#                          debugging specify as OPT_OPTS=-g. 
#	  USER_SRCS      - Additional user sources, such as files needed by
#			   S-functions.
#	  USER_INCLUDES  - Additional include paths
#			   (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#			   (For Lcc, have a '/'as file seperator before the 
#			   file name instead of a '\' . 
#			   i.e.,  d:\work\proj1/myfile.c - reqd for 'gmake')
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see accel.tlc

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = "%MATLAB%\bin\win32\gmake"
SHELL           = cmd
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = accel.tlc
COMPILER_TOOL_CHAIN = lcc

MAKEFILE_FILESEP = /

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL_NAME      - Name of the Simulink block diagram
#  MODEL_MODULES   - Any additional generated source modules
#  MAKEFILE_NAME   - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT     - Path to were MATLAB is installed.
#  MATLAB_BIN      - Path to MATLAB executable.
#  S_FUNCTIONS     - List of S-functions.
#  S_FUNCTIONS_LIB - List of S-functions libraries to link.
#  SOLVER          - Solver source file name
#  NUMST           - Number of sample times
#  TID01EQ         - yes (1) or no (0): Are sampling rates of continuous task
#                    (tid=0) and 1st discrete task equal.
#  NCSTATES        - Number of continuous states
#  BUILDARGS       - Options passed in at the command line.
#  MEXEXT          - extension that a mex file has. See the MATLAB mexext 
#                    command

MODEL           = FDIBenchMark
MODULES         = FDIBenchMark_acc_data.c rt_nonfinite.c rt_rand.c 
MAKEFILE        = FDIBenchMark.mk
MATLAB_ROOT     = C:/Program Files/MATLAB/R2007b
ALT_MATLAB_ROOT = C:/PROGRA~1/MATLAB/R2007b
MATLAB_BIN      = C:/Program Files/MATLAB/R2007b/bin
ALT_MATLAB_BIN  = C:/PROGRA~1/MATLAB/R2007b/bin
S_FUNCTIONS     = sf_sfun.c
S_FUNCTIONS_LIB = 
SOLVER          = ode45.c
NUMST           = 4
TID01EQ         = 0
NCSTATES        = 19
MEM_ALLOC       = RT_STATIC
BUILDARGS       =  GENERATE_REPORT=0
MEXEXT          = mexw32

MODELREFS       = 
SHARED_SRC      = 
SHARED_SRC_DIR  = 
SHARED_BIN_DIR  = 
SHARED_LIB      = 
MEX_OPT_FILE    = -f $(MATLAB_BIN)/win32/mexopts/lccopts.bat
OPTIMIZATION_FLAGS = -DNDEBUG

#--------------------------- Model and reference models -----------------------
MODELLIB                  = FDIBenchMarklib.lib
MODELREF_LINK_LIBS        = 
MODELREF_INC_PATH         = 
RELATIVE_PATH_TO_ANCHOR   = ..
MODELREF_TARGET_TYPE      = NONE

#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
MATLAB_BIN := $(ALT_MATLAB_BIN)
endif

#--------------------------- Tool Specifications ------------------------------

LCC = $(MATLAB_ROOT)\sys\lcc
include $(MATLAB_ROOT)\rtw\c\tools\lcctools.mak

MEX = $(MATLAB_BIN)\mex.bat
CC  = $(MATLAB_BIN)\mex.bat -c

#------------------------------ Include Path -----------------------------------

# Additional includes

ADD_INCLUDES = \
	-IC:/DOCUME~1/peodg/MYDOCU~1/MATLAB/FDIBEN~1/WTFDIB~1/WTFDIB~2/FDIBEN~1 \
	-IC:/DOCUME~1/peodg/MYDOCU~1/MATLAB/FDIBEN~1/WTFDIB~1/WTFDIB~2 \
	-I$(MATLAB_ROOT)/rtw/c/libsrc \


# see MATLAB_INCLUES and COMPILER_INCLUDES from lcctool.mak

SHARED_INCLUDES =
ifneq ($(SHARED_SRC_DIR),)
SHARED_INCLUDES = -I$(SHARED_SRC_DIR) 
endif

INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(MATLAB_INCLUDES) $(ADD_INCLUDES) \
           $(COMPILER_INCLUDES) $(USER_INCLUDES) $(MODELREF_INC_PATH) $(SHARED_INCLUDES)

#------------------------ C and MEX optimization options -----------------------
MEX_OPTS  =
OPT_OPTS  = $(DEFAULT_OPT_OPTS)

ifneq ($(OPTIMIZATION_FLAGS),)
MEX_OPT_OPTS = OPTIMFLAGS="$(OPTIMIZATION_FLAGS)"    # passed to 'mex -c'
else
MEX_OPT_OPTS = $(OPT_OPTS)    # passed to 'mex -c'
endif

ifeq "$(MEX_OPTS)" "-g"
MEX_OPT_OPTS =
endif

#-------------------------------- Mex Options  ---------------------------------
MEX_FLAGS = -win32 $(MEX_OPT_OPTS) $(MEX_OPTS) $(MEX_OPT_FILE)

#----------------------------- Source Files -----------------------------------
USER_SRCS =

USER_OBJS       = $(USER_SRCS:.c=.obj)
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

SRCS      = $(MODEL)_acc.c $(MODULES)
OBJS      = $(SRCS:.c=.obj) $(USER_OBJS)
LINK_OBJS = $(SRCS:.c=.obj) $(LOCAL_USER_OBJS)

SHARED_OBJS := $(addsuffix .obj, $(basename $(wildcard $(SHARED_SRC))))
FMT_SHARED_OBJS = $(subst /,\,$(SHARED_OBJS))

#------------------------- Additional Libraries -------------------------------

LIBS =

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LIBS += $(MATLAB_ROOT)/rtw/c/lib/win32\rtwlib_rtwsfcn_lcc.lib
else
LIBS += rtwlib.lib
endif



LIBUT = $(MATLAB_ROOT)\extern\lib\win32\lcc\libut.lib
LIBMWMATHUTIL = $(MATLAB_ROOT)\extern\lib\win32\lcc\libmwmathutil.lib
LIBS += $(LIBUT) $(LIBMWMATHUTIL)


PROGRAM = ../$(MODEL)_acc.$(MEXEXT)

#--------------------------------- Rules --------------------------------------

$(PROGRAM) : $(OBJS) $(LIBS) $(SHARED_LIB)
	@echo ### Linking ...
	$(MEX) $(MEX_FLAGS) -outdir .. $(LINK_OBJS) $(S_FUNCTIONS_LIB) $(SHARED_LIB) $(LIBS) 
	@echo ### Created mex file: $(MODEL)_acc.$(MEXEXT)

%.obj : %.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) $<

%.obj : ../%.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) $<

%.obj : $(MATLAB_ROOT)/rtw/c/libsrc/%.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) $<



%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(MEX_FLAGS) $(INCLUDES) $<

# Libraries:



MODULES_rtwlib = \
          rt_backsubcc_dbl.obj \
          rt_backsubcc_sgl.obj \
          rt_backsubrc_dbl.obj \
          rt_backsubrc_sgl.obj \
          rt_backsubrr_dbl.obj \
          rt_backsubrr_sgl.obj \
          rt_enab.obj \
          rt_forwardsubcc_dbl.obj \
          rt_forwardsubcc_sgl.obj \
          rt_forwardsubcr_dbl.obj \
          rt_forwardsubcr_sgl.obj \
          rt_forwardsubrc_dbl.obj \
          rt_forwardsubrc_sgl.obj \
          rt_forwardsubrr_dbl.obj \
          rt_forwardsubrr_sgl.obj \
          rt_look.obj \
          rt_look1d.obj \
          rt_look1d32.obj \
          rt_look2d32_general.obj \
          rt_look2d32_normal.obj \
          rt_look2d_general.obj \
          rt_look2d_normal.obj \
          rt_look32.obj \
          rt_lu_cplx.obj \
          rt_lu_cplx_sgl.obj \
          rt_lu_real.obj \
          rt_lu_real_sgl.obj \
          rt_matdivcc_dbl.obj \
          rt_matdivcc_sgl.obj \
          rt_matdivcr_dbl.obj \
          rt_matdivcr_sgl.obj \
          rt_matdivrc_dbl.obj \
          rt_matdivrc_sgl.obj \
          rt_matdivrr_dbl.obj \
          rt_matdivrr_sgl.obj \
          rt_matmultandinccc_dbl.obj \
          rt_matmultandinccc_sgl.obj \
          rt_matmultandinccr_dbl.obj \
          rt_matmultandinccr_sgl.obj \
          rt_matmultandincrc_dbl.obj \
          rt_matmultandincrc_sgl.obj \
          rt_matmultandincrr_dbl.obj \
          rt_matmultandincrr_sgl.obj \
          rt_matmultcc_dbl.obj \
          rt_matmultcc_sgl.obj \
          rt_matmultcr_dbl.obj \
          rt_matmultcr_sgl.obj \
          rt_matmultrc_dbl.obj \
          rt_matmultrc_sgl.obj \
          rt_matmultrr_dbl.obj \
          rt_matmultrr_sgl.obj \
          rt_sat_div_int16.obj \
          rt_sat_div_int32.obj \
          rt_sat_div_int8.obj \
          rt_sat_div_uint16.obj \
          rt_sat_div_uint32.obj \
          rt_sat_div_uint8.obj \
          rt_sat_prod_int16.obj \
          rt_sat_prod_int32.obj \
          rt_sat_prod_int8.obj \
          rt_sat_prod_uint16.obj \
          rt_sat_prod_uint32.obj \
          rt_sat_prod_uint8.obj \
          

rtwlib.lib :  $(MAKEFILE) rtw_proj.tmw $(MODULES_rtwlib)
	@echo ### Creating $@
	@if exist $@ del $@
	$(LIBCMD) /out:$@ $(MODULES_rtwlib)
	@echo ### $@ Created 



clean :
	@echo ### Deleting the objects and $(PROGRAM)
	@del $(OBJS) ..\$(MODEL)_acc.$(MEXEXT) $(wildcard *.obj) $(wildcard *.lib)

#----------------------------- Dependencies -------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw

$(SHARED_OBJS) : $(SHARED_BIN_DIR)/%.obj : $(SHARED_SRC_DIR)/%.c 
	$(CC) -outdir $(SHARED_BIN_DIR) $(MEX_FLAGS) $(INCLUDES) $<

$(SHARED_LIB) : $(SHARED_OBJS)
	@echo ### Creating $@ 
	$(LIBCMD) /out:$@ $(FMT_SHARED_OBJS)
	@echo ### $@ Created   


