#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8008655C_lbl_8048E728 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_800858D0_lbl_8048E6A8 {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_80085E78_lbl_8048E6DC {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct Col_80085798 { u32 r; u32 g; u32 b; u32 a; };

struct Obj_80085798 { u8 pad[0x38]; u8 target[0x10]; };

typedef s32 M2C_UNK;
struct Col_80086418 { u8 a, r, g, b; };

struct FCol_80086418 { f32 a, r, g, b; };

struct Ctrl_80086418 {
    u8 pad0[0x90];
    Col_80086418 color;
};

struct Src_800865BC {
    u8 pad0[0x14];
    s32 texId;
    u8 pad18[0x58 - 0x18];
    f32 f58;
    f32 f5C;
};

struct Particle_800865BC {
    u8 pad0[0x18];
    void *vt;
    s16 tex;
    u8 pad1E[0x20 - 0x1E];
    Src_800865BC *src;
    s16 f24;
    u16 f26;
    f32 f28, f2C;
    u8 pad30[0x3C - 0x30];
    f32 f3C, f40, f44, f48, f4C, f50, f54, f58, f5C, f60, f64;
    u8 pad68[0x6C - 0x68];
    s32 f6C;
    f32 f70, f74, f78, f7C, f80, f84, f88, f8C;
    s32 f90;
    s8 f94;
    s8 f95;
    s16 f96;
    s32 f98, f9C, fA0;
    f32 fA4, fA8;
    u8 padAC[0xB0 - 0xAC];
    s32 fB0, fB4, fB8;
    f32 fBC;
};

struct Vec_80086248 { f32 x, y, z; };

struct Vtx_80086248 { f32 x, y, z, u, v; u32 color; };

struct UV_80086248 { f32 u0, v0, u1, v1; };

struct Tex_80086248 {
    u32 flags;
    s32 param;
    s32 tex;
    u8 pad0C[4];
    UV_80086248 *uvs;
    f32 sx;
    f32 sy;
    s32 color;
    u8 pad20[8];
};

typedef struct Vec_80085EE4 { f32 x, y, z; } Vec_80085EE4;
typedef struct Quad_80085EE4 { f32 x, y, z, ax, ay, bx, by, pad1C; f32 u, v, du, k0, k1, dv; f32 pad38[2]; } Quad_80085EE4;

typedef struct Cam_80085EE4 {
    u8 pad0[8];
    f32 cx;
    f32 cy;
    u8 pad10[8];
    f32 scale;
    f32 aspect;
} Cam_80085EE4;

typedef struct Particle_80085EE4 {
    u8 pad0[0x70];
    Vec_80085EE4 pos;
    Vec_80085EE4 off;
    f32 f88;
    f32 f8C;
    s32 f90;
    s8 f94;
    s8 f95;
    s16 f96;
} Particle_80085EE4;

struct Ctrl_80086248 {
    u8 pad0[0x1C];
    u16 tex;
    u8 pad1E[0x70 - 0x1E];
    Vec_80086248 pos;
    Vec_80086248 ofs;
    f32 w;
    f32 h;
    u32 color;
    s8 frame;
};

struct Vec_80085CB0 { f32 x, y, z; };

struct Player_80085CB0 {
    u8 pad0[0x178];
    Vec_80085CB0 pos;
    u8 pad184[0x194 - 0x184];
    s32 f194;
};

struct Ctrl_80085CB0 {
    u8 pad0[0x38];
    Vec_80085CB0 pos;
    u8 pad44[0x90 - 0x44];
    f32 f90;
    f32 f94;
    s32 f98;
};

extern "C" {
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_particle;
u8 *create_particle_obj_90__13TParticleCtrlFi(s32 arg0);
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_particle;
u8 *create_particle_obj_ac__13TParticleCtrlFi(s32 arg0);
extern RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
s32 is_particle_sprite_additive(u8 *arg0);
u8 * __dt__7TObjectFv(void *, s16);
void free_from_heap__13TParticleCtrlFPv(void *);
extern RecoveredGlobal_8008655C_lbl_8048E728 lbl_8048E728;
u8 *TParticleCtrl__sub_8008655C(u8 *arg0, s16 arg1);
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK lbl_8048E6A8[];
u8 *construct_particle_obj__13TParticleCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK lbl_8048E6DC[];
extern s32 lbl_805D2930;
extern const f32 lbl_805D9484;
u8 *init_particle_obj__13TParticleCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2);
extern Col_80085798 lbl_804393DC;
extern const f32 lbl_805D9478;
s32 check_demo_mode__10TObjPlayerFv(void);
void TObjRoomId__sub_80141CF4(void *dst, Col_80085798 *src, f32 t);
void apply_demo_mode_color__13TParticleCtrlFPv(Obj_80085798 *self);
M2C_UNK set_color_blend_mode(int, int, int, int);
M2C_UNK set_chunk_material_color(void *);
void apply_particle_model_fade_color(Ctrl_80086418 *self, s32 mode);
s32 find_particle_texture_index(s32 id);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8008655C_lbl_8048E728 lbl_8048E728;
extern const f32 TParticleCtrl__data_805D94C4;
extern const f32 TParticleCtrl__data_805D94CC;
void *init_particle_base(void *arg0, void *arg1, s32 arg2);
s32 is_split_screen(void);
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK setup_tev_stage__10TObjPlayerFv();
M2C_UNK load_projected_texture_matrix(f32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_tev_direct__13TParticleCtrlFi(int);
M2C_UNK play_indirect_effect_recipe(int, int, int);
M2C_UNK GXSetNumTexGens(int);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetNumTevStages(int);
M2C_UNK rotate_matrix_y(int, s32);
M2C_UNK rotate_matrix_x(int, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_texture_num(int);
M2C_UNK reset_particles__13TParticleCtrlFv();
M2C_UNK TParticleCtrl__sub_803E2A1C(void *, int);
M2C_UNK setup_particle_draw__13TParticleCtrlFi(int);
extern Tex_80086248 lbl_804C5820[];
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805D94D8;
void draw_particle_refraction_quad(Ctrl_80086248 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_80141EB4();
M2C_UNK setSpriteInverseColorBlend();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK DVDConvertEntrynumToPath(void *);
M2C_UNK set_draw_texture_and_color(int, int);
M2C_UNK set_constant_material_color(int);
extern Cam_80085EE4 lbl_8058D4F8;
extern const f32 lbl_805D94C0;
extern const f32 lbl_805D94C8;
f32 get_random_float__8TObjFishFv(f32);
u32 csnVector(void *, void *, int);
f32 vec3_dot(void *, void *);
f32 vec_squared_length(void *);
M2C_UNK rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, s32);
M2C_UNK normalize_vector(void *);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
extern Vec_80085CB0 lbl_804393D0;
extern M2C_UNK identity_matrix[];
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805D9480;
extern const f32 lbl_805D9488;
extern const f32 lbl_805D94AC;
extern const f32 lbl_805D94B4;
extern const f32 lbl_805D94B8;
void TParticleCtrl__sub_80085CB0(Ctrl_80085CB0 *self);
}

extern "C" {

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1);
void *TParticleCtrl__sub_80085E20(void *arg0, s16 arg1);
void check_player_proximity__13TParticleCtrlFPv(u8 *arg0);
void mark_active__13TParticleCtrlFPv(void *arg0);
f32 horizontal_distance_squared(void *, void *);
u32 get_player_by_client_id(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK get_object__13TParticleCtrlFPv(M2C_UNK);

extern s32 lbl_805D2930;
extern s32 local_client_id;
extern const f32 lbl_805D947C;
extern const f32 lbl_805D9480;

void apply_demo_mode_color__13TParticleCtrlFPv(Obj_80085798 *self) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        Col_80085798 c = lbl_804393DC;
        TObjRoomId__sub_80141CF4(self->target, &c, lbl_805D9478);
    }
}

void check_player_proximity__13TParticleCtrlFPv(u8 *arg0) {
    u32 temp_r3;

    temp_r3 = get_player_by_client_id((void *) (local_client_id));
    if ((temp_r3 != 0U) && (horizontal_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < lbl_805D947C)) {
        if (M2C_FIELD(arg0, f32 *, 0x68) > lbl_805D9480) {
            lbl_805D2930 = 1;
            return;
        }
        lbl_805D2930 = 0;
    }
}

extern M2C_UNK lbl_8048E6A8[];

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E6A8;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8048E6DC[];

typedef char RecoveredGlobal_800858D0_lbl_8048E6A8_size[sizeof(RecoveredGlobal_800858D0_lbl_8048E6A8) == 0x34 ? 1 : -1];
u8 *construct_particle_obj__13TParticleCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800858D0_lbl_8048E6A8 *)&lbl_8048E6A8).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    return arg0;
}

u8 *create_particle_obj_90__13TParticleCtrlFi(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x90));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(construct_particle_obj__13TParticleCtrlFPvii((u8 *)(temp_r3), (s32)(arg0), (s32)(tl_particle)));
    }
    return var_r0;
}

u8 *create_particle_obj_ac__13TParticleCtrlFi(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xAC));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(init_particle_obj__13TParticleCtrlFPvii((u8 *)(temp_r3), (s32)(arg0), (s32)(tl_particle)));
    }
    return var_r0;
}

#pragma fp_contract on
void TParticleCtrl__sub_80085CB0(Ctrl_80085CB0 *self) {
    Vec_80085CB0 out;
    Vec_80085CB0 d;
    f32 v;
    f32 r;
    if ((*(Player_80085CB0 * *)&camera_ctrl_instance) != NULL) {
        d.x = self->pos.x - (*(Player_80085CB0 * *)&camera_ctrl_instance)->pos.x;
        d.y = lbl_805D9480;
        d.z = self->pos.z - (*(Player_80085CB0 * *)&camera_ctrl_instance)->pos.z;
        if (lbl_805D9480 != vec_squared_length(&d)) {
            normalize_vector(&d);
        }
        push_matrix_from(identity_matrix);
        Vec_80085CB0 t = lbl_804393D0;
        rotate_matrix_y((int)(0), (s32)((*(Player_80085CB0 * *)&camera_ctrl_instance)->f194));
        rotate_vector_by_matrix(0, &t, &out);
        pop_matrix();
        self->f94 = vec3_dot(&out, &d);
        r = get_random_float__8TObjFishFv(self->f94);
        if (self->f94 >= 0.0f) {
            v = get_random_float__8TObjFishFv(lbl_805D94AC - r);
            if (v > lbl_805D94B4) {
                v = lbl_805D94B4;
            }
        } else {
            v = 0.0f;
        }
        self->f90 = lbl_805D9488 * v + lbl_805D94B8;
        Vec_80085CB0 p = (*(Player_80085CB0 * *)&camera_ctrl_instance)->pos;
        if (csnVector(&p, &self->pos, 0x100) != 0) {
            self->f98 = 1;
        } else {
            self->f98 = 0;
        }
    }
}

void *TParticleCtrl__sub_80085E20(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E6DC;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70_size[sizeof(RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_80085E78_lbl_8048E6DC_size[sizeof(RecoveredGlobal_80085E78_lbl_8048E6DC) == 0x34 ? 1 : -1];
u8 *init_particle_obj__13TParticleCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80085E78_lbl_8048E6DC *)&lbl_8048E6DC).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805D9484;
    lbl_805D2930 = 1;
    return arg0;
}

#pragma push
#pragma fp_contract on
void draw_sprite_quad__13TParticleCtrlFPvi(Particle_80085EE4 *p, s32 kind) {
    Vec_80085EE4 view;
    Vec_80085EE4 world;
    Quad_80085EE4 quad;
    UV_80086248 *uv;
    f32 sx;
    f32 sy;
    f32 x;
    f32 cy;
    f32 z;
    f32 y;
    f32 c;
    f32 s;
    u32 flags;
    f32 a;
    f32 b;

    flags = lbl_804C5820[kind].flags;
    if (flags & 2) {
        if (flags & 4) {
            fn_80141EB4();
        } else {
            reset_transform_state__10TObjPlayerFv();
        }
    } else if (flags & 4) {
        setSpriteInverseColorBlend();
    } else {
        init_xyz_limits__10TObjPlayerFv();
    }
    sy = lbl_8058D4F8.scale;
    x = lbl_8058D4F8.cx;
    cy = lbl_8058D4F8.cy;
    sx = sy * (lbl_805D94C0 / (lbl_805D94C0 * lbl_8058D4F8.aspect));
    begin_effect_render__13TParticleCtrlFv();
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_804C5820[kind].param);
    set_draw_texture_and_color(lbl_804C5820[kind].tex, lbl_804C5820[kind].color);
    uv = &lbl_804C5820[kind].uvs[p->f94];
    quad.u = uv->u0;
    quad.v = uv->v0;
    quad.du = uv->u1 - uv->u0;
    quad.k1 = quad.k0 = TParticleCtrl__data_805D94C4;
    quad.dv = uv->v1 - uv->v0;
    world.x = p->pos.x + p->off.x;
    world.y = p->pos.y + p->off.y;
    world.z = p->pos.z + p->off.z;
    if (p->f95 != 1) {
        matrix_mult_vec(0, &world, &view);
        view.y = -view.y;
    } else {
        VecCopy__FP3VecPC3Vec(&view, &world);
    }
    if (view.z <= lbl_805D94C8 || p->f95 == 1) {
        set_constant_material_color(p->f90);
        if (p->f95 != 1) {
            z = TParticleCtrl__data_805D94CC / -view.z;
            a = sx * z;
            b = sy * z;
            sx = a;
            sy = b;
            x = view.x * a + x;
            y = view.y * b + cy;
        } else {
            sx = TParticleCtrl__data_805D94CC;
            z = view.z;
            sy = sx;
            x = view.x;
            y = view.y;
        }
        sx *= lbl_804C5820[kind].sx;
        sy *= lbl_804C5820[kind].sy;
        sx *= p->f88;
        sy *= p->f8C;
        c = cos_table_lookup(p->f96);
        s = -sin_table_lookup(p->f96);
        quad.z = z;
        quad.x = x - (sx * c + sy * s);
        quad.y = y - (-sx * s + sy * c);
        sy = sy + sy;
        sx = sx + sx;
        quad.ax = sx * c;
        quad.ay = -sx * s;
        quad.bx = sy * s;
        quad.by = sy * c;
        DVDConvertEntrynumToPath(&quad);
    }
    get_player__20TWindowSubStatusDispFv();
    end_effect_render__13TParticleCtrlFv();
    reset_transform_state__10TObjPlayerFv();
}
#pragma pop

s32 is_particle_sprite_additive(u8 *arg0) {
    return *M2C_FIELD(M2C_FIELD(&TParticleCtrl__data_80511F70.value, M2C_UNK *, (M2C_FIELD(arg0, u16 *, 0x1C) * 4)), s32 **, 0x28) & 1;
}

void mark_active__13TParticleCtrlFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x24) = (u16) (M2C_FIELD(arg0, u16 *, 0x24) | 0x2000);
    get_object__13TParticleCtrlFPv(0x1F);
}
typedef char RecoveredGlobal_8008655C_lbl_8048E728_size[sizeof(RecoveredGlobal_8008655C_lbl_8048E728) == 0x18 ? 1 : -1];

void draw_particle_refraction_quad(Ctrl_80086248 *self) {
    Vec_80086248 p;
    Vtx_80086248 v[4];
    s32 frame;
    UV_80086248 *uv;
    frame = self->frame;
    if (is_split_screen() != 0) {
        return;
    }
    begin_effect_render__13TParticleCtrlFv();
    uv = &lbl_804C5820[self->tex].uvs[frame];
    p.x = self->pos.x + self->ofs.x;
    p.y = self->pos.y + self->ofs.y;
    p.z = self->pos.z + self->ofs.z;
    v[0].x = 10.0f * self->w; v[0].y = 10.0f * self->h; v[0].z = 0.0f; v[0].u = uv->u0; v[0].v = uv->v0; v[0].color = self->color;
    v[1].x = 10.0f * self->w; v[1].y = -10.0f * self->h; v[1].z = 0.0f; v[1].u = uv->u1; v[1].v = uv->v0; v[1].color = self->color;
    v[2].x = -10.0f * self->w; v[2].y = 10.0f * self->h; v[2].z = 0.0f; v[2].u = uv->u0; v[2].v = uv->v1; v[2].color = self->color;
    v[3].x = -10.0f * self->w; v[3].y = -10.0f * self->h; v[3].z = 0.0f; v[3].u = uv->u1; v[3].v = uv->v1; v[3].color = self->color;
    push_matrix();
    post_translate_matrix(&p);
    rotate_matrix_y(0, *(s32 *)(camera_ctrl_instance + 0x194));
    rotate_matrix_x(0, *(s32 *)(camera_ctrl_instance + 0x190));
    load_projected_texture_matrix(lbl_805D94D8);
    set_global_param__8TObjFishFi(*(s32 *)((u8 *)lbl_804C5820 + 0x16C));
    set_texture_num(self->tex);
    setup_particle_draw__13TParticleCtrlFi(1);
    GXSetNumTevStages(2);
    GXSetNumTexGens(2);
    GXSetTevOp(0, 0);
    play_indirect_effect_recipe(0x1F, 0, 1);
    setup_tev_stage__10TObjPlayerFv();
    TParticleCtrl__sub_803E2A1C(v, 4);
    reset_particles__13TParticleCtrlFv();
    disable_if_single_screen__13TParticleCtrlFv();
    set_tev_direct__13TParticleCtrlFi(1);
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

void apply_particle_model_fade_color(Ctrl_80086418 *self, s32 mode) {
    FCol_80086418 f;
    if (mode != 0) {
        set_color_blend_mode(1, 4, 1, 0);
        Col_80086418 c = self->color;
        f.a = 0.0f;
        f.r = -(1.0f - c.r / 255.0f);
        f.g = -(1.0f - c.g / 255.0f);
        f.b = -(1.0f - c.b / 255.0f);
    } else {
        set_color_blend_mode(1, 4, 5, 0);
        Col_80086418 c = self->color;
        f.a = -(1.0f - c.a / 255.0f);
        f.r = 0.0f;
        f.g = 0.0f;
        f.b = 0.0f;
    }
    set_chunk_material_color(&f);
}

u8 *TParticleCtrl__sub_8008655C(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8048E728.value;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_from_heap__13TParticleCtrlFPv(arg0);
        }
    }
    return arg0;
}
void *init_particle_base(void *arg0, void *arg1, s32 arg2) {
    Particle_800865BC *p = (Particle_800865BC *)arg0;
    f32 v;
    __ct__7TObjectFP7TObject(arg0, (void *)arg2);
    p->vt = &lbl_8048E728.value;
    p->fB0 = 0;
    p->fB4 = 0;
    p->fB8 = 0;
    p->fBC = TParticleCtrl__data_805D94C4;
    p->f48 = TParticleCtrl__data_805D94C4;
    p->f4C = TParticleCtrl__data_805D94C4;
    p->f50 = TParticleCtrl__data_805D94C4;
    p->f54 = TParticleCtrl__data_805D94C4;
    p->f98 = 0;
    p->f9C = 0;
    p->fA0 = 0;
    p->fA4 = TParticleCtrl__data_805D94CC;
    p->fA8 = TParticleCtrl__data_805D94CC;
    p->src = (Src_800865BC *)arg1;
    v = TParticleCtrl__data_805D94C4;
    if (p->src->f58 > TParticleCtrl__data_805D94C4) {
        v = TParticleCtrl__data_805D94CC / p->src->f58;
    }
    p->f60 = v;
    v = TParticleCtrl__data_805D94C4;
    if (p->src->f5C > TParticleCtrl__data_805D94C4) {
        v = TParticleCtrl__data_805D94CC / p->src->f5C;
    }
    p->f64 = v;
    p->tex = find_particle_texture_index(p->src->texId);
    p->f28 = TParticleCtrl__data_805D94CC;
    p->f2C = TParticleCtrl__data_805D94CC;
    p->f3C = TParticleCtrl__data_805D94C4;
    p->f40 = TParticleCtrl__data_805D94C4;
    p->f44 = TParticleCtrl__data_805D94C4;
    p->f58 = TParticleCtrl__data_805D94C4;
    p->f5C = TParticleCtrl__data_805D94C4;
    p->f70 = TParticleCtrl__data_805D94C4;
    p->f74 = TParticleCtrl__data_805D94C4;
    p->f78 = TParticleCtrl__data_805D94C4;
    p->f7C = TParticleCtrl__data_805D94C4;
    p->f80 = TParticleCtrl__data_805D94C4;
    p->f84 = TParticleCtrl__data_805D94C4;
    p->f88 = TParticleCtrl__data_805D94C4;
    p->f8C = TParticleCtrl__data_805D94C4;
    p->f90 = 0;
    p->f94 = 0;
    p->f95 = 0;
    p->f96 = 0;
    p->f6C = 0;
    p->f24 = 0;
    p->f26 = 0xFFFF;
    return arg0;
}

}
