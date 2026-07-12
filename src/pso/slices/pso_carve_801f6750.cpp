#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_8007341C(u32);
s32 TWindowSubComCard__sub_80073DB8(u32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
s32 check_memcard_status__15TAdPlayerLoadGCFi(s32);
s32 TAdPlayerLoadGC__sub_801E24F8(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_801F6554(void *);
M2C_UNK fn_801F6594(void *, s32, M2C_UNK);
M2C_UNK TWindow__close(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

void fn_801F6750(void *arg0) {
    s32 temp_r3;

    if (TAdPlayerLoadGC__sub_801E1E38(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        fn_801F6594(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C), 0);
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        fn_801F6594(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C), 0);
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if ((u32) (check_memcard_status__15TAdPlayerLoadGCFi(M2C_FIELD(arg0, s32 *, 0x28)) + 0x10000) != 0xFF03U) {
        fn_801F6594(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C), 0);
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) && (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, u32 *, 0x38)) != 0)) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x38));
        if (temp_r3 == 0) {
            if (TAdPlayerLoadGC__sub_801E24F8(M2C_FIELD(arg0, s32 *, 0x28), 0, 0, 0, 0) == 0) {
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
            } else {
                fn_801F6594(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0xB, 0x6C), 0);
                M2C_FIELD(arg0, s32 *, 0x24) = 3;
            }
        }
        if (temp_r3 == 1) {
            fn_801F6554(arg0);
            M2C_FIELD(arg0, s32 *, 0x24) = 4;
        }
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) && (TWindowSubComCard__sub_80073DB8(M2C_FIELD(arg0, u32 *, 0x38)) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 4;
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        fn_801F6554(arg0);
    }
}

}
