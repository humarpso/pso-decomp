#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK disallow_rendering__7TObjectFv(u32);
s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_801A7E4C();
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
u32 TAdMcSelectGC__sub_8032A0A4(s32);
extern u32 lbl_805D55D4;
extern s32 tl_03;

void TQuestVmDownLoadServer__sub_801F7D50(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) == 0U) {
        fn_801A7E4C();
        u32 temp_r3 = lbl_805D55D4;
        if (temp_r3 != 0U) {
            disallow_rendering__7TObjectFv(temp_r3);
        }
        M2C_FIELD(arg0, u32 *, 0x29C) = TAdMcSelectGC__sub_8032A0A4(tl_03);
    }
    M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    TQuestVmDownLoadServer__sub_801F6E08(arg0, fn_80132F2C(0x29, 1), 1);
}

}
