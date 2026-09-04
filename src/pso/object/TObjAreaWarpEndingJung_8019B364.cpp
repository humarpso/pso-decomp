#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjAreaWarpEndingJung__ct(void *arg0);
void *__dt__22TObjAreaWarpEndingJungFv(void *arg0, s16 arg1);
void * create_TObjWarpString(void *arg0, void *arg1);
M2C_UNK TObjAreaWarpEnding__ct();
void *__ct__14TObjWarpStringFv(void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__18TObjAreaWarpEndingFv(void *, int);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__22TObjAreaWarpEndingJung[];

void *__dt__22TObjAreaWarpEndingJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjAreaWarpEndingJung;
        __dt__18TObjAreaWarpEndingFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__22TObjAreaWarpEndingJung[];
extern s32 lbl_805D3480;

void *TObjAreaWarpEndingJung__ct(void *arg0) {
    s32 temp_r0;
    u32 temp_r4;

    TObjAreaWarpEnding__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjAreaWarpEndingJung;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3480;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    temp_r4 = (u32) temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    return arg0;
}

extern void *tl_clipout;

void * create_TObjWarpString(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__14TObjWarpStringFv(o, tl_clipout, arg0, arg1);
    }
    return o;
}

}
