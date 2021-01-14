/* Copyright 2020 Harry Herring
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// lang
#define LANG_EN  KC_LANG2
#define LANG_JP  KC_LANG1

// custom macros
#define ____      KC_NO
#define T___      KC_TRANSPARENT

#define CTL(k)    C(KC_##k)
#define CMD(k)    G(KC_##k)

#define TAB_OPT   MT(MOD_LALT, KC_TAB)   // tap: tab,     hold: opt
#define JP_CMD    MT(MOD_LGUI, LANG_JP)  // tap: lang_jp, hold: cmd
#define EN_L1     LT(1,        LANG_EN)  // tap: lang_en, hold: layer1
#define SPC_L2    LT(2,        KC_SPC)   // tap: spc,     hold: layer2
#define ENT_L2    LT(2,        KC_ENT)   // tap: ent,     hold: layer2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = { 
		{ KC_ESC,   KC_Q,  KC_W,  KC_E,  KC_R,   KC_T,      KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,     KC_MINS },
		{ TAB_OPT,  KC_A,  KC_S,  KC_D,  KC_F,   KC_G,      KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN,  KC_QUOT },
		{ KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,   KC_B,      KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,  ____    },
		{ KC_LCTL,  ____,  ____,  ____,  EN_L1,  SPC_L2,    ENT_L2,  JP_CMD,  ____,     ____,    ____,     ____    }
	},

	[1] = { 
		{ KC_GRV,   KC_1,  KC_2,  KC_3,  KC_4,   KC_5,      KC_6,    KC_7,    KC_8,     KC_9,    KC_0,     KC_EQL  },
		{ TAB_OPT,  T___,  T___,  T___,  T___,   T___,      T___,    T___,    T___,     T___,    T___,     KC_LBRC },
		{ KC_LSFT,  T___,  T___,  T___,  T___,   T___,      T___,    T___,    T___,     T___,    KC_BSLS,  KC_RBRC },
		{ KC_LCTL,  ____,  ____,  ____,  EN_L1,  SPC_L2,    ENT_L2,  JP_CMD,  ____,     ____,    ____,     ____    }
	},

	[2] = { 
		{ ____,     ____,    ____,    CTL(E),  ____,     ____,        ____,      ____,    ____,    ____,  KC_UP,  ____ },
		{ ____,     CTL(A),  CMD(S),  KC_DEL,  KC_RGHT,  ____,        KC_BSPC,   ____,    CTL(K),  ____,  ____,   ____ },
		{ KC_LSFT,  CMD(Z),  CMD(X),  CMD(C),  CMD(V),   KC_LEFT,     KC_DOWN,   ____,    ____,    ____,  ____,   ____ },
		{ KC_LCTL,  ____,    ____,    ____,    EN_L1,    SPC_L2,      CMD(ENT),  JP_CMD,  ____,    ____,  ____,   ____ }
	}

};
