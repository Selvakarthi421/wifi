################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/esp8266/esp8266.c \
../Core/Src/esp8266/esp8266RX.c 

OBJS += \
./Core/Src/esp8266/esp8266.o \
./Core/Src/esp8266/esp8266RX.o 

C_DEPS += \
./Core/Src/esp8266/esp8266.d \
./Core/Src/esp8266/esp8266RX.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/esp8266/%.o Core/Src/esp8266/%.su Core/Src/esp8266/%.cyclo: ../Core/Src/esp8266/%.c Core/Src/esp8266/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -DUSE_HAL_DRIVER -DSTM32L433xx -c -I../Core/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/CMSIS/Include -I"E:/SELVA/workspace/urt__2/Core/Src/uart" -I"E:/SELVA/workspace/urt__2/Core/Src/esp8266" -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-esp8266

clean-Core-2f-Src-2f-esp8266:
	-$(RM) ./Core/Src/esp8266/esp8266.cyclo ./Core/Src/esp8266/esp8266.d ./Core/Src/esp8266/esp8266.o ./Core/Src/esp8266/esp8266.su ./Core/Src/esp8266/esp8266RX.cyclo ./Core/Src/esp8266/esp8266RX.d ./Core/Src/esp8266/esp8266RX.o ./Core/Src/esp8266/esp8266RX.su

.PHONY: clean-Core-2f-Src-2f-esp8266

