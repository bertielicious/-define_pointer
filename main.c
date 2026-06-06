#include <stdio.h>

#include "constants.h"
#include "esp_log.h"
#include "pin_assign.h"

enum{LO, HI};

static const char *TAG = "gpio num";
void app_main(void)
{
    //assign gpio pins to each SPI pin
   display_pins_t phil; 
   display_pins_t *totnor;
   totnor = &phil;
   pin_assign(&phil); //assign SPI labels to each gpio pin
   ESP_LOGI(TAG, "MOSI = %d\n", totnor->mosi);
   ESP_LOGI(TAG, "SCK = %d\n", totnor->sck);
   ESP_LOGI(TAG, "RES = %d\n", totnor->res);
   ESP_LOGI(TAG, "DC = %d\n", totnor->dc);
   ESP_LOGI(TAG, "CS = %d\n", totnor->cs);
}
/*
OUTPUT:
I (268) gpio num: MOSI = 23

I (268) gpio num: SCK = 19

I (268) gpio num: RES = 18

I (268) gpio num: DC = 21

I (268) gpio num: CS = 22
*/
