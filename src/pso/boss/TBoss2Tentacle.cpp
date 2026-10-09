#include "pso/TBoss2Tentacle.h"

TBoss2Tentacle::~TBoss2Tentacle() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V3_80039DE0 { f32 x, y, z; };

struct Obj_80039DE0 { u8 pad[0x30]; V3_80039DE0 pts[14]; s32 vals[14]; };

struct G_80039C44 { u8 pad[4]; u32 count; };

struct Obj_80039C44 { u8 pad[0x114]; f32 pos; f32 speed; };

struct Node_8003933C { char pad0[8]; f32 x, y, z; char pad14[8]; s32 v; char pad20[0x18]; };

struct Vec_8003933C { f32 x, y, z; };

struct Ten_8003933C { char pad0[0x30]; Vec_8003933C pos[14]; s32 vals[14]; };

extern "C" {
u8 TBoss2Tentacle__sub_80039CA0(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss2Tentacle__sub_80039DB0(void* p);
void start_attack_at_target__14TBoss2TentacleFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern V3_80039DE0 TBoss2Tentacle__data_804FE8E8[];
extern s32 lbl_804FE990[];
void reset_segment_points__14TBoss2TentacleFPv(Obj_80039DE0 *self);
extern G_80039C44 *TBoss2Tentacle__motion_data;
void advance_motion_position__14TBoss2TentacleFPv(Obj_80039C44 *self);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK concat_matrix__10TObjPlayerFUiUi(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_chunk_object(void *);
M2C_UNK draw_model_motion(void *, int, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern Node_8003933C lbl_804FE5D8[];
extern M2C_UNK *lbl_805D4BD0;
extern G_80039C44 *TBoss2Tentacle__motion_data;
extern s32 lbl_805D4BD8;
extern const f32 lbl_805D8528;
void render__14TBoss2TentacleFv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK emit_effect_and_step__13TBoss2DeRolLeFPvPv(void *, void *);
void *get_instance__13TBoss2DeRolLeFv(void);
void TBoss2Tentacle__sub_8003998C(void);
M2C_UNK TBoss2Tentacle__sub_80039994(void *, f32);
void advance_motion_position__14TBoss2TentacleFPv(Obj_80039C44 *self);
void TBoss2Tentacle__sub_80039CB4(void* p);
void TBoss2Tentacle__sub_80039D50(void* p);
void TBoss2Tentacle__sub_80039D64(void* a0);
void TBoss2Tentacle__sub_80039D88(void* p);
void TBoss2Tentacle__sub_80039DA4(void* p);
void TBoss2Tentacle__sub_80039DBC(void* p);
void TBoss2Tentacle__sub_80039DD4(void* p);
void init_motion_from_table__14TBoss2TentacleFPv(void* a0);
void reset__14TBoss2TentacleFPv(void* a0);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 approach_angle_limited(s32, s32, s32);
M2C_UNK play_sound_effect(int, void *, int, int);
f32 sin_table_lookup(s32);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK set_matrix_identity__10TObjPlayerFPv(int);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK concat_matrix__10TObjPlayerFUiUi(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
extern int TBoss2Tentacle__data_80435B78[];
extern s32 lbl_80435B88[];
extern const f64 lbl_80435BA8[];
extern V3_80039DE0 TBoss2Tentacle__data_804FE8E8[];
extern const f32 lbl_805D852C;
extern const float TBoss2Tentacle__data_805D8530;
extern const float TBoss2Tentacle__data_805D8534;
extern const f32 lbl_805D8538;
extern const f32 lbl_805D853C;
extern const f32 lbl_805D8540;
void run_task__14TBoss2TentacleFv(u8 *arg0);
}

extern "C" {

void TBoss2Tentacle__sub_8003998C(void);
void TBoss2Tentacle__sub_80039990(void);
void TBoss2Tentacle__sub_80039CB4(void* p);
void TBoss2Tentacle__sub_80039D50(void* p);
void TBoss2Tentacle__sub_80039D64(void* a0);
void TBoss2Tentacle__sub_80039D88(void* p);
void TBoss2Tentacle__sub_80039D98(void* p);
void TBoss2Tentacle__sub_80039DA4(void* p);
void TBoss2Tentacle__sub_80039DB0(void* p);
void TBoss2Tentacle__sub_80039DBC(void* p);
void TBoss2Tentacle__sub_80039DC8(void* p);
void TBoss2Tentacle__sub_80039DD4(void* p);
void TBoss2Tentacle__sub_80039E54(void* a0);
void TBoss2Tentacle__sub_80039E68(void* p);
void TBoss2Tentacle__sub_8003A0A8(void);
void forward_80039DC8__14TBoss2TentacleFPv(void* p);
void init_motion_from_table__14TBoss2TentacleFPv(void* a0);
void reset__14TBoss2TentacleFPv(void* a0);

struct G_80039C44;
void render__14TBoss2TentacleFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 i;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    u8 *temp_r7;
    u8 *temp_r8;
    set_global_flag__10TObjPlayerFv();
    set_global_param__8TObjFishFi((void *) (lbl_805D4BD8));
    push_matrix();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        concat_matrix__10TObjPlayerFUiUi((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x110)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x11C)));
        draw_model_motion((void *) (lbl_805D4BD0), (int) (TBoss2Tentacle__motion_data), (f32) (M2C_FIELD(arg0, f32 *, 0x114)));
        break;
    case 1:
    case 4:
    case 5:
        concat_matrix__10TObjPlayerFUiUi((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x110)));
        rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x120)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x11C)));
        draw_model_motion((void *) (lbl_805D4BD0), (int) (TBoss2Tentacle__motion_data), (f32) (M2C_FIELD(arg0, f32 *, 0x114)));
        break;
    case 2:
        concat_matrix__10TObjPlayerFUiUi((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x110)));
        rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x120)));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x11C)));
        draw_chunk_object((void *) (lbl_805D4BD0));
        break;
    case 3:
        post_translate_matrix((void *) ((u8 *)(arg0) + 0x140));
        scale_matrix((int) (0), (f32) (lbl_805D8528), (f32) (lbl_805D8528), (f32) (lbl_805D8528));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x11C)));
        rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x120)));
        for (i = 0; i < 14; i++) {
            lbl_804FE5D8[i].x = ((Ten_8003933C *)arg0)->pos[i].x;
            lbl_804FE5D8[i].y = ((Ten_8003933C *)arg0)->pos[i].y;
            lbl_804FE5D8[i].z = ((Ten_8003933C *)arg0)->pos[i].z;
            lbl_804FE5D8[i].v = ((Ten_8003933C *)arg0)->vals[i];
        }
        draw_chunk_object((void *) (lbl_804FE5D8));
        break;
    }
    pop_matrix();
    clear_global_state__10TObjPlayerFv();
}

typedef V3_80039DE0 V3_800394DC;
typedef struct { u8 pad[0x30]; V3_800394DC pts[14]; } Ten_800394DC;
#define F(t, o) M2C_FIELD(arg0, t *, o)
void run_task__14TBoss2TentacleFv(u8 *arg0) {
    if (F(s32, 0x20) != F(s32, 0x1C)) {
        switch (F(s32, 0x20)) {
        case 0:
            TBoss2Tentacle__sub_80039D88(arg0);
            break;
        case 1:
            TBoss2Tentacle__sub_80039D64(arg0);
            break;
        case 4:
            TBoss2Tentacle__sub_80039D50(arg0);
            break;
        case 2:
            init_motion_from_table__14TBoss2TentacleFPv(arg0);
            break;
        case 3:
            reset__14TBoss2TentacleFPv(arg0);
            break;
        case 5:
            TBoss2Tentacle__sub_80039CB4(arg0);
            break;
        }
        F(s32, 0x1C) = F(s32, 0x20);
    }
    switch (F(s32, 0x1C)) {
    case 0:
        advance_motion_position__14TBoss2TentacleFPv((Obj_80039C44 *)arg0);
        F(s32, 0x128) += F(s32, 0x124);
        F(s32, 0x11C) = lbl_805D852C * ((*(const f32 *)&TBoss2Tentacle__data_805D8530) + sin_table_lookup(F(s32, 0x128)));
        if (!(F(s32, 0x2C) & 1)) {
            F(s32, 0x11C) = -F(s32, 0x11C);
        }
        break;
    case 1:
        advance_motion_position__14TBoss2TentacleFPv((Obj_80039C44 *)arg0);
        F(s32, 0x120) = approach_angle_limited(F(s32, 0x120), 0x4000, 0x280);
        break;
    case 2:
        F(s32, 0x11C) = approach_angle_limited(F(s32, 0x11C), 0, 0x80);
        if (F(s32, 0x11C) == 0) {
            TBoss2Tentacle__sub_80039DA4(arg0);
        }
        break;
    case 3: {
        V3_800394DC pos;
        V3_800394DC v;
        f32 len;
        v.z = v.y = v.x = (*(const f32 *)&TBoss2Tentacle__data_805D8534);
        push_matrix();
        set_matrix_identity__10TObjPlayerFPv(0);
        concat_matrix__10TObjPlayerFUiUi(0, F(s32, 0x110));
        matrix_mult_vec(0, &v, arg0 + 0x140);
        pop_matrix();
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x12C);
        subtract_vector(&v, arg0 + 0x140);
        len = clamp_velocity__15TObjBoss2TunnelFPv(&v);
        F(s32, 0x11C) = (s32)(lbl_80435BA8[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z)) + 0x8000;
        VecCopy__FP3VecPC3Vec(&pos, arg0 + 0x12C);
        switch (F(s32, 0x24)) {
        case 0: {
            s32 i;
            F(f32, 0x150) -= lbl_805D8538;
            if (F(f32, 0x150) <= lbl_805D8538) {
                F(f32, 0x150) = lbl_805D8538;
                F(s32, 0x14C) = 0;
                F(s32, 0x24) = 1;
            }
            for (i = 2; i < 12; i++) {
                ((Ten_800394DC *)arg0)->pts[i].x = F(f32, 0x150) * TBoss2Tentacle__data_804FE8E8[i].x;
            }
            F(s32, 0xE0) = 0x4000;
            break;
        }
        case 1:
            F(f32, 0x138) += lbl_805D853C;
            if (F(f32, 0x138) > len) {
                void *inst;
                F(f32, 0x138) = len;
                F(s32, 0x14C) = 0;
                F(s32, 0x24) = 2;
                inst = get_instance__13TBoss2DeRolLeFv();
                if (inst != NULL) {
                    emit_effect_and_step__13TBoss2DeRolLeFPvPv(inst, &pos);
                }
                play_sound_effect(0x4003A507, &pos, 0, 0);
            }
            if (F(f32, 0x138) >= lbl_805D8540 * len) {
                F(f32, 0x13C) = (*(const f32 *)&TBoss2Tentacle__data_805D8530);
            } else {
                F(f32, 0x13C) = F(f32, 0x138) / (lbl_805D8540 * len);
            }
            F(s32, 0x120) = approach_angle_limited(F(s32, 0x120), lbl_80435B88[F(s32, 0x2C)], 0x100);
            TBoss2Tentacle__sub_80039994(arg0, len);
            break;
        case 2:
            F(s32, 0x14C)++;
            if (F(s32, 0x14C) > F(s32, 0x154)) {
                F(s32, 0x14C) = 0;
                F(f32, 0x150) = (*(const f32 *)&TBoss2Tentacle__data_805D8530);
                F(s32, 0x24) = 3;
            }
            ((void (*)(void *))TBoss2Tentacle__sub_8003998C)(arg0);
            break;
        case 3:
            F(f32, 0x138) -= 8.0f;
            if (F(f32, 0x138) < 20.0f) {
                F(f32, 0x138) = 20.0f;
                F(s32, 0x24) = 2;
                TBoss2Tentacle__sub_80039DBC(arg0);
            }
            if (F(f32, 0x138) >= lbl_805D8540 * len) {
                F(f32, 0x13C) = (*(const f32 *)&TBoss2Tentacle__data_805D8530);
            } else {
                F(f32, 0x13C) = F(f32, 0x138) / (lbl_805D8540 * len);
            }
            F(s32, 0x120) = approach_angle_limited(F(s32, 0x120), 0, 0x100);
            TBoss2Tentacle__sub_80039994(arg0, len);
            break;
        }
        break;
    }
    case 4:
        advance_motion_position__14TBoss2TentacleFPv((Obj_80039C44 *)arg0);
        F(s32, 0x11C) = approach_angle_limited(F(s32, 0x11C), ((s32 *)&TBoss2Tentacle__data_80435B78)[F(s32, 0x2C)], 0x80);
        break;
    case 5:
        advance_motion_position__14TBoss2TentacleFPv((Obj_80039C44 *)arg0);
        F(s32, 0x120) = approach_angle_limited(F(s32, 0x120), 0, 0x280);
        if (F(s32, 0x120) == 0) {
            TBoss2Tentacle__sub_80039DD4(arg0);
        }
        break;
    }
}

void TBoss2Tentacle__sub_8003998C(void) {  }
void TBoss2Tentacle__sub_80039990(void) {  }

void advance_motion_position__14TBoss2TentacleFPv(Obj_80039C44 *self) {
    f32 n = (f32)(TBoss2Tentacle__motion_data->count - 1);
    self->pos += self->speed;
    if (self->pos >= n) {
        self->pos -= n;
    }
}

u8 TBoss2Tentacle__sub_80039CA0(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x1C) == 4);
}

void TBoss2Tentacle__sub_80039CB4(void* p) { *(s32*)((char*)p + 0x11c) = 0; *(s32*)((char*)p + 0x120) = 16384; }

    extern const float TBoss2Tentacle__data_805D8530;
    extern const float TBoss2Tentacle__data_805D8534;
    extern const float lbl_805D8544;
void reset__14TBoss2TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x11c) = 0; *(int*)((char*)a0 + 0x120) = 0; *(int*)((char*)a0 + 0x24) = 0; reset_segment_points__14TBoss2TentacleFPv((Obj_80039DE0 *)(a0)); *(float*)((char*)a0 + 0x138) = lbl_805D8544; *(int*)((char*)a0 + 0x14c) = 0; *(float*)((char*)a0 + 0x13c) = TBoss2Tentacle__data_805D8534; *(float*)((char*)a0 + 0x150) = TBoss2Tentacle__data_805D8530; }

    extern int TBoss2Tentacle__data_80435B78[];
void init_motion_from_table__14TBoss2TentacleFPv(void* a0) { *(int*)((char*)a0 + 0x11c) = TBoss2Tentacle__data_80435B78[*(int*)((char*)a0 + 0x2c)]; *(int*)((char*)a0 + 0x120) = 16384; *(int*)((char*)a0 + 0x24) = 0; }

void TBoss2Tentacle__sub_80039D50(void* p) { *(s32*)((char*)p + 0x11c) = 0; *(s32*)((char*)p + 0x120) = 16384; }

    extern int TBoss2Tentacle__data_80435B78[];
void TBoss2Tentacle__sub_80039D64(void* a0) { *(int*)((char*)a0 + 0x11c) = TBoss2Tentacle__data_80435B78[*(int*)((char*)a0 + 0x2c)]; *(int*)((char*)a0 + 0x120) = 0; }

void TBoss2Tentacle__sub_80039D88(void* p) { *(s32*)((char*)p + 0x120) = 0; *(s32*)((char*)p + 0x11c) = 0; }
void TBoss2Tentacle__sub_80039D98(void* p) { *(s32*)((char*)p + 0x20) = 5; }
void TBoss2Tentacle__sub_80039DA4(void* p) { *(s32*)((char*)p + 0x20) = 3; }
void TBoss2Tentacle__sub_80039DB0(void* p) { *(s32*)((char*)p + 0x20) = 2; }
void TBoss2Tentacle__sub_80039DBC(void* p) { *(s32*)((char*)p + 0x20) = 4; }
void TBoss2Tentacle__sub_80039DC8(void* p) { *(s32*)((char*)p + 0x20) = 1; }
void TBoss2Tentacle__sub_80039DD4(void* p) { *(s32*)((char*)p + 0x20) = 0; }

    extern const float lbl_805D8558;

void reset_segment_points__14TBoss2TentacleFPv(Obj_80039DE0 *self) {
    s32 i;
    for (i = 0; i < 14; i++) {
        VecCopy__FP3VecPC3Vec(&self->pts[i], &TBoss2Tentacle__data_804FE8E8[i]);
        self->vals[i] = lbl_804FE990[i];
    }
}

void TBoss2Tentacle__sub_80039E54(void* a0) { *(float*)((char*)a0 + 0x118) = lbl_805D8558; *(int*)((char*)a0 + 0x124) = 3038; }

void TBoss2Tentacle__sub_80039E68(void* p) { TBoss2Tentacle__sub_80039D98((void*)(p)); }

void start_attack_at_target__14TBoss2TentacleFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_r5;
    var_r5 = arg2;
    if ((var_r5 <= 0) || (var_r5 >= 0x258)) {
        var_r5 = 0x78;
    }
    M2C_FIELD(arg0, s32 *, 0x154) = var_r5;
    VecCopy__FP3VecPC3Vec(arg0 + 0x12C, arg1);
    TBoss2Tentacle__sub_80039DB0((void*)(arg0));
}

void forward_80039DC8__14TBoss2TentacleFPv(void* p) { TBoss2Tentacle__sub_80039DC8((void*)(p)); }

void TBoss2Tentacle__sub_8003A0A8(void) {  }

}
