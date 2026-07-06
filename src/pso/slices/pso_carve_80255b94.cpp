#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80244994(void *);
M2C_UNK fn_80246258(void *);
M2C_UNK fn_8024664C(void *);
M2C_UNK TWindowHelpItem__sub_802553F8(void *);
M2C_UNK TWindowHelpItem__sub_80255440(void *);
M2C_UNK fn_80257C28(void *, void *);
M2C_UNK fn_80263A20(void *, s16);
M2C_UNK fn_8026C9C8(s32);
s32 fn_8026C9DC(s32);

void fn_80255B94(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x60) & 1) && (fn_80244994(arg0) != 0) && !(M2C_FIELD(arg0, s32 *, 0x2C) & 4)) {
        if (!(M2C_FIELD(arg0, u8 *, 0x60) & 4)) {
            if (fn_8026C9DC(M2C_FIELD(arg0, s32 *, 0x64)) != 0) {
                TWindowHelpItem__sub_80255440(arg0);
            }
        } else {
            fn_8026C9C8(M2C_FIELD(arg0, s32 *, 0x64));
        }
        TWindowHelpItem__sub_802553F8(arg0);
    }
    fn_8024664C(arg0);
    fn_80246258(arg0);
    fn_80257C28(arg0, arg0 + 0x24);
    if (!(M2C_FIELD(arg0, u8 *, 0x60) & 8)) {
        fn_80263A20(arg0, M2C_FIELD(arg0, s16 *, 0x20));
    }
}

}
