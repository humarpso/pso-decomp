#ifndef OSFONT_H
#define OSFONT_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define OS_FONT_ROM_SIZE_ANSI 0x03000
#define OS_FONT_ROM_SIZE_SJIS 0x4D000

typedef struct OSFontHeader {
  u16 fontType;
  u16 firstChar;
  u16 lastChar;
  u16 invalChar;
  u16 ascent;
  u16 descent;
  u16 width;
  u16 leading;
  u16 cellWidth;
  u16 cellHeight;
  u32 sheetSize;
  u16 sheetFormat;
  u16 sheetColumn;
  u16 sheetRow;
  u16 sheetWidth;
  u16 sheetHeight;
  u16 widthTable;
  u32 sheetImage;
  u32 sheetFullSize;
  u8 c0;
  u8 c1;
  u8 c2;
  u8 c3;
} OSFontHeader;

#define OS_FONT_ENCODE_NULL -1
#define OS_FONT_ENCODE_ANSI 0u
#define OS_FONT_ENCODE_SJIS 1u
#define OS_FONT_ENCODE_UTF8 3u
#define OS_FONT_ENCODE_UTF16 4u
#define OS_FONT_ENCODE_UTF32 5u
#define OS_FONT_ENCODE_MAX 5u
#define OS_FONT_ENCODE_VOID 0xffffu

#define OS_FONT_PROPORTIONAL FALSE
#define OS_FONT_FIXED TRUE

u16 OSGetFontEncode(void);
u16 OSSetFontEncode(u16 encode);

#ifdef __cplusplus
}
#endif

#endif
