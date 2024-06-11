################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/maximum.c \
../src/testMaximum.c 

C_DEPS += \
./src/maximum.d \
./src/testMaximum.d 

OBJS += \
./src/maximum.o \
./src/testMaximum.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/maximum.d ./src/maximum.o ./src/testMaximum.d ./src/testMaximum.o

.PHONY: clean-src

