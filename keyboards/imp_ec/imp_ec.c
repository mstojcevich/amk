/**
 * @file imp_ec.c
 */

#include "imp_ec.h"
#include "led.h"
#include "amk_gpio.h"
#include "amk_printf.h"

#include "matrix.h"
#include "ec_matrix.h"

ec_matrix_t ec_matrix = {
    {
        { 
            {87,2283,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2173,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {81,2189,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2440,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2361,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,1745,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {85,1559,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {85,1637,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,1803,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2122,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2285,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,1797,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {90,1969,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2367,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2329,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,1802,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
        },
        {
            {87,1617,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2191,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {90,2259,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2493,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2247,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,1869,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2238,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2448,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {81,2519,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {90,2345,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2443,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2528,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,EC_INVALID_MAX/*180*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2042,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2101,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2097,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
        },
        {
            {85,1933,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {92,2560,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2336,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2034,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2278,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2303,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2149,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2473,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {84,2295,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2283,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2252,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2495,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,1418,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {85,EC_INVALID_MAX/*145*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2191,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2174,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
        },
        {
            {86,2111,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2443,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2435,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2367,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2162,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {91,2478,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {85,2513,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2398,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2102,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2247,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2335,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {85,2371,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2462,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {82,2307,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2205,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2196,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
        },
        {
            {82,EC_INVALID_MAX/*234*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {101,1317,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2256,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2485,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2538,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2351,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2390,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2307,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2394,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,2224,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,1829,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {85,EC_INVALID_MAX/*303*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {112,2026,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2200,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2303,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {89,2232,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
        },
        {
            {86,1982,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,EC_INVALID_MAX/*800*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {85,EC_INVALID_MAX/*161*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2267,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {82,2194,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {84,EC_INVALID_MAX/*105*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {91,1517,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {83,EC_INVALID_MAX/*188*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {86,EC_INVALID_MAX/*280*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {183,2254,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {85,EC_INVALID_MAX/*94*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {88,2328,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2268,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {87,2316,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {92,2109,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
            {85,EC_INVALID_MAX/*93*/,EC_AUTO_MIN, EC_AUTO_MAX, 0, STROKE_DEFAULT},
        },
    },
    //EC_AUTO_MODE,
    //EC_CALIBRATE_MODE,
    EC_DEFAULT_MODE,
};

void matrix_init_kb(void)
{
    ec_matrix_init(&ec_matrix);

    #ifdef DIRECT_KEY_PIN
    gpio_set_input_pullup(DIRECT_KEY_PIN);
    #endif

    #ifdef RGB_EN_PIN
    gpio_set_output_pushpull(RGB_EN_PIN);
    gpio_write_pin(RGB_EN_PIN, 1);
    #endif

    //power on switch board
    #ifdef POWER_PIN
    gpio_set_output_pushpull(POWER_PIN);
    gpio_write_pin(POWER_PIN, 1);

    wait_ms(100);
    #endif

    // initialize opamp and capacitor discharge
    gpio_set_output_pushpull(OPA_EN_PIN);
    gpio_write_pin(OPA_EN_PIN, 1);
    gpio_set_output_pushpull(DISCHARGE_PIN);
    gpio_write_pin(DISCHARGE_PIN, 1);
}

#ifdef DIRECT_KEY_PIN
bool matrix_scan_post(matrix_row_t* raw)
{
    matrix_row_t last_row_value    = raw[DIRECT_KEY_ROW];
    matrix_row_t current_row_value = last_row_value;
    if (!gpio_read_pin(DIRECT_KEY_PIN)) {
        current_row_value |= (1 << DIRECT_KEY_COL);
    } else {
        current_row_value &= ~(1 << DIRECT_KEY_COL);
    }
    if (last_row_value != current_row_value) {
        raw[DIRECT_KEY_ROW] = current_row_value;
        return true;
    }

    return false;
}
#endif

#ifdef RGB_ENABLE
#include "rgb_driver.h"
#include "rgb_linear.h"
#include "is31fl3236.h"
rgb_led_t g_rgb_leds[RGB_LED_NUM] = {
    {0, 0, 0, 0},
    {0, 1, 1, 1},
    {0, 2, 2, 2},
    {0, 3, 3, 3},
    {0, 4, 4, 4},
    {0, 5, 5, 5},
    {0, 6, 6, 6},
    {0, 7, 7, 7},
    {0, 8, 8, 8},
    {0, 9, 9, 9},
    {0,10,10,10},
    {0,11,11,11},
    {0,12,12,12},
    {0,13,13,13},
    {0,14,14,14},
    {0,15,15,15},
    {1, OUT_34, OUT_35, OUT_36},
    {1, OUT_31, OUT_32, OUT_33},
    {1, OUT_28, OUT_29, OUT_30},
    {1, OUT_25, OUT_26, OUT_27},
    {1, OUT_22, OUT_23, OUT_24},
    {1, OUT_19, OUT_20, OUT_21},
    {1, OUT_16, OUT_17, OUT_18},
    {1, OUT_13, OUT_14, OUT_15},
    {1, OUT_10, OUT_11, OUT_12},
    {1, OUT_7, OUT_8, OUT_9},
    {1, OUT_4, OUT_5, OUT_6},
    {1, OUT_1, OUT_2, OUT_3},
};


rgb_device_t g_rgb_devices[RGB_DEVICE_NUM] = {
    {RGB_DRIVER_WS2812, 0, 0, 0, 16},
    {RGB_DRIVER_IS31FL3236, 0x78, 0, 16, 12},
};

rgb_param_t g_rgb_linear_params[RGB_SEGMENT_NUM] = {
    {0, 0, 16},
    {1,16, 12},
};
#endif
