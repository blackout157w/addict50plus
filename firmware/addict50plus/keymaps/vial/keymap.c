// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// K E Y M A P S

 /*
  ---------------------------------------------------------------------------------------------------------------
  |         |         |    2    |    3    |         |         |         |         |         |   TO1   |         |
  |   ESC   |    1    |         |         |    4    |    5    |    6    |    7    |         |         |         |
  |         |         |    W    |    E    |         |         |         |         |    I    |    O    |         |
  |   TAB   |    Q    |         |         |    R    |    T    |    Y    |    U    |         |         |    P    |
  |         |         |    S    |    D    |         |         |         |         |    K    |    L    |         |
  |   CAPS  |    A    |         |         |    F    |    G    |    H    |    J    |         |         |    ;    |
  |         |         |    X    |    C    |         |         |         |         |    ,    |    .    |         |
  |   LSFT  |    Z    |         |         |    V    |    B    |    N    |    M    |         |         |    /    |
  |   LGUI  |         |   LCTL  |   LALT  |   SPC   |   MUTE  |         |  LT1ENT |   BSPC  |   DEL   |   MO2   |
  ---------------------------------------------------------------------------------------------------------------*/ 

  [0] = LAYOUT(
                       KC_2,     KC_3,                                                       TO(1),
   KC_ESC,   KC_1,                         KC_4,     KC_5,     KC_6,     KC_7,
                       KC_W,     KC_E,                                             KC_I,     KC_O,
   KC_TAB,   KC_Q,                         KC_R,     KC_T,     KC_Y,     KC_U,                         KC_P,
                       KC_S,     KC_D,                                             KC_K,     KC_L,
   KC_CAPS,  KC_A,                         KC_F,     KC_G,     KC_H,     KC_J,                         KC_SCLN, 
                       KC_X,     KC_C,                                             KC_COMM,  KC_DOT,
   KC_LSFT,  KC_Z,                         KC_V,     KC_B,     KC_N,     KC_M,                         KC_SLSH,
   KC_LGUI,            KC_LCTL,  KC_LALT,  KC_SPC,   KC_MUTE,        LT(1, KC_ENT),KC_BSPC,  KC_DEL,   MO(2)
  ),

 /*
  ---------------------------------------------------------------------------------------------------------------
  |         |         |    2    |    3    |         |         |         |         |         |   TO2   |         |
  |   GRV   |    1    |         |         |    4    |    5    |    6    |    7    |         |         |         |
  |         |         |    UP   |    )    |         |         |         |         |    8    |    9    |         |
  |   TAB   |    (    |         |         |    F1   |    F2   |    F3   |    F4   |         |         |    0    |
  |         |         |   DOWN  |  RIGHT  |         |         |         |         |    [    |    ]    |         |
  |   CAPS  |   LEFT  |         |         |    F5   |    F6   |    F7   |    F8   |         |         |    '    |
  |         |         |    -    |    =    |         |         |         |         |    -    |    UP   |         |
  |   LSFT  |    _    |         |         |    F9   |   F10   |   F11   |   F12   |         |         |    \    |
  |   LGUI  |         |   LCTL  |   LALT  |   SPC   |   MUTE  |         |    NO   |   LEFT  |   DOWN  |  RIGHT  |
  ---------------------------------------------------------------------------------------------------------------*/ 

  [1] = LAYOUT(
                       KC_2,     KC_3,                                                       TO(2),
   KC_GRV,   KC_1,                         KC_4,     KC_5,     KC_6,     KC_7,
                       KC_UP,    KC_RPRN,                                          KC_8,     KC_9,
   KC_TAB,   KC_LPRN,                      KC_F1,    KC_F2,    KC_F3,    KC_F4,                        KC_0,
                       KC_DOWN,  KC_RIGHT,                                         KC_LBRC,  KC_RBRC,
   KC_CAPS,  KC_LEFT,                      KC_F5,    KC_F6,    KC_F7,    KC_F8,                        KC_QUOT, 
                       KC_MINS,  KC_EQL,                                           KC_MINS,  KC_UP,
   KC_LSFT,  KC_INT1,                      KC_F9,    KC_F10,   KC_F11,   KC_F12,                       KC_BSLS,
   KC_LGUI,            KC_LCTL,  KC_LALT,  KC_SPC,   KC_MUTE,            KC_NO,    KC_LEFT,  KC_DOWN,  KC_RIGHT
  ),

 /*
  ---------------------------------------------------------------------------------------------------------------
  |         |         |    NO   |    NO   |         |         |         |         |         |   TO3   |         |
  |   ESC   |    NO   |         |         |   NUM   |    P/   |    P*   |    P-   |         |         |         |
  |         |         |  MOUSEU |  MOUSE2 |         |         |         |         |    NO   |    NO   |         |
  |   TAB   |  MOUSE1 |         |         |    P7   |    P8   |    P9   |    P+   |         |         |    NO   |
  |         |         |  MOUSED |  MOUSER |         |         |         |         |    NO   |    NO   |         |
  |   CAPS  |  MOUSEL |         |         |    P4   |    P5   |    P6   |   CALC  |         |         |    NO   |
  |         |         |  MOUSE3 |  MOUSE5 |         |         |         |         |    NO   |    NO   |         |
  |   LSFT  |  MOUSE4 |         |         |    P1   |    P2   |    P3   |    P.   |         |         |   MO3   |
  |   LGUI  |         |   LCTL  |   LALT  |    P0   |   MUTE  |         |   PENT  |   BSPC  |   DEL   |    NO   |
  ---------------------------------------------------------------------------------------------------------------*/ 

  [2] = LAYOUT( 
                       KC_NO,    KC_NO,                                                      TO(3),
   KC_ESC,   KC_NO,                        KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
                       MS_UP,    MS_BTN2,                                          KC_NO,    KC_NO,
   KC_TAB,   MS_BTN1,                      KC_P7,    KC_P8,    KC_P9,    KC_PPLS,                      KC_NO,
                       MS_DOWN,  MS_RGHT,                                          KC_NO,    KC_NO,
   KC_CAPS,  MS_LEFT,                      KC_P4,    KC_P5,    KC_P6,    KC_CALC,                      KC_NO,
                       MS_BTN3,  MS_BTN5,                                          KC_NO,    KC_NO,
   KC_LSFT,  MS_BTN4,                      KC_P1,    KC_P2,    KC_P3,    KC_PDOT,                      MO(3),
   KC_LGUI,            KC_LCTL,  KC_LALT,  KC_P0,    KC_MUTE,            KC_PENT,  KC_BSPC,  KC_DEL,   KC_NO
  ),

 /*
  ---------------------------------------------------------------------------------------------------------------
  |         |         |   MOD   |   RMOD  |         |         |         |         |         |   TO0   |         |
  |   TOG   |   SPI   |         |         |    NO   |    NO   |    NO   |    NO   |         |         |         |
  |         |         |   HUI   |   HUD   |         |         |         |         |    NO   |    NO   |         |
  |    NO   |   SPD   |         |         |    NO   |    NO   |    NO   |    NO   |         |         |    NO   |
  |         |         |   SAI   |   SAD   |         |         |         |         |    NO   |    NO   |         |
  |    NO   |   VAI   |         |         |    NO   |    NO   |    NO   |    NO   |         |         |    NO   |
  |         |         |    NO   |    NO   |         |         |         |         |    NO   |    NO   |         |
  |    NO   |   VAD   |         |         |    NO   |    NO   |    NO   |    NO   |         |         |    NO   |
  |    NO   |         |    NO   |    NO   |    NO   |   MUTE  |         |    NO   |    NO   |   BOOT  |    NO   |
  ---------------------------------------------------------------------------------------------------------------*/ 

  [3] = LAYOUT( 
                       RGB_MOD,  RGB_RMOD,                                                   TO(0),
   RGB_TOG,  RGB_SPI,                      KC_NO,    KC_NO,    KC_NO,    KC_NO,
                       RGB_HUI,  RGB_HUD,                                          KC_NO,    KC_NO,
   KC_NO,    RGB_SPD,                      KC_NO,    KC_NO,    KC_NO,    KC_NO,                        KC_NO,
                       RGB_SAI,  RGB_SAD,                                          KC_NO,    KC_NO,
   KC_NO,    RGB_VAI,                      KC_NO,    KC_NO,    KC_NO,    KC_NO,                        KC_NO, 
                       KC_NO,    KC_NO,                                            KC_NO,    KC_NO,
   KC_NO,    RGB_VAD,                      KC_NO,    KC_NO,    KC_NO,    KC_NO,                        KC_NO,
   KC_NO,              KC_NO,    KC_NO,    KC_NO,    KC_MUTE,            KC_NO,    KC_NO,    QK_BOOT,  KC_NO
  )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) { 
  int is_layer = get_highest_layer(layer_state|default_layer_state);  
  HSV hsv = {0, 255, rgblight_get_val()};
  if (is_layer == 1) {
    hsv.h = 191; //PURPLE
  } else if (is_layer == 2)  {
    hsv.h = 85; //GREEN
  } else if (is_layer == 3)  {
    hsv.h = 43; //YELLOW
  } else {
    hsv.h = 128; //CYAN
  }
  RGB rgb = hsv_to_rgb(hsv);
  
  for (uint8_t i = led_min; i <= led_max -1; i++) {
      if (HAS_FLAGS(g_led_config.flags[i], 0x02)) {
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
      }
  }

  return false;
}  


