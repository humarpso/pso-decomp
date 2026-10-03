#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void* init_vtable_1f8__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_803270E8(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80327140(int a0, void* a1);
void fire_spread_attack__10TObjPlayerFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK fire_shot_at_target__11TItemWeaponFv(void *, s32, M2C_UNK, M2C_UNK);
int TObjPlayer__sub_80120D50(void);
s16 get_field_2b8__14TItemProShieldFPv(s32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
s16 obj_getS16_32C(s32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);

    extern unsigned char lbl_804ED390[];
    extern const float lbl_805DF680;
void* init_vtable_1f8__10TObjPlayerFPv(void* a0, M2C_UNK _w1, void * _w2) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804ED390; *(float*)((char*)a0 + 0x1f8) = lbl_805DF680; return a0; }

    extern const float lbl_805DF690;

u8 *TObjPlayer__sub_803270E8(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_vtable_1f8__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void TObjPlayer__sub_80327140(int a0, void* a1) { *(float*)((char*)a1 + 0x3c) = lbl_805DF690; *(int*)((char*)a1 + 0x78) = 474; }

void fire_spread_attack__10TObjPlayerFPv(void *arg0) {
    s32 temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        temp_r31 = (s16) get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, s32 *, 0xF0));
        if ((s32) ((s16) obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0)) * 8) < temp_r31) {
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, -0x238E);
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, -0x11C7);
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0x11C7);
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0x238E);
            play_sound_effect(0x4001A642, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            return;
        }
        update_active_game_effect__10TObjPlayerFPv(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}
