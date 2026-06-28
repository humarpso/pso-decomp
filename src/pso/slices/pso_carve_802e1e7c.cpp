#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802E18EC(void);
s32 fn_802E18C8(void);
s32 fn_802E1F14(void);
s32 fn_802E1DF8(void * a0 = 0, s32 a1 = 0);
s32 fn_802E1638(void * a0 = 0);
s32 fn_802E147C(void);
int fn_802E1F8C(void* p);
int fn_802E1BF4(void*);

void fn_802E1E7C(void *arg0) {
    fn_802E1F14();
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = fn_802E147C();
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = fn_802E1638(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        fn_802E1DF8(arg0, 1);
        return;
    }
    fn_802E1DF8(arg0, 0);
}
s32 fn_802E1F14(void) { return 0; }
void fn_802E1F3C(void *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x60) <= 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x5C);
        switch (temp_r0) {
        case 0:
            fn_802E18EC();
            return;
        default:
        case 1:
            fn_802E18C8();
            break;
        }
    }
}
int fn_802E1F8C(void* p) { return fn_802E1BF4(p); }
int fn_802E1FAC(void) { return 0; }

}
