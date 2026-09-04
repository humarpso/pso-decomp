#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjContainerJung__vt78(void *arg0);

M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);

void TObjContainerJung__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            TObjPlayer__sub_801B4A18(arg0, -1);
        }
    case 1:
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8018D3B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjContainerJung__sub_8018D3B8(void);

extern s32 TObjContainerJung__data_805D5BA4;

s32 TObjContainerJung__sub_8018D3B8(void) {
    return TObjContainerJung__data_805D5BA4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018D3FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__17TObjContainerJungFPv(void *arg0);
void release__17TObjContainerJungFv(void);
void *TObjContainerJung__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);

extern void *tl_05;

void *create__17TObjContainerJungFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerJung__ct(o, tl_05, arg0);
    }
    return o;
}

extern s32 TObjContainerJung__data_805D5BA0;
extern s32 TObjContainerJung__data_805D5BA4;

void release__17TObjContainerJungFv(void) {
    TLobby__sub_8001FE7C(TObjContainerJung__data_805D5BA0, 1);
    TObjContainerJung__data_805D5BA0 = 0;
    TObjContainerJung__data_805D5BA4 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8018D7F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TObjContainerJungFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__17TObjContainerJung[];

void *__dt__17TObjContainerJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjContainerJung;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
