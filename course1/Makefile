#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <This Makefile is used automate compilation of files using GNU make tool >
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#    <Build Targets are:
#                        # object files not linked(.o): main.o memory.o
#                        # assembley files(.asm): main.asm memory.asm
#                        # preprocessed files(.i): main.i memory.i
#                        # executable files(.out): c1m2.out
#
# Platform Overrides:
#      <  HOST , MSP432 >
#
#------------------------------------------------------------------------------

include sources.mk

# Architectures Specific Flags
LINKER_FILE = msp432p401r.lds

#Defining and Flags
TARGET= c1m2
CFLAGS= -Wall
LDFLAGS= -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
DEPFLAGS= -MMD -MP

#######################################
#conditional statement
ifeq ($(PLATFORM),HOST)
	CC= gcc
	LD= ld

else
	CC=arm-none-eabi-gcc
	CPU=cortex-m0plus
	ARCH=thumb
	SPECS=nosys.specs
	CFLAGS=-mcpu=$(CPU) -m$(ARCH) --specs=$(SPECS) -Wall
endif
##################################

#Variables defining and pattern matching
OBJS=$(SRCS:.c=.o)
ASM=$(SRCS:.c=.asm)
PREP=$(SRCS:.c=.i)
DEPS=$(SRCS:.c=.d)

#build the TARGET file
.PHONY: build
build: $(TARGET).out

#compile dont link object files
.PHONY: compile-all
compile-all: $(OBJS)

#all files of the project (.i .asm .d .o .out)
.PHONY: all
all: all $(TARGET).out $(PREP) $(ASM) $(DEPS)


%.o: %.c $(INCLS)
	$(CC) -c $< $(CFLAGS) -o $@
#preprocessed files generation
%.i: %.c
	$(CC) -E -o $@  $<
#assmebly files generation
%.asm: %.c
	$(CC) -S -o $@  $<

#Linkng object files to generate Target file 
$(TARGET).out: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(LDFFLAGS) -o $@ 
	size -Atd $(TARGET).out

#it is supposed the previous command to generate map file but it doesnot for unknown reason
	
#Generating Dependency files
%.d: %.c
	@set -e; rm -f $@; \
	$(CC) -M $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$
         
.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET).out $(TARGET).map *.i *.asm *.d

#Failing TRy to generate .asm from .out file
#$(TARGET).asm: $(TARGET).out
#	gdb -q ./$(TARGET).out
	
