#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorLaboNormal__vt19(void);
s32 TODoorLaboNormal__vt20(void);

extern s32 lbl_805D6628;

s32 TODoorLaboNormal__vt20(void) {
    return lbl_805D6628;
}

extern s32 lbl_805D662C;

s32 TODoorLaboNormal__vt19(void) {
    return lbl_805D662C;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801A27F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TODoorLaboNormal__create(void *arg0);
void *TODoorLaboNormal__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TODoorLaboNormal__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TODoorLaboNormal__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029F730
#include "types.h"

extern "C" {

void init_field_d4__16TODoorLaboNormalFPv(void* a0);
int TObjFish__sub_8001EDC4(void*, void*);

    extern int lbl_805D6624;
void init_field_d4__16TODoorLaboNormalFPv(void* a0) { *(int*)((char*)a0 + 0xd4) = TObjFish__sub_8001EDC4((void*)(lbl_805D6624), (void*)0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029F778
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TODoorLaboNormalFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__19TODoorFourLightBaseFv(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__16TODoorLaboNormal[];

void *__dt__16TODoorLaboNormalFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TODoorLaboNormal;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__19TODoorFourLightBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
