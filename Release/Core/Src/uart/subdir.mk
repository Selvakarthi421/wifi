################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/uart/uart(1).c 

OBJS += \
./Core/Src/uart/uart(1).o 

C_DEPS += \
./Core/Src/uart/uart(1).d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/uart/uart(1).o: ../Core/Src/uart/uart(1).c Core/Src/uart/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L433xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"E:/SELVA/workspace/urt__2/Core/Src/uart" -I"E:/SELVA/workspace/urt__2/Core/Src/esp8266" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"Core/Src/uart/uart(1).d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-uart

clean-Core-2f-Src-2f-uart:
	-$(RM) ./Core/Src/uart/uart(1).cyclo ./Core/Src/uart/uart(1).d ./Core/Src/uart/uart(1).o ./Core/Src/uart/uart(1).su

.PHONY: clean-Core-2f-Src-2f-uart

