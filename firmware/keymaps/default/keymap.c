// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*
	 *      C0  C1  C2     C3   C4
	 *     ┌───┬───┬───┐ ┌────┬────┐
	 * R0: │Esc│ R │ C │ │ ↑ │ ← │
	 *     ├───┼───┼───┤ ├────┼────┤
	 * R1: │Sft│ Z │ X │ │ ↓ │ → │
	 *     └───┴───┴───┘ └────┴────┘
	 */
	[0] = LAYOUT_default(
		KC_ESC,  KC_R, KC_C, /*  */ KC_UP,   KC_LEFT,
        KC_LSFT, KC_Z, KC_X, /*  */ KC_DOWN, KC_RIGHT
		)};
