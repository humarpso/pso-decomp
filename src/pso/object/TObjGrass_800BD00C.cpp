#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__9TObjGrassFPv(u8 *arg0);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjEnePanarms__sub_800F5EB4(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8022602C(M2C_UNK);

M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
extern const f32 TObjGrass__data_805D9EB8;

void update__9TObjGrassFPv(u8 *arg0) {
    s16 temp_r4;

    obj_clearFlags30(arg0, 0x04040000);
    TBoss1Dragon__sub_80143504(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
        TObjPlayer__sub_80011734(arg0, 0, TObjGrass__data_805D9EB8);
    }
    update_collisions__10TObjPlayerFPv(arg0);
    TOTrapAncient01__sub_80226578(TObjEnePanarms__sub_800F5EB4(arg0, 0x4003A801), arg0, arg0 + 0x38, 0, 0);
    TObjPlayer__sub_8022602C(-0x200);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x33C);
    M2C_FIELD(arg0, s16 *, 0x33C) = (s16) (temp_r4 - 1);
    if (temp_r4 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFEFF);
        M2C_FIELD(arg0, s16 *, 0x33C) = (s16) M2C_FIELD(arg0, s16 *, 0x33A);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

}
