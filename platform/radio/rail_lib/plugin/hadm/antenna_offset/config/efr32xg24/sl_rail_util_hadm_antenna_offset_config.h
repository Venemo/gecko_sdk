/***************************************************************************//**
 * @file
 * @brief
 *******************************************************************************
 * # License
 * <b>Copyright 2023 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef SL_RAIL_UTIL_HADM_ANTENNA_OFFSET_CONFIG_H
#define SL_RAIL_UTIL_HADM_ANTENNA_OFFSET_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

// <<< Use Configuration Wizard in Context Menu >>>

// <h> HADM Antenna Offset Configuration
// <o SL_RAIL_UTIL_HADM_ANTENNA_COUNT> Number of available antennas <1..4>
// <d> 1
#define SL_RAIL_UTIL_HADM_ANTENNA_COUNT                     1

// <a.1 SL_RAIL_UTIL_HADM_ANTENNA_OFFSET_WIRELESS_CM> Antenna wireless offset array in centimeters <-32768..32767>
// <d> { 0 }
#define SL_RAIL_UTIL_HADM_ANTENNA_OFFSET_WIRELESS_CM        { 0 }

// <a.1 SL_RAIL_UTIL_HADM_ANTENNA_OFFSET_WIRED_CM> Antenna wired offset array in centimeters <-32768..32767>
// <d> { 0 }
#define SL_RAIL_UTIL_HADM_ANTENNA_OFFSET_WIRED_CM           { 0 }
// </h>

// <<< end of configuration section >>>

#ifdef __cplusplus
}
#endif

#endif // SL_RAIL_UTIL_HADM_ANTENNA_OFFSET_CONFIG_H
