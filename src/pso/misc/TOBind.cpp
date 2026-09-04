#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__6TOBindFv(void *arg0);
M2C_UNK TOBind__sub_80158608(void *);
M2C_UNK TOBind__sub_8015860C(void *);
s32 TQuestThread__sub_801F5EAC(s32, s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);

extern s32 lbl_805D5EE8;

void run_task__6TOBindFv(void *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOBind__sub_80158608(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) != 1) {
        if (TQuestThread__sub_801F5EAC(lbl_805D5EE8, M2C_FIELD(arg0, s32 *, 0xB4)) != 0) {
            M2C_FIELD(arg0, s32 *, 0xB0) = 1;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        }
        TOBind__sub_8015860C(arg0);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80158608
#include "types.h"

extern "C" {

void TORainbowCave01__sub_80158604(void);
void TOBind__sub_80158608(void);

void TOBind__sub_80158608(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801586B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__6TOBindFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

struct BindBase { char pad[0x18]; };
struct BindObj : BindBase {
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

void render__6TOBindFv(u8 *arg0) {
    if (((BindObj*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xD4)) != 0) {
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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80158758
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__6TOBindFPv(void *arg0);
void *TOBind__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__6TOBindFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TOBind__ct(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801587A0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_model__6TOBindFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TOBind__data_805D58A0;

void free_static_model__6TOBindFv(void) {
    if ((u32) TOBind__data_805D58A0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOBind__data_805D58A0, 1);
        TOBind__data_805D58A0 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80158828
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__6TOBindFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__6TOBind[];

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
#endif
#endif
