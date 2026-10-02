#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800E9DC8 { u8 pad0[0x60]; s32 f60; u8 pad1[0x390 - 0x64]; s32 f390; u8 pad2[0x3C4 - 0x394]; s32 f3C4; };

extern "C" {
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TObjEneSlimeOne__sub_800EC428(void *, f32 *, f32);
s32 angle_difference_abs(s32, s32);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
extern const f64 lbl_8043D280[];
extern const f32 lbl_805DA728;
void TObjPlayer__sub_800E9DC8(Obj_800E9DC8 *arg0);
}

extern "C" {

void TObjPlayer__sub_800E9D7C(void* p);
void begin_appear__15TObjEneSlimeOneFPv(void* p);
void update_water_bomb_timer__15TObjEneSlimeOneFPv(u8 *arg0);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK spawn_particle_effect(void *, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
int TObjEneSlimeOne__sub_800EC7F4(void*, void*);
M2C_UNK create__21TObjEneSlimeWaterBombFPvPv(void *, void *);
s32 is_timer_active__15TObjEneSlimeOneFPv(void *);
int set_display_mode__15TObjEneSlimeOneFPvi(void*, void*);
int set_random_timer__15TObjEneSlimeOneFPvii(void*, void*, void*);

void update_water_bomb_timer__15TObjEneSlimeOneFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s32 *, 0x394) = (s32) (M2C_FIELD(arg0, s32 *, 0x394) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394);
    if (temp_r0 > 0) {
        spawn_particle_effect(arg0 + 0x2FC, 0xFF);
    } else if (temp_r0 == 0) {
        play_sound_effect(0x4003A017, arg0 + 0x38, 0, 0);
        spawn_particle_effect(arg0 + 0x2FC, 0xE2);
        create__21TObjEneSlimeWaterBombFPvPv(arg0, arg0);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x390) - 1;
    M2C_FIELD(arg0, s32 *, 0x390) = temp_r0_2;
    if (temp_r0_2 <= 0) {
        if (is_timer_active__15TObjEneSlimeOneFPv(arg0) != 0) {
            TObjEneSlimeOne__sub_800EAE78(arg0, 7);
            return;
        }
        TObjEneSlimeOne__sub_800EAE78(arg0, 5);
    }
}

void begin_appear__15TObjEneSlimeOneFPv(void* p) { *(int*)((char*)p + 0x390) = 90; *(int*)((char*)p + 0x394) = 19; TObjEneSlimeOne__sub_800EC7F4(*(void**)((char*)p + 0x388), (void*)3); set_display_mode__15TObjEneSlimeOneFPvi(p, (void*)2); }

void TObjPlayer__sub_800E9D7C(void* p) { set_random_timer__15TObjEneSlimeOneFPvii(p, (void*)30, (void*)30); TObjEneSlimeOne__sub_800EC7F4(*(void**)((char*)p + 0x388), (void*)0); set_display_mode__15TObjEneSlimeOneFPvi(p, (void*)2); }
void TObjPlayer__sub_800E9DC8(Obj_800E9DC8 *arg0) {
    f32 sp[3];
    s32 r = 0;
    s32 t;
    arg0->f60 = arg0->f60 + arg0->f3C4;
    if (TObjEneSlimeOne__sub_800EC428(arg0, sp, lbl_805DA728) != 0xFFFF) {
        t = (s32) (lbl_8043D280[0] * get_ad_end_text_start__10TObjPlayerFv(sp[0], sp[2]));
        if (angle_difference_abs(arg0->f60, t) < 0x444) {
            arg0->f60 = t;
            r = 1;
        }
    }
    arg0->f390 = arg0->f390 - 1;
    if (r != 0 || arg0->f390 < 0) {
        TObjEneSlimeOne__sub_800EAE78((void *)(arg0), (M2C_UNK)(9));
    }
}

}
