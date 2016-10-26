################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Quadratic.cpp \
../src/QuadraticClass.cpp \
../src/QuadraticClass_test.cpp 

OBJS += \
./src/Quadratic.o \
./src/QuadraticClass.o \
./src/QuadraticClass_test.o 

CPP_DEPS += \
./src/Quadratic.d \
./src/QuadraticClass.d \
./src/QuadraticClass_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


