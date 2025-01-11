/*******************************************************************************
 * Size: 21 px
 * Bpp: 1
 * Opts: --bpp 1 --size 21 --font C:\Users\Danko\Desktop\AmoledPLUS\assets\Kenyan Coffee Rg.otf -o C:\Users\Danko\Desktop\AmoledPLUS\assets\ui_font_MINI.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_MINI
#define UI_FONT_MINI 1
#endif

#if UI_FONT_MINI

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xcf, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xbd, 0xec,

    /* U+0023 "#" */
    0x1b, 0x9, 0x84, 0xc2, 0x61, 0x23, 0xfd, 0xfc,
    0x64, 0x36, 0x1b, 0x1f, 0xcf, 0xe2, 0x61, 0x21,
    0x90, 0xc8, 0x64, 0x0,

    /* U+0024 "$" */
    0x30, 0xfb, 0xfe, 0x3c, 0x78, 0xf0, 0x70, 0x78,
    0x7c, 0x3e, 0x3c, 0x78, 0xf1, 0xe3, 0xfe, 0xf8,
    0xc0,

    /* U+0025 "%" */
    0xf8, 0xcd, 0x88, 0xd8, 0x8d, 0x98, 0xd9, 0xd,
    0xb0, 0xdb, 0xd, 0xbf, 0xff, 0xff, 0xdb, 0x5,
    0xb0, 0xdb, 0x9, 0xb1, 0x9b, 0x19, 0xb1, 0x1b,
    0x31, 0xf0,

    /* U+0026 "&" */
    0x60, 0xe0, 0xc0, 0xc0, 0xcc, 0xcc, 0x7f, 0x7f,
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xfc,
    0x7c,

    /* U+0027 "'" */
    0xff, 0xf0,

    /* U+0028 "(" */
    0x7f, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0xf7,

    /* U+0029 ")" */
    0xef, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0xfe,

    /* U+002A "*" */
    0x10, 0x23, 0x5b, 0xe3, 0x9f, 0xe4, 0x88, 0x10,

    /* U+002B "+" */
    0x18, 0xc, 0x6, 0x1f, 0xff, 0xf8, 0xc0, 0x60,
    0x30,

    /* U+002C "," */
    0xfd, 0xc0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0xc, 0x21, 0x86, 0x18, 0x61, 0xc, 0x30, 0xc3,
    0x8, 0x61, 0x86, 0x18, 0x61, 0xc, 0x30,

    /* U+0030 "0" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+0031 "1" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x30,

    /* U+0032 "2" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xc3, 0x9e, 0x79,
    0xc3, 0x6, 0x3c, 0x78, 0xf1, 0xff, 0xfe,

    /* U+0033 "3" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xc1, 0x9e, 0x3e,
    0xf, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+0034 "4" */
    0xc0, 0xc0, 0xc0, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xcc, 0xff, 0xff, 0xc, 0xc, 0xc, 0xc,
    0xc,

    /* U+0035 "5" */
    0xff, 0xff, 0x1e, 0x3c, 0x78, 0xf0, 0x7e, 0xfe,
    0xc, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+0036 "6" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0x30, 0x7e, 0xff,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+0037 "7" */
    0xff, 0xf1, 0xc7, 0x18, 0x61, 0x8e, 0x38, 0xc3,
    0x1c, 0x71, 0xc6, 0x18, 0xe0,

    /* U+0038 "8" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xbe, 0x7d,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+0039 "9" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xfe,
    0xfc, 0x18, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+003A ":" */
    0xfc, 0x0, 0xfc,

    /* U+003B ";" */
    0xfc, 0x0, 0xfd, 0xc0,

    /* U+003C "<" */
    0x1, 0x83, 0xcf, 0x9e, 0xc, 0x7, 0xc0, 0xf8,
    0xf, 0x1, 0x80,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x7, 0xff, 0xfe,

    /* U+003E ">" */
    0x80, 0x78, 0xf, 0x1, 0xf0, 0x38, 0x7d, 0xf1,
    0xe0, 0x80, 0x0,

    /* U+003F "?" */
    0x7d, 0xff, 0x1e, 0x3c, 0x60, 0xc1, 0x86, 0x1c,
    0x70, 0xc1, 0x83, 0x0, 0xc, 0x18, 0x30,

    /* U+0040 "@" */
    0x7e, 0xff, 0xc3, 0xc3, 0xc3, 0xdf, 0xdf, 0xdb,
    0xdb, 0xdb, 0xdb, 0xdb, 0xdf, 0xc0, 0xc3, 0xc3,
    0xff, 0x7e,

    /* U+0041 "A" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1f, 0xff, 0xf8, 0xf1, 0xe3, 0xc6,

    /* U+0042 "B" */
    0xfd, 0xff, 0x1e, 0x3c, 0x78, 0xff, 0x7e, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0xfc,

    /* U+0043 "C" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe0, 0xc1,
    0x83, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+0044 "D" */
    0xfd, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0xfc,

    /* U+0045 "E" */
    0xff, 0xf1, 0x8f, 0xff, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x1f, 0xf8,

    /* U+0046 "F" */
    0xff, 0xf1, 0x8f, 0xff, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x18, 0xc0,

    /* U+0047 "G" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0x30, 0x63, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7e,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xff, 0xff, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x3c,
    0xf3, 0xcf, 0x3c, 0xff, 0x78,

    /* U+004B "K" */
    0xcd, 0x9b, 0x76, 0xcd, 0x9f, 0x3c, 0x78, 0xf9,
    0xf3, 0x66, 0xcd, 0xdb, 0xb3, 0x67, 0xce,

    /* U+004C "L" */
    0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x1f, 0xf8,

    /* U+004D "M" */
    0xe3, 0xf1, 0xfd, 0xfe, 0xff, 0x7f, 0xbf, 0xdf,
    0xef, 0xf7, 0xea, 0xf5, 0x7b, 0xbd, 0xde, 0xef,
    0x77, 0xbb, 0xdd, 0x80,

    /* U+004E "N" */
    0xe7, 0xcf, 0x9f, 0x3f, 0x7e, 0xfd, 0xfb, 0xd7,
    0xbf, 0x7e, 0xfd, 0xf9, 0xf3, 0xe7, 0xce,

    /* U+004F "O" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+0050 "P" */
    0xfd, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0xff, 0xf6, 0xc, 0x18, 0x30, 0x60, 0xc0,

    /* U+0051 "Q" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c, 0x18,
    0x18,

    /* U+0052 "R" */
    0xfd, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xfe, 0xff,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc6,

    /* U+0053 "S" */
    0x7d, 0xff, 0x1e, 0x3c, 0x78, 0xf8, 0x3c, 0x3c,
    0x1f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+0054 "T" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0xc3, 0xc, 0x30,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xff, 0x7c,

    /* U+0056 "V" */
    0xe7, 0xe6, 0xe6, 0x66, 0x66, 0x66, 0x66, 0x6e,
    0x6e, 0x6c, 0x7c, 0x7c, 0x3c, 0x3c, 0x3c, 0x3c,
    0x3c,

    /* U+0057 "W" */
    0xef, 0x7e, 0xf7, 0xef, 0x76, 0xf7, 0x6f, 0x66,
    0xf6, 0x6f, 0x66, 0xf6, 0x6f, 0x67, 0xbe, 0x7b,
    0xe7, 0x9e, 0x79, 0xc7, 0x9c, 0x79, 0xc3, 0x9c,
    0x39, 0xc0,

    /* U+0058 "X" */
    0xe6, 0x66, 0x66, 0x66, 0x7e, 0x7c, 0x3c, 0x3c,
    0x3c, 0x3c, 0x7c, 0x7e, 0x6e, 0x66, 0x66, 0xe6,
    0xe7,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xf3, 0x69, 0xe7, 0x9e, 0x78, 0xc3,
    0xc, 0x30, 0xc3, 0xc, 0x30,

    /* U+005A "Z" */
    0x7d, 0xf0, 0xc7, 0x18, 0x63, 0x8e, 0x30, 0xc7,
    0x1c, 0x73, 0x8e, 0x3f, 0xfc,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0xff,

    /* U+005C "\\" */
    0xc3, 0x4, 0x18, 0x61, 0x86, 0x18, 0x20, 0xc3,
    0xc, 0x30, 0x41, 0x86, 0x18, 0x60, 0x83,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0x33, 0x33, 0xff,

    /* U+005E "^" */
    0x18, 0x38, 0x38, 0x3c, 0x6c, 0x64, 0x66, 0xc6,
    0xc2, 0xc3,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0x66, 0x30,

    /* U+0061 "a" */
    0xfb, 0xfc, 0xf3, 0xd, 0xff, 0xf3, 0xcf, 0x3c,
    0xff, 0xfc,

    /* U+0062 "b" */
    0xc3, 0xc, 0x30, 0xfb, 0xfc, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3c, 0xff, 0xfc,

    /* U+0063 "c" */
    0x7b, 0xfc, 0xf3, 0xcf, 0xc, 0x33, 0xcf, 0x3c,
    0xff, 0x78,

    /* U+0064 "d" */
    0xc, 0x30, 0xc3, 0xff, 0xfc, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3c, 0xff, 0xfc,

    /* U+0065 "e" */
    0x7b, 0xfc, 0xf3, 0xcf, 0xff, 0xf0, 0xcf, 0x3c,
    0xff, 0x78,

    /* U+0066 "f" */
    0x3b, 0xd8, 0xcf, 0xfd, 0x8c, 0x63, 0x18, 0xc6,
    0x31, 0x8c, 0x60,

    /* U+0067 "g" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0xff, 0xc, 0x3f, 0xfe,

    /* U+0068 "h" */
    0xc3, 0xc, 0x30, 0xfb, 0xfc, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcf, 0x3c, 0xf3, 0xcc,

    /* U+0069 "i" */
    0xf0, 0xff, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x33, 0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x33, 0xfe,

    /* U+006B "k" */
    0xc3, 0xc, 0x30, 0xcf, 0x6d, 0xbe, 0xf3, 0xcf,
    0x3e, 0xdb, 0x6d, 0xf3, 0xcc,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0xfb, 0xbf, 0xfc, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0xcc, 0xf3, 0x3c, 0xcf, 0x33, 0xcc,
    0xc0,

    /* U+006E "n" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcc,

    /* U+006F "o" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xff, 0x78,

    /* U+0070 "p" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xff, 0xff, 0xc, 0x30,

    /* U+0071 "q" */
    0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xff, 0x7c, 0x30, 0xc3,

    /* U+0072 "r" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0x30, 0xc3, 0xc,
    0x30, 0xc0,

    /* U+0073 "s" */
    0x7b, 0xfc, 0xf3, 0xc3, 0xc7, 0xc7, 0xcf, 0x3c,
    0xff, 0x78,

    /* U+0074 "t" */
    0x66, 0x66, 0xff, 0x66, 0x66, 0x66, 0x66, 0x67,
    0x30,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c,
    0xff, 0x7c,

    /* U+0076 "v" */
    0xcf, 0xdf, 0xb3, 0x66, 0xcd, 0x9b, 0x36, 0x6c,
    0xf1, 0xe3, 0xc3, 0x80,

    /* U+0077 "w" */
    0xce, 0x7d, 0xcf, 0xb9, 0xf5, 0x36, 0xac, 0xd7,
    0x9e, 0xf3, 0xde, 0x7b, 0xcf, 0x79, 0xef, 0x3d,
    0xe7, 0xb8,

    /* U+0078 "x" */
    0xe6, 0xd9, 0xb3, 0x67, 0xc7, 0xe, 0x16, 0x6c,
    0xd9, 0xb3, 0x7c, 0x60,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0x3f,
    0xff, 0xc, 0x3f, 0xfe,

    /* U+007A "z" */
    0xff, 0xc6, 0x63, 0x19, 0x8c, 0x66, 0x31, 0xff,
    0x80,

    /* U+007B "{" */
    0x1c, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x3c, 0xf0, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc7,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xe7, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x73,
    0x98, 0xc6, 0x31, 0x8c, 0x63, 0x1b, 0xdc,

    /* U+007E "~" */
    0x78, 0xff, 0xe3, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 57, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 60, .box_w = 2, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 97, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 10, .adv_w = 145, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 134, .box_w = 7, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 47, .adv_w = 203, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 133, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 50, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 92, .adv_w = 86, .box_w = 4, .box_h = 24, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 104, .adv_w = 86, .box_w = 4, .box_h = 24, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 116, .adv_w = 147, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 124, .adv_w = 166, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 133, .adv_w = 64, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 135, .adv_w = 69, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 136, .adv_w = 64, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 91, .box_w = 6, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 152, .adv_w = 134, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 82, .box_w = 4, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 139, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 131, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 206, .adv_w = 140, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 135, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 134, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 111, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 135, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 134, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 64, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 64, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 303, .adv_w = 166, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 314, .adv_w = 166, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 322, .adv_w = 166, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 333, .adv_w = 129, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 141, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 366, .adv_w = 134, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 136, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 132, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 137, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 98, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 437, .adv_w = 96, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 134, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 463, .adv_w = 140, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 69, .box_w = 2, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 125, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 136, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 97, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 178, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 145, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 134, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 133, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 587, .adv_w = 134, .box_w = 7, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 604, .adv_w = 137, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 133, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 634, .adv_w = 104, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 135, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 125, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 193, .box_w = 12, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 126, .box_w = 8, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 118, .box_w = 6, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 105, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 748, .adv_w = 86, .box_w = 4, .box_h = 24, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 760, .adv_w = 91, .box_w = 6, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 775, .adv_w = 86, .box_w = 4, .box_h = 24, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 787, .adv_w = 152, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 797, .adv_w = 135, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 799, .adv_w = 68, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 14},
    {.bitmap_index = 801, .adv_w = 119, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 123, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 117, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 123, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 847, .adv_w = 117, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 81, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 868, .adv_w = 123, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 880, .adv_w = 126, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 65, .box_w = 2, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 898, .adv_w = 65, .box_w = 4, .box_h = 20, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 908, .adv_w = 122, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 921, .adv_w = 63, .box_w = 2, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 926, .adv_w = 192, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 943, .adv_w = 127, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 120, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 123, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 975, .adv_w = 123, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 987, .adv_w = 113, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 997, .adv_w = 119, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1007, .adv_w = 81, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1016, .adv_w = 126, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 109, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1038, .adv_w = 179, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1056, .adv_w = 113, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 127, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1080, .adv_w = 100, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1089, .adv_w = 89, .box_w = 6, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1107, .adv_w = 76, .box_w = 2, .box_h = 24, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 1113, .adv_w = 89, .box_w = 5, .box_h = 24, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1128, .adv_w = 171, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 7}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 2, 0, 3,
    1, 4, 0, 0, 0, 5, 6, 5,
    7, 8, 0, 9, 8, 10, 11, 8,
    12, 8, 8, 0, 0, 0, 0, 0,
    0, 13, 9, 8, 8, 8, 0, 14,
    15, 0, 0, 11, 16, 17, 0, 0,
    8, 18, 8, 9, 2, 19, 11, 20,
    21, 22, 23, 24, 4, 0, 0, 0,
    0, 0, 25, 26, 26, 27, 26, 28,
    29, 30, 0, 31, 32, 0, 30, 30,
    26, 26, 29, 33, 34, 35, 29, 36,
    37, 38, 29, 39, 4, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 2, 0, 3,
    1, 0, 0, 0, 0, 4, 5, 4,
    6, 3, 7, 8, 3, 9, 10, 3,
    11, 3, 3, 0, 0, 0, 0, 0,
    12, 0, 8, 0, 3, 0, 0, 0,
    3, 0, 0, 13, 0, 0, 0, 0,
    3, 0, 3, 0, 2, 14, 10, 15,
    16, 17, 18, 19, 0, 0, 0, 0,
    0, 0, 20, 0, 21, 21, 21, 22,
    23, 0, 0, 24, 0, 0, 25, 25,
    21, 25, 21, 25, 26, 27, 28, 29,
    30, 31, 32, 33, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    25, 0, 0, 0, -7, -37, 0, 0,
    0, 0, 0, 0, -17, 0, 0, 0,
    0, 0, 0, -5, -21, 0, -4, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, -5, -4,
    -3, -4, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -16,
    -5, 0, 0, -10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -2, 0,
    0, 0, -14, 0, -16, -2, 0, 0,
    0, -16, -9, -8, 0, -17, 0, -1,
    -2, 0, -3, 0, 0, -1, -6, -3,
    -6, -5, 0, -3, 0, -7, 0, 0,
    0, 0, -10, -14, 0, 0, 0, -13,
    0, 0, -17, -6, -3, -10, -17, -9,
    -2, 0, -4, 0, 0, 0, 0, -2,
    0, 0, 0, -13, 0, -18, 0, -7,
    -7, 0, -17, 0, 0, -7, 0, 0,
    0, 0, -20, 0, 0, 0, 0, 0,
    0, -17, -17, -7, -17, 0, -13, -15,
    0, -12, -7, 0, -4, -7, -13, 0,
    0, 0, -2, 0, -7, 0, 0, 0,
    0, 0, 0, 0, -5, -4, -3, -3,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, -5, -5, -5,
    -2, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, -11,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -7,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, -3, 0, 0, -6, -33, -16,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, -23, -19, 0, 0, 0, 0, 0,
    0, -17, 0, 3, 3, 0, 4, 0,
    -2, -3, 0, -4, 0, -3, 0, 0,
    -3, 0, 0, 0, -2, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, -3, -3, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, -6, 0, -15, 0, 0, 0, 0,
    -5, 0, -10, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, -4, 0, 0,
    -2, 0, -3, -6, 0, 0, 0, 0,
    -12, 0, -1, 0, -22, 0, 0, 0,
    0, -5, 0, -15, 0, -12, -11, -9,
    0, -15, 0, -4, -1, 0, -6, 0,
    0, 0, 0, -5, -6, -7, 0, -1,
    0, 0, 0, 0, -31, 0, -22, 0,
    0, 0, 0, 0, 0, -5, 0, -2,
    -1, -4, -3, -7, -3, -3, 0, -2,
    0, -2, 0, 0, -2, 0, 0, 0,
    -2, 0, 0, -4, -5, -16, -17, 0,
    0, -5, 0, 0, 0, 0, -11, 3,
    0, 0, 0, 0, 0, -10, -10, 0,
    -5, 0, -8, -11, -3, -8, -3, 0,
    -7, -8, -7, 0, -3, -4, -9, -6,
    -18, 0, -7, 0, 0, 0, 0, -10,
    0, 3, 0, 0, 5, 0, -5, -7,
    0, -7, 0, -5, -6, 0, -5, 0,
    0, 0, -4, -6, 0, -3, -3, -14,
    -4, -16, 0, -5, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 3, 0, -7,
    -8, 0, -7, 0, -7, -5, 0, -7,
    0, 0, 0, 0, -7, 0, -6, -3,
    0, -10, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, -2, 0, 0, 0, 0,
    -2, -2, 0, -2, 0, 0, -4, 0,
    -2, 0, 0, 0, -2, 0, 0, -3,
    -5, -17, -17, -25, 0, -8, 0, 0,
    0, 0, -20, 0, 5, 4, 2, 5,
    0, -12, -13, 0, -13, 0, -10, -11,
    0, -10, -4, 0, 0, -10, -10, 0,
    0, 0, 0, -19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, -5, 0, -3,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, -2, -1, -2, -2, 0, 0, 0,
    0, -7, 0, 0, -5, 0, -7, 0,
    0, 0, 0, 0, -7, 0, -10, -2,
    -2, -2, -10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, -13, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    3, 0, 0, 0, 0, 4, 0, 0,
    0, 0, 0, -4, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, -3, 0, 0, -8, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, -7, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, -18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -2, 0, -3, 0, 0,
    -3, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, -23, 0, -16, 0, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 1, 0, 0, 0,
    0, -7, 0, 0, -1, -7, -7, 0,
    0, 0, 0, 0, -7, 0, 0, -2,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, 0, -3,
    0, 0, 0, 0, 0, 0, -18, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, -1, 0, 0, 0, -6, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, -2, -2,
    0, -2, 0, 0, 0, 3, 0, 5,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -2, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -3, 0, -3, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 39,
    .right_class_cnt     = 33,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_MINI = {
#else
lv_font_t ui_font_MINI = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 24,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_MINI*/

