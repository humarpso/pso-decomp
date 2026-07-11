#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801FE338(s32);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(u32);
M2C_UNK TWindow__close(void *);
M2C_UNK fn_80266130(u32);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(u32);
s32 TWindowSubComCard__sub_802A57C8(u32);
s32 TWindowSubComCard__sub_802A57FC(u32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
M2C_UNK get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
M2C_UNK fn_802C6A10();
s32 fn_802D50A0(s32);
M2C_UNK fn_802D50A8(s32, M2C_UNK);
s32 fn_802DFFE8(s32);
M2C_UNK fn_802E0008(s32);

void TAdMultiPlyChrSelectGC__sub_802DE3A4(void *arg0) {
    s32 temp_r3;

    if (fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) == 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
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
    if (TWindowSubComCard__sub_802A57C8(M2C_FIELD(arg0, u32 *, 0x98)) != 0) {
        fn_80266130(M2C_FIELD(arg0, u32 *, 0x7C));
        clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
            TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x98));
            M2C_FIELD(arg0, u32 *, 0x98) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, u32 *, 0x98)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x98));
        switch (temp_r3) {
        case 1:
            fn_80266130(M2C_FIELD(arg0, u32 *, 0x7C));
            clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
                TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x98));
                M2C_FIELD(arg0, u32 *, 0x98) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        case 0:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
                TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x98));
                M2C_FIELD(arg0, u32 *, 0x98) = 0U;
            }
            fn_801FE338(fn_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C)) + 4);
            fn_802D50A8(M2C_FIELD(arg0, s32 *, 0x68), 0xF);
            M2C_FIELD(arg0, s32 *, 0x20) = 8;
            break;
        }
    }
}

}
