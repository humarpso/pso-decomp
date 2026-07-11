#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct { char pad[0xBC]; } Buf;
M2C_UNK fn_801E32E8(Buf *, M2C_UNK, s32, M2C_UNK);
M2C_UNK fn_803403F8(Buf *, M2C_UNK);
M2C_UNK TWindowDD__sub_803489B8(s32, Buf *, M2C_UNK);
M2C_UNK TWindowDD__sub_80348A2C(s32, Buf *);
M2C_UNK TWindowDD__sub_80348A9C(Buf *, s32);
M2C_UNK TWindowDD__sub_80348AD4(f32, f32);
s32 TWindowDD__sub_80348AE8(s32);
extern s32 lbl_805D63F0;

void draw__9TWindowDDFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    Buf sp8;
    s32 temp_r31;

    temp_r31 = TWindowDD__sub_80348AE8(lbl_805D63F0);
    TWindowDD__sub_80348AD4(M2C_FIELD(arg0, f32 *, 0x54), farg0);
    fn_803403F8(&sp8, -1);
    TWindowDD__sub_80348A9C(&sp8, arg2);
    TWindowDD__sub_80348A2C(arg1, &sp8);
    TWindowDD__sub_803489B8(arg1, &sp8, 0);
    fn_801E32E8(&sp8, 8, temp_r31, 1);
}

}
