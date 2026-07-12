#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void init_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void open_char_select__22TAdMultiPlyChrSelectGCFPv(void* p);
void close_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_card_select__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_state_option__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_card_confirm__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdGameStartGC__sub_802E6380(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802B1850(s32, M2C_UNK, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
s32 TAdMultiPlyChrSelectGC__sub_802DBCE8(void *);
s32 TWindowSubComCard__sub_8007341C(s32);
s32 TWindowSubComCard__sub_80073DB8(s32);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(u32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE2D0();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE338(s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80266130(u32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C561C(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5688(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 TAdMultiPlyChrSelectGC__sub_802D50A0(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802D50A8(s32, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802D50B0(s32, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
int TAdMultiPlyChrSelectGC__sub_802E0008(void*);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E001C(s32, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E005C(s32, M2C_UNK);
int TAdMultiPlyChrSelectGC__sub_802E0064(void*, void*);
int TAdMultiPlyChrSelectGC__sub_802E006C(void*, void*, void*);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0078(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0084(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0C68(s32, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_8030E2E4(void *, M2C_UNK);
s32 TAdChrSelBSlotGC__sub_803100A4(void *);
M2C_UNK get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;

void open_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    TAdGameStartGC__sub_802E6380(M2C_FIELD(arg0, s32 *, 0x78));
    TAdMultiPlyChrSelectGC__sub_802E005C(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    TAdMultiPlyChrSelectGC__sub_802E0C68(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x68) = TAdMultiPlyChrSelectGC__sub_8030E2E4(arg0, 2);
    M2C_FIELD(arg0, s32 *, 0x6C) = TAdChrSelBSlotGC__sub_803100A4(arg0);
    TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x64), 0, &TAdMultiPlyChrSelectGC__data_805DE898);
    TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
    M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
}

void init_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    TAdMultiPlyChrSelectGC__sub_802E006C((void*)(M2C_FIELD(arg0, s32 *, 0x5C)), (void*)(2), (void*)(2));
    TAdMultiPlyChrSelectGC__sub_802E0064((void*)(M2C_FIELD(arg0, s32 *, 0x5C)), (void*)(2));
    TAdMultiPlyChrSelectGC__sub_802E001C(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    TAdMultiPlyChrSelectGC__sub_802D50B0(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    open_windows__22TAdMultiPlyChrSelectGCFPv((void *)(arg0));
}

void open_char_select__22TAdMultiPlyChrSelectGCFPv(void* p) { TAdMultiPlyChrSelectGC__sub_802E0064((void*)(*(void**)((char*)p + 0x5c)), (void*)((void*)2)); TAdMultiPlyChrSelectGC__sub_802E006C((void*)(*(void**)((char*)p + 0x5c)), (void*)((void*)2), (void*)((void*)2)); TAdMultiPlyChrSelectGC__sub_802E0008((void*)(*(void**)((char*)p + 0x5c))); open_windows__22TAdMultiPlyChrSelectGCFPv((void *)(p)); }

void close_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if (TAdMultiPlyChrSelectGC__sub_802D50A0((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802D50A0((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
}

void update__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (TAdMultiPlyChrSelectGC__sub_802D50A0((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, s32 *, 0x8C))) != 0) {
        TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC((s32)(M2C_FIELD(arg0, s32 *, 0x8C))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, s32 *, 0x8C)));
        switch (temp_r3) {
        case 1:
            TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        case 0:
            TAdMultiPlyChrSelectGC__sub_802DFFE8((s32)(M2C_FIELD(arg0, s32 *, 0x5C)));
            TAdSinglePlyChrSelectGC__sub_801FE2D0();
            TAdMultiPlyChrSelectGC__sub_802D50A8(M2C_FIELD(arg0, s32 *, 0x68), 0xF);
            TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 8;
            break;
        }
    }
}

void update_card_select__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (TAdMultiPlyChrSelectGC__sub_802D50A0((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x98))) != 0) {
        TWindowSubComCard__sub_80266130(M2C_FIELD(arg0, u32 *, 0x7C));
        clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
            M2C_FIELD(arg0, u32 *, 0x98) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC((s32)(M2C_FIELD(arg0, u32 *, 0x98))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x98)));
        switch (temp_r3) {
        case 1:
            TWindowSubComCard__sub_80266130(M2C_FIELD(arg0, u32 *, 0x7C));
            clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
                M2C_FIELD(arg0, u32 *, 0x98) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        case 0:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
                M2C_FIELD(arg0, u32 *, 0x98) = 0U;
            }
            TAdSinglePlyChrSelectGC__sub_801FE338(TAdMultiPlyChrSelectGC__sub_802DFFE8((s32)(M2C_FIELD(arg0, s32 *, 0x5C))) + 4);
            TAdMultiPlyChrSelectGC__sub_802D50A8(M2C_FIELD(arg0, s32 *, 0x68), 0xF);
            M2C_FIELD(arg0, s32 *, 0x20) = 8;
            break;
        }
    }
}

void update_state_option__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (TAdMultiPlyChrSelectGC__sub_802D50A0((s32)(M2C_FIELD(arg0, u32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_80073DB8(M2C_FIELD(arg0, s32 *, 0x7C)) != 0) {
        TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, s32 *, 0x7C)) != 0) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x7C));
        switch (temp_r3) {
        case 0:
            TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
            TAdMultiPlyChrSelectGC__sub_802C561C(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0x19;
            return;
        case 1:
            TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
            TAdMultiPlyChrSelectGC__sub_802E0084(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802E0078(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xA;
            return;
        case 2:
            open__17TWindowOptionCtrlFPv(M2C_FIELD(arg0, s32 *, 0x7C));
            M2C_FIELD(arg0, s32 *, 0x98) = TAdMultiPlyChrSelectGC__sub_802DBCE8(arg0);
            M2C_FIELD(arg0, s32 *, 0x20) = 6;
            return;
        case 3:
            TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            break;
        }
    }
}

extern s32 lbl_805D68C8;

void update_card_confirm__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (TAdMultiPlyChrSelectGC__sub_802D50A0((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x90))) != 0) {
        TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC((s32)(M2C_FIELD(arg0, u32 *, 0x90))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x90)));
        switch (temp_r3) {
        case 1:
            TAdMultiPlyChrSelectGC__sub_802E0008((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        case 0:
            TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
            TAdMultiPlyChrSelectGC__sub_802C561C(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            lbl_805D68C8 = 1;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x90));
                M2C_FIELD(arg0, u32 *, 0x90) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = 0x1C;
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            break;
        }
    }
}

}
