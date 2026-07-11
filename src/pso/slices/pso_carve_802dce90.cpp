#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_802C6A10();
s32 fn_802D50A0(u32);
M2C_UNK fn_802E0008(s32);
s32 fn_802E00C4(s32);

void TAdMultiPlyChrSelectGC__sub_802DCE90(void *arg0) {
    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        if (fn_802D50A0(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            fn_802C6A10();
        }
        fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        fn_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x1D) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x54) = 1;
        fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
    }
}

}
