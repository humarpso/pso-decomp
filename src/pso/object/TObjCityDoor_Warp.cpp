#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCityDoor_Warp__create(void *arg0);
void *dt__17TObjCityDoor_WarpFPvs(void *arg0, s16 arg1);
void *TObjCityDoor_Warp__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_80182D24(void *, int);

extern void *tl_05;

void *TObjCityDoor_Warp__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjCityDoor_Warp__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5A94[];

void *dt__17TObjCityDoor_WarpFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5A94;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80182348
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCityDoor_Warp__sub_80182348(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK update_technique_slot__10TTecRaFoieFi(M2C_UNK, M2C_UNK, M2C_UNK);

void TObjCityDoor_Warp__sub_80182348(s32 arg0) {
    update_technique_slot__10TTecRaFoieFi(TBoss3Volopt__sub_8022675C(0x42A05, arg0 + 0x38, 0, 0), -0x500, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018257C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void teardown_door__17TObjCityDoor_WarpFPv(u8 *arg0);
s32 TLobby__sub_801819CC(M2C_UNK);
M2C_UNK TLobby__sub_801819E4(M2C_UNK);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D5B2C;

struct Base_8018257c { u8 pad[0x18]; };
struct VObj_8018257c : Base_8018257c {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual void m8() = 0;
    virtual void m9() = 0;
    virtual void m10() = 0;
    virtual void m11() = 0;
    virtual void m12() = 0;
    virtual void m13() = 0;
    virtual void m14() = 0;
    virtual void m15() = 0;
    virtual void m16() = 0;
    virtual void m17() = 0;
    virtual void m18() = 0;
    virtual void m19() = 0;
    virtual s32 m20() = 0;
};

void teardown_door__17TObjCityDoor_WarpFPv(u8 *arg0) {

    if (((VObj_8018257c *)arg0)->m20() != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjDoor__sub_803DC894(TLobby__sub_801819E4(0x15), TLobby__sub_801819CC(0xC), M2C_FIELD(arg0, f32 *, 0xB4));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#endif
