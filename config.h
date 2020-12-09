/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */

#define XYZ
#ifdef XYZ
static int dmx = 0; /* put dmenu at this x offset */
static int dmy = 0; /* put dmenu at this y offset (measured from the bottom if topbar is 0) */
#endif

static const char *fonts[]     = { "Liberation Mono:pixelsize=13:antialias=true:autohint=true", "FontAwesome:size=7" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

#include "../colorschemes/dmenu/current.h"

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]= { NORM, background },
	[SchemeSel] = { background, SEL},
	[SchemeOut] = { SEL, foreground },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
