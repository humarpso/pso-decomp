#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800A4774(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80017E6C(void *);
M2C_UNK TObjPlayer__sub_800A6B90(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801564A0(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);

extern const f32 lbl_805D9A10;
extern const f32 lbl_805D9A14;

void TObjPlayer__sub_800A4774(u8 *arg0) {
    s16 temp_r0;

    TBoss1Dragon__sub_80143504();
    TObjPlayer__sub_800A6B90(arg0, 0);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        TObjPlayer__sub_80011734(arg0, 0, lbl_805D9A14);
        break;
    case 1:
        TObjPlayer__sub_80017E6C(arg0);
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * lbl_805D9A10);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * lbl_805D9A10);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 7;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        }
        break;
    case 2:
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734(arg0, 0, lbl_805D9A14);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0x20U) {
            if ((s32) M2C_FIELD(arg0, s16 *, 0x388) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 8);
            }
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF9FF);
            M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        }
        break;
    }
    check_object_collisions__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_801564A0(arg0);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    TObjPlayer__sub_801B4A18(arg0, -1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

}
