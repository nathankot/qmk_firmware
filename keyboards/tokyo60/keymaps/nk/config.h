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

#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define PREVENT_STUCK_MODIFIERS
#define TAPPING_TERM 100
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

#endif
