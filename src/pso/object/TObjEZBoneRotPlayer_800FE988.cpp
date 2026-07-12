#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TObjEZBoneRotPlayer__sub_800FE988(void *arg0, void *arg1, void *arg2);
void TObjEZBoneRotPlayer__sub_800FE9E0(void *arg0);
void *__ct__19TObjEZBoneRotPlayerFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK fn_800FEBBC(void*, s32);

void * TObjEZBoneRotPlayer__sub_800FE988(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = __ct__19TObjEZBoneRotPlayerFv(o, arg0, arg1, arg2);
    }
    return o;
}

extern f32 lbl_805DAA4C;

void TObjEZBoneRotPlayer__sub_800FE9E0(void *arg0) {
    fn_800FEBBC(arg0, M2C_FIELD(arg0, s32 *, 0x84));
    if (M2C_FIELD(arg0, f32 *, 0x94) > lbl_805DAA4C) {
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + M2C_FIELD(M2C_FIELD(arg0, void **, 0x20), s32 *, 4));
    }
}

}
