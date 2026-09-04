#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdChrSelBSlotGC__sub_8030EF74(void *arg0);
void close_windows__16TAdChrSelBSlotGCFPv(void *arg0);
void reset_windows__16TAdChrSelBSlotGCFPv(void *arg0);
void update_card_confirm__16TAdChrSelBSlotGCFPv(void *arg0);
void update_card_select__16TAdChrSelBSlotGCFPv(void *arg0);
void update_slot_state__16TAdChrSelBSlotGCFPv(void *arg0);
s32 TAdChrSelASlotGC__sub_8030C4F8(M2C_UNK, M2C_UNK);
u32 TAdChrSelASlotGC__sub_8030C5C0(M2C_UNK, M2C_UNK);
s32 TAdChrSelASlotGC__sub_8030C688(M2C_UNK, M2C_UNK);
u32 TAdChrSelASlotGC__sub_8030C750(M2C_UNK, s32, s32);
u32 TAdChrSelASlotGC__sub_8030CB08(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdChrSelMovePlateGC__sub_8032572C(s32);
M2C_UNK TAdChrSelSlotGC__sub_802C7498(s32, M2C_UNK);
u32 TAdMcSelectGC__sub_80019DA8(void *, M2C_UNK, f32);
M2C_UNK TAdMcSelectGC__sub_802C7560(s32, M2C_UNK, M2C_UNK *);
s32 TAdPlayerLoadGC__sub_801E0CE0(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E24F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdPlyChrSelPlateGC__sub_802C4D88(s32);
M2C_UNK TAdSubPlyItemGC__sub_802D6D88(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
u32 get_global_slot_data__16TAdChrSelBSlotGCFv();
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
u32 get_state__22TAdMultiPlyChrSelectGCFv();
s32 get_state_result__22TAdMultiPlyChrSelectGCFPv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK reset_all_slots__15TAdChrSelSlotGCFPv(s32);

void update_slot_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
        M2C_FIELD(arg0, u32 *, 0x70) = 0U;
    }
    if ((u32) (TAdPlayerLoadGC__sub_801E1B50(1) + 0x10000) != 0xFFFFU) {
        if ((TAdPlayerLoadGC__sub_801E0CE0(1) != 0) && (TAdPlayerLoadGC__sub_801E1B50(1) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x74) = TAdChrSelASlotGC__sub_8030C688(get_global_slot_data__16TAdChrSelBSlotGCFv(), 1);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xA;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x7C) = TAdChrSelASlotGC__sub_8030C4F8(get_global_slot_data__16TAdChrSelBSlotGCFv(), 1);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xB;
        return;
    }
    if (get_global_state__16TAdChrSelBSlotGCFv(arg0) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

void update_card_select__16TAdChrSelBSlotGCFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x70)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x70));
        switch (temp_r3) {
        case 1:
            M2C_FIELD(arg0, s32 *, 0x1C) = 7;
            return;
        case 0:
            if (TAdPlayerLoadGC__sub_801E24F8(1, 0, 0, 0, 0) == 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 9;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x7C) = TAdChrSelASlotGC__sub_8030C4F8(get_global_slot_data__16TAdChrSelBSlotGCFv(), 1);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xB;
            return;
        }
    } else {
        if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x70)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 7;
            return;
        }
        if (get_global_state__16TAdChrSelBSlotGCFv(arg0) < 0xC) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x40));
                M2C_FIELD(arg0, u32 *, 0x40) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
    }
}

void TAdChrSelBSlotGC__sub_8030EF74(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
        M2C_FIELD(arg0, u32 *, 0x70) = 0U;
    }
    if (get_global_state__16TAdChrSelBSlotGCFv(arg0) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x78) == 0U) && (get_global_slot_data__16TAdChrSelBSlotGCFv() != 0U)) {
        M2C_FIELD(arg0, u32 *, 0x78) = TAdChrSelASlotGC__sub_8030C5C0(get_global_slot_data__16TAdChrSelBSlotGCFv(), 1);
    }
}

void update_card_confirm__16TAdChrSelBSlotGCFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;

    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x6C)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x6C));
        switch (temp_r3) {
        case 1:
            M2C_FIELD(arg0, s32 *, 0x1C) = 7;
            return;
        case 0:
            if (((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) && (get_global_slot_data__16TAdChrSelBSlotGCFv() != 0U)) {
                if (get_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
                    get_state__22TAdMultiPlyChrSelectGCFv();
                    var_r31 = get_state_result__22TAdMultiPlyChrSelectGCFPv();
                } else {
                    var_r31 = 0;
                }
                M2C_FIELD(arg0, u32 *, 0x70) = TAdChrSelASlotGC__sub_8030C750(get_global_slot_data__16TAdChrSelBSlotGCFv(), 1, var_r31);
                M2C_FIELD(arg0, s32 *, 0x1C) = 8;
                return;
            }
            break;
        }
    } else {
        if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x6C)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 7;
            return;
        }
        if (get_global_state__16TAdChrSelBSlotGCFv(arg0) < 0xC) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x40));
                M2C_FIELD(arg0, u32 *, 0x40) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
    }
}

void close_windows__16TAdChrSelBSlotGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x48));
        M2C_FIELD(arg0, u32 *, 0x48) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x70));
        M2C_FIELD(arg0, u32 *, 0x70) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x78));
        M2C_FIELD(arg0, u32 *, 0x78) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x54));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x58));
        M2C_FIELD(arg0, u32 *, 0x58) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x5C));
        M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x60));
        M2C_FIELD(arg0, u32 *, 0x60) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x64));
        M2C_FIELD(arg0, u32 *, 0x64) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x68));
        M2C_FIELD(arg0, u32 *, 0x68) = 0U;
    }
    TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x2C));
    TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x30));
    TAdChrSelMovePlateGC__sub_8032572C(M2C_FIELD(arg0, s32 *, 0x34));
    TAdChrSelSlotGC__sub_802C7498(M2C_FIELD(arg0, s32 *, 0x28), 2);
    if (get_global_state__16TAdChrSelBSlotGCFv(arg0) > 0xD) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        return;
    }
    if (get_global_state__16TAdChrSelBSlotGCFv(arg0) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U)) {
        get_global_slot_data__16TAdChrSelBSlotGCFv();
        M2C_FIELD(arg0, u32 *, 0x40) = TAdChrSelASlotGC__sub_8030CB08(get_global_slot_data__16TAdChrSelBSlotGCFv(), 1, 1);
    }
}

extern M2C_UNK lbl_80475910[];
extern const f32 lbl_805DF220;

void reset_windows__16TAdChrSelBSlotGCFPv(void *arg0) {
    reset_all_slots__15TAdChrSelSlotGCFPv(M2C_FIELD(arg0, s32 *, 0x28));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x48));
        M2C_FIELD(arg0, u32 *, 0x48) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x54));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x58));
        M2C_FIELD(arg0, u32 *, 0x58) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x5C));
        M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x60));
        M2C_FIELD(arg0, u32 *, 0x60) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x64));
        M2C_FIELD(arg0, u32 *, 0x64) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x68));
        M2C_FIELD(arg0, u32 *, 0x68) = 0U;
    }
    TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x2C));
    TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x30));
    TAdMcSelectGC__sub_802C7560(M2C_FIELD(arg0, s32 *, 0x28), 1, lbl_80475910);
    M2C_FIELD(arg0, u32 *, 0x38) = TAdMcSelectGC__sub_80019DA8(arg0, 0xE, lbl_805DF220);
    M2C_FIELD(arg0, u32 *, 0x3C) = TAdMcSelectGC__sub_80019DA8(arg0, 0x15, lbl_805DF220);
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
}

}
