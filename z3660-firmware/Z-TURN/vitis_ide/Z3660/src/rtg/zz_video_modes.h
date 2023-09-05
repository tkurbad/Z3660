#ifndef ZZ_VIDEO_MODES_H
#define ZZ_VIDEO_MODES_H
enum zz_video_modes {
	ZZVMODE_1280x720,
	ZZVMODE_800x600,
	ZZVMODE_640x480,
	ZZVMODE_1024x768,
	ZZVMODE_1280x1024,
	ZZVMODE_1920x1080_60,
	ZZVMODE_720x576,		// 50Hz
	ZZVMODE_1920x1080_50,	// 50Hz
	ZZVMODE_720x480,
	ZZVMODE_640x512,
	ZZVMODE_1600x1200,
	ZZVMODE_2560x1440_30,
	ZZVMODE_720x576_NS_PAL,		// Non-standard "50Hz" (PAL Amiga)
	ZZVMODE_720x480_NS_PAL,		// Non-standard "60Hz" (PAL Amiga)
	ZZVMODE_720x576_NS_NTSC,	// Non-standard "50Hz" (NTSC Amiga)
	ZZVMODE_720x480_NS_NTSC,	// Non-standard "60Hz" (NTSC Amiga)
	ZZVMODE_640x400,
	ZZVMODE_CUSTOM,
	ZZVMODE_NUM,
};

typedef struct {
	int16_t hres, vres;
	int16_t hstart, hend, hmax;
	int16_t vstart, vend, vmax;
	int16_t polarity;
	int16_t mhz;
	int32_t phz;
	int16_t vhz;
	int16_t hdmi;
	int16_t mul, div, div2;
} zz_video_mode;

enum custom_vmode_params {
	VMODE_PARAM_HRES,
	VMODE_PARAM_VRES,
	VMODE_PARAM_HSTART,
	VMODE_PARAM_HEND,
	VMODE_PARAM_HMAX,
	VMODE_PARAM_VSTART,
	VMODE_PARAM_VEND,
	VMODE_PARAM_VMAX,
	VMODE_PARAM_POLARITY,
	VMODE_PARAM_MHZ,
	VMODE_PARAM_PHZ,
	VMODE_PARAM_VHZ,
	VMODE_PARAM_HDMI,
	VMODE_PARAM_MUL,
	VMODE_PARAM_DIV,
	VMODE_PARAM_DIV2,
	VMODE_PARAM_NUM,
};


extern zz_video_mode preset_video_modes[];

#endif // ZZ_VIDEO_MODES_H
