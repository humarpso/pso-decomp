#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DCA20_lbl_804727E8 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DCA20_lbl_8050E3B8 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5594(int);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5A44(int, void *, int);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(int, int);
extern RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0 TAdMultiPlyChrSelectGC__data_804727B0;
extern RecoveredGlobal_802DCA20_lbl_804727E8 lbl_804727E8;
extern M2C_UNK lbl_8050E3B8[];
void TAdMultiPlyChrSelectGC__sub_802DCA20(u8 *arg0);
}

extern "C" {

void update_input_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 TWindowSubComCard__sub_802A57FC(u32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(u32);

extern M2C_UNK lbl_8050E3B8[];

void update_input_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (TWindowShortListCtrl__check_controller_button((s8 *)lbl_8050E3B8 + 0x20, 2) != 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
            M2C_FIELD(arg0, u32 *, 0x94) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
            M2C_FIELD(arg0, u32 *, 0x94) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, u32 *, 0x94)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x94));
        switch (temp_r3) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x20) = 0x21;
            return;
        case 1:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
                M2C_FIELD(arg0, u32 *, 0x94) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
            break;
        }
    }
}
typedef char RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0_size[sizeof(RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DCA20_lbl_804727E8_size[sizeof(RecoveredGlobal_802DCA20_lbl_804727E8) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DCA20_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802DCA20_lbl_8050E3B8) == 0x1B0 ? 1 : -1];
void TAdMultiPlyChrSelectGC__sub_802DCA20(u8 *arg0) {
    set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (2));
    if (TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_802DCA20_lbl_8050E3B8 *)&lbl_8050E3B8).value + 0x20)), (M2C_UNK)((int) (2))) != 0) {
        TBoss3Volopt__sub_8022675C((M2C_UNK)((int) (0x52F16)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1B;
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x6C)))) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x68)))) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    TAdMultiPlyChrSelectGC__sub_802C5594((int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) (&TAdMultiPlyChrSelectGC__data_804727B0.value), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__data_804727B0.value + 8), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__data_804727B0.value + 0x10), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) (&lbl_804727E8.value), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&lbl_804727E8.value + 8), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&lbl_804727E8.value + 0x10), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (M2C_FIELD(arg0, s32 *, 0x5C)), (void *) ((u8 *)&lbl_804727E8.value + 0x18), (int) (2));
    M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
}

}
