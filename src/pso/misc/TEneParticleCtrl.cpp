#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80338C88_lbl_804EF458 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80338C88___vt__16TEneParticleCtrl {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct O_80338D58 { u8 pad[0x72]; s16 idx; u8 pad2[2]; s16 count; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s32 TBoss4DarkFalz__sub_8004C220(void *, void *);
u32 spawn_continuous_particle_effect_with_flags(void *, int, int);
s32 set_owner_id__13TParticleCtrlFPvUs(int, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *, void *);
extern RecoveredGlobal_80338C88_lbl_804EF458 lbl_804EF458;
extern M2C_UNK __vt__16TEneParticleCtrl[];
extern s32 lbl_805D4258;
u8 *TEneParticleCtrl__ct(u8 *arg0, s32 arg1, s32 arg2);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
s32 TWindowSubStatusDisp__sub_80338740(void *, void *, void *, void *, void *, void *, void *, void *, void *);
void fn_80338D58(O_80338D58 *arg0, void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8);
}

extern "C" {

void *__dt__16TEneParticleCtrlFv(void *arg0, s16 arg1);
void free_particle_ctrl__16TEneParticleCtrlFPv(void* p);
void* get_field_38_ptr__16TEneParticleCtrlFPv(void* p);
void set_param__16TEneParticleCtrlFPv(void* p);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
int TWindowSubStatusDisp__sub_80338B88(void* p);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
int enable__13TParticleCtrlFPv(void*);
void request_destroy__11TBoss4Type2FUi(void *);
int set_param_ptr__11TBoss4Type2FPvi(void*);

void set_param__16TEneParticleCtrlFPv(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) set_param_ptr__11TBoss4Type2FPvi(m); }
void free_particle_ctrl__16TEneParticleCtrlFPv(void* p) { void* m = *(void**)((char*)p + 0xc0); if (m) enable__13TParticleCtrlFPv(m); }

extern M2C_UNK __vt__16TEneParticleCtrl[];

void *__dt__16TEneParticleCtrlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TEneParticleCtrl;
        if (M2C_FIELD(arg0, void **, 0xC0) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0xC0)); }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80338C88_lbl_804EF458_size[sizeof(RecoveredGlobal_80338C88_lbl_804EF458) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80338C88___vt__16TEneParticleCtrl_size[sizeof(RecoveredGlobal_80338C88___vt__16TEneParticleCtrl) == 0x3C ? 1 : -1];
u8 *TEneParticleCtrl__ct(u8 *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    u8 *temp_r4;
    TObjPlayer__sub_801569F4((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80338C88___vt__16TEneParticleCtrl *)&__vt__16TEneParticleCtrl).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4258;
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804EF458.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
    M2C_FIELD(arg0, u16 *, 0xAC) = obj_getField1c((void *) (arg1));
    TBoss4DarkFalz__sub_8004C220((void *) (arg0), (void *) (arg1 + 0x74));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB4), (void *) (arg1 + 0x2FC));
    M2C_FIELD(arg0, s32 *, 0xB0) = arg2;
    M2C_FIELD(arg0, u32 *, 0xC0) = spawn_continuous_particle_effect_with_flags((void *) (arg0 + 0xB4), (int) (M2C_FIELD(arg0, s32 *, 0xB0)), (int) (0x10));
    temp_r3 = M2C_FIELD(arg0, u32 *, 0xC0);
    if (temp_r3 != 0U) {
        set_owner_id__13TParticleCtrlFPvUs((int) (temp_r3), (int) (M2C_FIELD(arg0, u16 *, 0x1C)));
    }
    return arg0;
}

void* get_field_38_ptr__16TEneParticleCtrlFPv(void* p) { return (char*)p + 0x38; }
void fn_80338D58(O_80338D58 *arg0, void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8) {
    if (arg0->idx < arg0->count) {
        TWindowSubStatusDisp__sub_80338740(get_array_entry__20TWindowSubStatusDispFPvi(arg0, arg0->idx), a1, a2, a3, a4, a5, a6, a7, a8);
        arg0->idx += 1;
    }
}

}
