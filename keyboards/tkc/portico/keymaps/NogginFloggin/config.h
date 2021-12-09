#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

// Tap dance interval
#define TAPPING_TERM 200

//Start in NKRO, detect more than 6 keys per scan and set polling rate to 1000Hz
#define FORCE_NKRO
#define QMK_KEYS_PER_SCAN 12
#define USB_POLLING_INTERVAL_MS 1
#endif