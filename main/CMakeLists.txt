set( SOURCES ./src/main.cpp )

idf_component_register(
    SRCS ${SOURCES}
    INCLUDE_DIRS ./inc
    REQUIRES 
        freertos 
        esp_common 
        driver 
        Hand 
        Mode 
        Gpio 
        HardwareController 
        BleInformationTable 
        BleController 
        BleEventTrigger
        StorageController
        servoControl
)
