#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801334DC(s32);
M2C_UNK fn_801FE2D0();
s32 fn_802A5794(s32);
s32 fn_802A57C8(s32);
s32 fn_802A57FC(s32);
M2C_UNK fn_802D5098(s32, M2C_UNK);
s32 fn_802D50A0(s32);
M2C_UNK fn_802D50A8(s32, M2C_UNK);

void fn_802D4080(void *arg0) {
    s32 temp_r3;

    if (fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x28)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (fn_802A57FC(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
        temp_r3 = fn_802A5794(M2C_FIELD(arg0, s32 *, 0x48));
        switch (temp_r3) {
        case 0:
            fn_801334DC(M2C_FIELD(arg0, s32 *, 0x2C));
            fn_801FE2D0();
            fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x28));
            fn_802D50A8(M2C_FIELD(arg0, s32 *, 0x28), 0xF);
            fn_802D5098(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            return;
        case 1:
            fn_802D5098(M2C_FIELD(arg0, s32 *, 0x2C), 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        }
    } else if (fn_802A57C8(M2C_FIELD(arg0, s32 *, 0x48)) != 0) {
        fn_802D5098(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
    }
}

}
