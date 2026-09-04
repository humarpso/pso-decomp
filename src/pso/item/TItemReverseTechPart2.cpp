#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemReverseTechPart2.h"

TItemReverseTechPart2::~TItemReverseTechPart2() {}
#else
#if PSO_CLASS_PACKAGE == 0x801198F8
#include "types.h"

extern "C" {

void render__21TItemReverseTechPart2Fv(void);

void render__21TItemReverseTechPart2Fv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801198FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__21TItemReverseTechPart2Fv(u8 *arg0);
M2C_UNK __ct__18TItemReverseTechBGFv(void *, void *, void *);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__21TItemReverseTechPart2Fv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    void *nw;

    if ((M2C_FIELD(arg0, s32 *, 0x150) % 360) == 0) {
        if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
            __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x74);
        }
        if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
            __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0xA0);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x154) < 0xC) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x150);
        if ((temp_r3 >= 0x78) && (((temp_r3 - 0x78) % 720) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x28) = 0xC;
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x1C);
            }
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x48);
            }
            M2C_FIELD(arg0, s32 *, 0xD8) = (s32) M2C_FIELD(arg0, s32 *, 0x154);
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0xCC);
            }
            M2C_FIELD(arg0, s32 *, 0x154) = (s32) (M2C_FIELD(arg0, s32 *, 0x154) + 1);
        }
        temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x150);
        if ((temp_r3_2 >= 0x1E0) && (((temp_r3_2 - 0x1E0) % 720) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x28) = 0xD;
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x1C);
            }
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0x48);
            }
            M2C_FIELD(arg0, s32 *, 0x104) = (s32) M2C_FIELD(arg0, s32 *, 0x154);
            if ((nw = (void *)__nw__7TObjectFUl(0x64)) != 0U) {
                __ct__18TItemReverseTechBGFv(nw, arg0, arg0 + 0xF8);
            }
            M2C_FIELD(arg0, s32 *, 0x154) = (s32) (M2C_FIELD(arg0, s32 *, 0x154) + 1);
        }
        goto block_26;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x14) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
block_26:
    M2C_FIELD(arg0, s32 *, 0x150) = (s32) (M2C_FIELD(arg0, s32 *, 0x150) + 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80119D6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_and_flag__21TItemReverseTechPart2Fv(void);
M2C_UNK queue_destruction__7TObjectFv();

extern void *lbl_805D54DC;

void destroy_and_flag__21TItemReverseTechPart2Fv(void) {
    queue_destruction__7TObjectFv();
    if ((void *) lbl_805D54DC != NULL) {
        M2C_FIELD(lbl_805D54DC, s32 *, 0x1C) = 1;
    }
}

}
#endif
#endif
