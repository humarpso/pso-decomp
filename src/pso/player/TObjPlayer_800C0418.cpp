#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800C0418(u8 *arg0);
void TObjPlayer__sub_800C04DC(void *arg0);
void TObjPlayer__sub_800C055C(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_800F06B4(M2C_UNK, M2C_UNK);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK fn_800BFCA0(void *);
f32 fn_801315A0(void *, s32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);

extern const f32 lbl_805D9F50;

void TObjPlayer__sub_800C0418(u8 *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
    if (M2C_FIELD(arg0, s16 *, 0x374) & 2) {
        obj_clearFlags30(arg0, 0x23F);
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 4) {
        M2C_FIELD(arg0, s16 *, 0x326) = 4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 6;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x2D4));
        if ((temp_r3 != 0) && !(fn_801315A0(arg0 + 0x38, temp_r3 + 0x38) < lbl_805D9F50)) {
            M2C_FIELD(arg0, s16 *, 0x374) = (s16) (M2C_FIELD(arg0, s16 *, 0x374) | 2);
            fn_800BFCA0(arg0);
        }
        TBoss3Volopt__sub_8022675C((void*)TObjPlayer__sub_800F06B4(0x3B10F, 5), arg0 + 0x38, 0, 0);
    }
}

extern f32 lbl_805D9F4C;

void TObjPlayer__sub_800C04DC(void *arg0) {
    s16 temp_r4;

    TBoss1Dragon__sub_80143504();
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        TObjPlayer__sub_80011734(arg0, 0, lbl_805D9F4C);
    }
    update_collisions__10TObjPlayerFPv(arg0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
}

void TObjPlayer__sub_800C055C(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFF9FFFFF);
    }
}

}
