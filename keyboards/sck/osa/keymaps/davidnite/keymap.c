/* Copyright 2019 jrfhoutx
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

// Defines the keycodes used by our macros in process_record_user
//enum custom_keycodes {
//  QMKBEST = SAFE_RANGE,
//  QMKURL
//};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* Keymap BASE: (Base Layer) Default Layer
   * .----.,----------------------------------------------------------------------.
   * | M1 ||Esc| 1 |  2|  3|  4|  5|  6|          |  7|  8|  9|  0|  -|  =| ~ | \ |
   * |----||----------------------------------------------------------------------|
   * | M2 ||Tab  |  Q|  W|  E|  R|  T|          |  Y|  U|  I|  O|  P| [ | ] |BkSpc|
   * |----||----------------------------------------------------------------------|
   * | M3 ||Ctrl   |  A|  S|  D|  F|  G|          |  H|  J|  K|  L|  ;|  '|Return |
   * `----'|----------------------------------------------------------------------|
   *       |Shift   |  Z|  X|  C|  V|  B|     |  B|  N|  M|  ,|  .|  /|Shift | Fn |
   *       |----------------------------------------------------------------------|
   *       |Gui|    | Alt | Space | Fn |     | Space | Alt |               | Ctrl|
   *       `----------------------------------------------------------------------'
   */
[0] = LAYOUT_all( /* OSA Linux Base */
	C(KC_C),   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,              KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV,
	C(KC_V),  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    					 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
	C(KC_S),  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    					 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
	          KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,	                     KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(2),
	          KC_LGUI,          KC_LALT,          MO(2), TG(1),                     KC_SPC,                    KC_RALT,                            KC_RCTL
  ),
  /* Keymap BASE: (Base Layer) Default Layer
   * .----.,----------------------------------------------------------------------.
   * | M1 ||Esc| 1 |  2|  3|  4|  5|  6|          |  7|  8|  9|  0|  -|  =| ~ | \ |
   * |----||----------------------------------------------------------------------|
   * | M2 ||Tab  |  Q|  W|  E|  R|  T|          |  Y|  U|  I|  O|  P| [ | ] |BkSpc|
   * |----||----------------------------------------------------------------------|
   * | M3 ||Gui   |  A|  S|  D|  F|  G|          |  H|  J|  K|  L|  ;|  '|Return |
   * `----'|----------------------------------------------------------------------|
   *       |Shift   |  Z|  X|  C|  V|  B|     |  B|  N|  M|  ,|  .|  /|Shift | Fn |
   *       |----------------------------------------------------------------------|
   *       |Ctrl|    | Alt | Space | Fn |     | Space | Alt |               | Ctrl|
   *       `----------------------------------------------------------------------'
   */
[1] = LAYOUT_all( /* OSA OSX Base */
	G(KC_C),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
	G(KC_V),  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    				KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	G(KC_S),  KC_LGUI, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    				KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
	          KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,	                  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
	          KC_LCTL,           KC_TRNS,          KC_TRNS,  _______,                     KC_TRNS,                  KC_TRNS,                            KC_TRNS
  ),

[2] = LAYOUT_all( /* OSA Fn Layer */
	KC_MPLY,  KC_TRNS, KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,              KC_F7,    KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_TRNS,  KC_DEL,
	KC_VOLU,  KC_TRNS, KC_HOME,  KC_UP,   KC_END,  KC_TRNS, KC_TRNS,    				KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_VOLD,  KC_TRNS, KC_LEFT,  KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,    				KC_LEFT, KC_DOWN,   KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,          KC_TRNS,
	          KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,	                  G(KC_PGDN), G(KC_PGUP), KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
	          KC_TRNS,           KC_TRNS,          KC_TRNS,  _______,                     RESET,                  KC_TRNS,                            KC_TRNS
  ),
};


float layer_sound_0[][2] = SONG(ONE_UP_SOUND);
float layer_sound_1[][2] = SONG(MARIO_MUSHROOM);

//bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//  switch (keycode) {
//    case QMKBEST:
//      if (record->event.pressed) {
//        // when keycode QMKBEST is pressed
//        SEND_STRING("QMK is the best thing ever!");
//      } else {
//       // when keycode QMKBEST is released
//      }
//      break;
//    case QMKURL:
//      if (record->event.pressed) {
//        // when keycode QMKURL is pressed
//       SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
//      } else {
//        // when keycode QMKURL is released
//     }
//      break;
//  }
//  return true;
//}

void matrix_init_user(void) {
  // set CapsLock LED to output and low
  //setPinOutput(C7);
  //writePinLow(C7);
  // set NumLock LED to output and low
  // setPinOutput(C6);
  // writePinLow(C6);
  // set ScrollLock LED to output and low
  // setPinOutput(B6);
  // writePinLow(B6);
}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}

uint32_t layer_state_set_user(uint32_t state)
{
    //if (state & (1<<1)) {
    //writePinHigh(C7);
    //} else {
    //    writePinLow(C7);
    //}
    // if (state & (1<<2)) {
    // writePinHigh(C6);
    // } else {
    //     writePinLow(C6);
    // }
    // if (state & (1<<2)) {
    // writePinHigh(B6);
    // } else {
    //     writePinLow(B6);
    // }
    switch (biton32(state)) {
    case 0:
        //PLAY_SONG(layer_sound_1);
        break;
    case 1:
        PLAY_SONG(layer_sound_1);
        break;
    case 2:
        PLAY_SONG(layer_sound_0);
        break;
    default: //  for any other layers, or the default layer
        break;
    }
    return state;
}
