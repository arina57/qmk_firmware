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

#define XPIN B4
#define YPIN B5

float sensitivityModifier =   1;
float sensitivityMultiplier[] = {0.09, 0.09};
float directionalMultiplier[] = {1, 1};
uint8_t deadzoneMax[] = {20, 20};
// uint8_t deadzoneMin[] = {-20, -20};


char newline[2] = "\n";

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     [0] = LAYOUT_split_3x6_3(
//     //,-----------------------------------------------------.                    ,-----------------------------------------------------.
//         KC_ESC,    KC_Q,   KC_W,    KC_E,    KC_R,     KC_T,                         KC_Y,   KC_U,     KC_I,     KC_O,  KC_P,   KC_LALT,
//     //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//         KC_TAB,    KC_A,   KC_S,    KC_D,    KC_F,     KC_G,                         KC_H,   KC_J,     KC_K,     KC_L,  KC_SCLN, KC_QUOT,
//     //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
//         KC_LSFT,   KC_Z,   KC_X,    KC_C,    KC_V,     KC_B,                         KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_LCTL,
//     //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
//                             KC_LGUI,  KC_SPC,   MO(1),                   MO(2),  KC_ENT,  KC_BSPC
//                                         //`--------------------------'  `--------------------------'
//         ),

//     [1] = LAYOUT_split_3x6_3(

//         KC_HAEN, KC_1, KC_2, KC_3, KC_4, KC_5,                              KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
//         KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN,                       KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
//         KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT,                           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI,
//                                             KC_TRNS, KC_TRNS,               MO(3), KC_ENT, KC_DEL
//         ),

//     [2] = LAYOUT_split_3x6_3(

//         KC_HANJ, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
//         KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC,KC_RBRC,                        KC_MINS, KC_EQL, KC_BSLS, KC_GRV, KC_NO, KC_NO,
//         KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR,                       KC_UNDS, KC_PLUS, KC_PIPE, KC_TILD, KC_BTN1, KC_BTN2,
//                                 KC_LGUI, KC_SPC, MO(3),                 KC_TRNS, KC_TRNS, KC_NO)
//         ,

//     [3] = LAYOUT_split_3x6_3(

//         KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                           KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
//         RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12,
//         RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, DF(0), DF(4),
//                             KC_LGUI, KC_SPC, KC_TRNS,                KC_TRNS, KC_ENT, KC_NO
//         ),

//     [4] = LAYOUT_split_3x6_3(

//         KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,                               KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LALT,
//         KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G,                               KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
//         KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,                              KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS,
//                         KC_LCTL, KC_SPC, MO(1),                     MO(2), KC_ENT, KC_BSPC
//         )
//         };



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_4(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        KC_ESC,    KC_Q,   KC_W,    KC_E,    KC_R,     KC_T,                         KC_Y,   KC_U,     KC_I,     KC_O,  KC_P,   KC_LALT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_TAB,    KC_A,   KC_S,    KC_D,    KC_F,     KC_G,                         KC_H,   KC_J,     KC_K,     KC_L,  KC_SCLN, KC_QUOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,   KC_Z,   KC_X,    KC_C,    KC_V,     KC_B,                         KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_LCTL,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                            KC_LGUI,  KC_SPC,   MO(1),  KC_MS_BTN1,     KC_NO, MO(2),  KC_ENT,  KC_BSPC
                                        //`--------------------------'  `--------------------------'
        ),

    [1] = LAYOUT_split_3x6_4(

        KC_HAEN, KC_1, KC_2, KC_3, KC_4, KC_5,                              KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN,                       KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT,                           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_MS_BTN1,     KC_NO,          MO(3), KC_ENT, KC_DEL
        ),

    [2] = LAYOUT_split_3x6_4(

        KC_HANJ, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_LBRC,KC_RBRC,                        KC_MINS, KC_EQL, KC_BSLS, KC_GRV, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR,                       KC_UNDS, KC_PLUS, KC_PIPE, KC_TILD, KC_BTN1, KC_BTN2,
                                KC_LGUI, KC_SPC, MO(3),KC_MS_BTN2,     KC_NO,  KC_TRNS, KC_TRNS, KC_TRNS)
        ,

    [3] = LAYOUT_split_3x6_4(

        KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                           KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12,
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, DF(0), DF(4),
                            KC_LGUI, KC_SPC, KC_TRNS, KC_MS_BTN2,     KC_NO, KC_TRNS, KC_ENT, KC_NO
        ),

    // [4] = LAYOUT_split_3x6_4(

    //     KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,                               KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LALT,
    //     KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G,                               KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
    //     KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,                              KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS,
    //                     KC_LCTL, KC_SPC, MO(1), KC_MS_BTN1,     KC_NO, MO(2), KC_ENT, KC_BSPC
    //     )
    //     };


char keylog_str[24] = {};
char mouselog_str[24] = {};

void pointing_device_task(void) {
    report_mouse_t currentReport = pointing_device_get_report();
    currentReport.x = 0;
    currentReport.y = 0;
    // pointing_device_set_report(currentReport);
    // pointing_device_send();

    int8_t pos[2];
    int8_t posRaw[2];
    int16_t pins[2];
    pins[0]  = analogReadPin(XPIN);
    pins[1] = analogReadPin(YPIN);




    for (int i = 0; i< 2; i++){
        //Get the value for analog pins
        //Analog pins valus are between 0 and 1023
        //where as the mouse report position is between -127 and 127
        posRaw[i]  =(int8_t) floor(((pins[i] - 512) / 4) * directionalMultiplier[i] );

        if ((abs(posRaw[i]) > deadzoneMax[i]) ) {

            pos[i] = (int8_t)floor(posRaw[i] * sensitivityMultiplier[i] * sensitivityModifier);


            snprintf(mouselog_str, sizeof(mouselog_str), "x%4d, y%4d", posRaw[0], posRaw[1]);
            currentReport.x = pos[0];
            currentReport.y = pos[1];

        } else  {
            pos[i] = 0;
        }


    }

    pointing_device_set_report(currentReport);
            pointing_device_send();


}

// #ifdef OLED_DRIVER_ENABLE
// void oled_task_user(void) {
//     // Host Keyboard Layer Status
//     oled_write_P(PSTR("Layer: "), false);

//     switch (get_highest_layer(layer_state)) {
//         case _QWERTY:
//             oled_write_P(PSTR("Default\n"), false);
//             break;
//         case _FN:
//             oled_write_P(PSTR("FN\n"), false);
//             break;
//         case _ADJ:
//             oled_write_P(PSTR("ADJ\n"), false);
//             break;
//         default:
//             // Or use the write_ln shortcut over adding '\n' to the end of your string
//             oled_write_ln_P(PSTR("Undefined"), false);
//     }

//     // Host Keyboard LED Status
//     led_t led_state = host_keyboard_led_state();
//     oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
//     oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
//     oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
// }
// #endif

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case  KC_LSFT:
//             if (record->event.pressed) {

//                 sensitivityModifier = 0.5;

//                 // // when keycode QMKBEST is pressed
//                 // char str[40];

//                 // int8_t x = (int8_t)((analogReadPin(B4) - 512) / 4);
//                 // int8_t y = (int8_t)((analogReadPin(B5) - 512) / 4);
//                 // sprintf(str, "x:%d ", x);

//                 // send_string(str);
//                 // sprintf(str, "y:%d ", y);
//                 // send_string(str);
//             } else {
//                 sensitivityModifier = 1;
//                 // when keycode QMKBEST is released
//             }
//             char str[80];
//             sprintf(str, "%f", sensitivityModifier);
//             oled_write_P(str, false);
//             break;
//     }
//     return true;
// }




oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_master) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}




const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
    char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) || (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) {
        keycode = keycode & 0xFF;
    }
    if (keycode < 60) {
        name = code_to_name[keycode];
    }

    // update keylog
    snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c", record->event.key.row, record->event.key.col, keycode, name);
}

void oled_render_keylog(void) { oled_write(keylog_str, false); }

void oled_render_mouselog(void) { oled_write(mouselog_str, false); }

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
    if (is_master) {
        oled_render_layer_state();
        oled_render_keylog();
        oled_render_mouselog();
    } else {
        oled_render_logo();
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        set_keylog(keycode, record);
    }
    return true;
}

