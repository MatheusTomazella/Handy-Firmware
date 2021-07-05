#pragma once

#include <stdio.h>
#include <iostream>
#include <string>
#include "NimBLEDevice.h"
#include "BleEventTrigger.h"

class SetterModesCallbacks: public NimBLECharacteristicCallbacks {
    BleEventTrigger* eTrigger;

public:
    SetterModesCallbacks ( BleEventTrigger* eTrigger ) {
        this->eTrigger = eTrigger;
    }

    void onRead(NimBLECharacteristic* pCharacteristic) {
        printf("\nToggle Mode\n");
        eTrigger->toggleMode();
    };

    void onWrite(NimBLECharacteristic* pCharacteristic) { 
        std::string value = pCharacteristic->getValue().c_str();
        eTrigger->setModes( value );
    };

    void onNotify(NimBLECharacteristic* pCharacteristic) { };
    void onStatus(NimBLECharacteristic* pCharacteristic, Status status, int code) { };
};