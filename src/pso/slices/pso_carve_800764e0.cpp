#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjTombstone__sub_80075DA8(void *);
M2C_UNK TObjTombstone__sub_800762F0(void *, s32, s32);
M2C_UNK fn_801569F4();
extern M2C_UNK __vt__13TObjTombstone[];
extern s32 lbl_805D289C;
extern u32 lbl_805D4E48;
extern s32 lbl_805D53A0;
extern s32 lbl_805D53AC;

void *TObjTombstone__sub_800764E0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    fn_801569F4();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTombstone;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D289C;
    if ((u32) lbl_805D4E48 == 0U) {
        return arg0;
    }
    TObjTombstone__sub_800762F0(arg0, arg2, arg3);
    TObjTombstone__sub_80075DA8(arg0);
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    if ((s32) lbl_805D53A0 != (s32) lbl_805D53AC) {
        M2C_FIELD(arg0, s32 *, 0x234) = 1;
    }
    return arg0;
}

}
