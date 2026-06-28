#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(s32, s32);
s32 fn_802E19B0(s32, s32, s32, s32, s32);
s32 fn_802E1C6C();
s32 fn_802E1868(void *);
s32 fn_802E1BF4(void *);
s32 fn_802E1DF8(void *, s32);
void fn_802E2BC8(void* p);

void fn_802E2AD4(s32 arg0) {
    fn_802E1C6C();
    fn_802E19B0(arg0, fn_80132F2C(0x1C, 0xA), -1, 0, 0);
}
void fn_802E2B24(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x64) = (s32) (M2C_FIELD(arg0, s32 *, 0x64) - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x44) & 2)) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x64) < 0xF) && (fn_802E1868(arg0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x64) = 0;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) {
            fn_802E1BF4(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x60) == 0) {
                fn_802E1DF8(arg0, 0);
            }
        }
    }
}
void fn_802E2BC8(void* p) { *(s32*)((char*)p + 0x64) = 30; }

}
