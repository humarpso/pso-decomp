#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80327F88_lbl_804ED598 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Vtx_80327D30 { f32 x, y, z, u, v; u32 color; };

struct Obj_80327D30 { u8 pad0[0x1C]; f32 w; f32 h; u8 pos[0xC]; u8 pad30; u8 f31; u8 pad32[2]; s32 f34; s32 f38; u8 pad3c[4]; void *f40; };

extern "C" {
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern M2C_UNK lbl_804ED598[];
void *__dt__13TParticleCtrlFPvs(void *arg0, s16 arg1);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int TObjPlayer__sub_803DC83C(int);
extern M2C_UNK lbl_804ED598[];
void set_tev_direct__13TParticleCtrlFi(s32 arg0);
extern M2C_UNK lbl_804ED5B0[];
int fn_802A8260(void*);
extern M2C_UNK lbl_804ED5B0[];
int get_object__13TParticleCtrlFPv(void* p);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int TObjPlayer__sub_803DC83C(int);
extern M2C_UNK lbl_804ED5B0[];
extern M2C_UNK lbl_804ED5B0[];
void play_particle__13TParticleCtrlFPvis(void *arg0, s32 arg1, s16 arg2);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern M2C_UNK lbl_804ED5B0[];
void *TParticleCtrl__sub_80328160(void *arg0, s16 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 __nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 fn_803281B8(int, int, int, int);
extern M2C_UNK lbl_804ED598[];
extern s32 tl_05;
u8 *TParticleCtrl__sub_80327F88(u8 *arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1);
s32 play_particle_at_active_slot__10TObjPlayerFiiiiii(s32, s32, s32, s32, s32, s32);
void TParticleCtrl__sub_80328090(u8 arg0, u16 arg1, s32 arg2);
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK setup_particle_tev(int);
M2C_UNK TParticleCtrl__sub_800836E8(f32);
M2C_UNK set_depth_buffer_settings_2__Fv();
M2C_UNK fn_80141A30();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
void reset_ind_tev_stages__13TParticleCtrlFv(void *);
void play_particle__13TParticleCtrlFPvis(void *arg0, s32 arg1, s16 arg2);
M2C_UNK GXSetNumTexGens(int);
M2C_UNK GXSetNumTevStages(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TParticleCtrl__sub_803DA7A8(int);
M2C_UNK reset_particles__13TParticleCtrlFv();
M2C_UNK TParticleCtrl__sub_803E2A1C(void *, int);
M2C_UNK TParticleCtrl__sub_803E2B68(int);
extern u8 lbl_804C5820[];
extern u8 *lbl_805D4DF0;
void TParticleCtrl__sub_80327D30(Obj_80327D30 *o);
}

extern "C" {

void update_lifetime__13TParticleCtrlFPv(void *arg0);

void TParticleCtrl__sub_80327D30(Obj_80327D30 *o) {
    Vtx_80327D30 v[4];
    if (o->f40 != NULL && o->f38 != 0) {
        v[0].x = 10.0f * o->w;
        v[0].y = 10.0f * o->h;
        v[0].z = 0.0f;
        v[0].u = 0.0f;
        v[0].v = 0.0f;
        v[0].color = 0xFFFF0000;
        v[1].x = 10.0f * o->w;
        v[1].y = -10.0f * o->h;
        v[1].z = 0.0f;
        v[1].u = 0.0f;
        v[1].v = 1.0f;
        v[1].color = 0xFFFF0000;
        v[2].x = -10.0f * o->w;
        v[2].y = 10.0f * o->h;
        v[2].z = 0.0f;
        v[2].u = 1.0f;
        v[2].v = 0.0f;
        v[2].color = 0xFFFF0000;
        v[3].x = -10.0f * o->w;
        v[3].y = -10.0f * o->h;
        v[3].z = 0.0f;
        v[3].u = 1.0f;
        v[3].v = 1.0f;
        v[3].color = 0xFFFF0000;
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(o->pos);
        rotate_matrix_y(0, *(s32 *)(lbl_805D4DF0 + 0x194));
        rotate_matrix_x(0, *(s32 *)(lbl_805D4DF0 + 0x190));
        TParticleCtrl__sub_800836E8(1.1333334f);
        set_global_param__8TObjFishFi(*(s32 *)(lbl_804C5820 + 0x16C));
        TParticleCtrl__sub_803DA7A8(o->f31);
        TParticleCtrl__sub_803E2B68(1);
        GXSetNumTevStages(2);
        GXSetNumTexGens(2);
        play_particle__13TParticleCtrlFPvis((void *)(o->f40), (s32)(0), (s16)(-1));
        setup_particle_tev(0);
        if (o->f34 != 0) {
            set_depth_buffer_settings_2__Fv();
        }
        TParticleCtrl__sub_803E2A1C(v, 4);
        if (o->f34 != 0) {
            fn_80141A30();
        }
        reset_particles__13TParticleCtrlFv();
        disable_if_single_screen__13TParticleCtrlFv();
        reset_ind_tev_stages__13TParticleCtrlFv((void *)(o->f40));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

void update_lifetime__13TParticleCtrlFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r4 != 0) {
        temp_r0 = temp_r4 - 1;
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_r0;
        if (temp_r0 == 0) {
            queue_destruction__7TObjectFv((void *)(arg0));
        }
    }
}
void *__dt__13TParticleCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED598;
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x40))); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80327F88_lbl_804ED598_size[sizeof(RecoveredGlobal_80327F88_lbl_804ED598) == 0x18 ? 1 : -1];
u8 *TParticleCtrl__sub_80327F88(u8 *arg0, s32 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6, f32 farg0, f32 farg1) {
    s32 temp_r3;
    s32 var_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg4));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80327F88_lbl_804ED598 *)&lbl_804ED598).value;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x20) = farg1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x24), (void *) (arg1));
    M2C_FIELD(arg0, s8 *, 0x30) = arg2;
    M2C_FIELD(arg0, s8 *, 0x31) = arg3;
    M2C_FIELD(arg0, s32 *, 0x34) = arg5;
    temp_r3 = __nw__7TObjectFUl((int) (0x20));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = fn_803281B8((int) (temp_r3), (int) (0x1F), (int) (0), (int) (tl_05));
    }
    M2C_FIELD(arg0, s32 *, 0x40) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg6;
    return arg0;
}

void set_tev_direct__13TParticleCtrlFi(s32 arg0) {
    if (arg0 != 0) {
        GXSetTevDirect(1);
    } else {
        GXSetTevDirect(0);
    }
    GXSetNumIndStages(0);
    TObjPlayer__sub_803DC83C(0);
}

void TParticleCtrl__sub_80328090(u8 arg0, u16 arg1, s32 arg2) {
    play_particle_at_active_slot__10TObjPlayerFiiiiii((s32) arg0, (s32) arg1, 0, 0, 0, arg2);
}

int get_object__13TParticleCtrlFPv(void* p) { return fn_802A8260(p); }
void reset_ind_tev_stages__13TParticleCtrlFv(void * _w0) { GXSetTevDirect(1); GXSetNumIndStages(0); TObjPlayer__sub_803DC83C(0); }
void play_particle__13TParticleCtrlFPvis(void *arg0, s32 arg1, s16 arg2) {
    if (arg2 < 0) {
        arg2 = (s16) M2C_FIELD(arg0, u8 *, 0x1C);
    }
    play_particle_at_active_slot__10TObjPlayerFiiiiii((u8)((u8) arg2), (u8)(M2C_FIELD(arg0, u8 *, 0x1D)), (s32)(0), (s32)(0), (s32)(0), (s32)(1));
}
void *TParticleCtrl__sub_80328160(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED5B0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
