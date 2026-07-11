#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK fn_800C7860(void *, s32);
M2C_UNK fn_800D8ACC(s32, M2C_UNK *, s32, void *, s32);
M2C_UNK fn_800D9168(void *);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_80483BB8[];
extern s32 TBoss3VoloptHiraisin__data_805D4C80;
extern s32 lbl_805D4C88;

void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r4_2;

    fn_800D8ACC(lbl_805D4C88, lbl_80483BB8, TObjFish__sub_8001EDB0(TBoss3VoloptHiraisin__data_805D4C80, 0x10), arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
    fn_800D9168(arg0 + 0x2FC);
    fn_8022675C(0x4001C112, arg0 + 0x38, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s16 *, 0x33E) = temp_r4;
    M2C_FIELD(arg0, s16 *, 0x32C) = temp_r4;
    temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r4_2 & ~0xA00);
    fn_800C7860(arg0, temp_r4_2);
}

}
