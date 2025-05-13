/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#555555",   /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[INPUT_ALT] = "#227799", /* during input, second color */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPSLOCK] = "#FFA500", /* capslock pressed */
	[CAPSLOCK_ALT] = "#FFC722", /* capslock pressed, second color */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
/* grid width and height for right center alignment */
static const int logow = 4;
static const int logoh = 4;

static XRectangle rectangles[16] = {
	/* x    y       w       h */
	{ 0,    0,      1,      1 },
	{ 1,    0,      1,      1 },
	{ 2,    0,      1,      1 },
	{ 3,    0,      1,      1 },
	{ 0,    1,      1,      1 },
	{ 1,    1,      1,      1 },
	{ 2,    1,      1,      1 },
	{ 3,    1,      1,      1 },
	{ 0,    2,      1,      1 },
	{ 1,    2,      1,      1 },
	{ 2,    2,      1,      1 },
	{ 3,    2,      1,      1 },
	{ 0,    3,      1,      1 },
	{ 1,    3,      1,      1 },
	{ 2,    3,      1,      1 },
	{ 3,    3,      1,      1 },
};

/* enable blur */
#define BLUR
/* set blur radius */
static const int blurRadius = 5;
/* enable pixelation */
//#define PIXELATION
/* set pixelation radius */
static const int pixelSize = 0;
