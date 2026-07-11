#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state_wait_card__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdChrMoveEffectGC__sub_803490D8(u32, s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(void *, M2C_UNK *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32, s32);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 fn_802D50A0(u32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802DFFE0();
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0008(s32);
s32 TAdMultiPlyChrSelectGC__sub_802E0044(s32, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E004C();
M2C_UNK fn_802E00BC(s32, M2C_UNK);
s32 fn_802E00C4(s32);
u32 fn_802E0100();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80472868[];

void update_state_wait_card__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        fn_8022675C(0x52F16, 0, 0, 0);
        TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        if (fn_802D50A0(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    TAdMultiPlyChrSelectGC__sub_802E004C();
    TAdMultiPlyChrSelectGC__sub_802DFFE0();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x88)) != 0) {
        fn_8022675C(0x52F16, 0, 0, 0);
        TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x88)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x88));
        switch (temp_r3) {
        case 1:
            TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 0:
            temp_r31 = TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
            temp_r3_2 = TAdMultiPlyChrSelectGC__sub_802E0044(M2C_FIELD(arg0, s32 *, 0x5C), 1);
            if (try_move_char__23TAdSinglePlyChrSelectGCFii(temp_r3_2 + 4, temp_r31) != 0) {
                {
                    u32 temp_u0 = fn_802E0100();
                    if (temp_u0 != 0U) {
                        TAdChrMoveEffectGC__sub_803490D8(temp_u0, temp_r31 + 3, temp_r3_2);
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x80) = TAdMultiPlyChrSelectGC__sub_802DBEC4(arg0, lbl_80472868);
                fn_802E00BC(M2C_FIELD(arg0, s32 *, 0x6C), 0x15);
                M2C_FIELD(arg0, s32 *, 0x20) = 0x11;
                return;
            }
            TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            break;
        }
    }
}

}
