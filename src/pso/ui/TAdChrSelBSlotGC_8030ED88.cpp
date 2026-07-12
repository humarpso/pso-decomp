#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_slot_state__16TAdChrSelBSlotGCFPv(void *arg0);
void update_card_select__16TAdChrSelBSlotGCFPv(void *arg0);
void TAdChrSelBSlotGC__sub_8030EF74(void *arg0);
void update_card_confirm__16TAdChrSelBSlotGCFPv(void *arg0);
s32 TAdChrSelASlotGC__sub_8030C4F8(M2C_UNK, M2C_UNK);
u32 TAdChrSelASlotGC__sub_8030C5C0(M2C_UNK, M2C_UNK);
s32 TAdChrSelASlotGC__sub_8030C688(M2C_UNK, M2C_UNK);
u32 TAdChrSelASlotGC__sub_8030C750(M2C_UNK, s32, s32);
s32 get_state_result__22TAdMultiPlyChrSelectGCFPv();
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
M2C_UNK TWindow__close(void *);
s32 TAdPlayerLoadGC__sub_801E0CE0(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E24F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
u32 TAdMultiPlyChrSelectGC__sub_802C6F90();
s32 TAdChrSelBSlotGC__sub_803100EC(void *);
u32 TAdChrSelBSlotGC__sub_803100F4();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);

void update_slot_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x70));
        M2C_FIELD(arg0, u32 *, 0x70) = 0U;
    }
    if ((u32) (TAdPlayerLoadGC__sub_801E1B50(1) + 0x10000) != 0xFFFFU) {
        if ((TAdPlayerLoadGC__sub_801E0CE0(1) != 0) && (TAdPlayerLoadGC__sub_801E1B50(1) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x74) = TAdChrSelASlotGC__sub_8030C688(TAdChrSelBSlotGC__sub_803100F4(), 1);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xA;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x7C) = TAdChrSelASlotGC__sub_8030C4F8(TAdChrSelBSlotGC__sub_803100F4(), 1);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xB;
        return;
    }
    if (TAdChrSelBSlotGC__sub_803100EC(arg0) < 0xC) {
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
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x6C));
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
            M2C_FIELD(arg0, s32 *, 0x7C) = TAdChrSelASlotGC__sub_8030C4F8(TAdChrSelBSlotGC__sub_803100F4(), 1);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xB;
            return;
        }
    } else {
        if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x70)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 7;
            return;
        }
        if (TAdChrSelBSlotGC__sub_803100EC(arg0) < 0xC) {
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
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x70));
        M2C_FIELD(arg0, u32 *, 0x70) = 0U;
    }
    if (TAdChrSelBSlotGC__sub_803100EC(arg0) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x78) == 0U) && (TAdChrSelBSlotGC__sub_803100F4() != 0U)) {
        M2C_FIELD(arg0, u32 *, 0x78) = TAdChrSelASlotGC__sub_8030C5C0(TAdChrSelBSlotGC__sub_803100F4(), 1);
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
            if (((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) && (TAdChrSelBSlotGC__sub_803100F4() != 0U)) {
                if (TAdMultiPlyChrSelectGC__sub_802C6F90() != 0U) {
                    TAdMultiPlyChrSelectGC__sub_802C6F90();
                    var_r31 = get_state_result__22TAdMultiPlyChrSelectGCFPv();
                } else {
                    var_r31 = 0;
                }
                M2C_FIELD(arg0, u32 *, 0x70) = TAdChrSelASlotGC__sub_8030C750(TAdChrSelBSlotGC__sub_803100F4(), 1, var_r31);
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
        if (TAdChrSelBSlotGC__sub_803100EC(arg0) < 0xC) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x40));
                M2C_FIELD(arg0, u32 *, 0x40) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
    }
}

}
