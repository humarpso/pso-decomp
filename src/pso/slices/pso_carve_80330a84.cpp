#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802785B0(u32, s32);
s32 fn_802D29AC();
s32 fn_80278300(u32, s32);
s32 fn_802D299C();
void fn_80330A84(void* p);

void fn_80330A84(void* p) { *(u8*)((char*)p + 0x1c) = 30; }
void fn_80330A90(void *arg0, s32 arg1) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x40);
    if (temp != 0U) {
        fn_80278300(temp, (s16) arg1);
    }
}
void fn_80330AC0(void *arg0, s32 arg1) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x3C);
    if (temp != 0U) {
        fn_80278300(temp, (s16) arg1);
    }
}
void fn_80330AF0(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        fn_802785B0(M2C_FIELD(arg0, u32 *, 0x40), fn_802D29AC());
    }
}
void fn_80330B34(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        fn_802785B0(M2C_FIELD(arg0, u32 *, 0x3C), fn_802D299C());
        fn_80278300(M2C_FIELD(arg0, u32 *, 0x3C), 3);
    }
}
int fn_80330B84(void) { return 0; }

}
