#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_8001DC24();
s32 TCameraCtrl__sub_8006B338();
s32 fn_80104394(void *);
M2C_UNK fn_801043C4(s32, void *);
s32 fn_8010C52C(void *);
M2C_UNK fn_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK fn_80258518(void *, void *);
M2C_UNK fn_802586FC(void *, s32, u8, u8, s32);
s32 fn_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DCF08;

void fn_8025910C(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r31;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    temp_r31 = fn_80104394(arg1);
    fn_802586FC(arg0, temp_r31, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1), fn_8010C52C(arg1));
    fn_801043C4(TLobby__sub_8001DC24(), arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = fn_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (TCameraCtrl__sub_8006B338() <= 2) {
        TWindowSubStatusDisp__sub_802290E0();
        fn_80228F5C(M2C_FIELD(arg1, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x24) = fn_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
    }
    fn_80258518(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

}
