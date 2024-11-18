/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;
static const unsigned int alpha = 0xff; /* Amount of opacity. 0xff is opaque */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const int user_bh =
    6; /* add an defined amount of pixels to the bar height */

static const char *fonts[] = {
    "Hack Nerd Font Mono:pixelsize=15:antialias=true:autohint=true"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#bbbbbb", "#222222"},
    [SchemeSel] = {"#eeeeee", "#822f77"},
    [SchemeSelHighlight] = {"#f244e9", "#822f77"},
    [SchemeNormHighlight] = {"#f244e9", "#222222"},
    [SchemeOut] = {"#000000", "#efbced"},
};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = {OPAQUE, alpha},
    [SchemeSel] = {OPAQUE, alpha},
    [SchemeOut] = {OPAQUE, alpha},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
