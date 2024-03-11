#include <Arduino.h>
#include "WiFi.h"
#include "InitUtil.h"

void setup()
{
    // init
    InitUtil::init();
}

void loop()
{
    Serial.println("led blink");
    delay(1000);
}