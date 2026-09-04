#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_atp__10TObjPlayerFPvs(void* p, s16 v);
void cast_tech_gibarta__10TObjPlayerFPv(void *arg0);
void notify_container_if_mode1__10TObjPlayerFPv(void* p);
void update_state_1fc__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80122748(void *arg0);
s32 rand__11TOBoss4RockFv();
int TObjContainerIdo__sub_803D96A8(void*, void*);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_8011E618(void *);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
int get_player_list__10TObjPlayerFv(void*);
s32 get_tp__10TObjPlayerFPv(void *);
M2C_UNK create_ex__11TTecGiBartaFPvPvPvPv(void *, M2C_UNK *, s32, s32);

void set_atp__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x1cc) = v; }
void cast_tech_gibarta__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 0, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create_ex__11TTecGiBartaFPvPvPvPv(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), get_tp__10TObjPlayerFPv(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}
void notify_container_if_mode1__10TObjPlayerFPv(void* p) { if (get_player_list__10TObjPlayerFv(p) == 1) { TObjContainerIdo__sub_803D96A8((void*)0, *(void**)((char*)p + 0x1f8)); } }

extern M2C_UNK lbl_8043E870;
extern f32 lbl_805DACF0;
extern f32 lbl_805DACF4;

void update_state_1fc__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 3) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) && ((lbl_805DACF0 * (f32) rand__11TOBoss4RockFv()) < lbl_805DACF4)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

void TObjPlayer__sub_80122748(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1FC);
    if ((temp_r0 == 1) || (temp_r0 == 0)) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 2;
    }
}

}
