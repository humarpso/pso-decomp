#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneGibbles__sub_802D82D8(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjEneGibbles__sub_802D7F94(void *, int);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
M2C_UNK TObjPlayer__sub_801564A0(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
f32 calc_boss4_scale__10TObjPlayerFi(void *, int);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK clamp_angle__14TObjEneGibblesFPvi(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

extern const f32 TObjEneGibbles__data_805DE7E4;

void TObjEneGibbles__sub_802D82D8(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;

    TBoss1Dragon__sub_80143504();
    clamp_angle__14TObjEneGibblesFPvi((void *) (arg0), (int) (0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        TBoss3Volopt__sub_8022675C(TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3AD34)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjEneGibbles__data_805DE7E4;
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjEneGibbles__data_805DE7E4;
        TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
        break;
    case 3:
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            TObjPlayer__sub_80011734((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF9FF);
        temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFBFFFFFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0), (int) (temp_r4)) < M2C_FIELD(arg0, f32 *, 0x398)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 6;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 0x90);
        }
        break;
    }
    check_object_collisions__10TObjPlayerFPv((void *) (arg0));
    TObjPlayer__sub_801564A0((void *) (arg0));
    update_enemy_collision_flags__10TObjPlayerFPv((void *) (arg0));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

}
