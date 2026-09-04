#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemDropSub.h"

extern s32 TItemDropSub__data_805D5478;

TItemDropSub::~TItemDropSub() {
    TItemDropSub__data_805D5478 = 0;
}
#else
#if PSO_CLASS_PACKAGE == 0x80107B74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemDropSub__sub_80107B74(void);

extern void *TItemDropSub__data_805D5478;

s32 TItemDropSub__sub_80107B74(void) {
    if ((void *) TItemDropSub__data_805D5478 != NULL) {
        return M2C_FIELD(TItemDropSub__data_805D5478, s32 *, 0x1C);
    }
    return 0xA;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80107BF0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemDropSub__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__12TItemDropSub[];
extern void *lbl_805D2B80;
extern void * TItemDropSub__data_805D5478;

void *TItemDropSub__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TItemDropSub;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B80;
    TItemDropSub__data_805D5478 = arg0;
    M2C_FIELD(arg0, u32 *, 0x1C) = 10;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80107C40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_instance__12TItemDropSubFi(s32 arg0);
M2C_UNK TItemDropSub__ct(void *, s32);
void *__nw__7TObjectFUl(u32);

extern void *TItemDropSub__data_805D5478;
extern s32 tl_05;

void create_instance__12TItemDropSubFi(s32 arg0) {
    void *obj;
    if (TItemDropSub__data_805D5478 == NULL) {
        obj = __nw__7TObjectFUl(0x20);
        if (obj != NULL) {
            TItemDropSub__ct(obj, tl_05);
        }
    }
    if (TItemDropSub__data_805D5478 != NULL) {
        M2C_FIELD(TItemDropSub__data_805D5478, s32 *, 0x1C) = arg0;
    }
}

}
#endif
#endif
