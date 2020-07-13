#include QMK_KEYBOARD_H

#define _L0 0
#define _L1 1
#define _L2 2

#define ____    KC_NO
#define SPC_L1  (LT(_L1, KC_SPC))   // tap: spc,     hold: layer1
#define ENT_L1  (LT(_L1, KC_ENT))   // tap: ent,     hold: layer1
#define EN_L2   (LT(_L2, KC_LANG2)) // tap: lang-en, hold: layer2
#define JP_L2   (LT(_L2, KC_LANG1)) // tap: lang-jp, hold: layer2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_L0] = LAYOUT(
        KC_ESCAPE, KC_Q,    KC_W,    KC_E,  KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,     KC_O,   KC_P,     KC_MINS,
        KC_TAB,    KC_A,    KC_S,    KC_D,  KC_F,   KC_G,   KC_H,   KC_J,    KC_K,     KC_L,   KC_SCLN,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,  KC_V,   KC_B,   KC_N,   KC_M,    KC_COMMA, KC_DOT, KC_SLASH,
        KC_LGUI,   KC_LCTL, KC_LALT, EN_L2, SPC_L1, ENT_L1, JP_L2,  KC_LEFT, KC_RIGHT, KC_DOWN
    ),

    [_L1] = LAYOUT(
        ____,     ____,     ____,     C(KC_E),  ____,      ____,     ____,     ____,  ____,  ____,  KC_UP,  ____,
        ____,     C(KC_A),  G(KC_S),  KC_DEL,   KC_RIGHT,  ____,     KC_BSPC,  ____,  ____,  ____,  ____,
        KC_LSFT,  G(KC_Z),  G(KC_X),  G(KC_C),  G(KC_V),   KC_LEFT,  KC_DOWN,  ____,  ____,  ____,  ____,
        ____,     ____,     ____,     ____,     ____,      ____,     ____,     ____,  ____,  ____
    ),

    [_L2] = LAYOUT(
        KC_GRAVE,  KC_1,     KC_2,     KC_3,     KC_4,    KC_5,  KC_6,  KC_7,     KC_8,  KC_9,  KC_0,     KC_EQL,
        ____,      ____,     ____,     ____,     KC_LBRC, ____,  ____,  KC_RBRC,  ____,  ____,  KC_BSLS,
        KC_LSFT,   ____,     ____,     ____,     KC_QUOT, ____,  ____,  ____,     ____,  ____,  ____,
        ____,      ____,     ____,     ____,     ____,    ____,  ____,  ____,     ____,  ____
    ),
};

// void keyboard_post_init_user(void) {
//     backlight_enable();
//     breathing_enable();
// }
