#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjComputer__vt12(void *arg0);
void TObjComputer__vt13(void *arg0);
M2C_UNK TObjMesBase__vt12();
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK clear_ref_if_destroyed__11TObjMesBaseFPv();

extern f32 lbl_805DBCE8;

void TObjComputer__vt13(void *arg0) {
    clear_ref_if_destroyed__11TObjMesBaseFPv();
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + lbl_805DBCE8);
}

extern f32 lbl_805DBCE8;

void TObjComputer__vt12(void *arg0) {
    TObjMesBase__vt12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        TObjPlayer__sub_801B4A18(arg0, -1);
    }
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + lbl_805DBCE8);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801881D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_TOC { char pad[0x18]; };
struct V_TOC : Base_TOC {
    PADV4
    PADV4
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__12TObjComputerFv(u8 *arg0);
M2C_UNK TObjComputer__sub_8018807C(void *);

extern const f32 lbl_805DBCDC;
extern const f32 lbl_805DBCE0;

void render__12TObjComputerFv(u8 *arg0) {
    if (((V_TOC *)arg0)->m8(lbl_805DBCDC, lbl_805DBCE0) != 0) {
        TObjComputer__sub_8018807C(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801882B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TObjComputerFPv(void *arg0);
void *TObjComputer__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__12TObjComputerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjComputer__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80188300
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__12TObjComputerFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 TObjComputer__data_805D5B68;
extern u32 lbl_805D5B6C;

void free_resources__12TObjComputerFv(void) {
    if ((u32) lbl_805D5B6C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B6C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B6C);
        lbl_805D5B6C = 0U;
    }
    if ((u32) TObjComputer__data_805D5B68 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjComputer__data_805D5B68, 1);
        TObjComputer__data_805D5B68 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80188438
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TObjComputerFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__11TObjMesBaseFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__12TObjComputer[];

void *__dt__12TObjComputerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjComputer;
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
