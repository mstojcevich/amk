/**
 * amk_error.h
 *  commond error codes defintion
 */

#pragma once

#include <stddef.h>
#include <stdint.h>

typedef uint32_t amk_error_t;

#define AMK_SUCCESS     0
#define AMK_ERROR       1

#define AMK_I2C_ERROR_START     0x1000
typedef enum {
    AMK_I2C_TIMEOUT = AMK_I2C_ERROR_START,
    AMK_I2C_ERROR,
} amk_i2c_error_t;