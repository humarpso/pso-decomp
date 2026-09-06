#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_800FEC40(void *, void *);
void fn_800FED0C(u8 *arg0);
void fn_800FEA34(void *, void *, s32, s32);
void fn_800FEBBC(u8 *arg0, s32 arg1);
}

extern "C" {

void fn_800FEBBC(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = (s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) (arg0 + 0x24);
    fn_800FEA34(arg0, M2C_FIELD(arg0, u8 **, 0x1C), arg1, (s32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0) * M2C_FIELD(arg0, f32 *, 0x94)));
}

void fn_800FED0C(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = (s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x20), s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) (arg0 + 0x24);
    fn_800FEC40(arg0, M2C_FIELD(arg0, u8 **, 0x1C));
}

}
