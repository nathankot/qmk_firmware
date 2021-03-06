#include "satan.h"
#include "action_layer.h"

#define BASE_LAYER     0
#define HYPER_LAYER    1
#define GIGA_LAYER     2
#define FUNCTION_LAYER 3
#define F_ARROWS_LAYER 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE_LAYER] = KEYMAP_HHKB(
    KC_GRAVE, KC_1,              KC_2,                  KC_3,                KC_4,       KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0,           KC_MINUS,          KC_EQUAL,          KC_BSLASH, KC_GRAVE, \
    F(0),     KC_Q,              KC_W,                  KC_E,                KC_R,       KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,           KC_LBRACKET,       KC_RBRACKET,       KC_BSPACE, \
    F(1),     KC_A,              KC_S,                  KC_D,                F(4),       KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCOLON,      KC_QUOTE,          KC_ENTER,          \
    KC_LSPO,  KC_Z,              KC_X,                  KC_C,                KC_V,       KC_B,    KC_N,    KC_M,    KC_COMMA, KC_DOT,   KC_SLASH,       KC_RSPC,           KC_RSPC,           \
    KC_NO,    KC_LALT,           KC_LGUI,               KC_SPACE,            KC_SPACE,   F(3),    F(2),    KC_NO                                                                                                   \
  ),

  [HYPER_LAYER] = KEYMAP_HHKB(
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           KC_TRNS,           KC_TRNS,   KC_TRNS,  \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_7,    KC_8,    KC_9,     KC_MINUS, KC_EQUAL,       KC_TRNS,           KC_BSPACE,         KC_TRNS,   \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_4,    KC_5,    KC_6,     KC_GRAVE, KC_BSLASH,      KC_TRNS,           KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_1,    KC_2,    KC_3,     KC_DOT,   KC_QUOTE,       KC_TRNS,           KC_TRNS, \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_0,                KC_0,       KC_TRNS, KC_TRNS, KC_TRNS                                                                                                 \
  ),

  [GIGA_LAYER] = KEYMAP_HHKB(
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           KC_TRNS,           KC_TRNS,   KC_TRNS,  \
    KC_GRAVE, LSFT(KC_1),        LSFT(KC_2),            LSFT(KC_3),          LSFT(KC_4), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        RGUI(KC_LBRACKET), RGUI(KC_RBRACKET), KC_TRNS,   \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_QUOTE, LSFT(KC_QUOTE), KC_TRNS,           KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS                                                                                                 \
  ),

  [FUNCTION_LAYER] = KEYMAP_HHKB(
    KC_TRNS,  KC_F1,             KC_F2,                 KC_F3,               KC_F4,      KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_TRNS,        KC_TRNS,           KC_TRNS,           KC_TRNS,   RESET,    \
    KC_TRNS,  KC_MEDIA_REWIND,   KC_MEDIA_FAST_FORWARD, KC_MEDIA_PLAY_PAUSE, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_F14,   KC_F15,         KC_TRNS,           KC_TRNS,           KC_TRNS,   \
    KC_TRNS,  KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,       KC__MUTE,            KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS                                                                                                 \
  ),

  [F_ARROWS_LAYER] = KEYMAP_HHKB(
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           KC_TRNS,           KC_TRNS,   KC_TRNS,  \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           KC_TRNS,           KC_TRNS,   \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,    KC_RIGHT, KC_TRNS,        KC_TRNS,           KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS                                                                                                 \
  ),

};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TAP_KEY(HYPER_LAYER, KC_TAB), // Tab on tap, hyper on hold
  [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESCAPE), // Esc on tap, control on hold
  [2] = ACTION_LAYER_MOMENTARY(FUNCTION_LAYER), // Fn key
  [3] = ACTION_LAYER_MOMENTARY(GIGA_LAYER), // Giga key
  [4] = ACTION_LAYER_TAP_KEY(F_ARROWS_LAYER, KC_F)
};
