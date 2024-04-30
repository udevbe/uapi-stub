/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
/*
 * Copyright (c) 1999-2002 Vojtech Pavlik
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 */
#ifndef _UAPI_INPUT_H
#define _UAPI_INPUT_H

#include "input-event-codes.h"

/*
 * Protocol version.
 */

#define EV_VERSION		0x010001

/*
 * IDs.
 */

#define ID_BUS			0
#define ID_VENDOR		1
#define ID_PRODUCT		2
#define ID_VERSION		3

#define BUS_PCI			0x01
#define BUS_ISAPNP		0x02
#define BUS_USB			0x03
#define BUS_HIL			0x04
#define BUS_BLUETOOTH		0x05
#define BUS_VIRTUAL		0x06

#define BUS_ISA			0x10
#define BUS_I8042		0x11
#define BUS_XTKBD		0x12
#define BUS_RS232		0x13
#define BUS_GAMEPORT		0x14
#define BUS_PARPORT		0x15
#define BUS_AMIGA		0x16
#define BUS_ADB			0x17
#define BUS_I2C			0x18
#define BUS_HOST		0x19
#define BUS_GSC			0x1A
#define BUS_ATARI		0x1B
#define BUS_SPI			0x1C
#define BUS_RMI			0x1D
#define BUS_CEC			0x1E
#define BUS_INTEL_ISHTP		0x1F
#define BUS_AMD_SFH		0x20

/*
 * MT_TOOL types
 */
#define MT_TOOL_FINGER		0x00
#define MT_TOOL_PEN		0x01
#define MT_TOOL_PALM		0x02
#define MT_TOOL_DIAL		0x0a
#define MT_TOOL_MAX		0x0f

/*
 * Values describing the status of a force-feedback effect
 */
#define FF_STATUS_STOPPED	0x00
#define FF_STATUS_PLAYING	0x01
#define FF_STATUS_MAX		0x01

/*
 * Force feedback effect types
 */

#define FF_RUMBLE	0x50
#define FF_PERIODIC	0x51
#define FF_CONSTANT	0x52
#define FF_SPRING	0x53
#define FF_FRICTION	0x54
#define FF_DAMPER	0x55
#define FF_INERTIA	0x56
#define FF_RAMP		0x57

#define FF_EFFECT_MIN	FF_RUMBLE
#define FF_EFFECT_MAX	FF_RAMP

/*
 * Force feedback periodic effect types
 */

#define FF_SQUARE	0x58
#define FF_TRIANGLE	0x59
#define FF_SINE		0x5a
#define FF_SAW_UP	0x5b
#define FF_SAW_DOWN	0x5c
#define FF_CUSTOM	0x5d

#define FF_WAVEFORM_MIN	FF_SQUARE
#define FF_WAVEFORM_MAX	FF_CUSTOM

/*
 * Set ff device properties
 */

#define FF_GAIN		0x60
#define FF_AUTOCENTER	0x61

/*
 * ff->playback(effect_id = FF_GAIN) is the first effect_id to
 * cause a collision with another ff method, in this case ff->set_gain().
 * Therefore the greatest safe value for effect_id is FF_GAIN - 1,
 * and thus the total number of effects should never exceed FF_GAIN.
 */
#define FF_MAX_EFFECTS	FF_GAIN

#define FF_MAX		0x7f
#define FF_CNT		(FF_MAX+1)

#endif /* _UAPI_INPUT_H */