#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_802C22A4 { f32 x, y, z; };

struct Hit_802C22A4 { u8 pad0[4]; Vec_802C22A4 *n; };

struct Obj_802C22A4 {
    u8 pad0[0x1E]; s16 f1E; u8 pad20[0x38 - 0x20]; Vec_802C22A4 pos;
    u8 pad44[0x98 - 0x44];
    s32 f98; s32 f9C; s32 fA0; f32 fA4; u8 padA8[0x4];
    Vec_802C22A4 vAC; s32 fB8; s32 fBC; s32 fC0; s32 fC4; s32 fC8;
};

extern "C" {
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_diff_s16(s32, s32);
s32 approach_angle_limited(s32, s32, s32);
s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *arg0, s32 arg1, void *arg2, s32 arg3, f32 farg0);
Hit_802C22A4 *csnVecterUnder(Vec_802C22A4 *, s32);
void vec3_add_to(void *, void *);
extern const f64 lbl_80471960[];
extern const f32 lbl_805DE518;
}

extern "C" {

struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Base { char pad[0x18]; };

struct VObj : Base {
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

struct Vec_802C1660 { f32 x, y, z; };

struct Entry_802C1660 { s32 a; f32 b; f32 c; f32 d; s32 e; };

struct Obj_802C1660 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    u8 padA4[0x8];
    Vec_802C1660 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

struct Obj_802C1428 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    f32 fA4;
    u8 padA8[0x4];
    Vec_802C1660 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];

typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];

struct RecoveredGlobal_802C1B9C_lbl_80471990 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802C1B9C_lbl_804E081C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Vec_802C1E34 { f32 x, y, z; };

struct Entry_802C1E34 { s32 a; f32 b; f32 c; f32 d; s32 e; };

struct Obj_802C1E34 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    u8 padA4[0x8];
    Vec_802C1E34 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

struct Obj_802C1BFC {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    f32 fA4;
    u8 padA8[0x4];
    Vec_802C1E34 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

typedef char RecoveredGlobal_802C1B9C_lbl_80471990_size[sizeof(RecoveredGlobal_802C1B9C_lbl_80471990) == 0x14 ? 1 : -1];

typedef char RecoveredGlobal_802C1B9C_lbl_804E081C_size[sizeof(RecoveredGlobal_802C1B9C_lbl_804E081C) == 0x10 ? 1 : -1];

struct RecoveredGlobal_802C20E8_lbl_80471890
{
  M2C_UNK value;
  u8 remaining[0x38];
};

struct RecoveredGlobal_802C20E8_lbl_804E0910
{
  M2C_UNK value;
  u8 remaining[0x38];
};

typedef struct RecoveredGlobal_802C20E8_lbl_80471890 RecoveredGlobal_802C20E8_lbl_80471890;

typedef struct RecoveredGlobal_802C20E8_lbl_804E0910 RecoveredGlobal_802C20E8_lbl_804E0910;

struct Vec_802C2548 { f32 x, y, z; };

struct Entry_802C2548 { s32 a; f32 b; f32 c; f32 d; s32 e; s32 f; };

struct Ent_802C1FD0 { s32 a; f32 b; f32 c; s32 d; s32 e; };
struct Sub_802C1FD0 { s32 a; u32 n; };
struct Pl_802C1FD0 {
    u8 pad0[0x9C];
    Sub_802C1FD0 *sub;
    u8 pad4[0xA4 - 0xA0];
    f32 x;
    f32 y;
    u8 padac[0xC8 - 0xAC];
    s32 idx;
};

struct Ent_802C26E4 { s32 a; f32 b; f32 c; s32 d; s32 e; s32 f; };
struct Sub_802C26E4 { s32 a; u32 n; };
struct Pl_802C26E4 {
    u8 pad0[0x9C];
    Sub_802C26E4 *sub;
    u8 pad4[0xA4 - 0xA0];
    f32 x;
    f32 y;
    u8 padac[0xC8 - 0xAC];
    s32 idx;
};

struct Obj_802C2548 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    u8 padA4[0x8];
    Vec_802C2548 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

struct RecoveredGlobal_802C27FC_lbl_80471848
{
  M2C_UNK value;
  u8 remaining[0x44];
};

struct RecoveredGlobal_802C27FC_lbl_804E094C
{
  M2C_UNK value;
  u8 remaining[0x38];
};

typedef struct RecoveredGlobal_802C27FC_lbl_80471848 RecoveredGlobal_802C27FC_lbl_80471848;

typedef struct RecoveredGlobal_802C27FC_lbl_804E094C RecoveredGlobal_802C27FC_lbl_804E094C;

struct Q_802C2958 { s32 a; s32 b; s32 c; s32 d; };

struct Obj_802C2958 { u8 pad[0x430]; s32 f430; };

struct Vec_802C2C48 { f32 x, y, z; };

struct Entry_802C2C48 { s32 a; f32 b; f32 c; f32 d; s32 e; };

struct Sub_802C2DEC { s32 a; u32 n; };
struct Pl_802C2DEC {
    u8 pad0[0x9C];
    Sub_802C2DEC *sub;
    u8 pad4[0xA4 - 0xA0];
    f32 x;
    f32 y;
    u8 padac[0xC8 - 0xAC];
    s32 idx;
};

struct Obj_802C2C48 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    u8 padA4[0x8];
    Vec_802C2C48 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

struct Obj_802C2A10 {
    u8 pad0[0x98];
    s32 f98;
    s32 f9C;
    s32 fA0;
    f32 fA4;
    u8 padA8[0x4];
    Vec_802C2C48 vAC;
    s32 fB8;
    s32 fBC;
    s32 fC0;
    s32 fC4;
    s32 fC8;
};

struct RecoveredGlobal_802C2F04_lbl_804717D4
{
  M2C_UNK value;
  u8 remaining[0x60];
};

struct RecoveredGlobal_802C2F04_lbl_804E0988
{
  M2C_UNK value;
  u8 remaining[0x38];
};

typedef struct RecoveredGlobal_802C2F04_lbl_804717D4 RecoveredGlobal_802C2F04_lbl_804717D4;

typedef struct RecoveredGlobal_802C2F04_lbl_804E0988 RecoveredGlobal_802C2F04_lbl_804E0988;

struct Vec_802C0F3C { f32 x, y, z; };

struct Mtx_802C0F3C { f32 m[3][4]; };

struct Ent_802C0F3C { s32 f0; f32 a; f32 b; s32 fc; s32 f10; };

struct Cnt_802C0F3C { s32 f0; s32 n; };

struct Obj_802C0F3C {
    u8 pad0[0x38];
    Vec_802C0F3C pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0xAC - 0x64];
    Cnt_802C0F3C *ac;
    u8 padb0[4];
    f32 b4;
    f32 b8;
    Vec_802C0F3C bc;
    u8 padc8[0xD8 - 0xC8];
    s32 d8;
    s32 dc;
};

typedef struct { f32 x, y, z; } Vec_802C17FC;

typedef struct { f32 m[3][4]; } Mtx_802C17FC;

typedef struct { f32 f0, f4, f8, fC; s32 f10; } Ent_802C17FC;

typedef struct { u8 pad[4]; u32 n; } Anim_802C17FC;

void VecCopy__FP3VecPC3Vec(Vec_802C1660 *, Vec_802C1660 *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 get_state_flag__9TMainTaskFv();
s32 get_bml_motion(void *, s32);
s32 get_bml_model(void *, s32);
void TLobby__sub_8001FE7C(void*, int);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjMapWarp__sub_80141CB0(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
s32 angle_diff_s16(s32, s32);
void direction_to_rotation_xz(Vec_802C1660 *, s32 *, s32 *);
s32 approach_angle_limited(s32, s32, s32);
u8 * load_gvm_texture_file(s32);
M2C_UNK play_sound_effect(int, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 TObjPlayer__sub_802C0A74(void *);
void TObjPlayer__sub_802C10C0(void *);
void * TObjPlayer__sub_802C11AC(void *arg0, s16 arg1);
void * create_child_object__10TObjPlayerFPv(void *arg0);
void destroy_instance__10TObjPlayerFv(void);
void TObjPlayer__sub_802C13C8(void);
s32 TObjPlayer__sub_802C1428(Obj_802C1428 *self);
s32 TObjPlayer__sub_802C1660(Obj_802C1660 *self);
void draw_debug_lines__10TObjPlayerFPv(u8 *arg0);
void * dt_path_obj__10TObjPlayerFPvs(void *arg0, s16 arg1);
void * TObjPlayer__sub_802C19E8(void *arg0);
void * create__10TObjPlayerFPv(void *arg0);
void free_statics__10TObjPlayerFv(void);
void TObjPlayer__sub_802C1B9C(void);
s32 TObjPlayer__sub_802C1BFC(Obj_802C1BFC *self);
s32 TObjPlayer__sub_802C1E34(Obj_802C1E34 *self);
void draw_demo_lines_and_meshes__10TObjPlayerFPv(u8 *arg0);
void * deleting_dtor_pathobj__10TObjPlayerFPvs(void *arg0, s16 arg1);
u8 * TObjPlayer__sub_802C20E8(u8 *arg0, s32 arg1);
void * create_path_obj__10TObjPlayerFPv(void *arg0);
void free_chr_select__10TObjPlayerFv(void);
void TObjPlayer__sub_802C2244(void);
s32 TObjPlayer__sub_802C2548(Obj_802C2548 *self);
void draw_demo_trajectory__10TObjPlayerFPv(u8 *arg0);
void * TObjPlayer__sub_802C27A4(void *arg0, s16 arg1);
u8 * TObjPlayer__sub_802C27FC(u8 *arg0, s32 arg1);
void * TObjPlayer__sub_802C28B4(void *arg0);
void TObjPlayer__sub_802C2900(void);
void TObjPlayer__sub_802C2958(void);
s32 TObjPlayer__sub_802C2A10(Obj_802C2A10 *self);
s32 TObjPlayer__sub_802C2C48(Obj_802C2C48 *self);
void draw_model_parts__10TObjPlayerFPv(u8 *arg0);
void * TObjPlayer__sub_802C2EAC(void *arg0, s16 arg1);
u8 * TObjPlayer__sub_802C2F04(u8 *arg0, s32 arg1);
void draw_line_strip__10TObjPlayerFPviif(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *arg0, s32 arg1, void *arg2, s32 arg3, f32 farg0);
void __dt__11TObjPathObjFv(void *, int);
u8 * TObjPathObj__ct(void *, s32);
void spawn_npc_enemy__6TLobbyFsiiiff(s32, s32, s32, void *, f32, f32);
s32 rand();
f32 bind_motion_context(void *, f32);
M2C_UNK sample_motion_node_transform(s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
void matrix_mult_vec(void *, void *, void *);
void set_position_vec3__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_803D8CD4(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
f32 subtract_vector(Vec_802C1660 *, Vec_802C1660 *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();

extern Entry_802C2C48 lbl_804717D4[];
extern u8 lbl_80471838[];
extern Entry_802C2548 lbl_80471848[];
extern Entry_802C1E34 lbl_80471890[];
extern Entry_802C1660 lbl_804718CC[];
extern Vec_802C17FC lbl_80471908;
extern Ent_802C0F3C lbl_80471914[];
extern Vec_802C0F3C lbl_80471950;
extern const f64 lbl_80471960[];
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80471978;
extern RecoveredGlobal_802C1B9C_lbl_80471990 lbl_80471990;
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_804719A4;
extern u8 lbl_804719B8[];
extern u8 lbl_804E07C4[];
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804E07F0;
extern RecoveredGlobal_802C1B9C_lbl_804E081C lbl_804E081C;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 lbl_804E0848;
extern M2C_UNK lbl_804E0898[];
extern M2C_UNK lbl_804E08D4[];
extern M2C_UNK lbl_804E0910[];
extern M2C_UNK lbl_804E094C[];
extern M2C_UNK lbl_804E0988[];
extern u32 lbl_805D6798;
extern s32 lbl_805D679C;
extern u32 lbl_805D67A0;
extern u32 lbl_805D67A4;
extern u32 lbl_805D67A8;
extern u32 lbl_805D67AC;
extern u32 lbl_805D67B0;
extern u32 lbl_805D67B4;
extern const f32 lbl_805DE4F8;
extern const f32 lbl_805DE4FC;
extern const f32 lbl_805DE500;
extern const f32 lbl_805DE504;
extern const f32 lbl_805DE508;
extern const f32 lbl_805DE50C;
extern const f32 lbl_805DE514;
extern const f32 lbl_805DE51C;
extern const f32 lbl_805DE520;
extern void *tl_05;

#pragma push
#pragma fp_contract on
extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_802C1660 *, Vec_802C1660 *);
void direction_to_rotation_xz(Vec_802C1660 *, s32 *, s32 *);
f32 subtract_vector(Vec_802C1660 *, Vec_802C1660 *);
extern Entry_802C2548 lbl_80471848[];
s32 TObjPlayer__sub_802C22A4(Pl_802C26E4 *arg0_, Ent_802C26E4 *, f32);
}

void TObjPlayer__sub_802C0F3C(Obj_802C0F3C *self) {
    TObjPlayer__sub_802C10C0(self);
    self->b4 += lbl_80471914[self->d8].a;
    if (TObjPlayer__sub_802C0A74(self) == 0) {
        self->b4 = lbl_805DE4F8;
    }
    self->b8 += lbl_80471914[self->d8].b;
    if (self->b8 > (f32)(u32)(self->ac->n - 1)) {
        self->b8 = lbl_805DE4F8;
    }
    if (--self->dc < 0) {
        Mtx_802C0F3C m;
        Vec_802C0F3C v = lbl_80471950;
        TObjPlayer__sub_803D8CD4(&m);
        set_position_vec3__10TObjPlayerFPvPv(&m, &self->pos);
        ((void (*)(void *, s32))rotate_matrix_y)(&m, self->f60);
        set_position_vec3__10TObjPlayerFPvPv(&m, &self->bc);
        matrix_mult_vec(&m, &v, &v);
        self->dc = (s32)(lbl_805DE504 * (lbl_805DE508 * (lbl_805DE50C * (f32)rand())) + lbl_805DE500);
    }
}
extern int fold_flush_0;
#pragma pop

void *TObjPlayer__sub_802C11AC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E0898;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *create_child_object__10TObjPlayerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjPlayer__sub_802C19E8)(o, tl_05, arg0);
    }
    return o;
}

void destroy_instance__10TObjPlayerFv(void) {
    if ((u32) lbl_805D67B4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D67B4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D67B4);
        lbl_805D67B4 = 0U;
    }
    if ((u32) lbl_805D67B0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D67B0, 1);
        lbl_805D67B0 = 0U;
    }
}

void TObjPlayer__sub_802C13C8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804E0848.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D67B0) = var_r0;
    (*(u8 * *)&lbl_805D67B4) = load_gvm_texture_file((s32) &lbl_80471978.value);
}

s32 TObjPlayer__sub_802C1428(Obj_802C1428 *self) {
    Vec_802C1660 a;
    Vec_802C1660 b;
    Vec_802C1660 d;
    s32 tmp;
    s32 tmp2;
    s32 r;
    s32 old;
    s32 diff;
    ((s32 (*)(void *, s32, s32, Vec_802C1660 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &a, self->fA4);
    VecCopy__FP3VecPC3Vec(&self->vAC, &a);
    r = ((s32 (*)(void *, s32, s32, Vec_802C1660 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &b, self->fA4 + lbl_804718CC[self->fC8].d);
    VecCopy__FP3VecPC3Vec(&d, &b);
    subtract_vector(&d, &a);
    direction_to_rotation_xz(&d, &tmp, &tmp2);
    self->fBC = approach_angle_limited(self->fBC, tmp, lbl_804718CC[self->fC8].e);
    old = self->fB8;
    tmp = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    self->fB8 = approach_angle_limited(old, tmp, lbl_804718CC[self->fC8].e);
    diff = angle_diff_s16(old, tmp);
    if (diff > 0x30) {
        if (self->fC4 > 0) {
            self->fC4 = 0;
        }
        self->fC4 -= 0x40;
        if (self->fC4 < -0x200) {
            self->fC4 = -0x200;
        }
        self->fC0 += self->fC4;
        if (self->fC0 < -0x2000) {
            self->fC0 = -0x2000;
        }
    } else if (diff < -0x30) {
        if (self->fC4 < 0) {
            self->fC4 = 0;
        }
        self->fC4 += 0x40;
        if (self->fC4 > 0x200) {
            self->fC4 = 0x200;
        }
        self->fC0 += self->fC4;
        if (self->fC0 > 0x2000) {
            self->fC0 = 0x2000;
        }
    } else {
        self->fC4 = 0;
        if (self->fC0 > 0x100) {
            self->fC0 -= 0x100;
        } else if (self->fC0 < -0x100) {
            self->fC0 += 0x100;
        } else {
            self->fC0 = 0;
        }
    }
    return r;
}

s32 TObjPlayer__sub_802C1660(Obj_802C1660 *self) {
    Vec_802C1660 a;
    Vec_802C1660 b;
    Vec_802C1660 d;
    s32 tmp;
    s32 r;
    self->fB8 = 0;
    self->fBC = 0;
    self->fC0 = 0;
    self->fC4 = 0;
    ((s32 (*)(void *, s32, s32, Vec_802C1660 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &a, lbl_805DE4F8);
    VecCopy__FP3VecPC3Vec(&self->vAC, &a);
    r = ((s32 (*)(void *, s32, s32, Vec_802C1660 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &b, lbl_804718CC[self->fC8].d);
    VecCopy__FP3VecPC3Vec(&d, &b);
    subtract_vector(&d, &a);
    direction_to_rotation_xz(&d, &self->fBC, &tmp);
    self->fB8 = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    return r;
}

void draw_debug_lines__10TObjPlayerFPv(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (get_state_flag__9TMainTaskFv() == 0)) {
        ((M2C_UNK (*)(void *, s32, s32, f32))draw_line_strip__10TObjPlayerFPviif)(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    set_global_param__8TObjFishFi((*(s32 *)&lbl_805D67B4));
    push_matrix();
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    post_translate_matrix(arg0 + 0xAC);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xB8));
    rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0xC0));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    pop_matrix();
}

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_802C17FC(u8 *arg0) {
    Mtx_802C17FC m;
    s32 temp_r0;

    M2C_FIELD(arg0, f32 *, 0xA4) += lbl_804718CC[M2C_FIELD(arg0, s32 *, 0xC8)].b;
    if (((s32 (*)(void *))TObjPlayer__sub_802C1428)(arg0) == 0) {
        M2C_FIELD(arg0, f32 *, 0xA4) = lbl_805DE4F8;
    }
    M2C_FIELD(arg0, f32 *, 0xA8) += lbl_804718CC[M2C_FIELD(arg0, s32 *, 0xC8)].c;
    if (M2C_FIELD(arg0, f32 *, 0xA8) > (f32) (M2C_FIELD(arg0, Anim_802C17FC **, 0x9C)->n - 1)) {
        M2C_FIELD(arg0, f32 *, 0xA8) = lbl_805DE4F8;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xCC) - 1;
    M2C_FIELD(arg0, s32 *, 0xCC) = temp_r0;
    if (temp_r0 < 0) {
        Vec_802C17FC v = lbl_80471908;
        ((M2C_UNK (*)(void *))TObjPlayer__sub_803D8CD4)(&m);
        ((M2C_UNK (*)(void *, void *))set_position_vec3__10TObjPlayerFPvPv)(&m, arg0 + 0x38);
        ((M2C_UNK (*)(void *, int))rotate_matrix_y)(&m, M2C_FIELD(arg0, s32 *, 0x60));
        ((M2C_UNK (*)(void *, void *))set_position_vec3__10TObjPlayerFPvPv)(&m, arg0 + 0xAC);
        ((M2C_UNK (*)(void *, void *, void *))matrix_mult_vec)(&m, &v, &v);
        play_sound_effect(0x4BC04, arg0 + 0x38, 0x7F, 0);
        M2C_FIELD(arg0, s32 *, 0xCC) = (s32) ((lbl_805DE504 * (lbl_805DE508 * (lbl_805DE50C * (f32) rand()))) + lbl_805DE500);
    }
}
extern int fold_flush_1;
#pragma pop

void *dt_path_obj__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E08D4;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
void *TObjPlayer__sub_802C19E8(void *arg0) {
    s32 temp_r3;
    s32 var_r0;

    ((M2C_UNK (*)(void))TObjPathObj__ct)();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E08D4;
    M2C_FIELD(arg0, s32 *, 0x98) = ((s32 (*)(s32, M2C_UNK))get_bml_model)((*(s32 *)&lbl_805D67B0), 0);
    M2C_FIELD(arg0, s32 *, 0x9C) = ((s32 (*)(s32, s32))get_bml_motion)((*(s32 *)&lbl_805D67B0), 0);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x84);
    var_r0 = (temp_r3 < 0) ? 0 : (temp_r3 > 2) ? 2 : temp_r3;
    M2C_FIELD(arg0, s32 *, 0xC8) = var_r0;
    M2C_FIELD(arg0, s32 *, 0xA0) = ((s32 (*)(s32, s32))get_bml_motion)((*(s32 *)&lbl_805D67B0), *(s32 *)((s8 *)((M2C_UNK *)&lbl_804718CC) + (M2C_FIELD(arg0, s32 *, 0xC8) * 0x14)));
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805DE4F8;
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) lbl_805DE4F8;
    ((M2C_UNK (*)(void *))TObjPlayer__sub_802C1660)(arg0);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DE514;
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) ((lbl_805DE504 * (lbl_805DE508 * (lbl_805DE50C * (f32) rand()))) + lbl_805DE500);
    return arg0;
}
extern int fold_flush_2;
#pragma pop

void *create__10TObjPlayerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjPlayer__sub_802C20E8)(o, tl_05, arg0);
    }
    return o;
}

void free_statics__10TObjPlayerFv(void) {
    if ((u32) lbl_805D67AC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D67AC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D67AC);
        lbl_805D67AC = 0U;
    }
    if ((u32) lbl_805D67A8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D67A8, 1);
        lbl_805D67A8 = 0U;
    }
}

void TObjPlayer__sub_802C1B9C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804E081C.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D67A8) = var_r0;
    (*(u8 * *)&lbl_805D67AC) = load_gvm_texture_file((s32) &lbl_80471990.value);
}

s32 TObjPlayer__sub_802C1BFC(Obj_802C1BFC *self) {
    Vec_802C1E34 a;
    Vec_802C1E34 b;
    Vec_802C1E34 d;
    s32 tmp;
    s32 tmp2;
    s32 r;
    s32 old;
    s32 diff;
    ((s32 (*)(void *, s32, s32, Vec_802C1E34 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &a, self->fA4);
    ((void (*)(Vec_802C1E34 *, Vec_802C1E34 *))VecCopy__FP3VecPC3Vec)(&self->vAC, &a);
    r = ((s32 (*)(void *, s32, s32, Vec_802C1E34 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &b, self->fA4 + lbl_80471890[self->fC8].d);
    ((void (*)(Vec_802C1E34 *, Vec_802C1E34 *))VecCopy__FP3VecPC3Vec)(&d, &b);
    ((f32 (*)(Vec_802C1E34 *, Vec_802C1E34 *))subtract_vector)(&d, &a);
    ((void (*)(Vec_802C1E34 *, s32 *, s32 *))direction_to_rotation_xz)(&d, &tmp, &tmp2);
    self->fBC = approach_angle_limited(self->fBC, tmp, lbl_80471890[self->fC8].e);
    old = self->fB8;
    tmp = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    self->fB8 = approach_angle_limited(old, tmp, lbl_80471890[self->fC8].e);
    diff = angle_diff_s16(old, tmp);
    if (diff > 0x30) {
        if (self->fC4 > 0) {
            self->fC4 = 0;
        }
        self->fC4 -= 0x40;
        if (self->fC4 < -0x200) {
            self->fC4 = -0x200;
        }
        self->fC0 += self->fC4;
        if (self->fC0 < -0x2000) {
            self->fC0 = -0x2000;
        }
    } else if (diff < -0x30) {
        if (self->fC4 < 0) {
            self->fC4 = 0;
        }
        self->fC4 += 0x40;
        if (self->fC4 > 0x200) {
            self->fC4 = 0x200;
        }
        self->fC0 += self->fC4;
        if (self->fC0 > 0x2000) {
            self->fC0 = 0x2000;
        }
    } else {
        self->fC4 = 0;
        if (self->fC0 > 0x100) {
            self->fC0 -= 0x100;
        } else if (self->fC0 < -0x100) {
            self->fC0 += 0x100;
        } else {
            self->fC0 = 0;
        }
    }
    return r;
}

s32 TObjPlayer__sub_802C1E34(Obj_802C1E34 *self) {
    Vec_802C1E34 a;
    Vec_802C1E34 b;
    Vec_802C1E34 d;
    s32 tmp;
    s32 r;
    self->fB8 = 0;
    self->fBC = 0;
    self->fC0 = 0;
    self->fC4 = 0;
    ((s32 (*)(void *, s32, s32, Vec_802C1E34 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &a, lbl_805DE4F8);
    ((void (*)(Vec_802C1E34 *, Vec_802C1E34 *))VecCopy__FP3VecPC3Vec)(&self->vAC, &a);
    r = ((s32 (*)(void *, s32, s32, Vec_802C1E34 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &b, lbl_80471890[self->fC8].d);
    ((void (*)(Vec_802C1E34 *, Vec_802C1E34 *))VecCopy__FP3VecPC3Vec)(&d, &b);
    ((f32 (*)(Vec_802C1E34 *, Vec_802C1E34 *))subtract_vector)(&d, &a);
    ((void (*)(Vec_802C1E34 *, s32 *, s32 *))direction_to_rotation_xz)(&d, &self->fBC, &tmp);
    self->fB8 = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    return r;
}

void draw_demo_lines_and_meshes__10TObjPlayerFPv(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (get_state_flag__9TMainTaskFv() == 0)) {
        ((M2C_UNK (*)(void *, s32, s32, f32))draw_line_strip__10TObjPlayerFPviif)(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    set_global_param__8TObjFishFi((*(s32 *)&lbl_805D67AC));
    push_matrix();
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    post_translate_matrix(arg0 + 0xAC);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xB8));
    rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0xC0));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    pop_matrix();
}

void TObjPlayer__sub_802C1FD0(Pl_802C1FD0 *arg0) {
    u8 *t = (u8 *)lbl_80471890;
    t = t + arg0->idx * 0x14;
    Ent_802C1FD0 *e = (Ent_802C1FD0 *)t;
    f32 ox = arg0->x;
    arg0->x = ox + e->b;
    if (((s32 (*)(Pl_802C1FD0 *, Ent_802C1FD0 *, f32))TObjPlayer__sub_802C1BFC)(arg0, e, ox) == 0) {
        arg0->x = lbl_805DE4F8;
    }
    arg0->y = arg0->y + lbl_80471890[arg0->idx].c;
    if (arg0->y > (f32)(arg0->sub->n - 1)) {
        arg0->y = lbl_805DE4F8;
    }
}

void *deleting_dtor_pathobj__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E0910;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjPlayer__sub_802C20E8(u8 *arg0, s32 arg1) {
  s32 var_r0;
  s32 temp_r3;
  TObjPathObj__ct(arg0, arg1);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &(*(RecoveredGlobal_802C20E8_lbl_804E0910 *)&lbl_804E0910).value;
  *((s32 *) (((s8 *) arg0) + 0x98)) = get_bml_model((*(u8 * *)&lbl_805D67A8), 0);
  *((s32 *) (((s8 *) arg0) + 0x9C)) = get_bml_motion((*(u8 * *)&lbl_805D67A8), 0);
  temp_r3 = *((s32 *) (((s8 *) arg0) + 0x84));
  if (temp_r3 < 0)
  {
    var_r0 = 0;
  }
  else
  {
    var_r0 = 2;
    if (temp_r3 <= 2)
    {
      var_r0 = temp_r3;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = var_r0;
  *((s32 *) (((s8 *) arg0) + 0xA0)) = get_bml_motion((*(u8 * *)&lbl_805D67A8), *((M2C_UNK *) (((s8 *) (&(*(RecoveredGlobal_802C20E8_lbl_80471890 *)&lbl_80471890).value)) + ((*((s32 *) (((s8 *) arg0) + 0xC8))) * 0x14))));
  *((f32 *) (((s8 *) arg0) + 0xA4)) = (f32) lbl_805DE4F8;
  *((f32 *) (((s8 *) arg0) + 0xA8)) = (f32) lbl_805DE4F8;
  ((s32 (*)(void *))TObjPlayer__sub_802C1E34)(arg0);
  return arg0;
}

void *create_path_obj__10TObjPlayerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjPlayer__sub_802C27FC)(o, tl_05, arg0);
    }
    return o;
}

void free_chr_select__10TObjPlayerFv(void) {
    if ((u32) lbl_805D67A4 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D67A4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D67A4);
        lbl_805D67A4 = 0U;
    }
    if ((u32) lbl_805D67A0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D67A0, 1);
        lbl_805D67A0 = 0U;
    }
}

void TObjPlayer__sub_802C2244(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804E07F0.value, 0, 0, 0));
    }
    (*(s32 *)&lbl_805D67A0) = var_r0;
    (*(u8 * *)&lbl_805D67A4) = load_gvm_texture_file((s32) &lbl_804719A4.value);
}

struct Pl_802C26E4;
struct Ent_802C26E4;
struct Vec_802C1660;
s32 TObjPlayer__sub_802C22A4(Pl_802C26E4 *arg0_, Ent_802C26E4 *, f32) {
    s32 r;
    Obj_802C22A4 *self = (Obj_802C22A4 *)arg0_;
    Entry_802C2548 *e;
    s32 old;
    s32 diff;
    Vec_802C22A4 a;
    Vec_802C22A4 b;
    s32 tmp;
    s32 tmp2;
    e = &lbl_80471848[self->fC8];
    if (!(e->f & 1)) {
        return 1;
    }
    ((s32 (*)(void *, s32, s32, Vec_802C22A4 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &a, self->fA4);
    VecCopy__FP3VecPC3Vec((Vec_802C1660 *)&self->vAC, (Vec_802C1660 *)&a);
    r = ((s32 (*)(void *, s32, s32, Vec_802C22A4 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &b, self->fA4 + e->d);
    if (self->f1E != 0) {
        Vec_802C22A4 p = self->vAC;
        Hit_802C22A4 *hit;
        vec3_add_to(&p, &self->pos);
        p.y += lbl_805DE518;
        hit = csnVecterUnder(&p, 0x16EF);
        if (hit != NULL) {
            self->pos.y = hit->n->y;
        }
    }
    {
    Vec_802C22A4 d;
    VecCopy__FP3VecPC3Vec((Vec_802C1660 *)&d, (Vec_802C1660 *)&b);
    subtract_vector((Vec_802C1660 *)&d, (Vec_802C1660 *)&a);
    direction_to_rotation_xz((Vec_802C1660 *)&d, &tmp, &tmp2);
    }
    self->fBC = approach_angle_limited(self->fBC, tmp, e->e);
    old = self->fB8;
    tmp = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    if (!(e->f & 2)) {
        self->fB8 = approach_angle_limited(old, tmp, e->e);
    }
    if (!(e->f & 4)) {
        diff = angle_diff_s16(old, tmp);
        if (diff > 0x30) {
            if (self->fC4 > 0) {
                self->fC4 = 0;
            }
            self->fC4 -= 0x40;
            if (self->fC4 < -0x200) {
                self->fC4 = -0x200;
            }
            self->fC0 += self->fC4;
            if (self->fC0 < -0x2000) {
                self->fC0 = -0x2000;
            }
        } else if (diff < -0x30) {
            if (self->fC4 < 0) {
                self->fC4 = 0;
            }
            self->fC4 += 0x40;
            if (self->fC4 > 0x200) {
                self->fC4 = 0x200;
            }
            self->fC0 += self->fC4;
            if (self->fC0 > 0x2000) {
                self->fC0 = 0x2000;
            }
        } else {
            self->fC4 = 0;
            if (self->fC0 > 0x100) {
                self->fC0 -= 0x100;
            } else if (self->fC0 < -0x100) {
                self->fC0 += 0x100;
            } else {
                self->fC0 = 0;
            }
        }
    }
    return r;
}

s32 TObjPlayer__sub_802C2548(Obj_802C2548 *self) {
    Vec_802C2548 a;
    Vec_802C2548 b;
    Vec_802C2548 d;
    s32 tmp;
    s32 r;
    self->fB8 = 0;
    self->fBC = 0;
    self->fC0 = 0;
    self->fC4 = 0;
    ((s32 (*)(void *, s32, s32, Vec_802C2548 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &a, lbl_805DE4F8);
    ((void (*)(Vec_802C2548 *, Vec_802C2548 *))VecCopy__FP3VecPC3Vec)(&self->vAC, &a);
    r = ((s32 (*)(void *, s32, s32, Vec_802C2548 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &b, lbl_80471848[self->fC8].d);
    ((void (*)(Vec_802C2548 *, Vec_802C2548 *))VecCopy__FP3VecPC3Vec)(&d, &b);
    ((f32 (*)(Vec_802C2548 *, Vec_802C2548 *))subtract_vector)(&d, &a);
    ((void (*)(Vec_802C2548 *, s32 *, s32 *))direction_to_rotation_xz)(&d, &self->fBC, &tmp);
    self->fB8 = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    return r;
}

void draw_demo_trajectory__10TObjPlayerFPv(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (get_state_flag__9TMainTaskFv() == 0)) {
        ((M2C_UNK (*)(void *, s32, s32, f32))draw_line_strip__10TObjPlayerFPviif)(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    set_global_param__8TObjFishFi((*(s32 *)&lbl_805D67A4));
    push_matrix();
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    post_translate_matrix(arg0 + 0xAC);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xB8));
    rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0xC0));
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    pop_matrix();
}

void TObjPlayer__sub_802C26E4(Pl_802C26E4 *arg0) {
    Ent_802C26E4 *e = (Ent_802C26E4 *)lbl_80471848;
    e += arg0->idx;
    f32 ox = arg0->x;
    arg0->x = ox + e->b;
    if (TObjPlayer__sub_802C22A4((Pl_802C26E4 *)(arg0), (Ent_802C26E4 *)(e), ox) == 0) {
        arg0->x = lbl_805DE4F8;
    }
    arg0->y = arg0->y + lbl_80471848[arg0->idx].c;
    if (arg0->y > (f32)(arg0->sub->n - 1)) {
        arg0->y = lbl_805DE4F8;
    }
}

void *TObjPlayer__sub_802C27A4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E094C;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjPlayer__sub_802C27FC(u8 *arg0, s32 arg1) {
  s32 var_r0;
  s32 temp_r3;
  TObjPathObj__ct(arg0, arg1);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &(*(RecoveredGlobal_802C27FC_lbl_804E094C *)&lbl_804E094C).value;
  *((s32 *) (((s8 *) arg0) + 0x98)) = get_bml_model((*(u8 * *)&lbl_805D67A0), 0);
  *((s32 *) (((s8 *) arg0) + 0x9C)) = get_bml_motion((*(u8 * *)&lbl_805D67A0), 0);
  temp_r3 = *((s32 *) (((s8 *) arg0) + 0x84));
  if (temp_r3 < 0)
  {
    var_r0 = 0;
  }
  else
  {
    var_r0 = 2;
    if (temp_r3 <= 2)
    {
      var_r0 = temp_r3;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = var_r0;
  *((s32 *) (((s8 *) arg0) + 0xA0)) = get_bml_motion((*(u8 * *)&lbl_805D67A0), *((M2C_UNK *) (((s8 *) (&(*(RecoveredGlobal_802C27FC_lbl_80471848 *)&lbl_80471848).value)) + ((*((s32 *) (((s8 *) arg0) + 0xC8))) * 0x18))));
  *((f32 *) (((s8 *) arg0) + 0xA4)) = (f32) lbl_805DE4F8;
  *((f32 *) (((s8 *) arg0) + 0xA8)) = (f32) lbl_805DE4F8;
  ((s32 (*)(void *))TObjPlayer__sub_802C2548)(arg0);
  return arg0;
}

void *TObjPlayer__sub_802C28B4(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjPlayer__sub_802C2F04)(o, tl_05, arg0);
    }
    return o;
}

void TObjPlayer__sub_802C2900(void) {
    if ((u32) (*(u32 *)&lbl_805D679C) != 0U) {
        TLobby__sub_803DA16C((void*)(*(u32 *)&lbl_805D679C));
        safe_free__23TAdSinglePlyChrSelectGCFUi((*(u32 *)&lbl_805D679C));
        (*(u32 *)&lbl_805D679C) = 0U;
    }
    if ((u32) lbl_805D6798 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6798, 1);
        lbl_805D6798 = 0U;
    }
}

void TObjPlayer__sub_802C2958(void) {
    Obj_802C2958 *o = ((Obj_802C2958 * (*)(s32))alloc__23TAdSinglePlyChrSelectGCFPv)(0x440);
    if (o != 0) {
        o = ((Obj_802C2958 * (*)(Obj_802C2958 *, s32, void *, s32, s32, s32))load_resource_from_descriptor)(o, 5, lbl_804E07C4, 0, 0, 0);
    }
    (*(Obj_802C2958 * *)&lbl_805D6798) = o;
    lbl_805D679C = ((s32 (*)(void *))load_gvm_texture_file)(lbl_804719B8);
    Q_802C2958 q = *(Q_802C2958 *)lbl_80471838;
    q.a = (*(Obj_802C2958 * *)&lbl_805D6798)->f430;
    spawn_npc_enemy__6TLobbyFsiiiff(0x40, ((s32 (*)(void *, s32, s32, s32, s32, void *))get_bml_model)((*(Obj_802C2958 * *)&lbl_805D6798), 0, ((Q_802C2958 *)lbl_80471838)->c, ((Q_802C2958 *)lbl_80471838)->b, ((Q_802C2958 *)lbl_80471838)->a, lbl_80471838), lbl_805D679C, &q, lbl_805DE51C, lbl_805DE520);
}

s32 TObjPlayer__sub_802C2A10(Obj_802C2A10 *self) {
    Vec_802C2C48 a;
    Vec_802C2C48 b;
    Vec_802C2C48 d;
    s32 tmp;
    s32 tmp2;
    s32 r;
    s32 old;
    s32 diff;
    ((s32 (*)(void *, s32, s32, Vec_802C2C48 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &a, self->fA4);
    ((void (*)(Vec_802C2C48 *, Vec_802C2C48 *))VecCopy__FP3VecPC3Vec)(&self->vAC, &a);
    r = ((s32 (*)(void *, s32, s32, Vec_802C2C48 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &b, self->fA4 + lbl_804717D4[self->fC8].d);
    ((void (*)(Vec_802C2C48 *, Vec_802C2C48 *))VecCopy__FP3VecPC3Vec)(&d, &b);
    ((f32 (*)(Vec_802C2C48 *, Vec_802C2C48 *))subtract_vector)(&d, &a);
    ((void (*)(Vec_802C2C48 *, s32 *, s32 *))direction_to_rotation_xz)(&d, &tmp, &tmp2);
    self->fBC = approach_angle_limited(self->fBC, tmp, lbl_804717D4[self->fC8].e);
    old = self->fB8;
    tmp = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    self->fB8 = approach_angle_limited(old, tmp, lbl_804717D4[self->fC8].e);
    diff = angle_diff_s16(old, tmp);
    if (diff > 0x30) {
        if (self->fC4 > 0) {
            self->fC4 = 0;
        }
        self->fC4 -= 0x40;
        if (self->fC4 < -0x200) {
            self->fC4 = -0x200;
        }
        self->fC0 += self->fC4;
        if (self->fC0 < -0x2000) {
            self->fC0 = -0x2000;
        }
    } else if (diff < -0x30) {
        if (self->fC4 < 0) {
            self->fC4 = 0;
        }
        self->fC4 += 0x40;
        if (self->fC4 > 0x200) {
            self->fC4 = 0x200;
        }
        self->fC0 += self->fC4;
        if (self->fC0 > 0x2000) {
            self->fC0 = 0x2000;
        }
    } else {
        self->fC4 = 0;
        if (self->fC0 > 0x100) {
            self->fC0 -= 0x100;
        } else if (self->fC0 < -0x100) {
            self->fC0 += 0x100;
        } else {
            self->fC0 = 0;
        }
    }
    return r;
}

s32 TObjPlayer__sub_802C2C48(Obj_802C2C48 *self) {
    Vec_802C2C48 a;
    Vec_802C2C48 b;
    Vec_802C2C48 d;
    s32 tmp;
    s32 r;
    self->fB8 = 0;
    self->fBC = 0;
    self->fC0 = 0;
    self->fC4 = 0;
    ((s32 (*)(void *, s32, s32, Vec_802C2C48 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &a, lbl_805DE4F8);
    ((void (*)(Vec_802C2C48 *, Vec_802C2C48 *))VecCopy__FP3VecPC3Vec)(&self->vAC, &a);
    r = ((s32 (*)(void *, s32, s32, Vec_802C2C48 *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(self, self->f98, self->fA0, &b, lbl_804717D4[self->fC8].d);
    ((void (*)(Vec_802C2C48 *, Vec_802C2C48 *))VecCopy__FP3VecPC3Vec)(&d, &b);
    ((f32 (*)(Vec_802C2C48 *, Vec_802C2C48 *))subtract_vector)(&d, &a);
    ((void (*)(Vec_802C2C48 *, s32 *, s32 *))direction_to_rotation_xz)(&d, &self->fBC, &tmp);
    self->fB8 = (s32)(lbl_80471960[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - a.x, b.z - a.z));
    return r;
}

void draw_model_parts__10TObjPlayerFPv(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (get_state_flag__9TMainTaskFv() == 0)) {
        ((M2C_UNK (*)(void *, s32, s32, f32))draw_line_strip__10TObjPlayerFPviif)(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    set_global_param__8TObjFishFi(lbl_805D679C);
    push_matrix();
    post_translate_matrix(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    post_translate_matrix(arg0 + 0xAC);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xB8));
    rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0xC0));
    set_global_flag__10TObjPlayerFv();
    draw_model_motion(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
}

void TObjPlayer__sub_802C2DEC(Pl_802C2DEC *arg0) {
    Entry_802C2C48 *e = lbl_804717D4;
    f32 ox;
    e += arg0->idx;
    ox = arg0->x;
    arg0->x = ox + e->b;
    if (TObjPlayer__sub_802C2A10((Obj_802C2A10 *)arg0) == 0) {
        arg0->x = lbl_805DE4F8;
    }
    arg0->y = arg0->y + lbl_804717D4[arg0->idx].c;
    if (arg0->y > (f32)(arg0->sub->n - 1)) {
        arg0->y = lbl_805DE4F8;
    }
}

void *TObjPlayer__sub_802C2EAC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E0988;
        __dt__11TObjPathObjFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjPlayer__sub_802C2F04(u8 *arg0, s32 arg1) {
  s32 var_r0;
  s32 temp_r3;
  TObjPathObj__ct(arg0, arg1);
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &(*(RecoveredGlobal_802C2F04_lbl_804E0988 *)&lbl_804E0988).value;
  *((s32 *) (((s8 *) arg0) + 0x98)) = get_bml_model((*(u8 * *)&lbl_805D6798), 0);
  *((s32 *) (((s8 *) arg0) + 0x9C)) = get_bml_motion((*(u8 * *)&lbl_805D6798), 5);
  temp_r3 = *((s32 *) (((s8 *) arg0) + 0x84));
  if (temp_r3 < 0)
  {
    var_r0 = 0;
  }
  else
  {
    var_r0 = 4;
    if (temp_r3 <= 4)
    {
      var_r0 = temp_r3;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = var_r0;
  *((s32 *) (((s8 *) arg0) + 0xA0)) = get_bml_motion((*(u8 * *)&lbl_805D6798), *((M2C_UNK *) (((s8 *) (&(*(RecoveredGlobal_802C2F04_lbl_804717D4 *)&lbl_804717D4).value)) + ((*((s32 *) (((s8 *) arg0) + 0xC8))) * 0x14))));
  *((f32 *) (((s8 *) arg0) + 0xA4)) = (f32) lbl_805DE4F8;
  *((f32 *) (((s8 *) arg0) + 0xA8)) = (f32) lbl_805DE4F8;
  ((s32 (*)(void *))TObjPlayer__sub_802C2C48)(arg0);
  return arg0;
}

void draw_line_strip__10TObjPlayerFPviif(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_UNK sp14[3];
    M2C_UNK sp8[3];
    f32 var_f31;
    s32 temp_r30;

    var_f31 = lbl_805DE4F8;
    do {
        ((s32 (*)(void *, s32, s32, M2C_UNK *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(arg0, arg1, arg2, sp14, var_f31);
        var_f31 += farg0;
        temp_r30 = ((s32 (*)(void *, s32, s32, M2C_UNK *, f32))clamp_value_to_max__10TObjPlayerFPviPvif)(arg0, arg1, arg2, sp8, var_f31);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjMapWarp__sub_80141CB0(sp14, sp8, 0xF0F0F0FF, 0xF0F0F0FF);
        pop_matrix();
    } while (temp_r30 != 0);
}

s32 clamp_value_to_max__10TObjPlayerFPviPvif(void *arg0, s32 arg1, void *arg2, s32 arg3, f32 farg0) {
    M2C_UNK sp24[3];
    M2C_UNK sp18[3];
    M2C_UNK sp8[4];
    f32 var_f1;
    s32 var_r31;
    u32 temp_r7;

    var_f1 = farg0;
    var_r31 = 1;
    temp_r7 = M2C_FIELD(arg2, s32 *, 4) - 1;
    if (var_f1 > (f32) temp_r7) {
        var_r31 = 0;
        var_f1 = (f32) temp_r7;
    }
    bind_motion_context(arg2, var_f1);
    sample_motion_node_transform(arg1, arg3, sp24, sp18, sp8);
    return var_r31;
}

}
