/* sound/soc/samsung/i2s.h
 *
 * ALSA SoC Audio Layer - Samsung I2S Controller driver
 *
 * Copyright (c) 2010 Samsung Electronics Co. Ltd.
 *	Jaswinder Singh <jassi.brar@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __SND_SOC_SAMSUNG_I2S_H
#define __SND_SOC_SAMSUNG_I2S_H

/*
 * Maximum number of I2S blocks that any SoC can have.
 * The secondary interface of a CPU dai(if there exists any),
 * is indexed at [cpu-dai's ID + SAMSUNG_I2S_SECOFF]
 */
#define SAMSUNG_I2S_SECOFF	4

#define SAMSUNG_I2S_DIV_BCLK	1
#define SAMSUNG_I2S_DIV_RCLK		2
#define SAMSUNG_I2S_DIV_PRESCALER	3 //lpq

#define S3C6410_IISPSR_PSREN		(1 << 15)
#define S3C6410_IISMOD_RCLK_256FS	(0 << 3)
#define S3C6410_IISMOD_RCLK_512FS	(1 << 3)
#define S3C6410_IISMOD_RCLK_384FS	(2 << 3)
#define S3C6410_IISMOD_RCLK_768FS	(3 << 3)
#define S3C6410_IISMOD_RCLK_MASK 	(3 << 3)
#define S3C6410_IISMOD_BCLK_32FS	(0 << 1)
#define S3C6410_IISMOD_BCLK_48FS	(1 << 1)
#define S3C6410_IISMOD_BCLK_16FS	(2 << 1)
#define S3C6410_IISMOD_BCLK_24FS	(3 << 1)
#define S3C6410_IISMOD_BCLK_MASK	(3 << 1)


#define SAMSUNG_I2S_RCLKSRC_0	0
#define SAMSUNG_I2S_RCLKSRC_1	1
#define SAMSUNG_I2S_CDCLK		2
#define SAMSUNG_I2S_RCLKO		3

#endif /* __SND_SOC_SAMSUNG_I2S_H */
