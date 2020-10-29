#ifndef GLOBALTYPE_H
#define GLOBALTYPE_H


#include "boards.h"
#include "epd_wxx_hal.h"
#include "epd_w154b.h"


#if (EPD_W21)
#include "epd_w21.h"
#elif (EPD_W266)
#include "epd_w266.h"
#elif (EPD_W213_C02)
#include "epd_w213_c02.h"
#elif (EPD_W154_B01)
#include "epd_w154b.h"
#endif

#endif /* MINMEA_H */