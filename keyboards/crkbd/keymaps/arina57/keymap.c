#include QMK_KEYBOARD_H
#include <string.h>
#include "pointing_device.h"
#include "analog.h"
#include "version.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

#define deadzone 15
#define sensitivityDivider 4

char newline[2] = "\n";

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LALT, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LCTL, KC_LGUI, KC_SPC, MO(1), MO(2), KC_ENT, KC_BSPC),
                                                              [1] = LAYOUT_split_3x6_3(KC_HAEN, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, KC_TRNS, KC_TRNS, MO(3), KC_ENT, KC_DEL),
                                                              [2] = LAYOUT_split_3x6_3(KC_HANJ, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_MINS, KC_EQL, KC_BSLS, KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_UNDS, KC_PLUS, KC_PIPE, KC_TILD, KC_NO, KC_NO, KC_LGUI, KC_SPC, MO(3), KC_TRNS, KC_TRNS, KC_NO),
                                                              [3] = LAYOUT_split_3x6_3(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DF(0), DF(4), KC_LGUI, KC_SPC, KC_TRNS, KC_TRNS, KC_ENT, KC_NO),
                                                              [4] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LALT, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS, KC_LCTL, KC_SPC, MO(1), MO(2), KC_ENT, KC_BSPC)};

void pointing_device_task(void) {
    report_mouse_t currentReport = pointing_device_get_report();

    int8_t y = (int8_t)((analogReadPin(B4) - 512) / 4);
    int8_t x = (int8_t)((analogReadPin(B5) - 512) / 4);


    if (x > deadzone || x < -deadzone) {
        currentReport.x = -x / sensitivityDivider;
    }
    if (y > deadzone || y < -deadzone) {
        y = y ;
        currentReport.y = -y / sensitivityDivider;
    }

    pointing_device_set_report(currentReport);
    pointing_device_send();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
    case KC_Q:
        if (record->event.pressed) {
            // // when keycode QMKBEST is pressed
            // char str[40];

            // int8_t x = (int8_t)((analogReadPin(B4) - 512) / 4);
            // int8_t y = (int8_t)((analogReadPin(B5) - 512) / 4);
            // sprintf(str, "x:%d ", x);
            // send_string(str);
            // sprintf(str, "y:%d ", y);
            // send_string(str);
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;

    }
