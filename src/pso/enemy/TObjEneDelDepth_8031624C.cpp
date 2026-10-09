#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
typedef struct Pair_80316488 { s32 a; s32 b; } Pair_80316488;

typedef struct E8_80316488 { s32 a; f32 f; } E8_80316488;

typedef struct E14_80316488 { Pair_80316488 p0; Pair_80316488 p1; f32 f; } E14_80316488;

typedef struct Self_80316488 {
    void *obj;
    s32 id;
    s32 r8;
    s32 rC;
    u8 *r10;
    s32 r14;
    s32 r18;
    u8 *r1C;
    f32 f20;
    f32 f24;
    f32 f28;
} Self_80316488;

typedef struct {
    void *obj;
    s32 frame;
    u8 pad8[0x20 - 0x08];
    f32 step;
    f32 max;
    f32 cur;
} Anim_80316364;

extern "C" {
M2C_UNK TObjFish__sub_8001EDB0(M2C_UNK, int);
M2C_UNK draw__16TObjEneRe7BeruraFPv(int);
M2C_UNK get_data__15TObjEneDelDepthFv();
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_model_motion(int, int, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
void draw_model_part__15TObjEneDelDepthFPv(u8 *arg0);
s32 find_nearest_hittable_enemy__10TObjPlayerFiPvf(void *, void *, f32);
int find_nearest_enemy_with_flag__15TObjEneDelDepthFPvif(u8 *arg0, s32 arg1, f32 farg0);
s32 get_bml_model(M2C_UNK, s32);
M2C_UNK TObjFish__sub_8001EDB0(M2C_UNK, int);
u8 *get_bml_motion(M2C_UNK, s32);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void init__14TObjEnePanarmsFPvPv(void *, s16);
M2C_UNK get_data__15TObjEneDelDepthFv();
extern E8_80316488 lbl_804E8760[];
extern E14_80316488 lbl_804E8780[];
extern const f32 lbl_805DF2EC;
void set_motion__15TObjEneDelDepthFPvi(Self_80316488 *self, s32 arg1);
void advance_animation_playback(void *);
extern f32 lbl_805D6AD0;
extern u8 lbl_805D6AD4;
}

extern "C" {

s32 conditional_delete__15TObjEneDelDepthFis(s32 arg0, s16 arg1);
void fn_80316680(void *arg0, s32 arg1);
int get_flag_bit4__15TObjEneDelDepthFPv(void* p);
s32 get_type__15TObjEneDelDepthFPv(void* p);
s32 is_state_complete__15TObjEneDelDepthFPv(void *arg0);
M2C_UNK __dl__FPv();
f32 get_depth_radius__19TObjEneDelDepthBombFPv(void* p);

int get_flag_bit4__15TObjEneDelDepthFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

int find_nearest_enemy_with_flag__15TObjEneDelDepthFPvif(u8 *arg0, s32 arg1, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = find_nearest_hittable_enemy__10TObjPlayerFiPvf((void *) (arg0), (void *) (arg1), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

s32 get_type__15TObjEneDelDepthFPv(void* p) { return *(s32*)((char*)p + 0x4); }

extern f32 lbl_805D6AC8;
extern u8 TObjEneDelDepth__state_complete_flag;
extern f32 lbl_805DF2E8;

#pragma push
#pragma fp_contract on
void draw_model_part__15TObjEneDelDepthFPv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 != -1) {
        if (temp_r0 < 6) {
            set_global_param__8TObjFishFi(TObjFish__sub_8001EDB0(get_data__15TObjEneDelDepthFv(), 0));
            draw__16TObjEneRe7BeruraFPv((int) (M2C_FIELD(arg0, s32 *, 0)));
            return;
        }
        if (temp_r0 < 0xA) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0xC)));
            set_global_flag__10TObjPlayerFv();
            draw_model_motion((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10)), (f32) (M2C_FIELD(arg0, f32 *, 0x28)));
            clear_global_state__10TObjPlayerFv();
            return;
        }
        set_global_flag__10TObjPlayerFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0xC)));
        draw_model_motion((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (M2C_FIELD(arg0, s32 *, 0x10)), (f32) (M2C_FIELD(arg0, f32 *, 0x28)));
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x18)));
        draw_model_motion((int) (M2C_FIELD(arg0, s32 *, 0x14)), (int) (M2C_FIELD(arg0, s32 *, 0x1C)), (f32) (M2C_FIELD(arg0, f32 *, 0x28)));
        clear_global_state__10TObjPlayerFv();
    }
}
#pragma pop

void update_animation_frame__15TObjEneDelDepthFPv(Anim_80316364 *a) {
    if (a->frame == -1) {
        return;
    }
    if (a->frame < 6) {
        advance_animation_playback(a->obj);
    } else if (a->frame < 10) {
        if ((a->cur += a->step) >= a->max) {
            a->cur -= a->max;
        }
    } else {
        if ((s8)lbl_805D6AD4 == 0) {
            f32 m = a->max;
            lbl_805D6AD4 = 1;
            lbl_805D6AD0 = m - lbl_805DF2E8;
        }
        f32 lim = lbl_805D6AD0;
        if ((a->cur += a->step) >= lim) {
            a->cur = lim;
        }
    }
}

s32 is_state_complete__15TObjEneDelDepthFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == -1) {
        return 1;
    }
    if (temp_r0 < 6) {
        return 0;
    }
    if ((s8) TObjEneDelDepth__state_complete_flag == 0) {
        f32 temp_f1 = M2C_FIELD(arg0, f32 *, 0x24);
        TObjEneDelDepth__state_complete_flag = 1;
        lbl_805D6AC8 = temp_f1 - lbl_805DF2E8;
    }
    if (M2C_FIELD(arg0, f32 *, 0x28) == lbl_805D6AC8) {
        return 1;
    }
    return 0;
}

void set_motion__15TObjEneDelDepthFPvi(Self_80316488 *self, s32 arg1) {
    s32 flag;
    s32 id;
    flag = self->id;
    self->id = arg1 & ~0x1000;
    flag &= 0x1000;
    id = self->id;
    if (id == -1) {
        return;
    }
    if (id < 6) {
        if (flag != 0) {
            init__14TObjEnePanarmsFPvPv(self->obj, (s16)id);
        } else {
            set_field_b8__14TObjEnePanarmsFPvs(self->obj, (s16)id);
        }
    } else if (id < 0xA) {
        M2C_UNK data = get_data__15TObjEneDelDepthFv();
        E8_80316488 *e = &lbl_804E8760[self->id] - 6;
        self->r8 = get_bml_model(data, 1);
        self->rC = TObjFish__sub_8001EDB0(data, 1);
        self->r10 = get_bml_motion(data, e->a);
        self->f24 = *(u32 *)(self->r10 + 4);
        self->f20 = e->f;
        self->f28 = lbl_805DF2EC;
    } else {
        M2C_UNK data = get_data__15TObjEneDelDepthFv();
        E14_80316488 *e = &lbl_804E8780[self->id] - 10;
        Pair_80316488 *q;
        self->r8 = get_bml_model(data, e->p0.a);
        self->rC = TObjFish__sub_8001EDB0(data, e->p0.a);
        self->r10 = get_bml_motion(data, e->p0.b);
        q = &e->p1;
        self->r14 = get_bml_model(data, q->a);
        self->r18 = TObjFish__sub_8001EDB0(data, q->a);
        self->r1C = get_bml_motion(data, q->b);
        self->f24 = *(u32 *)(self->r1C + 4);
        self->f20 = e->f;
        self->f28 = lbl_805DF2EC;
    }
}

s32 conditional_delete__15TObjEneDelDepthFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

void fn_80316680(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = -1;
}

}
