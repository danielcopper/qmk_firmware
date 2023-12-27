/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdint.h>
#include QMK_KEYBOARD_H

enum layer_names { _BASE, _SYMBOLS, _NUMBERS, _FUNCTION };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[_BASE]     = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_ESC, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, KC_LGUI, MO(1), LSFT(KC_SPC), RSFT(KC_ENT), MO(2), KC_RALT),
                                                              [_SYMBOLS]  = LAYOUT_split_3x6_3(KC_TRNS, KC_QUOT, KC_LT, KC_GT, KC_DQUO, KC_PDOT, KC_TILD, KC_AMPR, KC_LBRC, KC_RBRC, KC_PERC, KC_TRNS, KC_TRNS, KC_EXLM, KC_PMNS, KC_PPLS, KC_PEQL, KC_HASH, KC_PIPE, KC_SCLN, KC_LPRN, KC_RPRN, KC_QUES, KC_NO, KC_TRNS, KC_CIRC, KC_PSLS, KC_PAST, KC_BSLS, KC_NO, KC_UNDS, KC_DLR, KC_LCBR, KC_RCBR, KC_AT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS),
                                                              [_NUMBERS]  = LAYOUT_split_3x6_3(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_HOME, KC_PGUP, KC_P7, KC_P8, KC_P9, KC_NO, KC_TRNS, KC_TRNS, KC_F5, KC_F6, KC_F7, KC_F8, KC_END, KC_PGDN, KC_P4, KC_P5, KC_P6, KC_NO, KC_NO, KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_P0, KC_P1, KC_P2, KC_P3, KC_NO, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [_FUNCTION] = LAYOUT_split_3x6_3(QK_BOOT, KC_NO, KC_NO, KC_WAKE, KC_SLEP, KC_PWR, KC_NO, KC_WBAK, KC_WHOM, KC_WREF, KC_WFWD, KC_NO, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_VOLU, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, BL_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)};
