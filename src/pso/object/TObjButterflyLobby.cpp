#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjButterflyLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__18TObjButterflyLobby[];

void *__dt__18TObjButterflyLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjButterflyLobby;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8007A66C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_singleton_805D4E6C__18TObjButterflyLobbyFv(void);
void free__11TOBoss4RockFUi(void*);

extern u32 lbl_805D4E6C;

void free_singleton_805D4E6C__18TObjButterflyLobbyFv(void) {
    if ((u32) lbl_805D4E6C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4E6C);
        lbl_805D4E6C = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007A6A0
#include "types.h"

extern "C" {

void alloc_scene_buffer__18TObjButterflyLobbyFv(void);
int alloc_buffer__11TOBoss4RockFPv(void*);

    extern int lbl_805D4E6C;
void alloc_scene_buffer__18TObjButterflyLobbyFv(void) { lbl_805D4E6C = alloc_buffer__11TOBoss4RockFPv((void*)20480); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80350958
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__18TObjButterflyLobbyFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjContainerIdo__sub_803D96A8(int, int);
M2C_UNK TObjDoor__sub_803DC894(int, void *, f32);
s32 TObjFish__sub_8001ED9C(void *, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D6EB8;

void render__18TObjButterflyLobbyFPv(u8 *arg0) {
    f32 temp_f1;

    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjContainerIdo__sub_803D96A8((int) (0), (int) (-0x2000));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 3) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (temp_f1), (f32) (temp_f1));
    }
    TObjDoor__sub_803DC894((int) (M2C_FIELD(arg0, s32 *, 0xC4)), (void *) (TObjFish__sub_8001ED9C((void *) (lbl_805D6EB8), (int) (0))), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803509E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__18TObjButterflyLobbyFPv(u8 *arg0);
s32 rand__11TOBoss4RockFv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern M2C_UNK lbl_80478DF0;
extern const f32 TObjButterflyLobby__data_805DFE40;
extern const f32 lbl_805DFE44;
extern const f32 lbl_805DFE48;

void init_params__18TObjButterflyLobbyFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x98, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) TObjButterflyLobby__data_805DFE40;
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) TObjButterflyLobby__data_805DFE40;
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) TObjButterflyLobby__data_805DFE40;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (lbl_805DFE44 * (lbl_805DFE48 * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) TObjButterflyLobby__data_805DFE40;
    M2C_FIELD(arg0, s8 *, 0xC0) = 0;
    M2C_FIELD(arg0, s8 *, 0xC1) = 0;
    M2C_FIELD(arg0, s16 *, 0xBC) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xBE) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80350A80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct ButterflyLobbyBase { char pad[0x18]; };
struct ButterflyLobbyVObj : ButterflyLobbyBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__18TObjButterflyLobbyFv(void *arg0);
M2C_UNK render__18TObjButterflyLobbyFPv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern const f32 lbl_805DFE4C;
extern const f32 lbl_805DFE50;

void render__18TObjButterflyLobbyFv(void *arg0) {
    if ((((ButterflyLobbyVObj*)arg0)->m8(lbl_805DFE4C, lbl_805DFE50) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC8));
        render__18TObjButterflyLobbyFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80351674
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjButterflyLobby__create(void *arg0);
void *TObjButterflyLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjButterflyLobby__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjButterflyLobby__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803516C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__18TObjButterflyLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D6EB8;

void destroy_instance__18TObjButterflyLobbyFv(void) {
    if ((u32) lbl_805D6EB8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D6EB8, 1);
        lbl_805D6EB8 = 0U;
    }
}

}
#endif
#endif
