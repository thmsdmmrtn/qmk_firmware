#include QMK_KEYBOARD_H

#define extend 1
#define function 2
#define numbers 3
#define symbols 4
enum custom_keycodes {
  MACRO_COPY = SAFE_RANGE,
  MACRO_PASTE,
  MACRO_UNDO,
  MACRO_CUT
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MACRO_COPY:
      if (record->event.pressed) {
        // when keycode MACRO_COPY is pressed
        SEND_STRING(SS_LGUI("c"));
      }
      break;
    case MACRO_PASTE:
      if (record->event.pressed) {
        // when keycode MACRO_PASTE is pressed
        SEND_STRING(SS_LGUI("v"));
      }
      break;
    case MACRO_UNDO:
      if (record->event.pressed) {
        // when keycode MACRO_UNDO is pressed
        SEND_STRING(SS_LGUI("z"));
      }
      break;
    case MACRO_CUT:
      if (record->event.pressed) {
        // when keycode MACRO_CUT is pressed
        SEND_STRING(SS_LGUI("x"));
      }
      break;
  }
  return true;
};

const uint16_t PROGMEM numbers_layer[] = {KC_LSFT, MO(symbols), COMBO_END};
const uint16_t PROGMEM function_layer[] = {MO(extend), MO(symbols), COMBO_END};
combo_t key_combos[] = {
  COMBO(numbers_layer, MO(numbers)),
  COMBO(function_layer, MO(function))
};
/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, MO(extend), KC_LSFT, KC_SPC, MO(symbols)),
	[extend] = LAYOUT_split_3x5_2(KC_ESC, KC_WBAK, KC_PGUP, KC_WFWD, KC_INS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_CAPS, KC_LALT, KC_RGUI, KC_CAPS, KC_LCTL, KC_RALT, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL, MACRO_UNDO, MACRO_CUT, MACRO_COPY, KC_LGUI, MACRO_PASTE, KC_ENT, KC_BSPC, KC_TAB, KC_FIND, KC_PSCR, MO(extend), KC_NO, KC_ENT, MO(symbols)),
	[function] = LAYOUT_split_3x5_2(KC_MSTP, KC_MRWD, KC_MPLY, KC_MFFD, KC_BRIU, KC_F12, KC_F7, KC_F8, KC_F9, KC_SCRL, KC_TAB, KC_LSFT, KC_CAPS, KC_LCTL, KC_BRID, KC_F11, KC_F4, KC_F5, KC_F6, KC_AT, KC_MUTE, KC_VOLD, KC_LGUI, KC_VOLU, KC_WBAK, KC_F10, KC_F1, KC_F2, KC_F3, KC_AT, KC_NO, KC_NO, KC_ENT, KC_NO),
	[numbers] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NUM, KC_PEQL, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_1, KC_LGUI, KC_LSFT, KC_LCTL, KC_RALT, KC_6, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_NO, KC_LGUI, KC_TAB, KC_BSPC, KC_ENT, KC_P0, KC_P1, KC_P2, KC_P3, KC_SLSH, KC_NO, KC_NO, KC_NO, KC_NO),
	[symbols] = LAYOUT_split_3x5_2(KC_1, KC_2, KC_HASH, KC_4, KC_5, KC_PEQL, KC_QUOT, KC_COLN, KC_SCLN, KC_PPLS, KC_TAB, KC_LGUI, KC_LSFT, KC_LCTL, KC_CIRC, KC_PAST, KC_LPRN, KC_LCBR, KC_LBRC, KC_PMNS, KC_NO, KC_NO, KC_BSLS, KC_PIPE, KC_AMPR, KC_TILD, KC_RPRN, KC_RCBR, KC_RBRC, KC_UNDS, MO(extend), KC_LSFT, KC_NO, MO(symbols))
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




