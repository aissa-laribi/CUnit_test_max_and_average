################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/average.c \
../src/main.c \
../src/maximum.c \
../src/testAverage.c \
../src/testMaximum.c 

C_DEPS += \
./src/average.d \
./src/main.d \
./src/maximum.d \
./src/testAverage.d \
./src/testMaximum.d 

OBJS += \
./src/average.o \
./src/main.o \
./src/maximum.o \
./src/testAverage.o \
./src/testMaximum.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -lm -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/average.d ./src/average.o ./src/main.d ./src/main.o ./src/maximum.d ./src/maximum.o ./src/testAverage.d ./src/testAverage.o ./src/testMaximum.d ./src/testMaximum.o

.PHONY: clean-src

