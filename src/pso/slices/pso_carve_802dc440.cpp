#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_802C5594(s32);
s32 fn_802D50A0(s32);
M2C_UNK fn_802E00BC(s32, M2C_UNK);
s32 fn_802E00C4(s32);
u32 fn_802E0100();
M2C_UNK fn_803490AC();

void fn_802DC440(void *arg0) {
    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if (fn_802E0100() != 0U) {
            fn_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) == 0x14) {
        fn_802E00BC(M2C_FIELD(arg0, s32 *, 0x6C), 0x1B);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x25;
        return;
    }
    if (fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) == 0x13) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if (fn_802E0100() != 0U) {
            fn_803490AC();
        }
        fn_802C5594(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0x24;
    }
}

}
