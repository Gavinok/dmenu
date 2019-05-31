/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Siji:style=Regular:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char background[]  = "#111314";
static const char foreground[]  = "#B7BBB7";


static const char black1[]      = "#505050";
static const char black2[]      = "#505050";
                                          
                                          
static const char red1[]        = "#fb9fb1";
static const char red2[]        = "#B04C50";
                                          
                                          
static const char green1[]      = "#acc267";
static const char green2[]      = "#acc267";
                                          
                                          
static const char yellow1[]     = "#ddb26f";
static const char yellow2[]     = "#E2995C";
                                          
                                          
static const char blue1[]       = "#66899D";
static const char blue2[]       = "#66899D";
                                          
                                          
static const char magenta1[]    = "#e1a3ee";
static const char magenta2[]    = "#FF99FFf";
                                          
                                          
static const char cyan1[]       = "#53cdbd";
static const char cyan2[]       = "#527C77";
                                          
                                          
static const char white1[]      = "#d0d0d0";
static const char white2[]      = "#f5f5f5";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { blue1, background },
	[SchemeSel] = { red2, background },
	[SchemeOut] = { "#000000", "#8abeb7" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
