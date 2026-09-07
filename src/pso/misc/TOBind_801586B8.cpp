#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801587D8_lbl_804AFC44 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_801587D8_lbl_804AFC44_size[sizeof(RecoveredGlobal_801587D8_lbl_804AFC44) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_801587D8_lbl_804AFC44 lbl_804AFC44;
extern u32 TOBind__data_805D58A0;
void TOBind__sub_801587D8(void);
}

extern "C" {

struct BindBase_801586B8 { char pad[0x18]; };
struct BindObj_801586B8 : BindBase_801586B8 {
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

void *__dt__6TOBindFv(void *arg0, s16 arg1);
void *create__6TOBindFPv(void *arg0);
void free_static_model__6TOBindFv(void);
void render__6TOBindFv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TOBind__ct(void *, void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

void render__6TOBindFv(u8 *arg0) {
    if (((BindObj_801586B8*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xD4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) != 1) {
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC8));
            begin_effect_render__13TParticleCtrlFv();
            TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0xC4), M2C_FIELD(arg0, s32 *, 0xCC), M2C_FIELD(arg0, f32 *, 0xB8));
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B78();
    }
}

void *create__6TOBindFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOBind__ct(o, arg0);
    }
    return o;
}

extern u32 TOBind__data_805D58A0;

void free_static_model__6TOBindFv(void) {
    if ((u32) TOBind__data_805D58A0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOBind__data_805D58A0, 1);
        TOBind__data_805D58A0 = 0U;
    }
}

extern M2C_UNK __vt__6TOBind[];

void TOBind__sub_801587D8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804AFC44.value, 0, 0, 0));
    }
    (*(s32 *)&TOBind__data_805D58A0) = var_r0;
}

void *__dt__6TOBindFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__6TOBind;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
