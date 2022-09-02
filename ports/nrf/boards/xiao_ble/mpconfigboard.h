/*
 * This file is part of the MicroPython project, http://micropython.org/
 * The MIT License (MIT)
 * Copyright (c) 2022 Arduino SA
 */

#define MICROPY_HW_BOARD_NAME           "Arduino Nano 33 BLE Sense"
#define MICROPY_HW_MCU_NAME             "NRF52840"

#define MICROPY_MBFS                    (1)

#define MICROPY_BOARD_EARLY_INIT        NANO33_board_early_init
#define MICROPY_BOARD_DEINIT            NANO33_board_deinit
#define MICROPY_BOARD_ENTER_BOOTLOADER(nargs, args) NANO33_board_enter_bootloader()

#define MICROPY_PY_MACHINE_UART         (1)
#define MICROPY_PY_MACHINE_HW_PWM       (1)
#define MICROPY_PY_MACHINE_HW_SPI       (1)
#define MICROPY_PY_MACHINE_TIMER        (1)
#define MICROPY_PY_MACHINE_RTCOUNTER    (1)
#define MICROPY_PY_MACHINE_I2C          (1)
#define MICROPY_PY_MACHINE_ADC          (1)
#define MICROPY_PY_MACHINE_TEMP         (1)

#define MICROPY_HW_USB_CDC              (1)
#define MICROPY_HW_HAS_LED              (1)
#define MICROPY_HW_HAS_SWITCH           (0)
#define MICROPY_HW_HAS_FLASH            (0)
#define MICROPY_HW_HAS_SDCARD           (0)
#define MICROPY_HW_HAS_MMA7660          (0)
#define MICROPY_HW_HAS_LIS3DSH          (0)
#define MICROPY_HW_HAS_LCD              (0)
#define MICROPY_HW_ENABLE_RNG           (1)
#define MICROPY_HW_ENABLE_RTC           (1)
#define MICROPY_HW_ENABLE_TIMER         (0)
#define MICROPY_HW_ENABLE_SERVO         (0)
#define MICROPY_HW_ENABLE_DAC           (0)
#define MICROPY_HW_ENABLE_CAN           (0)

// Pins config
// #define A0                              (2)
// #define A1                              (3)
// #define A2                              (28)
// #define A3                              (29)
// #define A4                              (4)
// #define A5                              (5)
// #define D0 A0
// #define D1 A1
// #define D2 A2
// #define D3 A3
// #define D4 A4
// #define D5 A5
// #define D6                              (43)
// #define D7                              (44)
// #define D8                              (45)
// #define D9                              (46)
// #define D10                             (47)
// #define I2C_SDA A4
// #define I2C_SCL A5
// #define SPI_SCK D8
// #define SPI_MISO D9
// #define SPI_MOSI D10
// #define TX D6
// #define RX D7
// #define VBAT                            (32)

// LEDs config
#define MICROPY_HW_LED_COUNT            (3)     // 3 RGB + 1 PWR
#define MICROPY_HW_LED_PULLUP           (11)     // RGB LED is active low
// #define MICROPY_HW_LED4_PULLUP          (0)     // Yellow is active high
#define MICROPY_HW_LED1                 (11)    // RED
#define MICROPY_HW_LED2                 (12)    // GREEN
#define MICROPY_HW_LED3                 (13)     // BLUE
#define LED_R MICROPY_HW_LED1
#define LED_PWR MICROPY_HW_LED1
#define LED_BUILTIN MICROPY_HW_LED1
#define LED_G MICROPY_HW_LED2
#define LED_B MICROPY_HW_LED3
// #define MICROPY_HW_LED4                 (13)    // Yellow
#define HELP_TEXT_BOARD_LED             "1,2,3"

// UART config
#define MICROPY_HW_UART1_TX                (43)
#define MICROPY_HW_UART1_RX                (44)
// #define MICROPY_HW_UART1_CTS            (7)
// #define MICROPY_HW_UART1_RTS            (5)
// #define MICROPY_HW_UART1_HWFC           (1)

// SPI0 config
#define MICROPY_HW_SPI0_NAME            "SPI0"
#define MICROPY_HW_SPI0_SCK             (45)
#define MICROPY_HW_SPI0_MOSI            (47)
#define MICROPY_HW_SPI0_MISO            (46)

// PWM config
#define MICROPY_HW_PWM0_NAME            "PWM0"
#define MICROPY_HW_PWM1_NAME            "PWM1"
#define MICROPY_HW_PWM2_NAME            "PWM2"
#define MICROPY_HW_PWM3_NAME            "PWM3"

#define MICROPY_HW_USB_VID              (0x2341)
#define MICROPY_HW_USB_PID              (0x025A)
#define MICROPY_HW_USB_CDC_1200BPS_TOUCH (1)

void NANO33_board_early_init(void);
void NANO33_board_deinit(void);
void NANO33_board_enter_bootloader(void);
