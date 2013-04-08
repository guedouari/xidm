################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/libs/jsonrpc/jsonrpc_client.cpp \
../src/libs/jsonrpc/jsonrpc_handler.cpp \
../src/libs/jsonrpc/jsonrpc_httpclient.cpp \
../src/libs/jsonrpc/jsonrpc_server.cpp \
../src/libs/jsonrpc/jsonrpc_tcpclient.cpp \
../src/libs/jsonrpc/jsonrpc_tcpserver.cpp \
../src/libs/jsonrpc/jsonrpc_udpclient.cpp \
../src/libs/jsonrpc/jsonrpc_udpserver.cpp \
../src/libs/jsonrpc/netstring.cpp \
../src/libs/jsonrpc/networking.cpp \
../src/libs/jsonrpc/system.cpp 

OBJS += \
./src/libs/jsonrpc/jsonrpc_client.o \
./src/libs/jsonrpc/jsonrpc_handler.o \
./src/libs/jsonrpc/jsonrpc_httpclient.o \
./src/libs/jsonrpc/jsonrpc_server.o \
./src/libs/jsonrpc/jsonrpc_tcpclient.o \
./src/libs/jsonrpc/jsonrpc_tcpserver.o \
./src/libs/jsonrpc/jsonrpc_udpclient.o \
./src/libs/jsonrpc/jsonrpc_udpserver.o \
./src/libs/jsonrpc/netstring.o \
./src/libs/jsonrpc/networking.o \
./src/libs/jsonrpc/system.o 

CPP_DEPS += \
./src/libs/jsonrpc/jsonrpc_client.d \
./src/libs/jsonrpc/jsonrpc_handler.d \
./src/libs/jsonrpc/jsonrpc_httpclient.d \
./src/libs/jsonrpc/jsonrpc_server.d \
./src/libs/jsonrpc/jsonrpc_tcpclient.d \
./src/libs/jsonrpc/jsonrpc_tcpserver.d \
./src/libs/jsonrpc/jsonrpc_udpclient.d \
./src/libs/jsonrpc/jsonrpc_udpserver.d \
./src/libs/jsonrpc/netstring.d \
./src/libs/jsonrpc/networking.d \
./src/libs/jsonrpc/system.d 


# Each subdirectory must supply rules for building sources it contributes
src/libs/jsonrpc/%.o: ../src/libs/jsonrpc/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


