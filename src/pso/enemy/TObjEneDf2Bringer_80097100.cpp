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
extern s32 lbl_805D2998;
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
void TObjEneDf2Bringer__vt104(Bringer_80097100 *self) {
    f32 frame;
    s32 i;
    Motion_80097100 *mot;
    get_target_info__9TObjEneDDFPv((void*)(self));
    if (self->m8(lbl_805D97D8, lbl_805D97DC) != 0) {
        Vec_80097100 v = lbl_8043A0E0;
        update_player_state__9TObjEneDDFPv(self, &v, 0);
        toggle_particle_effect__10TObjPlayerFv();
        set_global_param__8TObjFishFi(self->texlist);
        push_matrix();
        post_translate_matrix(self->pos);
        rotate_matrix_y((s32)(0), (s32)(self->f60));
        i = (s32)self->animIdx;
        if (i < 0) {
            i = 0;
        } else if (i >= 11) {
            i = 10;
        }
        mot = self->mots[self->anims[i].idx].mot;
        frame = self->frame;
        if (frame < TObjEneDf2Bringer__data_805D97E0) {
            frame = TObjEneDf2Bringer__data_805D97E0;
        } else if (frame > (f32)(mot->count - 1)) {
            frame = (f32)(mot->count - 1);
        }
        set_global_flag__10TObjPlayerFv();
        draw_model_motion(self->f34, mot, frame);
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void TObjEneDf2Bringer__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneDf2Bringer__sub_800994F8(p); } }

}
