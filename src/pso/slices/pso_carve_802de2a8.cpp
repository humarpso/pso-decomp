#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801FE2D0();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57C8(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
M2C_UNK get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
M2C_UNK fn_802C6A10();
s32 fn_802D50A0(s32);
M2C_UNK fn_802D50A8(s32, M2C_UNK);
M2C_UNK fn_802DFFE8(s32);
M2C_UNK fn_802E0008(s32);

void fn_802DE2A8(void *arg0) {
    s32 temp_r3;

    if (fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) == 1) {
        fn_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_802A57C8(M2C_FIELD(arg0, s32 *, 0x8C)) != 0) {
        fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x8C)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x8C));
        switch (temp_r3) {
        case 1:
            fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        case 0:
            fn_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
            fn_801FE2D0();
            fn_802D50A8(M2C_FIELD(arg0, s32 *, 0x68), 0xF);
            fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 8;
            break;
        }
    }
}

}
