#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__sub_80255B94(u8 *arg0);
void *TWindowHelpItem__sub_80255C64(void *arg0, s16 arg1);
M2C_UNK TWindowHelpItem__sub_802553F8(void *);
M2C_UNK TWindowHelpItem__sub_80255440(void *);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
void __dl__7TObjectFPv(void *);
s32 fn_80244994(void *);
M2C_UNK TWindowDD__sub_8024664C(void *);
void TWindowDD__sub_80246674(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
M2C_UNK fn_80263A20(void *, s16);
M2C_UNK fn_8026C9C8(s32);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
void fn_8026CB08(void *, int);

void TWindowHelpItem__sub_80255B94(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x60) & 1) && (fn_80244994(arg0) != 0) && !(M2C_FIELD(arg0, s32 *, 0x2C) & 4)) {
        if (!(M2C_FIELD(arg0, u8 *, 0x60) & 4)) {
            if (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x64)) != 0) {
                TWindowHelpItem__sub_80255440(arg0);
            }
        } else {
            fn_8026C9C8(M2C_FIELD(arg0, s32 *, 0x64));
        }
        TWindowHelpItem__sub_802553F8(arg0);
    }
    TWindowDD__sub_8024664C(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
    if (!(M2C_FIELD(arg0, u8 *, 0x60) & 8)) {
        fn_80263A20(arg0, M2C_FIELD(arg0, s16 *, 0x20));
    }
}

extern M2C_UNK lbl_804CF8B0[];

void *TWindowHelpItem__sub_80255C64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CF8B0;
        fn_8026CB08(M2C_FIELD(arg0, void **, 0x64), 1);
        TWindowDD__sub_80246674(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
