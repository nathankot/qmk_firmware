#include QMK_KEYBOARD_H

#define BASE_LAYER      0
#define HYPER_LAYER     1
#define GIGA_LAYER      2
#define FN_LAYER        3
#define F_ARROWS_LAYER  4

#define SC2_BASE_LAYER 5
#define SC2_CG_LAYER   6
#define SC2_FN_LAYER   7

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE_LAYER] = LAYOUT_all(
    LT(HYPER_LAYER,KC_TAB),    KC_Q,              KC_W,                  KC_E,                KC_R,                    KC_T,     KC_Y,           KC_U,    KC_I,     KC_O,     KC_P,      KC_BSLASH,          KC_BSPACE,   \
    MT(MOD_LCTL,KC_ESCAPE),    KC_A,              KC_S,                  KC_D,                LT(F_ARROWS_LAYER,KC_F), KC_G,     KC_H,           KC_J,    KC_K,     KC_L,     KC_SCOLON, KC_ENTER,           \
    KC_LSPO,                   KC_Z,              KC_X,                  KC_C,                KC_V,                    KC_B,     KC_N,           KC_M,    KC_COMMA, KC_DOT,   KC_SLASH,  KC_RSPC,            \
    KC_LALT,                   KC_LGUI,           KC_SPACE,              KC_SPACE,            KC_SPACE,                KC_SPACE, MO(GIGA_LAYER), MO(FN_LAYER) \
  ),

  [HYPER_LAYER] = LAYOUT_all(
    KC_TRNS,                   KC_LSFT,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_7,           KC_8,    KC_9,     KC_TRNS,  KC_TRNS,   KC_MINUS,           KC_EQUAL,    \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_4,           KC_5,    KC_6,     KC_TRNS,  KC_QUOTE,  KC_TRNS,            \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_1,           KC_2,    KC_3,     KC_DOT,   KC_TRNS,   KC_TRNS,            \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_0,                KC_0,                    KC_TRNS,  KC_TRNS,        KC_TRNS \
  ),

  [GIGA_LAYER] = LAYOUT_all(
    KC_GRAVE,                  KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_LBRACKET,        KC_RBRACKET, \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS \
  ),

  [FN_LAYER] = LAYOUT_all(
    KC_TRNS,                   KC_MEDIA_REWIND,   KC_MEDIA_FAST_FORWARD, KC_MEDIA_PLAY_PAUSE, RESET,                   KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_LBRACKET,        KC_RBRACKET, \
    KC_TRNS,                   KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,       KC__MUTE,            KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   DF(SC2_BASE_LAYER), \
    RGB_TOG,                   RGB_MODE_SWIRL,    RGB_MODE_BREATHE,      RGB_MODE_RAINBOW,    KC_TRNS,                 KC_TRNS,  RGB_HUI,        RGB_HUD, RGB_SAI,  RGB_SAD,  RGB_VAI,   RGB_VAD,            \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS \
  ),

  [F_ARROWS_LAYER] = LAYOUT_all(
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,     \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_LEFT,        KC_DOWN, KC_UP,    KC_RIGHT, KC_TRNS,   KC_TRNS,            \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS \
  ),

  [SC2_BASE_LAYER] = LAYOUT_all(
    LT(SC2_CG_LAYER,KC_GRAVE), KC_Q,              KC_W,                  KC_E,                KC_R,                    KC_T,     KC_Y,           KC_U,    KC_I,     KC_O,     KC_P,      KC_BSLASH,          KC_BSPACE,   \
    LM(SC2_CG_LAYER,MOD_LCTL), KC_A,              KC_S,                  KC_D,                KC_F,                    KC_G,     KC_H,           KC_J,    KC_K,     KC_L,     KC_SCOLON, KC_ENTER,           \
    LM(SC2_CG_LAYER,MOD_LSFT), KC_Z,              KC_X,                  KC_C,                KC_V,                    KC_B,     KC_N,           KC_M,    KC_COMMA, KC_DOT,   KC_SLASH,  KC_RSFT,            \
    LM(SC2_CG_LAYER,MOD_LALT), KC_LGUI,           KC_SPACE,              KC_SPACE,            KC_SPACE,                KC_SPACE, KC_RGUI,        MO(SC2_FN_LAYER) \
  ),

  [SC2_CG_LAYER] = LAYOUT_all(
    KC_TRNS,                   KC_1,              KC_2,                  KC_3,                KC_4,                    KC_5,     KC_6,           KC_7,    KC_8,     KC_9,     KC_TRNS,   KC_TRNS,            KC_TRNS,     \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            \
    KC_TRNS,                   KC_LGUI,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS \
  ),

  [SC2_FN_LAYER] = LAYOUT_all(
    KC_TRNS,                   KC_MEDIA_REWIND,   KC_MEDIA_FAST_FORWARD, KC_MEDIA_PLAY_PAUSE, KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            KC_TRNS,     \
    KC_TRNS,                   KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,       KC__MUTE,            KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   DF(BASE_LAYER),     \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,            \
    KC_TRNS,                   KC_TRNS,           KC_TRNS,               KC_TRNS,             KC_TRNS,                 KC_TRNS,  KC_TRNS,        KC_TRNS \
  ),

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
