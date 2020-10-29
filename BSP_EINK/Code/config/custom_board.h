#ifndef SOTTER_WALLET_V100_H
#define SOTTER_WALLET_V100_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

//LED
#define LEDS_NUMBER 2
#define LED_ORANGE NRF_GPIO_PIN_MAP(1, 2)
#define LED_BLUE NRF_GPIO_PIN_MAP(1, 4)
#define LEDS_ACTIVE_STATE 0
#define LEDS_LIST                                                              \
  { LED_ORANGE, LED_BLUE }
#define LEDS_INV_MASK LEDS_MASK

//Button
#define BUTTONS_NUMBER 1
#define BUTTON_CONFIRM NRF_GPIO_PIN_MAP(0, 4)
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP
#define BUTTONS_ACTIVE_STATE 0
#define BUTTONS_LIST                                                           \
  { BUTTON_CONFIRM }

#define BUTTON_CONFIRM_INDEX 0

//Display
#define EPD_W21 0
#define EPD_W266 0
#define EPD_W213_C02 1
#define EPD_W154_B01 0


#define EPD_SPI_INSTANCE  0

#define EPD_Wxx_MOSI_DIN      NRF_GPIO_PIN_MAP(0, 12)
#define EPD_Wxx_SCK_CLK       NRF_GPIO_PIN_MAP(1, 9)
#define EPD_Wxx_SS_CS         NRF_GPIO_PIN_MAP(0, 8)

#define EPD_Wxx_DC_DC         NRF_GPIO_PIN_MAP(0, 13)
#define EPD_Wxx_RST_RST       NRF_GPIO_PIN_MAP(0, 15)
#define EPD_Wxx_BS_BUSY       NRF_GPIO_PIN_MAP(0, 17)

#define EPD_Wxx_MOSI_PIN    EPD_Wxx_MOSI_DIN
#define EPD_Wxx_CLK_PIN     EPD_Wxx_SCK_CLK
#define EPD_Wxx_CS_PIN      EPD_Wxx_SS_CS

#define EPD_Wxx_DC_PIN      EPD_Wxx_DC_DC
#define EPD_Wxx_RST_PIN     EPD_Wxx_RST_RST
#define EPD_Wxx_BS_PIN      EPD_Wxx_BS_BUSY


#define ACC_POWER  NRF_GPIO_PIN_MAP(0, 26)


#ifdef __cplusplus
}
#endif

#endif // SOTTER_WALLET_V100_H
