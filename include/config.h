#ifndef CONFIG_H
#define CONFIG_H


// uncomment this line to adapt code for ESP32S. Leave commented for arduino uno code. 
#define ESP32S

// HARDWARE
#ifndef ESP32S
    #define BAUD_RATE 9600
    #define PUSH_BUTTON_PIN 4
    #define LED_ALIVE_PIN 13
    #define LED_SIGNAL_PIN 5
#else
    #define BAUD_RATE 115200
    #define PUSH_BUTTON_PIN 0
    #define LED_ALIVE_PIN 2
    #define LED_SIGNAL_PIN 23
#endif


// LEDS
#define LED_ALIVE_TIME_ON 150
#define LED_ALIVE_TIME_OFF 850
#define LED_SIGNAL_TIME_ON 200
#define LED_SIGNAL_TIME_OFF 400

#endif