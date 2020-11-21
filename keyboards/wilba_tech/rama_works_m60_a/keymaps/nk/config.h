#pragma once

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#undef VENDOR_ID
#define VENDOR_ID       0xFEED
#undef PRODUCT_ID
#define PRODUCT_ID      0x0001
#undef DEVICE_VER
#define DEVICE_VER      0x0001
#undef MANUFACTURER
#define MANUFACTURER    NK
#undef PRODUCT
#define PRODUCT         NK M60
#undef DESCRIPTION
#define DESCRIPTION     No description

#undef RGB_BACKLIGHT_ENABLED
#define RGB_BACKLIGHT_ENABLED 0

#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define PREVENT_STUCK_MODIFIERS
#define TAPPING_TERM 100
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

#endif
