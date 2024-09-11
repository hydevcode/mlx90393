/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-02-14     lgnq         the first version
 */

#ifndef __SENSOR_MELEXIS_MLX90393_H__
#define __SENSOR_MELEXIS_MLX90393_H__

#include "mlx90393.h"


#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif
#undef MLX90393_I2C_ADDRESS
#define MLX90393_I2C_ADDRESS                    0x19 // address pin A0/A1 low(GND), default for Melexis MLX90393

#define MLX90393_CTRL_NOP                       0x10
#define MLX90393_CTRL_RESET                     0x11

int rt_hw_mlx90393_init(const char *name, struct rt_sensor_config *cfg);

#endif
