#include "types.h"

extern "C" {

void s_rank_shot_open_spread(u8 *arg0);
void s_rank_shot_close_spread(u8 *arg0);
void* init_s_rank_shot(void* a0);
s32 add_angle_clamped__10TObjPlayerFPlll(void *, s32, s32);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);
int construct_srank_weapon(void);

void s_rank_shot_open_spread(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x200) < 0x2000) {
        add_angle_clamped__10TObjPlayerFPlll(arg0 + 0x200, 0x2D8, 0x2000);
    }
}

void s_rank_shot_close_spread(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x200) > 0) {
        add_angle_clamped__10TObjPlayerFPlll(arg0 + 0x200, -0x2000, 0);
    }
}

    extern unsigned char create_gun_shot[];
    extern unsigned char s_rank_shot_weapon_vtable[];
    extern const float lbl_805DAE40;
void* init_s_rank_shot(void* a0) { construct_srank_weapon(); *(int*)((char*)a0 + 0x18) = (int)s_rank_shot_weapon_vtable; *(int*)((char*)a0 + 0x200) = 8192; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(int*)((char*)a0 + 0x1f0) = (int)create_gun_shot; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE40; return a0; }

}
