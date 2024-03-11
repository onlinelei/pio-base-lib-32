//
// Created by Ray on 2023/8/30.
//

#include "InitUtil.h"
#include "Arduino.h"

void InitUtil::init() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    Serial.println("Serial 9600");
    Serial.println("Init down");
}