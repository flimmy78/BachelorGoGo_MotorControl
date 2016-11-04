/*
 * File:   Bachelor_Motor_Control.c
 * Author: rasmus
 *
 * Created on November 2, 2016, 11:22 AM
 */


#include "xc.h"

#include "periph.h"
#include "drv8305.h" /* peripherals module - drivers aso */

#include <libq.h> /* q15 sqrt function use */
#include <libpic30.h>


int main(void) {
        /* init the peripherals - contain the definitions for config bits */
    /* configure PLL, GPIO, PWM & ADC */
    InitPeriph();

        while(1){
            setUp_DRV8305();
            readAllRegisters();

    //x++;
    int x = 0;
        }
    while(1){
    }// End of Main loop
    
    // should never get here
    while(1){}
    return 0;
}