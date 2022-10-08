#include "mbed.h"

DigitalOut led_red(LED_RED);
DigitalOut led_blue(LED_BLUE);
DigitalOut led_green(LED_GREEN);


int main() 
{
        for(;;) {
                led_green = 1;
                led_blue = 1;
                led_red = 1;
                wait(1);
                led_green = 0;
                led_blue = 0;
                led_red = 0;
                wait(1);
        }
}
