################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/xidm/Aria2Man.cpp \
../src/xidm/Aria2Rqst.cpp 

OBJS += \
./src/xidm/Aria2Man.o \
./src/xidm/Aria2Rqst.o 

CPP_DEPS += \
./src/xidm/Aria2Man.d \
./src/xidm/Aria2Rqst.d 


# Each subdirectory must supply rules for building sources it contributes
src/xidm/%.o: ../src/xidm/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


