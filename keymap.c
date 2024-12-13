// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │`  │ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │DEL│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │BSP│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │CAP│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │'''│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │CTL│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ESC│os │alt│TO3│SFT│spc│       │ent│tt1│alt│TT2│MEN│CTL│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_TAB, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K, KC_L,  KC_SCLN, KC_QUOT,
        KC_LCTL,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM,    KC_DOT,    KC_SLSH,    KC_RSFT,
        KC_ESC,  KC_LWIN,    KC_LALT,    KC_TO3,    KC_LSFT,    KC_SPC,                               KC_ENT,    KC_TT1,    KC_RALT    KC_TT2,    KC_MENU,    KC_RCTL,
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │No │ NO│ NO│ NO│ NO│ NO│       │ NO│ NO│ NO│ NO│ NO│ NO│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ F1│F2 │ F3│ F4│ F5│ F6│       │ F7│ F8│ F9│F10│F11│F12│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │PSC│SCL│PAU│INS│HOM│PGU│       │PGD│END│DEL│NO │NO │\| │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │No │ NO│ NO│LBR│RBR│ NO│       │ NO│ NO│ NO│ UP│ NO│ NO│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │No │ NO│ NO│ NO│ NO│ NO│       │ NO│TRS│LFT│DWN│RGT│ NO│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      */
    [1] = LAYOUT_split_3x6_3(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                               KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_F1, KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,                               KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11, KC_F12,
        KC_PSCR, KC_SCRL,    KC_PAUS,    KC_INS,    KC_HOME,    KC_PGUP,                               KC_PGDN,    KC_END,    KC_DEL, KC_NO,  KC_NO, KC_BSLS,
        KC_NO,  KC_NO,    KC_NO,    KC_LBRC,    KC_RBRC,    KC_NO,                               KC_NO,    KC_NO,    KC_NO,    KC_UP,    KC_NO,    KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                               KC_NO,    KC_TRNS,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_NO,
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │No │ NO│ NO│ NO│ NO│ NO│       │NML│SLH│ * │ - │ NO│ NO│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │No │ NO│ NO│ NO│ NO│ NO│       │ 7 │ 8 │ 9 │ + │ + │ no│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │No │ NO│ NO│ NO│ NO│ NO│       │ 4 │ 5 │ 6 │ , │NO │no │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │No │ NO│ NO│ NO│ NO│ NO│       │ 1 │ 2 │ 3 │ = │ENT│ NO│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │No │ NO│ NO│ NO│ NO│ NO│       │ 0 │ . │ENT│TNS│ENT│ NO│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      */
    [2] = LAYOUT_split_3x6_3(
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                               KC_NUM,    KC_PSLS,    KC_PAST,    KC_PMNS,    KC_NO,    KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                               KC_P7,    KC_P8,    KC_P9,    KC_PPLS,    KC_PPLS, KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                               KC_P4,    KC_P5,    KC_P6, KC_PCMM,  KC_NO, KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                               KC_P1,    KC_P2,    KC_P3,    KC_PEQL,    KC_PENT,    KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                               KC_P0,    KC_PDOT,    KC_PENT,    KC_TRNS,    KC_PENT,    KC_NO,
    ),
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │No │ NO│ 1 │ 2 │ 3 │ 4 │       │No │ NO│ NO│ NO│ NO│ NO│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ y │tab│ Q │ W │ E │ R │       │No │ NO│ NO│ NO│ NO│ NO│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │ T │CTL│ A │ S │ D │ F │       │No │ NO│ NO│ NO│ NO│ NO│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │No │SHF│ G │ X │ C │ V │       │No │ NO│ NO│ NO│ NO│ NO│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │No │ NO│ NO│TNS│ NO│SPC│       │No │ NO│ NO│ NO│ NO│ NO│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      */
    [2] = LAYOUT_split_3x6_3(
        KC_NO,  KC_NO,    KC_1,    KC_2,    KC_3,    KC_4,                               KC_NUM,    KC_PSLS,    KC_PAST,    KC_PMNS,    KC_NO,    KC_NO,
        KC_Y,  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,                               KC_P7,    KC_P8,    KC_P9,    KC_PPLS,    KC_PPLS, KC_NO,
        KC_T,  KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,                               KC_P4,    KC_P5,    KC_P6, KC_PCMM,  KC_NO, KC_NO,
        KC_NO,  KC_LSFT,    KC_G,    KC_X,    KC_C,    KC_V,                               KC_P1,    KC_P2,    KC_P3,    KC_PEQL,    KC_PENT,    KC_NO,
        KC_NO,  KC_NO,    KC_NO,    KC_TRNS,    KC_NO,    KC_SPC,                               KC_P0,    KC_PDOT,    KC_PENT,    KC_TRNS,    KC_PENT,    KC_NO,
    ),
};
