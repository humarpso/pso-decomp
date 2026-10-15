#include "types.h"

extern "C" {

void handle_container_state_3__10TObjPlayerFPv(void* p);
void set_temp_flag10_and_update__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801305E8(void *arg0);
void tick_meseta_counter__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80130630(u8 *arg0);
int rotate_matrix_x(void*, void*);
s32 advance_angle_wrap(void *, s32);
s32 update_trail_slot__11TItemWeaponFPvi(void *, s32);
s32 draw_weapon_model(void *);
int get_player_list__10TObjPlayerFv(void*);

void handle_container_state_3__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 3) { rotate_matrix_x((void*)0, *(void**)((char*)p + 0x1f8)); } }

void set_temp_flag10_and_update__10TObjPlayerFPv(void *arg0) {
    s32 *temp_r31;

    if ((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) {
        temp_r31 = *(s32 **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0xF4)) + 0x2C)) + 0x30)) + 0x30);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x204) == 0) {
            *temp_r31 |= 0x10;
        }
        draw_weapon_model(arg0);
        update_trail_slot__11TItemWeaponFPvi(arg0, 0);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x204) == 0) {
            *temp_r31 &= 0xFFFFFFEF;
        }
    }
}

void TObjPlayer__sub_801305E8(void *arg0) {
    s32 temp_r4;

    temp_r4 = *(s32 *)((s8 *)arg0 + 0x1FC);
    if (temp_r4 > 0xCCC) {
        *(s32 *)((s8 *)arg0 + 0x1FC) = (s32) (temp_r4 - 0xB6);
    }
}

void tick_meseta_counter__10TObjPlayerFPv(void *arg0) {
    s32 temp_r4;

    *(s32 *)((s8 *)arg0 + 0x200) = (s32) (*(s32 *)((s8 *)arg0 + 0x200) + 1);
    if (!(*(s32 *)((s8 *)arg0 + 0x200) & 3)) {
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x1FC);
        if (temp_r4 < 0x3333) {
            *(s32 *)((s8 *)arg0 + 0x1FC) = (s32) (temp_r4 + 0xB6);
        }
    }
}

void TObjPlayer__sub_80130630(u8 *arg0) {
    advance_angle_wrap(arg0 + 0x1F8, *(s32 *)((s8 *)arg0 + 0x1FC));
}

}
