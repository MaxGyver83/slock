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
	[PAM] =    "#9400D3",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* PAM service that's used for authentication */
static const char* pam_service = "login";

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x    y       w       h */
	{ 0,    3,      1,      3 },
	{ 1,    3,      2,      1 },
	{ 0,    5,      8,      1 },
	{ 3,    0,      1,      5 },
	{ 5,    3,      1,      2 },
	{ 7,    3,      1,      2 },
	{ 8,    3,      4,      1 },
	{ 9,    4,      1,      2 },
	{ 11,   4,      1,      2 },
};

/* enable blur */
#define BLUR
/* set blur radius */
static const int blurRadius = 5;
/* enable pixelation */
//#define PIXELATION
/* set pixelation radius */
static const int pixelSize = 0;
