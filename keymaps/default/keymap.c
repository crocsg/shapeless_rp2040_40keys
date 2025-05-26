// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define DEBOUNCE 5

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * ├───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │
     * └───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_5x8(
       
        
        
        KC_Q,    KC_P,    KC_K,    KC_M,    KC_8,    
        
        KC_W,    KC_A,    KC_L,    KC_1,    KC_9,    
        KC_E,    KC_S,    KC_Z,    KC_2,    KC_F1,    
        KC_R,    KC_D,    KC_X,    KC_3,    KC_F2,    
        KC_T,    KC_F,    KC_C,    KC_4,    KC_F3,    
        KC_U,    KC_G,    KC_V,    KC_5,    KC_F4,
        KC_I,    KC_H,    KC_B,    KC_6,    KC_F5,
        KC_O,    KC_J,    KC_N,    KC_7,    KC_F6
        
    )
};
