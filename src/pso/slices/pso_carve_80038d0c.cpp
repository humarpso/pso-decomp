#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80036280(void);
M2C_UNK TBoss2Mine__sub_80038BA0(void *, s32);
M2C_UNK fn_800BB804(void *, s32);
M2C_UNK TObjEneDD__ct(void *, s32);
extern void *__vt__10TBoss2Mine[];
extern s32 lbl_805D26D0;

void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4) {
    s32 temp_r3;

    TObjEneDD__ct(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__10TBoss2Mine;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D26D0;
    temp_r3 = fn_80036280();
    if (temp_r3 != 0) {
        fn_800BB804(arg0, temp_r3);
    }
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
    TBoss2Mine__sub_80038BA0(arg0, arg4);
    return arg0;
}

}
