/* == Start of generated table == */
/*
 * The following tables are generated by running:
 *
 *   ./gen-emoji-table.py emoji-data.txt
 *
 * on file with this header:
 *
 * # emoji-data.txt
 * # Date: 2020-01-28, 20:52:38 GMT
 * # © 2020 Unicode®, Inc.
 * # Unicode and the Unicode Logo are registered trademarks of Unicode, Inc. in the U.S. and other countries.
 * # For terms of use, see http://www.unicode.org/terms_of_use.html
 * #
 * # Emoji Data for UTS #51
 * # Version: 13.0
 * #
 * # For documentation and usage, see http://www.unicode.org/reports/tr51
 */

#ifndef HB_UNICODE_EMOJI_TABLE_HH
#define HB_UNICODE_EMOJI_TABLE_HH

#include "hb-unicode.hh"

static const uint8_t
_hb_emoji_u8[448] =
{
    0,  0,  0,  0, 33,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 84,118,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  1,  0,  0,  0,  0,  0,  2,  0,  0,  3,
    0,  0,  0,  0,  0,  0,  4,  5,  6,  7,  8,  7,  9, 10, 11,  0,
    0,  0,  0,  0, 12,  0,  0,  0,  0,  0,  0,  0, 13,  0,  0,  0,
    7,  7,  7, 14, 15, 16, 17, 18, 19, 20,  7,  7,  7,  7,  7, 21,
    7,  7,  7,  7, 22, 23,  7,  7,  7, 24,  7, 14,  0, 25,  0, 26,
   27, 28, 29, 14, 30, 31,  7,  7,  7,  7,  7, 14,  0,  0,  0,  0,
    7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 22,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,  1,  0,  2,  0,  0,
    0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0,254,  7,  3,
    0,  0,  0,  0,  0,  4,  0,  0,  0,  0,  0,  0,  0,  0,  0, 56,
  159,255,243,255,255,255,255,255,255,255,255,255,255,255,255,255,
   31,  0,255,255,255,255,255,255, 31,255,  3,  0,  0,  0,  8,  0,
    0,  0, 24,  0,120,  0,  0,  0,  0,  0, 96,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0, 16,  0, 96,  0,  0,  8,  0,  0,  0,  0,
  255,255,255,255,255,255,255,127,  0, 96,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,240,  1, 64,  0,  0,254,  3,  0,224,255,255,
  255,255,255,255, 31,  0,  0,  0,254,127,  0,  0,  0,  0,252,115,
    0,254,255,255,255,255,255,255,255,255,255,255,255,255,255,  3,
  255,255,255,255,255,255,255, 31,192,255,255,255,255,255,255,255,
  255,127,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,127,
    0,  0,224,255,255,255,255,127,  0,112,  0,  0,  0,  0,  0,  0,
    0,127,  0,124,  0,  0,  0,  0,  0,127,  0,  0,  0,192,255,255,
    0,240,255,255,255,255,255,243,159,255,255,255,255,255,255,255,
};

static inline unsigned
_hb_emoji_b4 (const uint8_t* a, unsigned i)
{
  return (a[i>>1]>>((i&1u)<<2))&15u;
}
static inline unsigned
_hb_emoji_b1 (const uint8_t* a, unsigned i)
{
  return (a[i>>3]>>((i&7u)<<0))&1u;
}
static inline uint_fast8_t
_hb_emoji_is_Extended_Pictographic (unsigned u)
{
  return u<131069u?_hb_emoji_b1(192+_hb_emoji_u8,((_hb_emoji_u8[64+(((_hb_emoji_b4(_hb_emoji_u8,u>>6>>4))<<4)+((u>>6)&15u))])<<6)+((u)&63u)):0;
}


#endif /* HB_UNICODE_EMOJI_TABLE_HH */

/* == End of generated table == */
