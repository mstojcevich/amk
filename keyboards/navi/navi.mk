
MCU = STM32F412
TINYUSB_ENABLE = yes
TINYUSB_USE_HAL = yes
EECONFIG_FLASH = yes
MSC_ENABLE = yes
DYNAMIC_CONFIGURATION = yes
RGB_LINEAR_ENABLE = yes
#RGB_INDICATOR_ENABLE = yes
VIAL_ENABLE = yes
NKRO_ENABLE = yes
QSPI_ENABLE = yes

UF2_ENABLE = yes
UF2_FAMILY = STM32F4

LINKER_PATH = $(KEYBOARD_DIR)

SRCS += $(KEYBOARD_DIR)/navi.c
#SRCS += $(KEYBOARD_DIR)/navi_keymap.c

SRCS += $(KEYBOARD_DIR)/display.c
SRCS += $(MAIN_DIR)/drivers/st7735.c
SRCS += $(MAIN_DIR)/drivers/spi.c
