#include <wiringPi.h>
#include <stdio.h>


#define ledPin 0


int main(void){

    printf("Tripwire mounted");
    wiringPiSetup();

    pinMode(ledPin, INPUT);

    // Set a condition if the photoresistor drops, 
    //The more light hits the LDR, the lower is its resistance.
    // While laser is on the photo, the GPIO Read will be HIGH
    // If there is no longer laser, GPIO Read will be LOW
    while(1){
        int pin_readout = digitalRead(ledPin);
        
        if (pin_readout == LOW){
            printf("\nINTRUDER DETECTED\n");
            delay(200);
        }

        else {
            printf("\nEverything is ok\n");
            delay(200);
        }

    }



}
