#include "mbed.h"
DigitalOut led(LED1);
AnalogIn anInput(p15);
float anaValue, blink_time, On_time, Off_time;


int main() {
    
    while(true){
        anaValue = anInput.read();
        On_time = 2 * anaValue;
        Off_time = 2 * (1-anaValue);
        
        led = 1;
        printf("LED will be ON for %.2f seconds\n", On_time);
        wait(On_time);
       
        led = 0;
        printf("LED will be OFF for %.2f seconds\n", Off_time);
        wait(Off_time);
        
        
    }
    
    
    
}
