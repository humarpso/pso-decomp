#include "types.h"

extern "C" {

void TAdMcSelectCursorGC__sub_8032A6A4(void);
s32 TAdMcSelectCursorGC__sub_8032A6D8(void* p);
int fn_8023E4B4(void*, void*);

    extern unsigned char lbl_80477118[];
    extern unsigned char lbl_804ED99C[];
    extern int lbl_805D6C90;
void TAdMcSelectCursorGC__sub_8032A6A4(void) { lbl_805D6C90 = (int)lbl_804ED99C; fn_8023E4B4(lbl_80477118, lbl_804ED99C); }

s32 TAdMcSelectCursorGC__sub_8032A6D8(void* p) { return *(s32*)((char*)p + 0x1c); }

}
