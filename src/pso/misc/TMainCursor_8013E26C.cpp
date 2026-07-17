#include "types.h"

extern "C" {

void set_sub_cursor_value__11TMainCursorFPvi(void* p, s32 a1);
void TMainCursor__sub_8013E290(void* p, s32 v);
s16 TMainCursor__sub_8013E298(void* p);
s32 TMainCursor__sub_8013E2A0(void* p);
s32 TMainCursor__sub_8013E2A8(void* p);
void TMainCursor__sub_8013E2B0(void* p);
void reset_slot__11TMainCursorFPv(void* p);
void TMainCursor__sub_8013E2CC(void* p, s32 v);
int get_cursor_state__11TMainCursorFv(void);
int TMainCursor__sub_8013E2DC(void);

void set_sub_cursor_value__11TMainCursorFPvi(void* p, s32 a1) { TMainCursor__sub_8013E290((void*)((char*)p + 0x3c), a1); }
void TMainCursor__sub_8013E290(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s16 TMainCursor__sub_8013E298(void* p) { return *(s16*)((char*)p + 0x0); }
s32 TMainCursor__sub_8013E2A0(void* p) { return *(s32*)((char*)p + 0x0); }
s32 TMainCursor__sub_8013E2A8(void* p) { return *(s32*)((char*)p + 0x4); }
void TMainCursor__sub_8013E2B0(void* p) { *(s16*)((char*)p + 0x2) = 0; *(s16*)((char*)p + 0x0) = 0; }
void reset_slot__11TMainCursorFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void TMainCursor__sub_8013E2CC(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

    extern int lbl_805D564C;
int get_cursor_state__11TMainCursorFv(void) {  return lbl_805D564C; }

    extern int lbl_805D5644;
int TMainCursor__sub_8013E2DC(void) {  return lbl_805D5644; }

}
