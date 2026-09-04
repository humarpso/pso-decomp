#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__16TAdChrSelBSlotGCFPv(void *arg0);

void reset__16TAdChrSelBSlotGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8030E458
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdChrSelBSlotGC__sub_8030E458(void);
void set_load_state__16TAdChrSelBSlotGCFPv(void *arg0);
void init__16TAdChrSelBSlotGCFPv(void *arg0);
void reset_load_state__16TAdChrSelBSlotGCFPv(void *arg0);
void reset_slot_state__16TAdChrSelBSlotGCFPv(void *arg0);
void TAdChrSelBSlotGC__sub_8030E550(void);
void update_load_state__16TAdChrSelBSlotGCFPv(void *arg0);
void set_state_confirm__16TAdChrSelBSlotGCFPv(void *arg0);
void enter_state17__16TAdChrSelBSlotGCFPv(void *arg0);
void TAdChrSelBSlotGC__sub_8030E620(void);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 get_load_result__15TAdPlayerLoadGCFv(s32);
s32 open_confirm_window__23TAdSinglePlyChrSelectGCFv();
s32 TAdSinglePlyChrSelectGC__sub_802004D8();
s32 get_global_state__16TAdChrSelBSlotGCFv();

void TAdChrSelBSlotGC__sub_8030E458(void) {  }
void set_load_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x1D;
    }
}
void init__16TAdChrSelBSlotGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_802004D8();
    open_confirm_window__23TAdSinglePlyChrSelectGCFv();
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1C;
}
void reset_load_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
void reset_slot_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if (get_global_state__16TAdChrSelBSlotGCFv() <= 0xD) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}
void TAdChrSelBSlotGC__sub_8030E550(void) {  }
void update_load_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        if ((u32) (get_load_result__15TAdPlayerLoadGCFv(1) + 0x10000) == 0xFF83U) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x18;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x19;
    }
}
void set_state_confirm__16TAdChrSelBSlotGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_802004D8();
    open_confirm_window__23TAdSinglePlyChrSelectGCFv();
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1A;
}
void enter_state17__16TAdChrSelBSlotGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_802004D8();
    open_confirm_window__23TAdSinglePlyChrSelectGCFv();
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x17;
}
void TAdChrSelBSlotGC__sub_8030E620(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030ED88
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
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
M2C_UNK TWindow__close(void *);
s32 TAdPlayerLoadGC__sub_801E0CE0(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E24F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
u32 get_state__22TAdMultiPlyChrSelectGCFv();
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
u32 get_global_slot_data__16TAdChrSelBSlotGCFv();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030F45C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__16TAdChrSelBSlotGCFPv(void *arg0);
void reset_windows__16TAdChrSelBSlotGCFPv(void *arg0);
u32 TAdChrSelASlotGC__sub_8030CB08(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdChrSelMovePlateGC__sub_8032572C(s32);
u32 TAdMcSelectGC__sub_80019DA8(void *, M2C_UNK, f32);
M2C_UNK TAdMcSelectGC__sub_802C7560(s32, M2C_UNK, M2C_UNK *);
M2C_UNK TAdPlyChrSelPlateGC__sub_802C4D88(s32);
M2C_UNK TAdSubPlyItemGC__sub_802D6D88(s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK reset_all_slots__15TAdChrSelSlotGCFPv(s32);
M2C_UNK TAdChrSelSlotGC__sub_802C7498(s32, M2C_UNK);
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
M2C_UNK get_global_slot_data__16TAdChrSelBSlotGCFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

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
#endif
#if PSO_CLASS_PACKAGE == 0x8030FD54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create_children__16TAdChrSelBSlotGCFPv(void *arg0);
void *__ct__15TAdChrSelSlotGCFv(void *, void *);
void *__ct__15TAdSubPlyItemGCFv(void *, void *);
void *__ct__19TAdPlyChrSelPlateGCFv(void *, void *, void *);
void *__ct__20TAdChrSelMovePlateGCFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK lbl_804758D8[];

void create_children__16TAdChrSelBSlotGCFPv(void *arg0) {
    void *o;
    void *o2;
    void *o3;
    void *o4;
    o = __nw__7TObjectFUl(0x128);
    if (o != NULL) {
        o = __ct__15TAdChrSelSlotGCFv(o, arg0);
    }
    M2C_FIELD(arg0, void **, 0x28) = o;
    o2 = __nw__7TObjectFUl(0x3B4);
    if (o2 != NULL) {
        o2 = __ct__19TAdPlyChrSelPlateGCFv(o2, arg0, lbl_804758D8);
    }
    M2C_FIELD(arg0, void **, 0x2C) = o2;
    o3 = __nw__7TObjectFUl(0x48C);
    if (o3 != NULL) {
        o3 = __ct__15TAdSubPlyItemGCFv(o3, arg0);
    }
    M2C_FIELD(arg0, void **, 0x30) = o3;
    o4 = __nw__7TObjectFUl(0x208);
    if (o4 != NULL) {
        o4 = __ct__20TAdChrSelMovePlateGCFv(o4, arg0);
    }
    M2C_FIELD(arg0, void **, 0x34) = o4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8030FE74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__16TAdChrSelBSlotGCFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern void *__vt__16TAdChrSelBSlotGC[];

void *__dt__16TAdChrSelBSlotGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__16TAdChrSelBSlotGC;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x44));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x48));
            M2C_FIELD(arg0, u32 *, 0x48) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x50));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x54));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x58));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x5C));
            M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x60));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x6C));
            M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x78));
            M2C_FIELD(arg0, u32 *, 0x78) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x7C));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80310050
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdChrSelBSlotGC__ct(void *arg0);
void create_children__16TAdChrSelBSlotGCFPv(void *);
void reset__16TAdChrSelBSlotGCFPv(void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__16TAdChrSelBSlotGC[];
extern void *lbl_805D4108;

void *TAdChrSelBSlotGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdChrSelBSlotGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4108;
    reset__16TAdChrSelBSlotGCFPv(arg0);
    create_children__16TAdChrSelBSlotGCFPv(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803100A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TAdChrSelBSlotGCFPv(void *arg0);
int get_global_state__16TAdChrSelBSlotGCFv(void);
int get_global_slot_data__16TAdChrSelBSlotGCFv(void);
void *TAdChrSelBSlotGC__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__16TAdChrSelBSlotGCFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x80);
    if (o != NULL) {
        o = TAdChrSelBSlotGC__ct(o, arg0);
    }
    return o;
}

    extern int lbl_805D6AA0;
int get_global_state__16TAdChrSelBSlotGCFv(void) {  return lbl_805D6AA0; }

    extern int lbl_805D6A98;
int get_global_slot_data__16TAdChrSelBSlotGCFv(void) {  return lbl_805D6A98; }

}
#endif
#endif
