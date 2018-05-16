#include QMK_KEYBOARD_H

#define BASE_LAYER     0
#define HYPER_LAYER    1
#define GIGA_LAYER     2
#define FUNCTION_LAYER 3
#define F_ARROWS_LAYER 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE_LAYER] = LAYOUT_all(
    F(0),     KC_Q,              KC_W,                  KC_E,                KC_R,       KC_T,     KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,           KC_MINUS,          KC_BSPACE,       \
    F(1),     KC_A,              KC_S,                  KC_D,                F(4),       KC_G,     KC_H,    KC_J,    KC_K,     KC_L,     KC_SCOLON,      KC_ENTER,          \
    KC_LSPO,  KC_Z,              KC_X,                  KC_C,                KC_V,       KC_B,     KC_N,    KC_M,    KC_COMMA, KC_DOT,   KC_SLASH,       KC_RSPC,           \
    KC_LALT,  KC_LGUI,           KC_SPACE,              KC_SPACE,            KC_SPACE,   KC_SPACE, F(3),    F(2) \
  ),

  [HYPER_LAYER] = LAYOUT_all(
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_7,    KC_8,    KC_9,     KC_MINUS, KC_EQUAL,       KC_LBRACKET,       KC_RBRACKET, \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_4,    KC_5,    KC_6,     KC_GRAVE, KC_BSLASH,      KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_1,    KC_2,    KC_3,     KC_DOT,   KC_QUOTE,       KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_0,                KC_0,       KC_TRNS,  KC_TRNS, KC_TRNS \
  ),

  [GIGA_LAYER] = LAYOUT_all(
    KC_GRAVE, LSFT(KC_1),        LSFT(KC_2),            LSFT(KC_3),          LSFT(KC_4), KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        RGUI(KC_LBRACKET), RGUI(KC_RBRACKET), \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_QUOTE, LSFT(KC_QUOTE), KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS \
  ),

  [FUNCTION_LAYER] = LAYOUT_all(
    KC_TRNS,  KC_MEDIA_REWIND,   KC_MEDIA_FAST_FORWARD, KC_MEDIA_PLAY_PAUSE, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_F14,   KC_F15,         KC_TRNS,           KC_TRNS,           \
    KC_TRNS,  KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,       KC__MUTE,            KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS \
  ),

  [F_ARROWS_LAYER] = LAYOUT_all(
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_LEFT, KC_DOWN, KC_UP,    KC_RIGHT, KC_TRNS,        KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,           \
    KC_TRNS,  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS \
  ),

};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TAP_KEY(HYPER_LAYER, KC_TAB), // Tab on tap, hyper on hold
  [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESCAPE), // Esc on tap, control on hold
  [2] = ACTION_LAYER_MOMENTARY(FUNCTION_LAYER), // Fn key
  [3] = ACTION_LAYER_MOMENTARY(GIGA_LAYER), // Giga key
  [4] = ACTION_LAYER_TAP_KEY(F_ARROWS_LAYER, KC_F)
};

uint32_t layer_state_set_kb(uint32_t state) {
  // if we are on layer 1
  if (state & (1<<1)){
    // light num lock led
    PORTD |= (1 << PD0);
  }
  else{
    PORTD &= ~(1 << PD0);
  }
  // if we are on layer 2
  if (state & (1<<2)){
    // light caps lock led
    PORTD |= (1 << PD1);
  }
  else{
    PORTD &= ~(1 << PD1);
  }
  // if we are on layer 3
  if (state & (1<<3)){
    // light scroll lock led
    PORTD |= (1 << PD6);
  }
  else{
    PORTD &= ~(1 << PD6);
  }
  return state;
}
