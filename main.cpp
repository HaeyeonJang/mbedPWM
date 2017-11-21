#include "mbed.h"

DigitalOut  my_led(LED1);
PwmOut      motf(PE_5);
PwmOut      motr(PE_6);


int main()
{
    // Set PWM

    
    while (1) { 
    motf.period_ms(5);
    motf.write(0.5);
    motr.period_ms(10);
    motr.write(0.5);
    
    my_led.write(1);
        wait(5); // 500 ms
        motf.write(0.2);
        
    my_led.write(0);
    wait(5); 
    }
}
