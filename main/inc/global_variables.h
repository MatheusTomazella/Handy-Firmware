#ifndef GLOBAL_VARIABLES
#define GLOBAL_VARIABLES

    /* Bluetooth */
#define BLE_DEVICE_NAME        "Handy"
#define UUID_SERVICE_FULLSTATE "2d0ec625-d550-4ed3-8068-def71c9aa7ee"
#define UUID_CHARACT_FULLSTATE "6e8e098a-b4ca-4b28-ba66-afb65f4c83e1"
#define UUID_SERVICE_SETTERS   "662cfb42-f43c-469a-bedd-1b13b8d7ec28"
#define UUID_SETTER_MODES      "f0003b89-4239-40a8-bcf1-bd60699d6179"
#define UUID_SETTER_STATE      "1dd38a1b-8c4c-4c8d-997e-e7da2d91f8b6"

    /* Pins */
#define FINGER_PIN_1    GPIO_NUM_18
#define FINGER_PIN_2    GPIO_NUM_5 
#define FINGER_PIN_3    GPIO_NUM_4 
#define FINGER_PIN_4    GPIO_NUM_2 
#define FINGER_PIN_5    GPIO_NUM_15
#define INPUT_MODE_PIN  GPIO_NUM_23
#define INPUT_STATE_PIN GPIO_NUM_22

    /* Configuration */
const static int FINGER_COUNT = 5;
const static int MODE_COUNT   = 3;

static unsigned int MODE_CHAR_PTR_SIZE = MODE_COUNT * ( 40 + FINGER_COUNT * 2 * 2 + 20 );

    /* Runtime */
static unsigned int CURRENT_LEDC_CHANNEL = 0;

#endif