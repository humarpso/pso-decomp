#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjContainerIdo__vt12(void);

void TObjContainerIdo__vt12(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8017E1E0
#include "types.h"

extern "C" {

void TObjContainerIdo__vt13(void);

void TObjContainerIdo__vt13(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018C06C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__16TObjContainerIdoFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjFish__sub_8001EDC4(s32, M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 TObjEneEpsilonGuard__sub_800D7B1C(void *, void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(u32);

extern s32 lbl_805D5B98;
extern const u32 lbl_805D5B9C;
extern const f32 lbl_805DBD6C;
extern const f32 lbl_805DBD70;

struct VOuter_8018C06C {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(f32, f32);
};

struct VMem_8018C06C {
    char pad[0x14];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

void render__16TObjContainerIdoFv(u8 *arg0) {
    s32 var_r31;

    if (((VOuter_8018C06C*)arg0)->m8(lbl_805DBD6C, lbl_805DBD70) != 0) {
        var_r31 = 0;
        if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
            var_r31 = TObjEneEpsilonGuard__sub_800D7B1C(arg0 + 0xF0, arg0 + 0x38);
        }
        if (var_r31 != 0) {
            ((VMem_8018C06C*)(arg0 + 0xF0))->m6();
        }
        {
            u32 temp = (u32) lbl_805D5B9C;
            if (temp != 0U) {
                set_global_param__8TObjFishFi(temp);
            }
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0xC0);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
        TObjFish__sub_8001EDC4(lbl_805D5B98, 0);
        TObjBoss2Tunnel__sub_803DB470();
        TObjPlayer__sub_803D9B78();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
        TObjFish__sub_8001EDC4(lbl_805D5B98, 1);
        TObjBoss2Tunnel__sub_803DB470();
        TObjPlayer__sub_803D9B78();
        if (var_r31 != 0) {
            ((VMem_8018C06C*)(arg0 + 0xF0))->m7();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018C644
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjContainerIdoFPv(void *arg0);
void *TObjContainerIdo__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TObjContainerIdoFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TObjContainerIdo__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018C690
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__16TObjContainerIdoFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 lbl_805D5B98;
extern u32 lbl_805D5B9C;

void free_resources__16TObjContainerIdoFv(void) {
    if ((u32) lbl_805D5B9C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B9C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B9C);
        lbl_805D5B9C = 0U;
    }
    if ((u32) lbl_805D5B98 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5B98, 1);
        lbl_805D5B98 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018C748
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjContainerIdoFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void dt__16TObjContainerIdoFPvs(void *, int);

extern M2C_UNK __vt__16TObjContainerIdo[];

void *__dt__16TObjContainerIdoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjContainerIdo;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0xF0, -1);
        dt__16TObjContainerIdoFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A0B94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__16TObjContainerIdoFPvs(void *arg0, s16 arg1);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804B97C0[];

void *dt__16TObjContainerIdoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B97C0;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A0BEC
#include "types.h"

extern "C" {

void* init_positions__16TObjContainerIdoFPv(void* a0);
int TObjPlayer__sub_801569F4(void);

    extern unsigned char lbl_804B97C0[];
    extern const float lbl_805DC078;
    extern const float lbl_805DC07C;
void* init_positions__16TObjContainerIdoFPv(void* a0) { TObjPlayer__sub_801569F4(); *(int*)((char*)a0 + 0x18) = (int)lbl_804B97C0; *(float*)((char*)a0 + 0xac) = lbl_805DC078; *(float*)((char*)a0 + 0xb0) = lbl_805DC07C; return a0; }

}
#endif
#endif
