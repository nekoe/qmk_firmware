#include QMK_KEYBOARD_H

#define ____    KC_NO
#define T___    KC_TRANSPARENT
#define SPC_L1  LT(1, KC_SPC)    // tap: spc,     hold: layer1
#define ENT_L1  LT(1, KC_ENT)    // tap: ent,     hold: layer1
#define EN_CMD  LGUI_T(KC_LANG2) // tap: lang-en, hold: cmd
#define JP_CTL  CTL_T(KC_LANG1)  // tap: lang-jp, hold: ctrl
#define c(k)    C(KC_##k)
#define g(k)    G(KC_##k)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(

    KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_MINS,                     KC_EQL,  KC_6, KC_7, KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, ____,                        ____,    KC_Y, KC_U, KC_I,    KC_O,    KC_P,    ____,
    ____,    KC_A, KC_S, KC_D, KC_F, KC_G,                                       KC_H, KC_J, KC_K,    KC_L,    KC_SCLN, ____,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LBRC,                     KC_RBRC, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_UP,
    KC_LGUI, ____, ____, ____, ____,                                                   ____, ____,    KC_LEFT, KC_RGHT, KC_DOWN,
                                           KC_QUOT, KC_BSLS,   ____,    KC_GRV,
                                                    ____,      KC_CAPS,
                                   SPC_L1, EN_CMD,  ____,      KC_RALT, JP_CTL,  ENT_L1
  ),
  [1] = LAYOUT_ergodox_pretty(

    ____,    KC_F1, KC_F2, KC_F3,  KC_F4,   KC_F5,   ____,                ____, KC_F6,   KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
    ____,    ____,  ____,  c(E),   ____,    ____,    ____,                ____, ____,    ____,  ____,  ____,  KC_UP,  KC_F12,
    ____,    c(A),  g(S),  KC_DEL, KC_RGHT, ____,                               KC_BSPC, ____,  ____,  ____,  ____,   ____,
    KC_LSFT, g(Z),  g(X),  g(C),   g(V),    KC_LEFT, ____,                ____, KC_DOWN, ____,  ____,  ____,  ____,   ____,
    ____,    ____,  ____,  ____,   ____,                                                 ____,  ____,  ____,  ____,   ____,
                                                     ____, ____,   RESET, ____,
                                                           ____,   ____,
                                              ____,  ____, ____,   ____,  ____, ____
  ),
};
