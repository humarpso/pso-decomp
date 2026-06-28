#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(s32, s32);
s32 fn_8034B720(void *, s32);
void fn_8034B8B0(void* p);
int fn_8034BA48(void* p);
int queue_destruction__7TObjectFv(void*);

void fn_8034B7C0(void *arg0) {
    fn_8034B720(arg0, fn_80132F2C(0x2B, 5));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}
void fn_8034B810(void *arg0) {
    fn_8034B720(arg0, fn_80132F2C(0x2B, 4));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}
void fn_8034B860(void *arg0) {
    fn_8034B720(arg0, fn_80132F2C(0x2B, 3));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x5A;
    M2C_FIELD(arg0, s32 *, 0x1C) = 5;
}
void fn_8034B8B0(void* p) { *(s32*)((char*)p + 0x1c) = 3; }
int fn_8034B8BC(void) { return 0; }
int fn_8034B918(void) { return 0; }
int fn_8034B974(void) { return 0; }
int fn_8034BA2C(void) { return 0; }
int fn_8034BA48(void* p) { return queue_destruction__7TObjectFv(p); }

}
