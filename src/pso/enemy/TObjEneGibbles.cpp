#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneGibbles__sub_802D7E3C(void);
int TObjEneGibbles__sub_802D7F94(void *, int);
void TObjEneGibbles__sub_802D8034(void);
void set_motion__14TObjEneGibblesFPv(void *arg0);
void sync_state__14TObjEneGibblesFPv(void *arg0);
void update_action_state__14TObjEneGibblesFPv(u8 *arg0);
void update_move_state__14TObjEneGibblesFPv(void *arg0);
void update_position__14TObjEneGibblesFPv(u8 *arg0);
void update_shadow_height__14TObjEneGibblesFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TObjPlayer__sub_80011734(void *, int, f32);
M2C_UNK TObjPlayer__sub_801564A0(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 calc_boss4_scale__10TObjPlayerFi(void *, int);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK clamp_angle__14TObjEneGibblesFPvi(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

void TObjEneGibbles__sub_802D7E3C(void) {  }
void update_shadow_height__14TObjEneGibblesFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

extern const f32 TObjEneGibbles__data_805DE7E8;

void update_position__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;

    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneGibbles__data_805DE7E8);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 2:
    case 6:
    case 0xA:
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + M2C_FIELD(arg0, f32 *, 0x38C));
        break;
    }
}

int TObjEneGibbles__sub_802D7F94(void *, int) { return 0; }

void TObjEneGibbles__sub_802D8034(void) {  }
void sync_state__14TObjEneGibblesFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380);
    switch (temp_r0) {
    case 0x0:
        break;
    default:
        update_move_state__14TObjEneGibblesFPv((void *)(arg0));
    case 0x107:
    case 0x10E:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 4) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != (s32) M2C_FIELD(arg0, s32 *, 0x380)) {
                M2C_FIELD(arg0, s32 *, 0x384) = M2C_FIELD(arg0, s32 *, 0x380);
            }
        }
        break;
    }
}

extern M2C_UNK TObjEneGibbles__data_80472790;
extern f32 lbl_805DE80C;

void update_move_state__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r6;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x38A);
    temp_r6 = M2C_FIELD(arg0, s16 *, 0x388);
    if (temp_r0 == temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x101;
        return;
    }
    if ((lbl_805DE80C * (f32) temp_r0) < (f32) temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x102;
        return;
    }
    if (temp_r6 > 0) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x103;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
}

void set_motion__14TObjEneGibblesFPv(void *arg0) {
    void *temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9) {
        M2C_FIELD(arg0, s16 *, 0x326) = 9;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

extern const f32 TObjEneGibbles__data_805DE7E4;

void update_action_state__14TObjEneGibblesFPv(u8 *arg0) {
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
        TBoss3Volopt__sub_8022675C(TObjEneGibbles__sub_802D7F94((void *)((void *) (arg0)), (int)((int) (0x3AD34))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
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
