#include <Arduino.h>
#include <config.h>
#include <led.h>
#include <button.h>


// Global objects
AliveLed ledAlive(LED_ALIVE_PIN, LED_ALIVE_TIME_ON, LED_ALIVE_TIME_OFF);
SignalLed ledSignal(LED_SIGNAL_PIN, LED_SIGNAL_TIME_ON, LED_SIGNAL_TIME_OFF);
//Button ledButton(PUSH_BUTTON_PIN, false);
TimedButton ledButton(PUSH_BUTTON_PIN, false, 200);


void setup()
{
    Serial.begin(BAUD_RATE);
    Serial.println("Hello world");
}


void loop()
{
    ledAlive.taskAliveLed();
    ledSignal.taskSignalLed();
    if(ledButton.pressed())
    {
        Serial.println("Button pressed");
        ledSignal.blink(3);
        ledButton.release();
    }
}