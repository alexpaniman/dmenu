/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 600;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = { "Fira Code Medium:size=12" };
static const char *prompt  = NULL;      /* -p option; prompt to the left of input field */


// Really just background color
static const char* const background = "#2B2127";

// Text color, should be easily distinguishable from background
static const char* const text_color = "#ffffff";

// Color for selected item
static const char* const selected_item_color = "#AB9DF2";

// Selected letter color for selected item
static const char* const text_on_selected = "#F38D70";

// Selected letter color for not selected items
static const char* const not_selected_items_color = "#F38D70";

// Color for items on the left and right sides of selected item
static const char* const side_color = "#2F213F";


static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { text_color, background },
	[SchemeSel] = { background, selected_item_color },
	[SchemeSelHighlight] = { background, text_on_selected },
	[SchemeNormHighlight] = { text_color, not_selected_items_color },
	[SchemeOut] = { text_color, text_on_selected },
	[SchemeMid] = { text_color, side_color },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 22;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;  /* -bw option; to add border width */
