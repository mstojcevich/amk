#include "pad_ec.h"
#define _______ KC_TRNS
#define _0 0
#define _1 1
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_0]=LAYOUT_default(KC_FN0,KC_ESC,KC_PSCR,KC_BSPC,KC_NLCK,KC_PSLS,KC_PAST,KC_PMNS,KC_P7,KC_P8,KC_P9,KC_PPLS,KC_P4,KC_P5,KC_P6,KC_P1,KC_P2,KC_P3,KC_PENT,KC_P0,KC_PDOT),
[_1]=LAYOUT_default(KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_UP,KC_TRNS,KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),
};
const action_t PROGMEM fn_actions[] = {
[0]=ACTION_LAYER_MOMENTARY(1),};
