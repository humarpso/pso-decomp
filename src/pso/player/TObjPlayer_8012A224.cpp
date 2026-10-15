#include "types.h"

extern "C" {

void s_rank_windmill_turn_blade(void* p);
void s_rank_windmill_draw(void *arg0);
void s_rank_windmill_slow_down(void *arg0);
void s_rank_windmill_speed_up(void *arg0);
void s_rank_windmill_spin(u8 *arg0);
int rotate_matrix_x(void*, void*);
s32 advance_angle_wrap(void *, s32);
s32 update_trail_slot__11TItemWeaponFPvi(void *, s32);
s32 draw_weapon_model(void *);
int get_player_list__10TObjPlayerFv(void*);

void s_rank_windmill_turn_blade(void* p) { if (get_player_list__10TObjPlayerFv(p) == 3) { rotate_matrix_x((void*)0, *(void**)((char*)p + 0x1fc)); } }

void s_rank_windmill_draw(void *arg0) {
    s32 *temp_r31;

    if ((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) {
        temp_r31 = *(s32 **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0xF4)) + 0x2C)) + 0x30)) + 0x30);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x208) == 0) {
            *temp_r31 |= 0x10;
        }
        draw_weapon_model(arg0);
        update_trail_slot__11TItemWeaponFPvi(arg0, 0);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x208) == 0) {
            *temp_r31 &= 0xFFFFFFEF;
        }
    }
}

void s_rank_windmill_slow_down(void *arg0) {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)arg0 + 0x200);
    if (temp_r4 > 0xCCC) {
        *(s32 *)((s8 *)arg0 + 0x200) = (s32) (temp_r4 - 0xB6);
    }
}

void s_rank_windmill_speed_up(void *arg0) {
    s32 temp_r4;

    *(s32 *)((s8 *)arg0 + 0x204) = (s32) (*(s32 *)((s8 *)arg0 + 0x204) + 1);
    if (!(*(s32 *)((s8 *)arg0 + 0x204) & 3)) {
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x200);
        if (temp_r4 < 0x3333) {
            *(s32 *)((s8 *)arg0 + 0x200) = (s32) (temp_r4 + 0xB6);
        }
    }
}

void s_rank_windmill_spin(u8 *arg0) {
    advance_angle_wrap(arg0 + 0x1FC, *(s32 *)((s8 *)arg0 + 0x200));
}

}
