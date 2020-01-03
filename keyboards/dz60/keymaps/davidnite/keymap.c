#include QMK_KEYBOARD_H

// My layout is practically the default HHKB layout.
#define _DEFAULT 0
#define _OSX 1
#define _FN 2
#define _LIGHTS 3


#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


 /* BASE LAYER
 *
 * ,-----------------------------------------------------------------------------------------.
 * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \| | ~ ` |
 * |-----------------------------------------------------------------------------------------+
 * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
 * |-----------------------------------------------------------------------------------------+
 * | Cmd    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
 * |-----------------------------------------------------------------------------------------+
 * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  RShift   |  FN |
 * |-----------------------------------------------------------------------------------------+
 * |              Ctrl |      Alt  |            Space       |   Tog_Win |    LIGHTS          |
 * `-----------------------------------------------------------------------------------------'
 */


	[_DEFAULT] = LAYOUT_60_hhkb(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSLS, KC_GRV,
		KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSPC,
		KC_LCTL,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_ENT,
		KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,           KC_RSFT, MO(_FN),
		            KC_LGUI,             KC_LALT,                      KC_SPC,                    TG(_OSX),           MO(_LIGHTS)),




/* WINDOWS LAYER
 *
 * ,-----------------------------------------------------------------------------------------.
 * | Esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  \| | ~ ` |
 * |-----------------------------------------------------------------------------------------+
 * | Tab    |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
 * |-----------------------------------------------------------------------------------------+
 * | CTRL    |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
 * |-----------------------------------------------------------------------------------------+
 * | Shift     |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  RShift   |  FN |
 * |-----------------------------------------------------------------------------------------+
 * |              Win  |      Alt  |            Space       |   Tog_Win |    LIGHTS          |
 * `-----------------------------------------------------------------------------------------'
 */


	[_OSX] = LAYOUT_60_hhkb(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSLS, KC_GRV,
		KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSPC,
		KC_LGUI,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_ENT,
		KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,           KC_RSFT, MO(_FN),
		            KC_LCTL,             KC_LALT,                      KC_SPC,                    ______,           MO(_LIGHTS)),




/* FN LAYER
 *
 *  ,---------------------------------------------------------------------------------------------------------------------
 * |         | F1   | F2   | F3   | F4    | F5    | F6    | F7   | F8    | F9   | F10   | F11   | F12   | INSERT  |  _   |
 * |---------------------------------------------------------------------------------------------------------------------+
 * | CAPS     |   HOME  |   UP  |   END   |    _  |    _  |    _  |    _  |    _   |    _   |  _  |  V_DEC   |  V_INC  | _  |
 * |---------------------------------------------------------------------------------------------------------------------+
 * | CTRL       |   LFT   |   DN   |   RGHT   |   _   |   _    |   _  | _ |   _    | _    | _    | _      |    _          |
 * |---------------------------------------------------------------------------------------------------------------------+
 * | Shift         |  PGUP   |  DEL   |  PGDN  |  _   |  _   |  _   |  _   |  _  |    _  |  _  |    _       |   _      |
 * |---------------------------------------------------------------------------------------------------------------------+
 * |                          _    |      _     |               _               |     _      |     _                     |
 * `---------------------------------------------------------------------------------------------------------------------'
 */

	[_FN] = LAYOUT_60_hhkb(

		______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  ______,  KC_PSCR,
		KC_CAPS,          KC_HOME,  KC_UP,  KC_END,  ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,   ______,  ______,
		______,             KC_LEFT,  KC_DOWN,  KC_RIGHT,  ______,  ______,  ______,  ______,  ______, ______,   ______,   ______, ______,
		______,            KC_PGUP,  KC_DEL,  KC_PGDN, ______, ______,   ______,  ______,  KC_MPRV,  KC_MNXT, KC_MPLY,     ______,  ______,
		         ______,           ______,                    ______,                              ______,            ______),








/* LIGHTS LAYER
 *
 *  ,---------------------------------------------------------------------------------------------------------------------+
 * | RGB_TOGGLE  | STATIC | BREATHE | RAINBOW | SWIRL | SNAKE | KNIGHTRIDER | XMAS | STATIC_GRAD | _ |  _ | _ | _ | _ | _ |
 * |----------------------------------------------------------------------------------------------------------------------+
 * | RBG_MOD      |  HUE_INC |  SATURATION_INC  |  BRIGHT_INC   |  _  |  _  |  _  |  _ |  _ |  _ |  _ |  _  |  _  |  _    |
 * |----------------------------------------------------------------------------------------------------------------------+
 * | CTRL           |  HUE_DEC |  SATURATION_DEC  |  BRIGHT_DEC  |  _  |  _  |  _ |  _  |  _  |  _  |  _  |  _  |    _    |
 * |----------------------------------------------------------------------------------------------------------------------+
 * | Shift                |   _   |   _   |   _   |   _   |   _   |   _   |   _   |   _   |   _   |   _   |  _   |    _   |
 * |----------------------------------------------------------------------------------------------------------------------+
 * |                             _    |      _     |               _               |     _      |     _                   |
 * `----------------------------------------------------------------------------------------------------------------------'
 */



	[_LIGHTS] = LAYOUT_60_hhkb(
		RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, ______, ______, ______, ______, ______, ______,
		RGB_MOD,          RGB_HUI, RGB_SAI, RGB_VAI,  ______,   ______,  ______,  ______,  ______, ______, ______, ______, ______, ______,
		______,           RGB_HUD, RGB_SAD, RGB_VAD,  ______,   ______,  ______,  ______,  ______, ______, ______, ______, ______,
		______,           ______,  ______,  ______,   ______,  ______,  ______,  ______,  ______, ______, ______,         ______, ______,
		         ______,           ______,                      ______,                                    ______,         ______),

};


/*

RGB controls

Key       ->  Description
=========================

RGB_TOG   ->  Toggle RGB lighting on or off

RGB_MOD   ->  Cycle through modes, reverse direction when Shift is held

RGB_RMOD  ->  Cycle through modes in reverse, forward direction when Shift is held

RGB_HUI   ->  Increase hue

RGB_HUD   ->  Decrease hue

RGB_SAI   ->  Increase saturation

RGB_SAD   ->  Decrease saturation

RGB_VAI   ->  Increase value (brightness)

RGB_VAD   ->  Decrease value (brightness)

RGB_M_P   ->  Static (no animation) mode

RGB_M_B   ->  Breathing animation mode

RGB_M_R   ->  Rainbow animation mode

RGB_M_SW  ->  Swirl animation mode

RGB_M_SN  ->  Snake animation mode

RGB_M_K   ->  "Knight Rider" animation mode

RGB_M_X   ->  Christmas animation mode

RGB_M_G   ->  Static gradient animation mode

*/
