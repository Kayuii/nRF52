// waveshare_epd.h
// Waveshare EPaper Display
// Implementation for Nordic nRF5x GFX Library

//const nrf_lcd_t nrf_lcd_wsepd154;

// Waveshare ePaper Display

#define WAVESHARE_EPD_ENABLED 1


#define WSEPD_SPI_MISO 24

#define WSEPD_SPI_MOSI 23
#define WSEPD_SPI_CLK 25
#define WSEPD_SPI_CS 20
#define WSEPD_DC_PIN 18
#define WSEPD_RST_PIN 19
#define WSEPD_BUSY_PIN 17

#define WSEPD_WIDTH_DEFAULT 200
#define WSEPD_HEIGHT_DEFAULT 200

#define WSEPD_SPI_INSTANCE 0

void wsepd154_draw_monobmp(const uint8_t *image_buffer);
