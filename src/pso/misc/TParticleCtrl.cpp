#include "types.h"
#include "pso/misc/TUnk_8048E728.h"
#include "pso/misc/TUnk_8048E778.h"
#include "pso/misc/TUnk_8048E6DC.h"
#include "pso/misc/TUnk_8048E6A8.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_8008655C_lbl_8048E728 {
    s32 value;
    u8 remaining[0x14];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_800858D0_lbl_8048E6A8 {
    s32 value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_80085E78_lbl_8048E6DC {
    s32 value;
    u8 remaining[0x30];
};

struct Col_80085798 { u32 r; u32 g; u32 b; u32 a; };

struct Obj_80085798 { u8 pad[0x38]; u8 target[0x10]; };

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
u8 *__nw__7TObjectFUl(s32);
extern s32 tl_particle;
s32 is_split_screen(void);
u8 *__nw__7TObjectFUl(s32);
extern s32 tl_particle;
extern RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70 TParticleCtrl__data_80511F70;
u8 * __dt__7TObjectFv(void *, s16);
extern RecoveredGlobal_8008655C_lbl_8048E728 lbl_8048E728;
u8 *TParticleCtrl__sub_8008655C(u8 *arg0, s16 arg1);
s32 construct_world_actor_base(void *, void *);
extern s32 lbl_8048E6A8[];
s32 construct_world_actor_base(void *, void *);
extern s32 lbl_8048E6DC[];
extern s32 lbl_805D2930;
extern const f32 lbl_805D9484;
extern Col_80085798 demo_mode_particle_color;
extern const f32 lbl_805D9478;
void TObjRoomId__sub_80141CF4(void *dst, Col_80085798 *src, f32 t);
s32 set_color_blend_mode(int, int, int, int);
s32 set_chunk_material_color(void *);
s32 find_particle_texture_index(s32 id);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8008655C_lbl_8048E728 lbl_8048E728;
extern const f32 TParticleCtrl__data_805D94C4;
extern const f32 TParticleCtrl__data_805D94CC;
void *init_particle_base(void *arg0, void *arg1, s32 arg2);
s32 is_split_screen(void);
s32 load_projected_texture_matrix(f32);
s32 play_indirect_effect_recipe(int, int, int);
s32 GXSetNumTexGens(int);
s32 GXSetTevOp(int, int);
s32 GXSetNumTevStages(int);
s32 rotate_matrix_y(int, s32);
s32 rotate_matrix_x(int, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_texture_num(int);
s32 TParticleCtrl__sub_803E2A1C(void *, int);
extern Tex_80086248 lbl_804C5820[];
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805D94D8;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 fn_80141EB4();
s32 setSpriteInverseColorBlend();
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
s32 matrix_mult_vec(int, void *, void *);
s32 begin_screen_draw(int);
s32 DVDConvertEntrynumToPath(void *);
s32 set_draw_texture_and_color(int, int);
s32 set_constant_material_color(int);
extern Cam_80085EE4 lbl_8058D4F8;
extern const f32 lbl_805D94C0;
extern const f32 lbl_805D94C8;
f32 fabs_float(f32);
u32 csnVector(void *, void *, int);
f32 vec3_dot(void *, void *);
f32 vec_squared_length(void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, s32);
s32 normalize_vector(void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern Vec_80085CB0 lbl_804393D0;
extern s32 identity_matrix[];
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805D9480;
extern const f32 lbl_805D9488;
extern const f32 lbl_805D94AC;
extern const f32 lbl_805D94B4;
extern const f32 lbl_805D94B8;
}

extern "C" {

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1);
void *TParticleCtrl__sub_80085E20(void *arg0, s16 arg1);
f32 horizontal_distance_squared(void *, void *);
u32 get_player_by_client_id(void *);
void __dl__7TObjectFPv(void *);

extern s32 lbl_805D2930;
extern s32 local_client_id;
extern const f32 lbl_805D947C;
extern const f32 lbl_805D9480;

void TUnk_8048E6A8::render() {
    Obj_80085798 *self = (Obj_80085798 *)this;
    if (TObjPlayer::check_demo_mode() != 0) {
        Col_80085798 c = demo_mode_particle_color;
        TObjRoomId__sub_80141CF4(self->target, &c, lbl_805D9478);
    }
}

void TUnk_8048E6A8::run_task() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r3;

    temp_r3 = get_player_by_client_id((void *) (local_client_id));
    if ((temp_r3 != 0U) && (horizontal_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38)) < lbl_805D947C)) {
        if (this->scale > lbl_805D9480) {
            lbl_805D2930 = 1;
            return;
        }
        lbl_805D2930 = 0;
    }
}

extern s32 lbl_8048E6A8[];

void *TParticleCtrl__sub_80085878(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8048E6A8;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_8048E6DC[];

typedef char RecoveredGlobal_800858D0_lbl_8048E6A8_size[sizeof(RecoveredGlobal_800858D0_lbl_8048E6A8) == 0x34 ? 1 : -1];
u8 *TParticleCtrl::construct_particle_obj(s32 arg1, s32 arg2) {
    construct_world_actor_base((void *) (((u8 *)this)), (void *) (arg2));
    *(s32 **)((s8 *)((u8 *)this) + 0x18) = &(*(RecoveredGlobal_800858D0_lbl_8048E6A8 *)&lbl_8048E6A8).value;
    ((VObj_18_1a504b *)(((u8 *)this)))->m5(arg1);
    return ((u8 *)this);
}

u8 *TParticleCtrl::create_particle_obj_90(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x90));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(((TParticleCtrl *)temp_r3)->construct_particle_obj((s32)(arg0), (s32)(tl_particle)));
    }
    return var_r0;
}

u8 *TParticleCtrl::create_particle_obj_ac(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xAC));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(((TParticleCtrl *)temp_r3)->init_particle_obj((s32)(arg0), (s32)(tl_particle)));
    }
    return var_r0;
}

#pragma fp_contract on
void TUnk_8048E6DC::run_task() {
    Ctrl_80085CB0 *self = (Ctrl_80085CB0 *)this;
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
        r = fabs_float(self->f94);
        if (self->f94 >= 0.0f) {
            v = fabs_float(lbl_805D94AC - r);
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
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8048E6DC;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70_size[sizeof(RecoveredGlobal_800861F4_TParticleCtrl__data_80511F70) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_80085E78_lbl_8048E6DC_size[sizeof(RecoveredGlobal_80085E78_lbl_8048E6DC) == 0x34 ? 1 : -1];
u8 *TParticleCtrl::init_particle_obj(s32 arg1, s32 arg2) {
    construct_world_actor_base((void *) (((u8 *)this)), (void *) (arg2));
    *(s32 **)((s8 *)((u8 *)this) + 0x18) = &(*(RecoveredGlobal_80085E78_lbl_8048E6DC *)&lbl_8048E6DC).value;
    ((VObj_18_1a504b *)(((u8 *)this)))->m5(arg1);
    *(f32 *)((s8 *)((u8 *)this) + 0xA4) = (f32) lbl_805D9484;
    lbl_805D2930 = 1;
    return ((u8 *)this);
}

#pragma push
#pragma fp_contract on
void TUnk_8048E778::draw_sprite_quad(s32 kind) {
    Particle_80085EE4 *p = (Particle_80085EE4 *)this;
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
            TObjPlayer::reset_transform_state();
        }
    } else if (flags & 4) {
        setSpriteInverseColorBlend();
    } else {
        TObjPlayer::init_xyz_limits();
    }
    sy = lbl_8058D4F8.scale;
    x = lbl_8058D4F8.cx;
    cy = lbl_8058D4F8.cy;
    sx = sy * (lbl_805D94C0 / (lbl_805D94C0 * lbl_8058D4F8.aspect));
    TParticleCtrl::begin_effect_render();
    begin_screen_draw(1);
    TObjFish::set_global_param(lbl_804C5820[kind].param);
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
    TWindowSubStatusDisp::get_player();
    TParticleCtrl::end_effect_render();
    TObjPlayer::reset_transform_state();
}
#pragma pop

s32 TUnk_8048E728::is_particle_sprite_additive() {
    u8 *arg0 = (u8 *)this;
    return **(s32 **)((s8 *)(*(s32 *)((s8 *)(&TParticleCtrl__data_80511F70.value) + (*(u16 *)((s8 *)arg0 + 0x1C) * 4))) + 0x28) & 1;
}

void TParticleCtrl::mark_active() {
    *(u16 *)((s8 *)this + 0x24) = (u16) (*(u16 *)((s8 *)this + 0x24) | 0x2000);
    ((TParticleCtrl *)0x1F)->get_object();
}
typedef char RecoveredGlobal_8008655C_lbl_8048E728_size[sizeof(RecoveredGlobal_8008655C_lbl_8048E728) == 0x18 ? 1 : -1];

void TUnk_8048E728::draw_particle_refraction_quad() {
    Ctrl_80086248 *self = (Ctrl_80086248 *)this;
    Vec_80086248 p;
    Vtx_80086248 v[4];
    s32 frame;
    UV_80086248 *uv;
    frame = self->frame;
    if (is_split_screen() != 0) {
        return;
    }
    TParticleCtrl::begin_effect_render();
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
    TObjFish::set_global_param(*(s32 *)((u8 *)lbl_804C5820 + 0x16C));
    set_texture_num(self->tex);
    TParticleCtrl::setup_particle_draw(1);
    GXSetNumTevStages(2);
    GXSetNumTexGens(2);
    GXSetTevOp(0, 0);
    play_indirect_effect_recipe(0x1F, 0, 1);
    TObjPlayer::setup_tev_stage();
    TParticleCtrl__sub_803E2A1C(v, 4);
    TParticleCtrl::reset_particles();
    TParticleCtrl::disable_if_single_screen();
    TParticleCtrl::set_tev_direct(1);
    pop_matrix();
    TParticleCtrl::end_effect_render();
}

void TUnk_8048E728::apply_particle_model_fade_color(s32 mode) {
    Ctrl_80086418 *self = (Ctrl_80086418 *)this;
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
        *(s32 **)((s8 *)arg0 + 0x18) = &lbl_8048E728.value;
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            ((TUnk_8048E728 *)arg0)->free_from_heap();
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
