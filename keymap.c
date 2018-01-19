#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define MDIA 2 // media keys
#define MNGM 3 // management keys

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  |  -   |           |      |   6  |   7  |   8  |   9  |   0  |  BSPC  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | TAB    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L3  |   Y  |   U  |   I  |   O  |   P  |   \|   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | ESC    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |; / L2|   '"   |
 * |--------+------+------+------+------+------| BSPC |           |  Del |------+------+------+------+------+--------|
 * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | `~   |      | Alt  | ~L3  | CMD  |                                       | ~L1  | ~L3  | Alt  |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | F15  | F16  |       | F18  |  F19   |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | F17  |       | F20  |        |      |
 *                                 | Space| Ctrl |------|       |------|  CMD   |Enter |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
[BASE] = KEYMAP(
    // left hand
    KC_EQL,  KC_1,        KC_2,    KC_3,     KC_4,   KC_5,   KC_MINS,
    KC_TAB,  KC_Q,        KC_W,    KC_E,     KC_R,   KC_T,   TG(SYMB),
    KC_ESC,  KC_A,        KC_S,    KC_D,     KC_F,   KC_G,
    KC_LSFT, CTL_T(KC_Z), KC_X,    KC_C,     KC_V,   KC_B,   KC_BSPC,
    KC_GRV,  KC_NO,       KC_LALT, MO(MNGM), KC_LGUI,

                                                                 KC_F15,  KC_F16,
                                                                          KC_F17,
                                                         KC_SPC, KC_LCTRL,KC_LCTRL,
    // right hand
    KC_NO,       KC_6,   KC_7,     KC_8,     KC_9,    KC_0,              KC_BSPC,
    TG(MNGM),    KC_Y,   KC_U,     KC_I,     KC_O,    KC_P,              KC_BSLS,
                 KC_H,   KC_J,     KC_K,     KC_L,    LT(MDIA, KC_SCLN), KC_QUOT,
    KC_DELETE,   KC_N,   KC_M,     KC_COMM,  KC_DOT,  KC_SLSH,           KC_RSFT,
                         MO(SYMB), MO(MNGM), KC_LALT, KC_NO,             KC_NO,

    KC_F18, KC_F19,
    KC_F20,
    KC_RCTRL, KC_RGUI, KC_ENT
),
/* Keymap 1: Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  -   |  =   |  +   |  *   |  /   |      |           |      |   |  |   _  |   [  |  ]   |  \   |   F12  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |    ~   |  `   |  '   |  "   |  .   |  ,   |------|           |------|   <  |   >  |   (  |  )   |  :   |   ?    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  !   |  @   |  #   |  $   |  %   |      |           |      |   ^  |   &  |   {  |  }   |  ;   |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = KEYMAP(
    // left hand
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,         KC_F4,   KC_F5,   KC_TRNS,
    KC_TRNS, KC_MINS, KC_EQL,  KC_PLUS,       KC_ASTR, KC_BSLS, KC_TRNS,
    KC_TILD, KC_GRV,  KC_QUOT, LSFT(KC_QUOT), KC_DOT,  KC_COMM,
    KC_TRNS, KC_EXLM, KC_AT,   KC_HASH,       KC_DLR,  KC_PERC, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,

                                                               KC_TRNS, KC_TRNS,
                                                                        KC_TRNS,
                                                       KC_TRNS,KC_TRNS, KC_TRNS,
    // right hand
    KC_TRNS, KC_F6,         KC_F7,        KC_F8,   KC_F9,   KC_F10,  KC_F11,
    KC_TRNS, KC_PIPE,       KC_UNDS,      KC_LBRC, KC_RBRC, KC_BSLS, KC_F12,
             LSFT(KC_COMM), LSFT(KC_DOT), KC_LPRN, KC_RPRN, KC_COLN, LSFT(KC_SLSH),
    KC_TRNS, KC_CIRC,       KC_AMPR,      KC_LCBR, KC_RCBR, KC_SCLN, KC_TRNS,
                            KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
),
/* Keymap 2: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | Up   |      |      |      |           |      | Mute | VolUp| VolDn|      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      | Left | Down | Rght |      |------|           |------| HPR+ | Prev | Play | Next |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// MEDIA
[MDIA] = KEYMAP(
    // left hand
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

                                                               KC_TRNS, KC_TRNS,
                                                                        KC_TRNS,
                                                      KC_TRNS, KC_TRNS, KC_TRNS,
    // right hand
    KC_TRNS,  KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_MUTE,       KC_VOLU, KC_VOLD, KC_TRNS, KC_TRNS, KC_TRNS,
             HYPR(KC_PPLS), KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
),
// MANAGEMENT
// Base layout, but every key HYPER-ed. Used by Hammerspoon config.
[MNGM] = KEYMAP(
    // left hand
    HYPR(KC_EQL), HYPR(KC_1), HYPR(KC_2), HYPR(KC_3), HYPR(KC_4), HYPR(KC_5), KC_TRNS,
    KC_TRNS,      HYPR(KC_Q), HYPR(KC_W), HYPR(KC_E), HYPR(KC_R), HYPR(KC_T), HYPR(KC_GRV),
    KC_TRNS,      HYPR(KC_A), HYPR(KC_S), HYPR(KC_D), HYPR(KC_F), HYPR(KC_G),
    KC_TRNS,      HYPR(KC_Z), HYPR(KC_X), HYPR(KC_C), HYPR(KC_V), HYPR(KC_B), KC_TRNS,
    KC_TRNS,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

                                                               KC_TRNS, KC_TRNS,
                                                                        KC_TRNS,
                                                      KC_TRNS, KC_TRNS, KC_TRNS,
    // right hand
    KC_TRNS, HYPR(KC_6), HYPR(KC_7), HYPR(KC_8),    HYPR(KC_9),   HYPR(KC_0),    KC_TRNS,
    KC_TRNS, HYPR(KC_Y), HYPR(KC_U), HYPR(KC_I),    HYPR(KC_O),   HYPR(KC_P),    HYPR(KC_BSLS),
             HYPR(KC_H), HYPR(KC_J), HYPR(KC_K),    HYPR(KC_L),   HYPR(KC_SCLN), HYPR(KC_QUOT),
    KC_TRNS, HYPR(KC_N), HYPR(KC_M), HYPR(KC_COMM), HYPR(KC_DOT), HYPR(KC_SLSH), KC_TRNS,
                         KC_TRNS,    KC_TRNS,       KC_TRNS,      KC_TRNS,       KC_TRNS,

    KC_TRNS, KC_TRNS,
    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS
)};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB), // FN1 - Momentary Layer 1 (Symbols)
    [3] = ACTION_LAYER_TAP_TOGGLE(MNGM)  // FN3 - Momentary Layer 3 (Management)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    // MACRODOWN only works in this function
    switch(id) {
      case 0:
        if (record->event.pressed) {
          register_code(KC_RSFT);
        } else {
          unregister_code(KC_RSFT);
        }
        break;
    }
    return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }
};
