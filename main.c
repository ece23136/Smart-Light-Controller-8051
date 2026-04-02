#include <reg51.h>

sbit LDR_PIN   = P3^5;  // Port 3, Pin 5 (New LDR Input)
sbit RELAY_PIN = P3^6;  // Port 3, Pin 6 (New Relay Output)

void main() {
    // 1. Hardware Initialization
    LDR_PIN = 1;    
    RELAY_PIN = 1;  

    // 2. The Main Loop
    while(1) {
        if (LDR_PIN == 1) {  
            // State: DARK (Sensor sends 1)
            RELAY_PIN = 0;  //  Bulb ON
        } 
        else {
            // State: BRIGHT (Sensor sends 0)
            RELAY_PIN = 1;  // Bulb OFF
        }
    }
}