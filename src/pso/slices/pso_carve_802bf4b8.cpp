#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Type2__sub_802B9C00(void *, s32);
s32 fn_802BB7C0(void *);
u16 fn_802BB694();
s32 fn_802BDD1C(void *);
s32 fn_802BA6A0(void *);
s32 TBoss6Type2__sub_802BAA74();
s32 fn_802BD014(void * a0 = 0, s32 a1 = 0);
int fn_802BDC5C(void*);
int fn_802BDDF8(void*, void*);
void fn_802BF528(void* p);
void fn_802BF8D8(void* p);
void fn_802BF904(void* p);

int fn_802BF4B8(void) { return 0; }
void fn_802BF528(void* p) { if (*(int*)((char*)p + 0x460) == 0) { fn_802BDDF8(p, *(void**)((char*)p + 0x47c)); } }
int fn_802BF558(void) { return 0; }
void fn_802BF5F0(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x504) == 0) && (TBoss6Type2__sub_802BAA74() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x504) = 1;
    }
    fn_802BA6A0(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        fn_802BD014(arg0, 0x22);
    }
}
int fn_802BF65C(void) { return 0; }
int fn_802BF6CC(void) { return 0; }
void fn_802BF730(void *arg0) {
    s32 temp_r0;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x504) == 0) && (TBoss6Type2__sub_802BAA74() == 0)) {
        M2C_FIELD(arg0, s32 *, 0x504) = 1;
    }
    fn_802BA6A0(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        fn_802BD014(arg0, 0xC);
    }
}
void fn_802BF79C(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x45C) = 0x4B;
    M2C_FIELD(arg0, s32 *, 0x460) = 0x4B;
    M2C_FIELD(arg0, s32 *, 0x504) = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x46C) = 0;
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x46C) = 1;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0x46C) = 0;
        break;
    }
    fn_802BB7C0(arg0);
    switch ((s32) M2C_FIELD(arg0, s32 *, 0x374)) {
    case 5:
        TBoss6Type2__sub_802B9C00(arg0, 0xD);
        break;
    }
}
int fn_802BF834(void) { return 0; }
void fn_802BF8D8(void* p) { if (*(int*)((char*)p + 0x460) == 0) { fn_802BDC5C(p); } }
void fn_802BF904(void* p) { *(s32*)((char*)p + 0x45c) = 45; *(s32*)((char*)p + 0x460) = 45; }
void fn_802BF914(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x460) - 1;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    if (temp_r0 < 0) {
        fn_802BD014(arg0, 0x22);
    }
}
void fn_802BF948(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x460) == 0) {
        M2C_FIELD(arg0, u16 *, 0x466) = fn_802BB694();
        if (M2C_FIELD(arg0, u16 *, 0x466) == 0xFFFF) {
            fn_802BDD1C(arg0);
            return;
        }
        fn_802BDDF8((void*)(arg0), (void*)(3));
    }
}

}
