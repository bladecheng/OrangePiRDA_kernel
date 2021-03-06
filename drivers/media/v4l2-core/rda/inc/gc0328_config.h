#ifndef _GC0328_CFG_H_
#define _GC0328_CFG_H_

#include "rda_sensor.h"
#include <linux/delay.h>

#ifdef BIT
#undef BIT
#endif
#define BIT	8

static struct sensor_reg exp_gc0328[][3] =
{
	{{0xfe,0x01,BIT,0},{0x13,0x50,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x60,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x70,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x78,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x80,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0x90,BIT,0},{0xfe,0x00,BIT,0}},
	{{0xfe,0x01,BIT,0},{0x13,0xa0,BIT,0},{0xfe,0x00,BIT,0}},
};

static struct sensor_reg awb_gc0328[][4] =
{
	{{0x42,0xfd,BIT,0},{0x77,0x57,BIT,0},{0x78,0x4d,BIT,0},{0x79,0x45,BIT,0}},//OFF
	{{0x42,0xfe,BIT,0},{0x77,0x57,BIT,0},{0x78,0x4d,BIT,0},{0x79,0x45,BIT,0}},//AUTO
	{{0x42,0xfd,BIT,0},{0x77,0x48,BIT,0},{0x78,0x40,BIT,0},{0x79,0x5c,BIT,0}},//INCANDESCENT
	{{0x42,0xfd,BIT,0},{0x77,0x40,BIT,0},{0x78,0x42,BIT,0},{0x79,0x50,BIT,0}},//FLUORESCENT
	{{0x42,0xfd,BIT,0},{0x77,0x40,BIT,0},{0x78,0x54,BIT,0},{0x79,0x70,BIT,0}},//TUNGSTEN
	{{0x42,0xfd,BIT,0},{0x77,0x74,BIT,0},{0x78,0x52,BIT,0},{0x79,0x40,BIT,0}},//DAYLIGHT
	{{0x42,0xfd,BIT,0},{0x77,0x8c,BIT,0},{0x78,0x50,BIT,0},{0x79,0x40,BIT,0}},//CLOUD
};

// use this for 640x480 (VGA) capture
static struct sensor_reg vga_gc0328[] =
{
//////////// Set Frame Rate /////////////
	{0xfe,0x00,BIT,0},
	{0x05,0x02,BIT,0},
	{0x06,0x2c,BIT,0}, //HB
	{0x07,0x00,BIT,0},
	{0x08,0x88,BIT,0}, //VB
	{0xfe,0x01,BIT,0},
	{0x29,0x00,BIT,0},
	{0x2a,0x4e,BIT,0}, //step
	{0x2b,0x02,BIT,0},
	{0x2c,0x70,BIT,0},
	{0x2d,0x03,BIT,0},
	{0x2e,0x0c,BIT,0},
	{0x2f,0x03,BIT,0},
	{0x30,0xf6,BIT,0},
	{0x31,0x04,BIT,0},
	{0x32,0xe0,BIT,0},
	{0x33,0x20,BIT,0},
	{0xfe,0x00,BIT,0},
//////////// Set Window /////////////
	{0xfe,0x00,BIT,0},
	{0x59,0x11,BIT,0},// disable subsample
	{0x5a,0x0e,BIT,0},// switch window
	{0x50,0x01,BIT,0},// crop 640x480 //
	{0x51,0x00,BIT,0},
	{0x52,0x00,BIT,0},
	{0x53,0x00,BIT,0},
	{0x54,0x00,BIT,0},
	{0x55,0x01,BIT,0},
	{0x56,0xe0,BIT,0},// 480
	{0x57,0x02,BIT,0},
	{0x58,0x80,BIT,0},// 640
};

// use this for 320x240 (QVGA) capture
static struct sensor_reg qvga_gc0328[] =
{
//////////// Set Frame Rate /////////////
	{0xfe,0x00,BIT,0},
	{0x05,0x02,BIT,0},
	{0x06,0x2c,BIT,0}, //HB
	{0x07,0x00,BIT,0},
	{0x08,0x88,BIT,0}, //VB
	{0xfe,0x01,BIT,0},
	{0x29,0x00,BIT,0},
	{0x2a,0x4e,BIT,0}, //step
	{0x2b,0x02,BIT,0},
	{0x2c,0x70,BIT,0},
	{0x2d,0x03,BIT,0},
	{0x2e,0x0c,BIT,0},
	{0x2f,0x03,BIT,0},
	{0x30,0xf6,BIT,0},
	{0x31,0x04,BIT,0},
	{0x32,0xe0,BIT,0},
	{0x33,0x20,BIT,0},
	{0xfe,0x00,BIT,0},
//////////// Set Window /////////////
	{0xfe,0x00,BIT,0},
	{0x59,0x22,BIT,0},//subsampleratio=2
	{0x5a,0x03,BIT,0},
	{0x5b,0x00,BIT,0},
	{0x5c,0x00,BIT,0},
	{0x5d,0x00,BIT,0},
	{0x5e,0x00,BIT,0},
	{0x5f,0x00,BIT,0},
	{0x60,0x00,BIT,0},
	{0x61,0x00,BIT,0},
	{0x62,0x00,BIT,0},
	{0x50,0x01,BIT,0},// crop 320x240 //
	{0x51,0x00,BIT,0},
	{0x52,0x00,BIT,0},
	{0x53,0x00,BIT,0},
	{0x54,0x00,BIT,0},
	{0x55,0x00,BIT,0},
	{0x56,0xf0,BIT,0},// 240
	{0x57,0x01,BIT,0},
	{0x58,0x40,BIT,0},// 320
};

// use this for 160x120 (QQVGA) capture
static struct sensor_reg qqvga_gc0328[] =
{
//////////// Set Frame Rate /////////////
	{0xfe,0x00,BIT,0},
	{0x05,0x02,BIT,0},
	{0x06,0x2c,BIT,0}, //HB
	{0x07,0x01,BIT,0},
	{0x08,0x24,BIT,0}, //VB
	{0xfe,0x01,BIT,0},
	{0x29,0x00,BIT,0},
	{0x2a,0x4e,BIT,0}, // step
	{0x2b,0x03,BIT,0},
	{0x2c,0x0c,BIT,0},
	{0x2d,0x03,BIT,0},
	{0x2e,0x0c,BIT,0},
	{0x2f,0x03,BIT,0},
	{0x30,0x0c,BIT,0},
	{0x31,0x04,BIT,0},
	{0x32,0xe0,BIT,0},
	{0x33,0x00,BIT,0},
	{0xfe,0x00,BIT,0},
//////////// Set Window /////////////
	{0xfe,0x00,BIT,0},
	{0x59,0x44,BIT,0},//subsampleratio=4 //
	{0x5a,0x03,BIT,0},
	{0x5b,0x00,BIT,0},
	{0x5c,0x00,BIT,0},
	{0x5d,0x00,BIT,0},
	{0x5e,0x00,BIT,0},
	{0x5f,0x00,BIT,0},
	{0x60,0x00,BIT,0},
	{0x61,0x00,BIT,0},
	{0x62,0x00,BIT,0},
	{0x50,0x01,BIT,0},// crop 160x120 start //
	{0x51,0x00,BIT,0},
	{0x52,0x00,BIT,0},
	{0x53,0x00,BIT,0},
	{0x54,0x00,BIT,0},
	{0x55,0x00,BIT,0},
	{0x56,0x78,BIT,0},// 120
	{0x57,0x00,BIT,0},
	{0x58,0xa0,BIT,0},// 160
};

// use this for 176x144 (QCIF) capture
static struct sensor_reg qcif_gc0328[] =
{
	{0xfe,0x00,BIT,0},
	{0x59,0x33,BIT,0},//subsampleratio=3
	{0x5a,0x03,BIT,0},
	{0x5b,0x00,BIT,0},
	{0x5c,0x00,BIT,0},
	{0x5d,0x00,BIT,0},
	{0x5e,0x00,BIT,0},
	{0x5f,0x00,BIT,0},
	{0x60,0x00,BIT,0},
	{0x61,0x00,BIT,0},
	{0x62,0x00,BIT,0},
	{0x50,0x01,BIT,0},// crop 176x144 //
	{0x51,0x00,BIT,0},
	{0x52,0x00,BIT,0},
	{0x53,0x00,BIT,0},
	{0x54,0x00,BIT,0},
	{0x55,0x00,BIT,0},
	{0x56,0x90,BIT,0},// 144
	{0x57,0x00,BIT,0},
	{0x58,0xb0,BIT,0},// 176
};

// use this for init sensor
static struct sensor_reg init_gc0328[] =
{
	{0xfe,0x80,BIT,0},
	{0xfe,0x80,BIT,0},
	{0xfc,0x16,BIT,0},
	{0xfc,0x16,BIT,0},
	{0xfc,0x16,BIT,0},
	{0xfc,0x16,BIT,0},

	{0xfe,0x00,BIT,0},
	{0x4f,0x00,BIT,0},
	{0x42,0x00,BIT,0},
	{0x03,0x00,BIT,0},
	{0x04,0xc0,BIT,0},
	{0x77,0x62,BIT,0},
	{0x78,0x40,BIT,0},
	{0x79,0x4d,BIT,0},

	{0xfe,0x01,BIT,0},
	{0x4f,0x00,BIT,0},
	{0x4c,0x01,BIT,0},
	{0xfe,0x00,BIT,0},
	//////////////////////////////
	///////////AWB///////////
	////////////////////////////////
	{0xfe,0x01,BIT,0},
	{0x51,0x80,BIT,0},
	{0x52,0x12,BIT,0},
	{0x53,0x80,BIT,0},
	{0x54,0x60,BIT,0},
	{0x55,0x01,BIT,0},
	{0x56,0x06,BIT,0},
	{0x5b,0x02,BIT,0},
	{0xb1,0xdc,BIT,0},
	{0xb2,0xdc,BIT,0},
	{0x7c,0x71,BIT,0},
	{0x7d,0x00,BIT,0},
	{0x76,0x00,BIT,0},
	{0x79,0x20,BIT,0},
	{0x7b,0x00,BIT,0},
	{0x70,0xFF,BIT,0},
	{0x71,0x00,BIT,0},
	{0x72,0x10,BIT,0},
	{0x73,0x40,BIT,0},
	{0x74,0x40,BIT,0},
	////AWB//
	{0x50,0x00,BIT,0},
	{0xfe,0x01,BIT,0},
	{0x4f,0x00,BIT,0},
	{0x4c,0x01,BIT,0},
	{0x4f,0x00,BIT,0},
	{0x4f,0x00,BIT,0},
	{0x4f,0x00,BIT,0},
	{0x4d,0x36,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4d,0x46,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4e,0x02,BIT,0},
	{0x4d,0x53,BIT,0},
	{0x4e,0x08,BIT,0},
	{0x4e,0x04,BIT,0},
	{0x4e,0x04,BIT,0},
	{0x4d,0x63,BIT,0},
	{0x4e,0x08,BIT,0},
	{0x4e,0x08,BIT,0},
	{0x4d,0x82,BIT,0},
	{0x4e,0x20,BIT,0},
	{0x4e,0x20,BIT,0},
	{0x4d,0x92,BIT,0},
	{0x4e,0x40,BIT,0},
	{0x4d,0xa2,BIT,0},
	{0x4e,0x40,BIT,0},
	{0x4f,0x01,BIT,0},

	{0x50,0x88,BIT,0},
	{0xfe,0x00,BIT,0},
	////////////////////////////////////////////////
	//////////// BLK //////////////////////
	////////////////////////////////////////////////
	{0x27,0x00,BIT,0},
	{0x2a,0x40,BIT,0},
	{0x2b,0x40,BIT,0},
	{0x2c,0x40,BIT,0},
	{0x2d,0x40,BIT,0},
	//////////////////////////////////////////////
	////////// page 0 ////////////////////////
	//////////////////////////////////////////////
	{0xfe,0x00,BIT,0},
	{0x05,0x00,BIT,0},
	{0x06,0xde,BIT,0},
	{0x07,0x00,BIT,0},
	{0x08,0xa7,BIT,0},

	{0x0d,0x01,BIT,0},
	{0x0e,0xe8,BIT,0},
	{0x0f,0x02,BIT,0},
	{0x10,0x88,BIT,0},
	{0x09,0x00,BIT,0},
	{0x0a,0x00,BIT,0},
	{0x0b,0x00,BIT,0},
	{0x0c,0x00,BIT,0},
	{0x16,0x00,BIT,0},
	{0x17,0x14,BIT,0},
	{0x18,0x0e,BIT,0},
	{0x19,0x06,BIT,0},

	{0x1b,0x48,BIT,0},
	{0x1f,0xC8,BIT,0},
	{0x20,0x01,BIT,0},
	{0x21,0x78,BIT,0},
	{0x22,0xb0,BIT,0},
	{0x23,0x06,BIT,0},
	{0x24,0x11,BIT,0},
	{0x26,0x00,BIT,0},

	{0x50,0x01,BIT,0}, //crop mode
	//global gain for range
	{0x70,0x85,BIT,0},
	////////////////////////////////////////////////
	//////////// block enable /////////////
	////////////////////////////////////////////////
	{0x40,0x7f,BIT,0},
	{0x41,0x24,BIT,0},
	{0x42,0xff,BIT,0},
	{0x45,0x00,BIT,0},
	{0x44,0x02,BIT,0},
	{0x46,0x03,BIT,0},//[0] VSYNC polarity 0x02

	{0x4b,0x01,BIT,0},
	{0x50,0x01,BIT,0},
	//DN & EEINTP
	{0x7e,0x0a,BIT,0},
	{0x7f,0x03,BIT,0},
	{0x81,0x15,BIT,0},
	{0x82,0x85,BIT,0},
	{0x83,0x02,BIT,0},
	{0x84,0xe5,BIT,0},
	{0x90,0xac,BIT,0},
	{0x92,0x02,BIT,0},
	{0x94,0x02,BIT,0},
	{0x95,0x54,BIT,0},
	///////YCP
	{0xd1,0x32,BIT,0},
	{0xd2,0x32,BIT,0},
	{0xdd,0x58,BIT,0},
	{0xde,0x36,BIT,0},
	{0xe4,0x88,BIT,0},
	{0xe5,0x40,BIT,0},
	{0xd7,0x0e,BIT,0},
	/////////////////////////////
	//////////////// GAMMA //////
	/////////////////////////////
	//rgb gamma
	{0xfe,0x00,BIT,0},
	{0xbf,0x08,BIT,0},
	{0xc0,0x10,BIT,0},
	{0xc1,0x22,BIT,0},
	{0xc2,0x32,BIT,0},
	{0xc3,0x43,BIT,0},
	{0xc4,0x50,BIT,0},
	{0xc5,0x5e,BIT,0},
	{0xc6,0x78,BIT,0},
	{0xc7,0x90,BIT,0},
	{0xc8,0xa6,BIT,0},
	{0xc9,0xb9,BIT,0},
	{0xca,0xc9,BIT,0},
	{0xcb,0xd6,BIT,0},
	{0xcc,0xe0,BIT,0},
	{0xcd,0xee,BIT,0},
	{0xce,0xf8,BIT,0},
	{0xcf,0xff,BIT,0},
	///Y gamma
	{0xfe,0x00,BIT,0},
	{0x63,0x00,BIT,0},
	{0x64,0x05,BIT,0},
	{0x65,0x0b,BIT,0},
	{0x66,0x19,BIT,0},
	{0x67,0x2e,BIT,0},
	{0x68,0x40,BIT,0},
	{0x69,0x54,BIT,0},
	{0x6a,0x66,BIT,0},
	{0x6b,0x86,BIT,0},
	{0x6c,0xa7,BIT,0},
	{0x6d,0xc6,BIT,0},
	{0x6e,0xe4,BIT,0},
	{0x6f,0xFF,BIT,0},
	//////ASDE
	{0xfe,0x01,BIT,0},
	{0x18,0x02,BIT,0},
	{0xfe,0x00,BIT,0},
	{0x98,0x00,BIT,0},
	{0x9b,0x20,BIT,0},
	{0x9c,0x80,BIT,0},
	{0xa4,0x10,BIT,0},
	{0xa8,0xB0,BIT,0},
	{0xaa,0x40,BIT,0},
	{0xa2,0x23,BIT,0},
	{0xad,0x01,BIT,0},
	//////////////////////////////////////////////
	////////// AEC ////////////////////////
	//////////////////////////////////////////////
	{0xfe,0x01,BIT,0},
	{0x9c,0x02,BIT,0},
	{0x08,0xa0,BIT,0},
	{0x09,0xe8,BIT,0},

	{0x10,0x00,BIT,0},
	{0x11,0x11,BIT,0},
	{0x12,0x10,BIT,0},
	{0x13,0x80,BIT,0},
	{0x15,0xfc,BIT,0},
	{0x18,0x03,BIT,0},
	{0x21,0xc0,BIT,0},
	{0x22,0x60,BIT,0},
	{0x23,0x30,BIT,0},
	{0x25,0x00,BIT,0},
	{0x24,0x14,BIT,0},
	//////////////////////////////////////
	////////////LSC//////////////////////
	//////////////////////////////////////
	//gc0328 Alight lsc reg setting list
	////Record date: 2013-04-01 15:59:05
	{0xfe,0x01,BIT,0},
	{0xc0,0x0d,BIT,0},
	{0xc1,0x05,BIT,0},
	{0xc2,0x00,BIT,0},
	{0xc6,0x07,BIT,0},
	{0xc7,0x03,BIT,0},
	{0xc8,0x01,BIT,0},
	{0xba,0x19,BIT,0},
	{0xbb,0x10,BIT,0},
	{0xbc,0x0a,BIT,0},
	{0xb4,0x19,BIT,0},
	{0xb5,0x0d,BIT,0},
	{0xb6,0x09,BIT,0},
	{0xc3,0x00,BIT,0},
	{0xc4,0x00,BIT,0},
	{0xc5,0x0e,BIT,0},
	{0xc9,0x00,BIT,0},
	{0xca,0x00,BIT,0},
	{0xcb,0x00,BIT,0},
	{0xbd,0x07,BIT,0},
	{0xbe,0x00,BIT,0},
	{0xbf,0x0e,BIT,0},
	{0xb7,0x09,BIT,0},
	{0xb8,0x00,BIT,0},
	{0xb9,0x0d,BIT,0},
	{0xa8,0x01,BIT,0},
	{0xa9,0x00,BIT,0},
	{0xaa,0x03,BIT,0},
	{0xab,0x02,BIT,0},
	{0xac,0x05,BIT,0},
	{0xad,0x0c,BIT,0},
	{0xae,0x03,BIT,0},
	{0xaf,0x00,BIT,0},
	{0xb0,0x04,BIT,0},
	{0xb1,0x04,BIT,0},
	{0xb2,0x03,BIT,0},
	{0xb3,0x08,BIT,0},
	{0xa4,0x00,BIT,0},
	{0xa5,0x00,BIT,0},
	{0xa6,0x00,BIT,0},
	{0xa7,0x00,BIT,0},
	{0xa1,0x3c,BIT,0},
	{0xa2,0x50,BIT,0},
	{0xfe,0x00,BIT,0},
	///cct
	{0xB1,0x02,BIT,0},
	{0xB2,0x02,BIT,0},
	{0xB3,0x07,BIT,0},
	{0xB4,0xf0,BIT,0},
	{0xB5,0x05,BIT,0},
	{0xB6,0xf0,BIT,200},

	{0xfe,0x00,BIT,0},
	{0x27,0xf7,BIT,0},
	{0x28,0x7F,BIT,0},
	{0x29,0x20,BIT,0},
	{0x33,0x20,BIT,0},
	{0x34,0x20,BIT,0},
	{0x35,0x20,BIT,0},
	{0x36,0x20,BIT,0},
	{0x32,0x08,BIT,0},

	{0x47,0x00,BIT,0},
	{0x48,0x00,BIT,0},

	{0xfe,0x01,BIT,0},
	{0x79,0x00,BIT,0},
	{0x7d,0x00,BIT,0},
	{0x50,0x88,BIT,0},
	{0x5b,0x04,BIT,0},
	{0x76,0x8f,BIT,0},
	{0x80,0x70,BIT,0},
	{0x81,0x70,BIT,0},
	{0x82,0xb0,BIT,0},
	{0x70,0xff,BIT,0},
	{0x71,0x00,BIT,0},
	{0x72,0x10,BIT,0},
	{0x73,0x40,BIT,0},
	{0x74,0x40,BIT,0},

	{0xfe,0x00,BIT,0},
	{0x70,0x45,BIT,0},
	{0x4f,0x01,BIT,0},
	{0xf1,0x07,BIT,0},

	{0xf2,0x01,BIT,0},
};

static struct sensor_reg_list gc0328_init = {
	.size = ARRAY_ROW(init_gc0328),
	.val = init_gc0328
};

static struct sensor_reg_list gc0328_vga = {
	.size = ARRAY_ROW(vga_gc0328),
	.val = vga_gc0328
};
static struct sensor_reg_list gc0328_qvga = {
	.size = ARRAY_ROW(qvga_gc0328),
	.val = qvga_gc0328
};
static struct sensor_reg_list gc0328_qcif = {
	.size = ARRAY_ROW(qcif_gc0328),
	.val = qcif_gc0328
};
static struct sensor_reg_list gc0328_qqvga = {
	.size = ARRAY_ROW(qqvga_gc0328),
	.val = qqvga_gc0328
};
static struct sensor_win_size gc0328_win_size[] = {
	WIN_SIZE("VGA", W_VGA, H_VGA, &gc0328_vga),
	WIN_SIZE("QVGA", W_QVGA, H_QVGA, &gc0328_qvga),
	WIN_SIZE("QCIF", W_QCIF, H_QCIF, &gc0328_qcif),
	WIN_SIZE("QQVGA", W_QQVGA, H_QQVGA, &gc0328_qqvga),
};

static struct sensor_win_cfg gc0328_win_cfg = {
	.num = ARRAY_ROW(gc0328_win_size),
	.win_size = gc0328_win_size
};

static struct sensor_csi_cfg gc0328_csi_cfg = {
	.csi_en = false,
	.d_term_en = 0,
	.c_term_en = 0,
	.dhs_settle = 0,
	.chs_settle = 0,
};

static struct sensor_info gc0328_info = {
	.name		= "gc0328",
	.chip_id	= 0x9d,
	.mclk		= 26,
	.i2c_addr	= 0x21,
	.exp_def	= 0,
	.awb_def	= 1,
	.rst_act_h	= false,
	.pdn_act_h	= true,
	.init		= &gc0328_init,
	.win_cfg	= &gc0328_win_cfg,
	.csi_cfg	= &gc0328_csi_cfg
};

extern void sensor_power_down(bool high, bool acth, int id);
extern void sensor_reset(bool rst, bool acth);
extern void sensor_clock(bool out, int mclk);
extern void sensor_read(const u16 addr, u8 *data, u8 bits);
extern void sensor_write(const u16 addr, const u8 data, u8 bits);
extern void sensor_write_group(struct sensor_reg* reg, u32 size);

static u32 gc0328_power(int id, int mclk, bool rst_h, bool pdn_h)
{
	/* set state to power off */
	sensor_power_down(true, pdn_h, 0);
	mdelay(1);
	sensor_power_down(true, pdn_h, 1);
	mdelay(1);
	sensor_reset(true, rst_h);
	mdelay(1);

	/* power on sequence */
	sensor_clock(true, mclk);
	mdelay(1);
	sensor_power_down(false, pdn_h, id);
	mdelay(1);
	sensor_reset(false, rst_h);
	mdelay(10);

	return 0;
}

static u32 gc0328_get_chipid(void)
{
	u8 chip_id = 0;

	sensor_read(0xf0, &chip_id, BIT);

	return chip_id;
}

static u32 gc0328_get_lum(void)
{
	u8 val = 0;
	u32 ret = 0;

	sensor_write(0xfe, 0x01, BIT);
	sensor_read(0x14, &val, BIT);
	sensor_write(0xfe, 0x00, BIT);

	if (val < 0x50)
		ret = 1;

	return ret;
}

#define GC0328_FLIP_BASE	0x17
#define GC0328_H_FLIP_BIT	0
#define GC0328_V_FLIP_BIT	1
static void gc0328_set_flip(int hv, int flip)
{
	u8 tmp = 0;

	sensor_read(GC0328_FLIP_BASE, &tmp, BIT);

	if (hv) {
		if (flip)
			tmp |= (0x1 << GC0328_V_FLIP_BIT);
		else
			tmp &= ~(0x1 << GC0328_V_FLIP_BIT);
	}
	else {
		if (flip)
			tmp |= (0x1 << GC0328_H_FLIP_BIT);
		else
			tmp &= ~(0x1 << GC0328_H_FLIP_BIT);
	}

	sensor_write(GC0328_FLIP_BASE, tmp, BIT);
}

#define GC0328_EXP_ROW		ARRAY_ROW(exp_gc0328)
#define GC0328_EXP_COL		ARRAY_COL(exp_gc0328)
static void gc0328_set_exp(int exp)
{
	int key = exp + (GC0328_EXP_ROW / 2);
	if ((key < 0) || (key > (GC0328_EXP_ROW - 1)))
		return;

	sensor_write_group(exp_gc0328[key], GC0328_EXP_COL);
}

#define GC0328_AWB_ROW		ARRAY_ROW(awb_gc0328)
#define GC0328_AWB_COL		ARRAY_COL(awb_gc0328)
static void gc0328_set_awb(int awb)
{
	if ((awb < 0) || (awb > (GC0328_AWB_ROW - 1)))
		return;

	sensor_write_group(awb_gc0328[awb], GC0328_AWB_COL);
}

static struct sensor_ops gc0328_ops = {
	.power		= gc0328_power,
	.get_chipid	= gc0328_get_chipid,
	.get_lum	= gc0328_get_lum,
	.set_flip	= gc0328_set_flip,
	.set_exp	= gc0328_set_exp,
	.set_awb	= gc0328_set_awb,
	.start		= NULL,
	.stop		= NULL
};

struct sensor_dev gc0328_dev = {
	.info	= &gc0328_info,
	.ops	= &gc0328_ops,
};

#undef BIT
#endif
