#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TOBarrierEnergy01__vt16(void* p);

int TOBarrierEnergy01__sub_80157D28(void*);
int update_anim_phase__17TOBarrierEnergy01FPv(void*);

void TOBarrierEnergy01__vt16(void* p) { update_anim_phase__17TOBarrierEnergy01FPv(p); *(int*)((char*)p + 0xac) = 0; TOBarrierEnergy01__sub_80157D28(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80157D24
#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);
int TLobby__sub_80156BA8(void*);
int TLobby__send_and_handle_60(void*);
void TOAttackableCol__vt23(void);
void TOAttackableCol__sub_80157C20(void* p, s32 v);
s32 TOAttackableCol__sub_80157C28(void* p);
void TOBarrierEnergy01__vt18(void);

void TOBarrierEnergy01__vt18(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80157E2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOBarrierEnergy01__vt15(void *arg0);
M2C_UNK TOBarrierEnergy01__sub_80157D28(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv();

extern s32 *TOBarrierEnergy01__data_805D5894;

void TOBarrierEnergy01__vt15(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    TOBarrierEnergy01__sub_80157D28(arg0);
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) *TOBarrierEnergy01__data_805D5894;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80157E90
#include "types.h"

extern "C" {

void TOBarrierEnergy01__vt14(void* p);

int TOBarrierEnergy01__sub_80157D28(void*);
int update_anim_phase__17TOBarrierEnergy01FPv(void*);

void TOBarrierEnergy01__vt14(void* p) { update_anim_phase__17TOBarrierEnergy01FPv(p); TOBarrierEnergy01__sub_80157D28(p); *(int*)((char*)p + 0xac) = 2; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80157ECC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOBarrierEnergy01__vt13(void *arg0);
M2C_UNK TOBarrierEnergy01__sub_80157D28(void *);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv();

extern void *TOBarrierEnergy01__data_805D5894;

void TOBarrierEnergy01__vt13(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    TOBarrierEnergy01__sub_80157D28(arg0);
    if (M2C_FIELD(arg0, s32 *, 0xD0) & 1) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags(arg0, 0, 8);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(TOBarrierEnergy01__data_805D5894, s32 *, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80157F30
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__17TOBarrierEnergy01Fv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);

extern u8 *TOBarrierEnergy01__data_805D5894;
extern s32 lbl_805D5898;

struct BarrierBase { char pad[0x18]; };
struct BarrierObj : BarrierBase {
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

void render__17TOBarrierEnergy01Fv(u8 *arg0) {
    if (((BarrierObj*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(TOBarrierEnergy01__data_805D5894, s32 *, 8));
        TObjBoss2Tunnel__sub_803DB470(lbl_805D5898);
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80157FC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TOBarrierEnergy01FPv(void *arg0);
void *TOBarrierEnergy01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__17TOBarrierEnergy01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TOBarrierEnergy01__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80158014
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__17TOBarrierEnergy01Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5890;
extern s32 *TOBarrierEnergy01__data_805D5894;

void free_resources__17TOBarrierEnergy01Fv(void) {
    if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
        free_if_valid__10TObjPlayerFi(*TOBarrierEnergy01__data_805D5894);
        if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
            free__11TOBoss4RockFUi((void*)TOBarrierEnergy01__data_805D5894);
            TOBarrierEnergy01__data_805D5894 = NULL;
        }
    }
    if ((u32) lbl_805D5890 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5890, 1);
        lbl_805D5890 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80158120
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);

extern M2C_UNK __vt__17TOBarrierEnergy01[];

void *__dt__17TOBarrierEnergy01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOBarrierEnergy01;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80158298
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0);

void update_anim_phase__17TOBarrierEnergy01FPv(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;

    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xB8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xB4);
    temp_f0 = M2C_FIELD(arg0, f32 *, 0xB0);
    if (temp_f1 < temp_f0) {
        M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (temp_f0 - temp_f1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80157CF4
#include "types.h"

extern "C" {

int bswap_16__FPUs(void*);
int bswap_header__6TLobbyFi(void*);
int TLobby__sub_80156BA8(void*);
int TLobby__send_and_handle_60(void*);
void TOAttackableCol__vt23(void);
void TOAttackableCol__sub_80157C20(void* p, s32 v);
s32 TOAttackableCol__sub_80157C28(void* p);
void TOBarrierEnergy01__vt18(void);

void* init__17TOBarrierEnergy01FPv(void* p) { TLobby__sub_80156BA8(p); return p; }

}
#endif
#endif
