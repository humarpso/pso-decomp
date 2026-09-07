#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80327F88_lbl_804ED598 {
    M2C_UNK value;
    u8 remaining[0x14];
};

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
int TParticleCtrl__sub_80328090(void);
int fn_802A8260(void*);
extern M2C_UNK lbl_804ED5B0[];
int get_object__13TParticleCtrlFPv(void* p);
int GXSetNumIndStages(int);
int GXSetTevDirect(int);
int TObjPlayer__sub_803DC83C(int);
extern M2C_UNK lbl_804ED5B0[];
void reset_ind_tev_stages__13TParticleCtrlFv(void);
s32 play_particle_at_active_slot__10TObjPlayerFiiiiii(u8, u8, s32, s32, s32, s32);
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
}

extern "C" {

void update_lifetime__13TParticleCtrlFPv(void *arg0);

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
int TParticleCtrl__sub_80328090(void) { return 0; }
int get_object__13TParticleCtrlFPv(void* p) { return fn_802A8260(p); }
void reset_ind_tev_stages__13TParticleCtrlFv(void) { GXSetTevDirect(1); GXSetNumIndStages(0); TObjPlayer__sub_803DC83C(0); }
void play_particle__13TParticleCtrlFPvis(void *arg0, s32 arg1, s16 arg2) {
    if (arg2 < 0) {
        arg2 = (s16) M2C_FIELD(arg0, u8 *, 0x1C);
    }
    play_particle_at_active_slot__10TObjPlayerFiiiiii((u8) arg2, M2C_FIELD(arg0, u8 *, 0x1D), 0, 0, 0, 1);
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
