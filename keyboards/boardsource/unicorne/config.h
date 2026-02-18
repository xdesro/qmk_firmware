// Copyright 2023 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP22
#define I2C1_SCL_PIN GP23

#ifdef AUDIO_ENABLE
#define TEMPO_DEFAULT 60
#define PLIN_PLIN_PLON SONG( \
    Q__NOTE(_REST), \
    TD_NOTE(_E4), /* grace note */ \
    Q__NOTE(_E5), \
    TD_NOTE(_D4), \
    Q__NOTE(_D5), \
    /* barline */ \
    TD_NOTE(_A3), \
    HD_NOTE(_A4), \
    /* barline */ \
    Q__NOTE(_REST), \
    TD_NOTE(_E4), \
    Q__NOTE(_E5), \
    TD_NOTE(_D4), \
    Q__NOTE(_D5), \
    /* barline */ \
    TD_NOTE(_G4), \
    H__NOTE(_G5), \
    Q__NOTE(_F5), \
    /* barlin */ \
    HD_NOTE(_E5), \
)
#define STARTUP_SONG PLIN_PLIN_PLON
#endif

#define AUDIO_PIN GP28
#define AUDIO_PWM_DRIVER PWMD6
#define AUDIO_INIT_DELAY
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A

#define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
#define ANALOG_JOYSTICK_X_AXIS_PIN GP27
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_INVERT_X
