#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_800EC39C { u8 pad[0x384]; s32 state; };

struct Obj_800EC6D0 { s32 f0; s32 state; u8 pad8[0x28 - 8]; f32 f28; f32 f2C; f32 f30; };

typedef s32 M2C_UNK;
extern "C" {
s32 find_nearest_hittable_enemy__10TObjPlayerFiPvf(void *, void *, f32);
int TObjEneSlimeOne__sub_800EC428(u8 *arg0, s32 arg1, f32 farg0);
s32 find_nearest_hittable_enemy__10TObjPlayerFiPvf(void *, void *, f32);
int TObjEneSlimeOne__sub_800EC3D0(u8 *arg0, f32 farg0);
s32 TObjEneSlimeOne__sub_800EC39C(O_800EC39C *self);
void advance_animation_playback(s32);
extern s8 lbl_805D52C4;
extern f32 lbl_805D52C0;
extern f32 lbl_805DA760;
void TObjEneSlimeOne__sub_800EC6D0(Obj_800EC6D0 *arg0);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_attack_target__15TObjEneSlimeOneFPv(void* p);
int get_instance__15TObjEneSlimeOneFv(void);
M2C_UNK set_cull_none__8TObjFishFv();
M2C_UNK set_cull_mode_front__8TObjFishFv();
M2C_UNK set_cull_back__8TObjFishFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK func_803e11e8__FUl(u32);
M2C_UNK func_803e11f0__Fv();
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4B54(s32, s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern s32 lbl_80496CC8[];
extern s32 some_id_805c6f74;
void TObjEneSlimeOne__sub_800EC4A0(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjEneRe4Bit__vt103(void);
void TObjEneRe4Bit__vt104(void);
void TObjEneSlimeOne__sub_800EC470(void* p);
s32 __dt__15TObjEneSlimeOneFis(s32 arg0, s16 arg1);
int check_player_field_7cc__15TObjEneSlimeOneFPv(void* p);
void fn_800ECA28(void *arg0, s32 arg1);
s32 get_attack_target__15TObjEneSlimeOneFPv(void* p);
int get_instance__15TObjEneSlimeOneFv(void);
s32 is_reached_target_depth__15TObjEneSlimeOneFPv(void *arg0);
int is_timer_active__15TObjEneSlimeOneFPv(void* p);
int get_validated_attack_stage(void*);
int __dl__FPv();

s32 get_attack_target__15TObjEneSlimeOneFPv(void* p) { return *(s32*)((char*)p + 0x3f4); }

    extern int lbl_805D52B0;

s32 TObjEneSlimeOne__sub_800EC39C(O_800EC39C *self) {
    return self->state == 11 || self->state == 12 || self->state == 13;
}

int get_instance__15TObjEneSlimeOneFv(void) {  return lbl_805D52B0; }

int TObjEneSlimeOne__sub_800EC3D0(u8 *arg0, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = find_nearest_hittable_enemy__10TObjPlayerFiPvf((void *)((void *) (arg0)), (void *)((int) (0)), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

int is_timer_active__15TObjEneSlimeOneFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

int TObjEneSlimeOne__sub_800EC428(u8 *arg0, s32 arg1, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = find_nearest_hittable_enemy__10TObjPlayerFiPvf((void *) (arg0), (void *) (arg1), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

void TObjEneSlimeOne__sub_800EC470(void* p) { *(s32*)((char*)p + 0x3f0) = 0; }

int check_player_field_7cc__15TObjEneSlimeOneFPv(void* p) { return get_validated_attack_stage((char*)p + 0x7cc); }

extern f32 lbl_805D52B8;
extern u8 lbl_805D52BC;
extern f32 lbl_805DA760;

void TObjEneSlimeOne__sub_800EC4A0(u8 *arg0, s32 arg1) {
    s32 state = M2C_FIELD(arg0, s32 *, 4);
    if (state == -1) {
        return;
    }
    if (state < 7) {
        set_global_param__8TObjFishFi(TObjFish__sub_8001EDB0(get_instance__15TObjEneSlimeOneFv(), lbl_80496CC8[get_attack_target__15TObjEneSlimeOneFPv((void*)(M2C_FIELD(arg0, void **, 0)))]));
        if (arg1 != 0) {
            some_id_805c6f74 |= 0x400000;
            func_803e11e8__FUl(1);
            draw__16TObjEneRe7BeruraFPv(M2C_FIELD(arg0, void **, 0));
            func_803e11f0__Fv();
            some_id_805c6f74 &= ~0x400000;
            return;
        }
        set_cull_back__8TObjFishFv();
        func_803e11e8__FUl(2);
        draw__16TObjEneRe7BeruraFPv(M2C_FIELD(arg0, void **, 0));
        set_cull_mode_front__8TObjFishFv();
        draw__16TObjEneRe7BeruraFPv(M2C_FIELD(arg0, void **, 0));
        set_cull_none__8TObjFishFv();
        func_803e11f0__Fv();
        return;
    }
    if (state < 9) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC));
        if (arg1 != 0) {
            some_id_805c6f74 |= 0x400000;
            func_803e11e8__FUl(1);
            TObjEneSlimeOne__sub_803E4B54(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, f32 *, 0x30));
            func_803e11f0__Fv();
            some_id_805c6f74 &= ~0x400000;
            return;
        }
        func_803e11e8__FUl(2);
        set_cull_back__8TObjFishFv();
        TObjEneSlimeOne__sub_803E4B54(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, f32 *, 0x30));
        set_cull_mode_front__8TObjFishFv();
        TObjEneSlimeOne__sub_803E4B54(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, f32 *, 0x30));
        set_cull_none__8TObjFishFv();
        func_803e11f0__Fv();
        return;
    }
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC));
    set_global_flag__10TObjPlayerFv();
    if (arg1 != 0) {
        some_id_805c6f74 |= 0x400000;
        func_803e11e8__FUl(1);
        draw_model_motion(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, f32 *, 0x30));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x1C));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x30));
        func_803e11f0__Fv();
        some_id_805c6f74 &= ~0x400000;
    } else {
        func_803e11e8__FUl(2);
        set_cull_back__8TObjFishFv();
        draw_model_motion(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, f32 *, 0x30));
        set_cull_mode_front__8TObjFishFv();
        draw_model_motion(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, f32 *, 0x30));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x1C));
        set_cull_back__8TObjFishFv();
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x30));
        set_cull_mode_front__8TObjFishFv();
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x30));
        set_cull_none__8TObjFishFv();
        func_803e11f0__Fv();
    }
    clear_global_state__10TObjPlayerFv();
}

void TObjEneSlimeOne__sub_800EC6D0(Obj_800EC6D0 *arg0) {
    s32 s = arg0->state;
    if (s == -1) {
        return;
    }
    if (s < 7) {
        advance_animation_playback(arg0->f0);
    } else if (s < 9) {
        f32 v = arg0->f30 + arg0->f28;
        arg0->f30 = v;
        if (v >= arg0->f2C) {
            arg0->f30 = arg0->f30 - arg0->f2C;
        }
    } else {
        if (lbl_805D52C4 == 0) {
            f32 tmp = arg0->f2C;
            lbl_805D52C4 = 1;
            lbl_805D52C0 = tmp - lbl_805DA760;
        }
        f32 v = arg0->f30 + arg0->f28;
        f32 lim = lbl_805D52C0;
        arg0->f30 = v;
        if (v >= lim) {
            arg0->f30 = lim;
        }
    }
}

s32 is_reached_target_depth__15TObjEneSlimeOneFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == -1) {
        return 1;
    }
    if (temp_r0 < 7) {
        return 0;
    }
    if ((s8) lbl_805D52BC == 0) {
        f32 tmp = M2C_FIELD(arg0, f32 *, 0x2C);
        lbl_805D52BC = 1;
        lbl_805D52B8 = tmp - lbl_805DA760;
    }
    if (M2C_FIELD(arg0, f32 *, 0x30) == lbl_805D52B8) {
        return 1;
    }
    return 0;
}

s32 __dt__15TObjEneSlimeOneFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void fn_800ECA28(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}

void TObjEneRe4Bit__vt104(void) {  }
void TObjEneRe4Bit__vt103(void) {  }

}
