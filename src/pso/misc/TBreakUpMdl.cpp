#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80096F54_TBreakUpMdl__data_8048FA00 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80096F54_TBreakUpMdl__data_8048FA00_size[sizeof(RecoveredGlobal_80096F54_TBreakUpMdl__data_8048FA00) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80096F54_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80096F54_lbl_8058D490_size[sizeof(RecoveredGlobal_80096F54_lbl_8058D490) == 0x30 ? 1 : -1];

struct RecoveredGlobal_80096FD8_TBreakUpMdl__data_8048FA00 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80096FD8_TBreakUpMdl__data_8048FA00_size[sizeof(RecoveredGlobal_80096FD8_TBreakUpMdl__data_8048FA00) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80096FD8_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80096FD8_lbl_8058D490_size[sizeof(RecoveredGlobal_80096FD8_lbl_8058D490) == 0x30 ? 1 : -1];

struct RecoveredGlobal_8009705C_TBreakUpMdl__data_8048FA00 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8009705C_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Seg_80096EBC { s32 a; f32 x; f32 y; f32 z; u8 pad[12]; };

struct Brk_80096EBC { s32 count; Seg_80096EBC *segs; };

typedef s32 M2C_UNK;
struct Color_8009680C { f32 a; f32 r; f32 g; f32 b; };

struct Part_8009680C { u8 pos[0x18]; u8 rot[0x10]; };

struct Chunk_8009680C { s32 model; u8 pad[0x18]; };

struct Model_8009680C { u8 pad0[4]; Chunk_8009680C *chunks; s32 is_chunk; };

struct BreakUp_8009680C {
    u8 pad0[0x1C];
    s32 count;
    Model_8009680C *model;
    void *texlist;
    f32 alpha;
    u8 pad2C[0x34 - 0x2C];
    Part_8009680C *parts;
};

struct Part_8009693C {
    f32 x, y, z;
    f32 vx, vy, vz;
    s32 rx, ry, rz;
    s32 spin;
};

struct BreakUp_8009693C {
    u8 pad0[0x1C];
    s32 count;
    u8 pad20[0x28 - 0x20];
    f32 alpha;
    u8 pad2C[0x30 - 0x2C];
    f32 speed;
    Part_8009693C *parts;
    u8 pad38[0x3C - 0x38];
    f32 fade;
    u8 pad40[0x44 - 0x40];
    f32 damping;
    f32 gravity;
};

struct RecoveredGlobal_80096F54_lbl_8058D490;
struct Part_80096AD8 { f32 pos[3]; f32 vel[3]; s32 f18; s32 f1c; s32 f20; s32 f24; };

struct Seg_80096AD8 { s32 f0; f32 a[3]; f32 b[3]; };

struct Model_80096AD8 { s32 count; Seg_80096AD8 *segs; };

struct BreakUp_80096AD8 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    M2C_UNK *vtable;
    s32 count;
    Model_80096AD8 *model;
    s32 f24;
    u8 pad28[0x30 - 0x28];
    f32 f30;
    Part_80096AD8 *parts;
    s32 f38;
    f32 f3C;
    f32 f40;
    u8 pad44[0x4C - 0x44];
    f32 f4C;
    f32 f50;
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Vec_80097100 { f32 x, y, z; };

struct Motion_80097100 { u8 pad0[4]; u32 count; };

struct MotRef_80097100 { u8 pad0[4]; Motion_80097100 *mot; };

struct Anim_80097100 { u8 pad0[4]; s32 idx; u8 pad8[8]; };

struct Bringer_80097100 : VObj_18_26a62c {
    u8 pad1C[0x24 - 0x1C];
    void *texlist;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    u8 pos[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xD8 - 0x64];
    Anim_80097100 *anims;
    MotRef_80097100 *mots;
    u8 padE0[0x354 - 0xE0];
    f32 animIdx;
    f32 frame;
};

extern "C" {
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK compose_motion_node_matrix(int);
M2C_UNK matrix_mult_vec(int, int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 collect_node_positions__11TBreakUpMdlFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK matrix_mult_vec(int, int, int);
M2C_UNK rotate_matrix_by_node_angles(void *, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK scale_current_matrix(void *);
M2C_UNK post_translate_matrix(void *);
s32 build_node_records__11TBreakUpMdlFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
s32 collect_node_positions__11TBreakUpMdlFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
void bind_motion_context(s32, f32);
s32 push_matrix_from(u32);
M2C_UNK pop_matrix();
extern M2C_UNK TBreakUpMdl__data_8048FA00[];
extern RecoveredGlobal_80096F54_lbl_8058D490 lbl_8058D490;
u8 *setup_pieces__11TBreakUpMdlFPviif(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 collect_node_positions__11TBreakUpMdlFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
void bind_motion_context(s32, f32);
s32 push_matrix_from(u32);
M2C_UNK pop_matrix();
extern M2C_UNK TBreakUpMdl__data_8048FA00[];
extern RecoveredGlobal_80096F54_lbl_8058D490 lbl_8058D490;
u8 *init__11TBreakUpMdlFPviif(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 build_node_records__11TBreakUpMdlFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
s32 push_matrix_from(u32);
M2C_UNK pop_matrix();
extern M2C_UNK TBreakUpMdl__data_8048FA00[];
extern RecoveredGlobal_80096F54_lbl_8058D490 lbl_8058D490;
u8 *init_from_model__11TBreakUpMdlFPvi(u8 *arg0, s32 arg1);
extern const f32 lbl_805D97C8;
void init_alpha__11TBreakUpMdlFPvif(u8 *arg0, s32 arg1, f32 farg0);
s32 count_active_segments__15TObjBoss2TunnelFPv(void *);
void *alloc_buffer__11TOBoss4RockFPv(int);
extern const f32 lbl_805D97CC;
void alloc_breakup_piece_records(Brk_80096EBC *arg0, void *arg1);
M2C_UNK rotate_matrix_by_node_angles(void *, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
void set_global_param__8TObjFishFi(void *);
void draw_ginja_model(s32);
void set_chunk_material_override_pair(u32, u32);
void set_chunk_material_color(Color_8009680C *);
void draw_chunk_model(s32);
extern Color_8009680C lbl_80439F58;
extern u32 lbl_805D5660;
extern u32 some_id_805c6f74;
extern const f32 lbl_805D97C8;
void render__11TBreakUpMdlFv(BreakUp_8009680C *self);
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805D97CC;
void run_task__11TBreakUpMdlFv(BreakUp_8009693C *self);
f32 rand_signed_unit(void);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
void init_alpha__11TBreakUpMdlFPvif(u8 *arg0, s32 arg1, f32 farg0);
void copy__11TBreakUpMdlFPvPv(void* p, void* q);
void *alloc_buffer__11TOBoss4RockFPv(int);
void __ct__7TObjectFP7TObject(void *, void *);
s32 rand(void);
M2C_UNK matrix_mult_vec(int, int, int);
void rotate_vector_by_matrix(s32, void *, void *);
void rotate_matrix_y(s32, s32);
s32 push_matrix_from(u32);
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
extern u8 lbl_80439F30[];
extern M2C_UNK __vt__11TBreakUpMdl[];
extern RecoveredGlobal_80096F54_lbl_8058D490 lbl_8058D490;
extern s32 TBreakUpMdl__class_name;
extern const f32 lbl_805D97D0;
extern const f32 lbl_805D97D4;
u8 *TBreakUpMdl__ct(u8 *arg0, void *arg1, Model_80096AD8 *arg2, void *arg3, s32 arg4, void *arg5, s32 arg6);
M2C_UNK update_player_state__9TObjEneDDFPv(void *, void *, int);
int get_target_info__9TObjEneDDFPv(void*);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void rotate_matrix_y(s32, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
void set_global_param__8TObjFishFi(void *);
M2C_UNK draw_model_motion(s32, void *, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern Vec_80097100 lbl_8043A0E0;
extern const f32 lbl_805D97D8;
extern const f32 lbl_805D97DC;
extern const f32 TObjEneDf2Bringer__data_805D97E0;
void TObjEneDf2Bringer__vt104(Bringer_80097100 *self);
}

extern "C" {

void TObjEneDf2Bringer__vt103(void* p);
void *__dt__11TBreakUpMdlFv(void *arg0, s16 arg1);
void *__dt_deleting__11TBreakUpMdlFPvs(void *arg0, s16 arg1);
void copy__11TBreakUpMdlFPvPv(void* p, void* q);
int TObjEneDf2Bringer__sub_800994F8(void*);
void __dl__7TObjectFPv(void *);
M2C_UNK __dl__FPv(void *);
void __dt__7TObjectFv(void *, int);
void free__11TOBoss4RockFUi(void *);
int get_target_info__9TObjEneDDFPv(void*);

extern M2C_UNK __vt__11TBreakUpMdl[];

void render__11TBreakUpMdlFv(BreakUp_8009680C *self) {
    Part_8009680C *part;
    s32 i;
    if (self->texlist != 0) {
        set_global_param__8TObjFishFi(self->texlist);
    }
    lbl_805D5660 = some_id_805c6f74;
    if (self->alpha < lbl_805D97C8) {
        Color_8009680C color = lbl_80439F58;
        some_id_805c6f74 |= 0x810;
        set_chunk_material_override_pair(0xFF00, 0x800);
        color.a = self->alpha;
        set_chunk_material_color(&color);
    }
    for (i = 0; i < self->count; i++) {
        part = &self->parts[i];
        push_matrix();
        post_translate_matrix(part->pos);
        rotate_matrix_by_node_angles(part->rot, 0);
        if (self->model->is_chunk != 0) {
            draw_ginja_model(self->model->chunks[i].model);
        } else {
            draw_chunk_model(self->model->chunks[i].model);
        }
        pop_matrix();
    }
    set_chunk_material_override_pair(0xFF00, 0);
    some_id_805c6f74 = lbl_805D5660;
}

#pragma push
#pragma fp_contract on
void run_task__11TBreakUpMdlFv(BreakUp_8009693C *self) {
    Part_8009693C *p;
    s32 i;
    f32 gravity;
    self->alpha -= self->fade;
    if (self->alpha <= lbl_805D97CC) {
        queue_destruction__7TObjectFv(self);
    }
    gravity = self->gravity;
    for (i = 0; i < self->count; i++) {
        p = &self->parts[i];
        p->x = p->vx * self->speed + p->x;
        p->y = p->y + p->vy;
        p->z = p->vz * self->speed + p->z;
        p->vy = p->vy - gravity;
        p->rx = p->rx + p->spin;
        p->ry = p->ry + p->spin / 2;
    }
    self->speed = self->speed * self->damping;
}
#pragma pop

#pragma push
#pragma fp_contract on
void init_alpha__11TBreakUpMdlFPvif(u8 *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((farg0 * (f32) arg1) + lbl_805D97C8);
}
#pragma pop

void *__dt__11TBreakUpMdlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBreakUpMdl;
        free__11TOBoss4RockFUi((void *)(M2C_FIELD(arg0, void **, 0x34)));
        M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK TBreakUpMdl__data_8048FA00[];

#pragma push
#pragma fp_contract on
u8 *TBreakUpMdl__ct(u8 *arg0, void *arg1, Model_80096AD8 *arg2, void *arg3, s32 arg4, void *arg5, s32 arg6) {
    BreakUp_80096AD8 *self = (BreakUp_80096AD8 *)arg0;
    f32 base;
    f32 scale;
    Part_80096AD8 *part;
    s32 i;
    __ct__7TObjectFP7TObject(self, arg1);
    self->vtable = __vt__11TBreakUpMdl;
    self->f0 = TBreakUpMdl__class_name;
    self->model = arg2;
    if (arg3 == NULL) {
        copy__11TBreakUpMdlFPvPv(&self->f38, lbl_80439F30);
    } else {
        copy__11TBreakUpMdlFPvPv(&self->f38, arg3);
    }
    self->f24 = arg4;
    self->count = self->model->count;
    base = self->f4C;
    scale = self->f50;
    self->parts = (Part_80096AD8 *)alloc_buffer__11TOBoss4RockFPv(self->count * 0x28);
    push_matrix_from((u32)&lbl_8058D490);
    post_translate_matrix(arg5);
    rotate_matrix_y(0, arg6);
    for (i = 0; i < self->count; i++) {
        part = &self->parts[i];
        matrix_mult_vec(0, (int)self->model->segs[i].a, (int)part);
        rotate_vector_by_matrix(0, self->model->segs[i].b, part->vel);
        clamp_velocity__15TObjBoss2TunnelFPv(part->vel);
        part->vel[1] = scale * (lbl_805D97D0 * (f32)rand()) + base;
        part->f18 = 0;
        part->f1c = arg6;
        part->f20 = 0;
        part->f24 = (s32)(lbl_805D97D4 * rand_signed_unit());
    }
    pop_matrix();
    init_alpha__11TBreakUpMdlFPvif(arg0, self->f38, self->f3C);
    self->f30 = self->f40;
    return arg0;
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 collect_node_positions__11TBreakUpMdlFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r31;
    s32 temp_r30;
    s32 temp_r4;
    s32 var_r29;
    u8 *var_r28;
    var_r28 = (u8 *)(arg1);
    var_r29 = arg2;
    do {
        push_matrix();
        compose_motion_node_matrix((int) (var_r28));
        temp_r30 = M2C_FIELD(var_r28, s32 *, 0);
        if (!(temp_r30 & 8)) {
            temp_r31 = (u8 *)(M2C_FIELD(arg0, s32 *, 4) + (var_r29 * 0x1C));
            temp_r4 = (long) (temp_r31 + 4);
            matrix_mult_vec((int) (0), (int) (temp_r4), (int) (temp_r4));
            VecCopy__FP3VecPC3Vec((void *) (temp_r31 + 0x10), (void *) (temp_r31 + 4));
            clamp_velocity__15TObjBoss2TunnelFPv(temp_r31 + 0x10);
            var_r29 += 1;
            *(s32 *)temp_r31 = M2C_FIELD(var_r28, s32 *, 4);
        }
        if (!(temp_r30 & 0x10)) {
            var_r29 = collect_node_positions__11TBreakUpMdlFPvPvi(arg0, M2C_FIELD(var_r28, u8 **, 0x2C), var_r29);
        }
        pop_matrix();
        var_r28 = (u8 *)(M2C_FIELD(var_r28, u8 **, 0x30));
    } while (var_r28 != NULL);
    return var_r29;
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 build_node_records__11TBreakUpMdlFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r31;
    s32 temp_r30;
    s32 temp_r4;
    s32 var_r29;
    u8 *var_r28;
    var_r28 = (u8 *)(arg1);
    var_r29 = arg2;
    do {
        push_matrix();
        post_translate_matrix((void *) (var_r28 + 8));
        rotate_matrix_by_node_angles((void *) (var_r28 + 0x14), (int) (0));
        scale_current_matrix((void *) (var_r28 + 0x20));
        temp_r30 = M2C_FIELD(var_r28, s32 *, 0);
        if (!(temp_r30 & 8)) {
            temp_r31 = (u8 *)(M2C_FIELD(arg0, s32 *, 4) + (var_r29 * 0x1C));
            temp_r4 = (long) (temp_r31 + 4);
            matrix_mult_vec((int) (0), (int) (temp_r4), (int) (temp_r4));
            VecCopy__FP3VecPC3Vec((void *) (temp_r31 + 0x10), (void *) (temp_r31 + 4));
            clamp_velocity__15TObjBoss2TunnelFPv(temp_r31 + 0x10);
            var_r29 += 1;
            *(s32 *)temp_r31 = M2C_FIELD(var_r28, s32 *, 4);
        }
        if (!(temp_r30 & 0x10)) {
            var_r29 = build_node_records__11TBreakUpMdlFPvPvi(arg0, M2C_FIELD(var_r28, u8 **, 0x2C), var_r29);
        }
        pop_matrix();
        var_r28 = (u8 *)(M2C_FIELD(var_r28, u8 **, 0x30));
    } while (var_r28 != NULL);
    return var_r29;
}
#pragma pop

void *__dt_deleting__11TBreakUpMdlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0xC) = TBreakUpMdl__data_8048FA00;
        free__11TOBoss4RockFUi((void *)(M2C_FIELD(arg0, s32 *, 4)));
        M2C_FIELD(arg0, s32 *, 4) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void alloc_breakup_piece_records(Brk_80096EBC *arg0, void *arg1) {
    s32 i;
    arg0->count = count_active_segments__15TObjBoss2TunnelFPv(arg1);
    arg0->segs = (Seg_80096EBC *)alloc_buffer__11TOBoss4RockFPv(arg0->count * 0x1C);
    for (i = 0; i < arg0->count; i++) {
        arg0->segs[i].a = 0;
        arg0->segs[i].x = lbl_805D97CC;
        arg0->segs[i].y = lbl_805D97CC;
        arg0->segs[i].z = lbl_805D97CC;
    }
}

u8 *setup_pieces__11TBreakUpMdlFPviif(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &(*(RecoveredGlobal_80096F54_TBreakUpMdl__data_8048FA00 *)&TBreakUpMdl__data_8048FA00).value;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    alloc_breakup_piece_records((Brk_80096EBC *)(arg0), (void *)(arg1));
    bind_motion_context(arg2, farg0);
    push_matrix_from((u32) &lbl_8058D490.value);
    collect_node_positions__11TBreakUpMdlFPvPvi((u8 *)(arg0), (u8 *)((void *) arg1), (s32)(0));
    pop_matrix();
    return arg0;
}

u8 *init__11TBreakUpMdlFPviif(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &(*(RecoveredGlobal_80096FD8_TBreakUpMdl__data_8048FA00 *)&TBreakUpMdl__data_8048FA00).value;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    alloc_breakup_piece_records((Brk_80096EBC *)(arg0), (void *)(arg1));
    bind_motion_context(arg2, farg0);
    push_matrix_from((u32) &(*(RecoveredGlobal_80096FD8_lbl_8058D490 *)&lbl_8058D490).value);
    collect_node_positions__11TBreakUpMdlFPvPvi((u8 *)(arg0), (u8 *)((void *) arg1), (s32)(0));
    pop_matrix();
    return arg0;
}

typedef char RecoveredGlobal_8009705C_TBreakUpMdl__data_8048FA00_size[sizeof(RecoveredGlobal_8009705C_TBreakUpMdl__data_8048FA00) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8009705C_lbl_8058D490_size[sizeof(RecoveredGlobal_8009705C_lbl_8058D490) == 0x30 ? 1 : -1];
u8 *init_from_model__11TBreakUpMdlFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &(*(RecoveredGlobal_8009705C_TBreakUpMdl__data_8048FA00 *)&TBreakUpMdl__data_8048FA00).value;
    alloc_breakup_piece_records((Brk_80096EBC *)(arg0), (void *)(arg1));
    push_matrix_from((u32) &(*(RecoveredGlobal_8009705C_lbl_8058D490 *)&lbl_8058D490).value);
    build_node_records__11TBreakUpMdlFPvPvi((u8 *)(arg0), (u8 *)((void *) arg1), (s32)(0));
    pop_matrix();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}

void copy__11TBreakUpMdlFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); }

}
