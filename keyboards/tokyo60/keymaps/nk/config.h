#pragma once

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    NK
#define PRODUCT         NK Tokyo60
#define DESCRIPTION     No description

#define TAPPING_TERM    200

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define PREVENT_STUCK_MODIFIERS

#define TAPPING_TERM 80
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD

#endif
