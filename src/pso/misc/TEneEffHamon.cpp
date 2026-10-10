#include "pso/TObject.h"
class TEneEffHamon : public TObject {
public:
    virtual ~TEneEffHamon();
    virtual void run_task();
    virtual void render();
};

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800A4204_lbl_80490A18 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_800A38A4___vt__12TEneEffHamon {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;
typedef struct Hamon_800A36A8 {
    u8 pad0[0x1C];
    u8 mtx1C[0x34 - 0x1C];
    f32 scale;
    u8 pad38[0x40 - 0x38];
    f32 f40;
    u8 pad44[0x4C - 0x44];
    s32 delay;
    u8 color50[0x10];
} Hamon_800A36A8;

struct Vec_800A4064 { f32 x, y, z; };

struct Inner_800A4064 { u8 pad0[0xC]; s32 *p; };

struct Entry_800A4064 { u8 pad0[8]; Inner_800A4064 *inner; };

struct Obj_800A4064 {
    u8 pad0[0x38];
    s32 count;
    Vec_800A4064 base[(0x108 - 0x3C) / 12];
    Vec_800A4064 out[(0x1D4 - 0x108) / 12];
    Vec_800A4064 dir[22];
    u8 pad2DC[8];
    f32 scale[(0x328 - 0x2E4) / 4];
    s32 timer;
    u8 pad32C[0x330 - 0x32C];
    s32 type;
    u8 pad334[0x340 - 0x334];
    s32 active;
};

typedef struct Cam_800A3D1C { u8 pad0[8]; f32 cx; f32 cy; u8 pad10[8]; f32 sw; f32 aspect; } Cam_800A3D1C;

struct Vec_800A3D1C { f32 x, y, z; };

struct Vtx_800A3D1C { f32 x, y, z, u, v; u32 color; };

struct Obj_800A3D1C {
    u8 pad0[0x38];
    s32 count;
    u8 pad3C[0x108 - 0x3C];
    Vec_800A3D1C pts[17];
    u8 pad1D4[0x32C - 0x1D4];
    u32 color;
    u8 pad330[0x10];
    s32 active;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv();
extern const f32 lbl_805D99E0;
void run_task__12TEneEffHamonFv(u8 *arg0);
void build_beam_points__12TTecZondeEffFPv(struct Obj_800A39A8 *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_80490A18[];
extern s32 lbl_805D29E0;
u8 *TObjPlayer__sub_800A4204(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_800A38A4___vt__12TEneEffHamon __vt__12TEneEffHamon;
extern s32 lbl_805D29D8;
extern const f32 lbl_805D99E4;
extern const f32 lbl_805D99E8;
extern const f32 lbl_805D99EC;
extern s32 tl_06;
u8 *__ct__12TEneEffHamonFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_chunk_material_override_pair(u32, u32);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK draw_chunk_object(s32);
extern u8 chunk_material_color_half_alpha_f32[];
extern u8 saved_model_draw_color[];
extern u8 lbl_8058D4C0[];
extern int TEneEffHamon__fish_model;
extern int TEneEffHamon__fish_effect_param;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
void render__12TEneEffHamonFv(Hamon_800A36A8 *o);
void build_beam_points__12TTecZondeEffFPv(struct Obj_800A39A8 *);
f32 sin_table_lookup(s32);
extern Entry_800A4064 *lbl_80500970[];
extern s32 TObjPlayer__effect_count;
extern const f32 lbl_805D99F8;
extern const f32 lbl_805D9A04;
extern const f32 lbl_805D9A08;
void TObjPlayer__sub_800A4064(Obj_800A4064 *self);
f32 newton_sqrtf(f32);
void init_xyz_limits__10TObjPlayerFv(void);
M2C_UNK draw_transformed_primitive__9TWindowDDFPvPvPvPv(void *, int, s32, int);
s32 matrix_mult_vec(int, void *, void *);
M2C_UNK set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern Cam_800A3D1C lbl_8058D4F8;
extern s32 TObjPlayer__effect_count;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D99F0;
extern const f32 lbl_805D99FC;
extern const f32 lbl_805D9A00;
void draw_ribbon_strip__10TObjPlayerFPv(Obj_800A3D1C *o);
}

extern "C" {

void TEneEffHamon__sub_800A380C(void);
void *TObjPlayer__sub_800A41AC(void *arg0, s16 arg1);
void init_fish_effects__12TEneEffHamonFv(void);
int TObjFish__sub_8001EDB0(void*, void*);
int get_bml_model(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void render__12TEneEffHamonFv(Hamon_800A36A8 *o) {
    f32 s;
    if (o->delay > 0) {
        return;
    }
    lbl_805D5660 = some_id_805c6f74;
    copy_vec4__13TRaderMapCoreFPvPv(saved_model_draw_color, lbl_8058D4C0);
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    some_id_805c6f74 |= 0x810;
    set_chunk_material_override_pair(0xFFFF00FF, 0x800);
    set_global_param__8TObjFishFi(TEneEffHamon__fish_effect_param);
    set_chunk_material_color(o->color50);
    push_matrix();
    post_translate_matrix(o->mtx1C);
    s = o->f40 * o->scale;
    scale_matrix(0, s, s, s);
    draw_chunk_object(TEneEffHamon__fish_model);
    pop_matrix();
    set_chunk_material_color(chunk_material_color_half_alpha_f32);
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, saved_model_draw_color);
    some_id_805c6f74 = lbl_805D5660;
}

void run_task__12TEneEffHamonFv(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r4 - 1);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) + M2C_FIELD(arg0, f32 *, 0x44));
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + M2C_FIELD(arg0, f32 *, 0x48));
    if (M2C_FIELD(arg0, f32 *, 0x50) <= lbl_805D99E0) {
        queue_destruction__7TObjectFv();
    }
}

void TEneEffHamon__sub_800A380C(void) {  }

    extern int player_effect_bml_resource;
    extern int TEneEffHamon__fish_model;
    extern int TEneEffHamon__fish_effect_param;
void init_fish_effects__12TEneEffHamonFv(void) { TEneEffHamon__fish_model = get_bml_model((void*)(player_effect_bml_resource), (void*)3); TEneEffHamon__fish_effect_param = TObjFish__sub_8001EDB0((void*)(player_effect_bml_resource), (void*)3); }

extern M2C_UNK lbl_80490A18[];

}

TEneEffHamon::~TEneEffHamon() {}

extern "C" {

typedef char RecoveredGlobal_800A38A4___vt__12TEneEffHamon_size[sizeof(RecoveredGlobal_800A38A4___vt__12TEneEffHamon) == 0x18 ? 1 : -1];
u8 *__ct__12TEneEffHamonFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    __ct__7TObjectFP7TObject((void *)((void *) (arg0)), (void *)((int) (tl_06)));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TEneEffHamon.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D29D8;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805D99E4;
    VecCopy__FP3VecPC3Vec((void *) ((u8 *)(arg0) + 0x1C), (void *) (arg1));
    M2C_FIELD(arg0, f32 *, 0x40) = farg0;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) lbl_805D99E8;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) lbl_805D99E4;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805D99E4;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805D99E4;
    M2C_FIELD(arg0, s32 *, 0x4C) = arg3;
    if (arg2 <= 0) {
        arg2 = 1;
    }
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (lbl_805D99E4 / (f32) arg2);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (lbl_805D99EC / (f32) arg2);
    return arg0;
}

}
