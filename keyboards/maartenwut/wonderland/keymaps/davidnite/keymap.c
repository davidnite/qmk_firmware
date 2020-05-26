#include QMK_KEYBOARD_H

enum layers {
  _NIX,
  _OSX,
  _GAM,
  _FNC,
  _LIT
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_NIX] = LAYOUT(
  C(KC_C), KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV, \
 C(KC_V), KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC, \
 C(KC_S), KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,    KC_SCLN, KC_QUOT,          KC_ENT, \
          KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(4), \
          KC_LGUI,    KC_LALT, MO(3), TG(1),     KC_SPC,       TG(2),                   KC_RCTL \
   ),

[_OSX] = LAYOUT(
  G(KC_C), KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, \
 G(KC_V), KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, \
 G(KC_S), KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,          KC_TRNS, \
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, \
          KC_LCTL,    KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,       KC_TRNS,                   KC_TRNS \
   ),

[_GAM] = LAYOUT(
  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, \
 KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, \
 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,          KC_TRNS, \
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, \
          KC_TRNS,    KC_TRNS, KC_SPC, KC_TRNS,     KC_TRNS,       KC_TRNS,                   KC_TRNS \
   ),

[_FNC] = LAYOUT(
 KC_MPLY, KC_TRNS,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_PSCR, KC_DEL, \
 KC_VOLU, KC_TRNS, KC_HOME, KC_UP,   KC_END,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
KC_VOLD, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, KC_TRNS,   KC_UP, KC_TRNS, \
          KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, G(KC_PGDN), G(KC_PGUP), KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, \
          _______,          KC_TRNS, _______, _______,          _______,                   KC_TRNS,                            _______ \
   ),

[_LIT] = LAYOUT(
 RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, \
 RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   _______, KC_TRNS, \
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _______, _______,_______, KC_TRNS, \
          _______,          _______, _______, _______,          _______,                   _______,                            _______ \
   )
};

#ifdef USE_LEDS_FOR_LAYERS
// example of how to use LEDs as layer indicators
static uint8_t top = 0;
static uint8_t middle = 0;
static uint8_t bottom = 0;

layer_state_t layer_state_set_user(layer_state_t state) {
    top = middle = bottom = 0;
    switch (get_highest_layer(state)) {
    case _NIX:
        top = 0;
        break;
    case _OSX:
        top = 1;
        break;
    case _GAM:
        middle = 1;
        break;
    case _FNC:
        bottom = 1;
        break;
    default: //  for any other layers, or the default layer
        break;
    }
  return state;
}

// override kb level function
bool led_update_user(led_t usb_led) {
    writePin(B1, !top);
    writePin(B2, !middle);
    writePin(B3, !bottom);
    return false; // we are using LEDs for something else override kb
}
#endif
