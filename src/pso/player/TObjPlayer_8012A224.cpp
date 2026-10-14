#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void s_rank_windmill_turn_blade(void* p);
void s_rank_windmill_draw(void *arg0);
void s_rank_windmill_slow_down(void *arg0);
void s_rank_windmill_speed_up(void *arg0);
void s_rank_windmill_spin(u8 *arg0);
int rotate_matrix_x(void*, void*);
M2C_UNK advance_angle_wrap(void *, s32);
M2C_UNK update_trail_slot__11TItemWeaponFPvi(void *, M2C_UNK);
M2C_UNK draw_weapon_model(void *);
int get_player_list__10TObjPlayerFv(void*);

void s_rank_windmill_turn_blade(void* p) { if (get_player_list__10TObjPlayerFv(p) == 3) { rotate_matrix_x((void*)0, *(void**)((char*)p + 0x1fc)); } }

void s_rank_windmill_draw(void *arg0) {
    s32 *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        temp_r31 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF4), void **, 0x2C), void **, 0x30), s32 **, 0x30);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x208) == 0) {
            *temp_r31 |= 0x10;
        }
        draw_weapon_model(arg0);
        update_trail_slot__11TItemWeaponFPvi(arg0, 0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x208) == 0) {
            *temp_r31 &= 0xFFFFFFEF;
        }
    }
}

void s_rank_windmill_slow_down(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x200);
    if (temp_r4 > 0xCCC) {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (temp_r4 - 0xB6);
    }
}

void s_rank_windmill_speed_up(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x204) = (s32) (M2C_FIELD(arg0, s32 *, 0x204) + 1);
    if (!(M2C_FIELD(arg0, s32 *, 0x204) & 3)) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x200);
        if (temp_r4 < 0x3333) {
            M2C_FIELD(arg0, s32 *, 0x200) = (s32) (temp_r4 + 0xB6);
        }
    }
}

void s_rank_windmill_spin(u8 *arg0) {
    advance_angle_wrap(arg0 + 0x1FC, M2C_FIELD(arg0, s32 *, 0x200));
}

}
