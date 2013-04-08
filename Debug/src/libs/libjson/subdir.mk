################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/libs/libjson/json_reader.cpp \
../src/libs/libjson/json_value.cpp \
../src/libs/libjson/json_writer.cpp 

OBJS += \
./src/libs/libjson/json_reader.o \
./src/libs/libjson/json_value.o \
./src/libs/libjson/json_writer.o 

CPP_DEPS += \
./src/libs/libjson/json_reader.d \
./src/libs/libjson/json_value.d \
./src/libs/libjson/json_writer.d 


# Each subdirectory must supply rules for building sources it contributes
src/libs/libjson/%.o: ../src/libs/libjson/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


