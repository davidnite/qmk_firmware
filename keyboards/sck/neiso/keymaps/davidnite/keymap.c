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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(/* Base */
                 LGUI(KC_C),          LGUI(KC_V),
                              TG(1),
                 LGUI(KC_S),          LGUI(KC_X)
),
    [1] = LAYOUT(/* Layer1 */
                 KC_MPLY,          KC_MUTE,
                          KC_TRNS,
                 RGB_TOG,          AU_ON
),
};

float layer_sound_0[][2] = SONG(ONE_UP_SOUND);
float layer_sound_1[][2] = SONG(ZELDA_PUZZLE);

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case 0:
        rgblight_sethsv (0, 0, 255);
        PLAY_SONG(layer_sound_0);
        break;
    case 1:
        rgblight_sethsv (255, 0, 0);
        PLAY_SONG(layer_sound_1);
        break;
    default: //  for any other layers, or the default layer
        rgblight_sethsv (0, 0, 255);
        break;
    }
  return state;
}
