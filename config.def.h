static char *fontfallbacks[] = {
	"Liberation Sans",
	"Noto Color Emoji",
	"Noto Emoji",
   "Noto Sans"
};

#define NUMFONTSCALES 42
#define FONTSZ(x) ((int)(10.0f * powf(1.1288f, (x)))) /* x in [0, NUMFONTSCALES-1] */

static const char *colors[] = {
	"#000000", /* FG (Black) */
	"#FFFFFF", /* BG (White) */
};

static const float linespacing = 1.5f;

/* Maximum screen real-estate available per slide */
static const float usablewidth = 0.75;
static const float usableheight = 0.75;

/*** Mouse shortcuts ***/

static Mousekey mshortcuts[] = {
/*   Button          Function        Argument   */
	{ Button1,        advance,        { .i = +1 }},
	{ Button3,        advance,        { .i = -1 }},
	{ Button4,        advance,        { .i = -1 }},
	{ Button5,        advance,        { .i = +1 }},
};

/*** Keyboard shortcuts ***/

static Shortcut shortcuts[] = {
/*   Keysym          Function        Argument */
	{ XK_Escape,      quit,           { 0 }},
	{ XK_q,           quit,           { 0 }},
	{ XK_Right,       advance,        { .i = +1 }},
	{ XK_Left,        advance,        { .i = -1 }},
	{ XK_Return,      advance,        { .i = +1 }},
	{ XK_space,       advance,        { .i = +1 }},
	{ XK_BackSpace,   advance,        { .i = -1 }},
	{ XK_l,           advance,        { .i = +1 }},
	{ XK_h,           advance,        { .i = -1 }},
	{ XK_j,           advance,        { .i = +1 }},
	{ XK_k,           advance,        { .i = -1 }},
	{ XK_Down,        advance,        { .i = +1 }},
	{ XK_Up,          advance,        { .i = -1 }},
	{ XK_Next,        advance,        { .i = +1 }},
	{ XK_Prior,       advance,        { .i = -1 }},
	{ XK_n,           advance,        { .i = +1 }},
	{ XK_p,           advance,        { .i = -1 }},
	{ XK_r,           reload,         { 0 }},
};

static Filter filters[] = {
	{ "\\.ff$", "cat" },
	{ "\\.ff.bz2$", "bunzip2" },
	{ "\\.[a-z0-9]+$", "2ff" },
};
