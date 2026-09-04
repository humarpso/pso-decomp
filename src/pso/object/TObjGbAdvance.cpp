#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjGbAdvance__vt12(void *arg0);

M2C_UNK TObjMesBase__vt12();
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);

void TObjGbAdvance__vt12(void *arg0) {
    TObjMesBase__vt12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        TObjPlayer__sub_801B4A18(arg0, -1);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80187D44
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjGbAdvance__create(void *arg0);
void *TObjGbAdvance__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjGbAdvance__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjGbAdvance__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80187D90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_shared_data__13TObjGbAdvanceFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjGbAdvance__data_805D5B74;

void free_shared_data__13TObjGbAdvanceFv(void) {
    if ((u32) TObjGbAdvance__data_805D5B74 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjGbAdvance__data_805D5B74, 1);
        TObjGbAdvance__data_805D5B74 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80187E18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase { char pad[0x18]; };
struct VObj : VObjBase {
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

extern "C" {

void render__13TObjGbAdvanceFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi();

extern s32 TObjGbAdvance__data_805D5B74;
extern const f32 lbl_805DBCDC;
extern const f32 lbl_805DBCE0;

void render__13TObjGbAdvanceFv(u8 *arg0) {
    if (((VObj*)arg0)->m8(lbl_805DBCDC, lbl_805DBCE0) != 0) {
        TObjFish__sub_8001EDB0(TObjGbAdvance__data_805D5B74, 0);
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_8001EDC4(TObjGbAdvance__data_805D5B74, 0);
        TObjBoss2Tunnel__sub_803DB470();
        TObjFish__sub_8001EDC4(TObjGbAdvance__data_805D5B74, 1);
        TObjBoss2Tunnel__sub_803DB470();
        TObjFish__sub_8001EDC4(TObjGbAdvance__data_805D5B74, 2);
        TObjBoss2Tunnel__sub_803DB470();
        TObjFish__sub_8001EDC4(TObjGbAdvance__data_805D5B74, 3);
        TObjBoss2Tunnel__sub_803DB470();
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80187F10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__13TObjGbAdvanceFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__11TObjMesBaseFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__13TObjGbAdvance[];

void *__dt__13TObjGbAdvanceFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjGbAdvance;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__11TObjMesBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
