#include "types.h"
#include "pso/TObject.h"
class TBGLightning : public TObject {
public:
    virtual void render_shadows();
    virtual ~TBGLightning();
};
#include <stddef.h>
#include "pso/misc/TBGLightningCtrl.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_802A9C24___vt__16TBGLightningCtrl {
    s32 value;
    u8 remaining[0x30];
};

typedef char RecoveredGlobal_802A9C24___vt__16TBGLightningCtrl_size[sizeof(RecoveredGlobal_802A9C24___vt__16TBGLightningCtrl) == 0x34 ? 1 : -1];

struct Stack_802AA0A4 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Vtx_802A9D40 { f32 x, y, z, u, v; s32 c; };

struct Vec_802A9DF4 { f32 x, y, z; };

struct Obj_802A9DF4 {
    u8 pad0[0x1C];
    s8 f1c;
    s8 f1d;
    u8 pad1e[2];
    Vec_802A9DF4 pos;
    f32 f2c;
};

struct Vec_802A9F48 { f32 x, y, z; };

struct Obj_802A9F48 {
    u8 pad0[0x1C];
    s8 f1c;
    s8 f1d;
    u8 pad1e[2];
    Vec_802A9F48 pos;
    f32 f2c;
};

struct Stack_802A9A2C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

s32 VecCopy__FP3VecPC3Vec(void *, s32, s8, f32, f32);
s32 queue_destruction__7TObjectFv();
s32 get_state_flag__9TMainTaskFv();
s32 construct_world_actor_base(void *, void *);
int load_gvm_texture_file(void*);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(u8 *, void *);
void TBGLightningCtrl__sub_802A9A08(void);
void spawn_lightning_at_angle__16TBGLightningCtrlFPvi(u8 *arg0, s32 arg1);
void * __dt__16TBGLightningCtrlFv(void *arg0, s16 arg1);
u8 * TBGLightningCtrl__ct(u8 *arg0, s32 arg1, s32 arg2);
void * TBGLightningCtrl__create(void *arg0);
void submit_particle_quad(void *arg0, f32 *p, f32 *d, s32 c);
void fn_802A9DF4(Obj_802A9DF4 *self, Vec_802A9DF4 *dir);
void fn_802A9F48(Obj_802A9F48 *self, Vec_802A9F48 *dir);
void render__12TBGLightningFv(s32 arg0);
void run_task__12TBGLightningFv(void *arg0);
u8 * create__12TBGLightningFiif(s32 arg0, s32 arg1, f32 farg0);
u8 * __ct__12TBGLightningFv(u8 *arg0, void *arg1, s32 arg2, f32 farg0);
u32 __cvt_fp2unsigned(f32);
s32 rand();
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
s32 TLobby__sub_803DA16C(void*);
void set_texture_num(s32);
void TParticleCtrl__sub_803E2A1C(void *, int);

extern void *__vt__12TBGLightning[];
extern void *__vt__16TBGLightningCtrl[];
extern unsigned char lbl_8046FCA0[];
__declspec(section ".rodata") extern const char lbl_8046FC68[] = "TBGLightning";
const char *TBGLightning__name = lbl_8046FC68;
__declspec(section ".rodata") extern const char lbl_8046FC78[] = "TBGLightningCtrl";
const char *TBGLightningCtrl__name = lbl_8046FC78;
__declspec(section ".rodata") s32 lbl_8046FC8C[3] = { 1, 5, 0 };
extern void *camera_ctrl_instance;
extern int bg_lightning_texture_handle;
extern void *tl_05;

void TBGLightningCtrl__sub_802A9A08(void) { TObjFish::set_global_param((s32)((void*)(bg_lightning_texture_handle))); }

#pragma push
#pragma fp_contract on
void spawn_lightning_at_angle__16TBGLightningCtrlFPvi(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_802A9A2C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802A9A2C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802A9A2C, sp10) == 0x8) ? 1 : -1];
    Stack_802A9A2C stack;

    stack.sp8 = *(f32 *)((s8 *)arg0 + 0x68) * sin_table_lookup(arg1);
    stack.spC = *(f32 *)((s8 *)arg0 + 0x6C);
    stack.sp10 = *(f32 *)((s8 *)arg0 + 0x68) * cos_table_lookup(arg1);
    ((s32 (*)(s32, s32, f32))create__12TBGLightningFiif)((s32) arg0, (s32) &stack.sp8, *(f32 *)((s8 *)arg0 + 0x70) * (((0.3f) * ((3.0517578e-05f) * (f32) rand())) + (1.0f)));
}
#pragma pop

void TBGLightningCtrl::render() {  }

#pragma push
#pragma fp_contract on
void run_task__16TBGLightningCtrlFv(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r3;

    temp_r3 = *(s32 *)((s8 *)arg0 + 0x90);
    *(s32 *)((s8 *)arg0 + 0x90) = (s32) (temp_r3 - 1);
    if (temp_r3 <= 0) {
        temp_f2 = (f32) ((int (*)(void))rand)();
        temp_f1 = (3.0517578e-05f) * temp_f2;
        ((void (*)(void *, s32, f32, f32))spawn_lightning_at_angle__16TBGLightningCtrlFPvi)(arg0, (s32) ((65536.0f) * temp_f1), temp_f1, temp_f2);
        *(s32 *)((s8 *)arg0 + 0x90) = (s32) (((f32) *(s32 *)((s8 *)arg0 + 0x88) * ((3.0517578e-05f) * (f32) ((int (*)(void))rand)())) + (f32) *(s32 *)((s8 *)arg0 + 0x84));
    }
}
#pragma pop

void *__dt__16TBGLightningCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__16TBGLightningCtrl;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TBGLightningCtrl__ct(u8 *arg0, s32 parent, s32 arg2) {
    construct_world_actor_base((void *) (arg0), (void *) (parent));
    *(s32 **)((s8 *)arg0 + 0x18) = (s32 *)__vt__16TBGLightningCtrl;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBGLightningCtrl__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x90) = 0;
    return arg0;
}

void *TBGLightningCtrl__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TBGLightningCtrl__ct)(o, tl_05, arg0);
    }
    return o;
}

void TBGLightningCtrl::destroy_instance() {
    if ((u32) (*(u32 *)&bg_lightning_texture_handle) != 0U) {
        TLobby__sub_803DA16C((void*)(*(u32 *)&bg_lightning_texture_handle));
        TAdSinglePlyChrSelectGC::safe_free((*(u32 *)&bg_lightning_texture_handle));
        (*(u32 *)&bg_lightning_texture_handle) = 0U;
    }
}

void load_bg_lightning(void) { bg_lightning_texture_handle = load_gvm_texture_file(lbl_8046FCA0); }
__declspec(section ".rodata") extern unsigned char lbl_8046FCA0[] = "bg_lightning.gvm";

extern const f32 lbl_805DE040 = 0.0f;
void submit_particle_quad(void *arg0, f32 *p, f32 *d, s32 c) {
    Vtx_802A9D40 r[4];
    f32 x;
    f32 lo;
    f32 yd;
    f32 hi;
    f32 z;
    f32 y;
    hi = *(const volatile f32 *)&lbl_805DE040;
    lo = (1.0f);
    r[0].x = x = p[0]; r[0].y = y = p[1]; r[0].z = z = p[2]; r[0].u = hi; r[0].v = hi; r[0].c = c;
    r[1].x = x; r[1].y = yd = y + d[1]; r[1].z = z; r[1].u = hi; r[1].v = lo; r[1].c = c;
    r[2].x = x + d[0]; r[2].y = y; r[2].z = z + d[2]; r[2].u = lo; r[2].v = hi; r[2].c = c;
    r[3].x = x + d[0]; r[3].y = yd; r[3].z = z + d[2]; r[3].u = lo; r[3].v = lo; r[3].c = c;
    TParticleCtrl__sub_803E2A1C(r, 4);
}

#pragma push
#pragma fp_contract on
void fn_802A9DF4(Obj_802A9DF4 *self, Vec_802A9DF4 *dir) {
    Vec_802A9DF4 p;
    Vec_802A9DF4 d;
    f32 scale;
    s32 idx;
    f32 s;
    switch (self->f1d) {
    case 0:
        scale = 1.0f;
        idx = 0;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
        scale = 1.0f;
        idx = self->f1d - 1;
        break;
    default:
        idx = 3;
        scale = 0.5f - 0.5f * (f32)(self->f1d - 5) / 7.0f;
        break;
    }
    d.x = dir->x * (64.0f * self->f2c);
    d.y = dir->y * (64.0f * self->f2c);
    d.z = dir->z * (64.0f * self->f2c);
    p.x = self->pos.x - 0.5f * d.x;
    p.y = self->pos.y - d.y;
    p.z = self->pos.z - 0.5f * d.z;
    TBGLightningCtrl__sub_802A9A08();
    set_texture_num(idx + lbl_8046FC8C[self->f1c]);
    TParticleCtrl::setup_particle_draw(1);
    submit_particle_quad((void *)(self), (f32 *)(&p), (f32 *)(&d), (s32)(__cvt_fp2unsigned(4278190080.0f * scale) | 0xFFFFFF));
    TParticleCtrl::reset_particles();
}
#pragma pop

#pragma push
#pragma fp_contract on
void fn_802A9F48(Obj_802A9F48 *self, Vec_802A9F48 *dir) {
    Vec_802A9F48 p;
    Vec_802A9F48 d;
    f32 scale;
    switch (self->f1d) {
    case 0:
    case 2:
        scale = 0.5f;
        break;
    case 1:
    case 3:
        scale = 1.0f;
        break;
    default:
        scale = 0.5f - 0.5f * (f32)(self->f1d - 4) / 8.0f;
        break;
    }
    d.x = dir->x * (64.0f * self->f2c);
    d.y = dir->y * (64.0f * self->f2c);
    d.z = dir->z * (64.0f * self->f2c);
    p.x = self->pos.x + dir->x * (-3.0f * self->f2c) - 0.5f * d.x;
    p.y = self->pos.y + dir->y * (-24.0f * self->f2c) - d.y;
    p.z = self->pos.z + dir->z * (-3.0f * self->f2c) - 0.5f * d.z;
    TBGLightningCtrl__sub_802A9A08();
    set_texture_num(0);
    TParticleCtrl::setup_particle_draw(1);
    submit_particle_quad((void *)(self), (f32 *)(&p), (f32 *)(&d), (s32)(__cvt_fp2unsigned(4278190080.0f * scale) | 0xFFFFFF));
    TParticleCtrl::reset_particles();
}
#pragma pop

void render__12TBGLightningFv(s32 arg0) {
    Stack_802AA0A4 stack;
    s32 temp_r31;
    if (get_state_flag__9TMainTaskFv() != 0) {
        temp_r31 = *(s32 *)((s8 *)camera_ctrl_instance + 0x194) + 0x4000;
        stack.sp8 = sin_table_lookup(temp_r31);
        stack.spC = (-1.0f);
        stack.sp10 = cos_table_lookup(temp_r31);
        TParticleCtrl::begin_effect_render();
        TObjPlayer::init_xyz_limits();
        ((s32 (*)(s32, f32 *))fn_802A9F48)(arg0, &stack.sp8);
        ((s32 (*)(s32, f32 *))fn_802A9DF4)(arg0, &stack.sp8);
        TObjPlayer::reset_transform_state();
        TParticleCtrl::end_effect_render();
    }
}

void run_task__12TBGLightningFv(void *arg0) {
    int temp_r4;

    temp_r4 = *(u8 *)((s8 *)arg0 + 0x1D) + 1;
    *(u8 *)((s8 *)arg0 + 0x1D) = (u8) temp_r4;
    if ((s8) temp_r4 >= 0xC) {
        queue_destruction__7TObjectFv();
    }
}

u8 *create__12TBGLightningFiif(s32 arg0, s32 arg1, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(((u8 * (*)(s32))__nw__7TObjectFUl)(0x30));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(__ct__12TBGLightningFv((u8 *)(temp_r3), (void *)(arg0), (s32)(arg1), farg0));
    }
    return var_r0;
}

}
TBGLightning::~TBGLightning() {}

extern "C" {
u8 *__ct__12TBGLightningFv(u8 *arg0, void *arg1, s32 arg2, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    s8 temp_r5;

    __ct__7TObjectFP7TObject(arg0, arg1);
    *(void **)((s8 *)arg0 + 0x18) = (void *) __vt__12TBGLightning;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBGLightning__name;
    temp_f2 = (f32) rand();
    temp_f1 = (3.0517578e-05f) * temp_f2;
    temp_r5 = (s8) ((2.0f) * temp_f1);
    *(s8 *)((s8 *)arg0 + 0x1C) = temp_r5;
    *(s8 *)((s8 *)arg0 + 0x1D) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2, temp_r5, temp_f1, temp_f2);
    *(f32 *)((s8 *)arg0 + 0x2C) = farg0;
    return arg0;
}

void __dt__12TBGLightningFv();
void render_shadows__7TObjectFv();
void vfunc_6__13TUnk_804B9870FPsl();
void apply_object_set_data();
void reset_motion_fields__13TUnk_804B9870Fv();
void vfunc_9__13TUnk_804B9870Fv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void classify_actor_view_detail__13TUnk_804B9870Ffff();
void vfunc_12__13TUnk_804B9870Fv();
void *__vt__16TBGLightningCtrl[] = {
    0, 0,
    (void *)__dt__16TBGLightningCtrlFv,
    (void *)run_task__16TBGLightningCtrlFv,
    (void *)TBGLightningCtrl::render,
    (void *)render_shadows__7TObjectFv,
    (void *)vfunc_6__13TUnk_804B9870FPsl,
    (void *)apply_object_set_data,
    (void *)reset_motion_fields__13TUnk_804B9870Fv,
    (void *)vfunc_9__13TUnk_804B9870Fv,
    (void *)update_object_view_visibility__13TUnk_804B9870Fff,
    (void *)classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)vfunc_12__13TUnk_804B9870Fv,
};
void *__vt__12TBGLightning[] = {
    0, 0,
    (void *)__dt__12TBGLightningFv,
    (void *)run_task__12TBGLightningFv,
    (void *)render__12TBGLightningFv,
    (void *)render_shadows__7TObjectFv,
    0,
};
}
