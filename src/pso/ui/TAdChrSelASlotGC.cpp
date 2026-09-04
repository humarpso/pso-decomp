#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK free_windows__17TWindowSubComCardFPv(s32);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(s32, s32, s32, f32);
s32 TWindowMessageYesNo__sub_802A59D8(s32, s32, M2C_UNK, M2C_UNK);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
extern const f32 lbl_805DF214;
s32 TAdChrSelASlotGC__sub_8030CA84(s32 arg0, s32 arg1);
}

extern "C" {

void *TAdChrSelASlotGC__ct(void *arg0, void *arg1, void *arg2);
void TAdChrSelASlotGC__sub_8030CBD0(void);
void TAdChrSelASlotGC__sub_8030CBD4(void);
void TAdChrSelASlotGC__sub_8030CCE0(void);
void TAdChrSelASlotGC__sub_8030D5DC(void *arg0);
void *__dt__16TAdChrSelASlotGCFv(void *arg0, s16 arg1);
void check_load_state__16TAdChrSelASlotGCFPv(void *arg0);
void close_windows__16TAdChrSelASlotGCFPv(void *arg0);
s32 get_slot_index__16TAdChrSelASlotGCFPv(void* p);
void init__16TAdChrSelASlotGCFPvi(void *arg0, s32 arg1);
void init_selection__16TAdChrSelASlotGCFPv(void *arg0);
s32 open_yes_no_window__16TAdChrSelASlotGCFiii(s32 arg0, s32 arg1, s32 arg2);
void set_state__16TAdChrSelASlotGCFPv(void *arg0);
void update_load_state__16TAdChrSelASlotGCFPv(void *arg0);
void update_slot1__16TAdChrSelASlotGCFPv(void *arg0);
void update_slot2__16TAdChrSelASlotGCFPv(void *arg0);
void update_slot3__16TAdChrSelASlotGCFPv(void *arg0);
void update_slot4__16TAdChrSelASlotGCFPv(void *arg0);
void update_slot5__16TAdChrSelASlotGCFPv(void *arg0);
void update_window_6c__16TAdChrSelASlotGCFPv(void *arg0);
void update_window_70__16TAdChrSelASlotGCFPv(void *arg0);
void update_window_74__16TAdChrSelASlotGCFPv(void *arg0);
void update_window_78__16TAdChrSelASlotGCFPv(void *arg0);
void update_window_7c__16TAdChrSelASlotGCFPv(void *arg0);
u32 TAdChrSelASlotGC__sub_8030CB08(void *, M2C_UNK, M2C_UNK);
void TAdChrSelASlotGC__sub_8030DE58(void *, void *);
M2C_UNK TAdChrSelMovePlateGC__sub_8032572C(s32);
M2C_UNK TAdChrSelSlotGC__sub_802C7498(s32, M2C_UNK);
u32 TAdMcSelectGC__sub_80019DA8(void *, M2C_UNK, f32);
M2C_UNK TAdMcSelectGC__sub_802C7560(s32, M2C_UNK, M2C_UNK *);
M2C_UNK TAdPlyChrSelPlateGC__sub_802C4D88(s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_801FDAAC();
s32 TAdSinglePlyChrSelectGC__sub_8020051C();
M2C_UNK TAdSubPlyItemGC__sub_802D6D88(s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TWindowMessageYesNo__sub_802A59D8(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, s16);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(s32, s32, s32, f32);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
M2C_UNK free_windows__17TWindowSubComCardFPv(s32);
s32 get_instance__15TAdPlayerLoadGCFv();
s32 get_load_result__15TAdPlayerLoadGCFv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK reset_all_slots__15TAdChrSelSlotGCFPv(s32);

extern f32 lbl_805DF210;

s32 open_yes_no_window__16TAdChrSelASlotGCFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    TBoss3Volopt__sub_8022675C(0x53F06, 0, 0, 0);
    temp_r31 = TWindowMessageYesNo__sub_802A59D8(arg0, arg2, 0, 0);
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(temp_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x16, 0x1B), arg1, lbl_805DF210);
    free_member__17TWindowSubComCardFPv(temp_r31, 1);
    free_windows__17TWindowSubComCardFPv(temp_r31);
    return temp_r31;
}

s32 TAdChrSelASlotGC__sub_8030CA84(s32 arg0, s32 arg1) {
    s32 temp_r31;
    temp_r31 = TWindowMessageYesNo__sub_802A59D8((s32)((void *) (arg0)), (s32)((int) (get_clamped_cursor__22TAdMultiPlyChrSelectGCFv())), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((s32)((int) (temp_r31)), (s32)((int) (TAdSinglePlyChrSelectGC__sub_80132F2C((int) (0x16), (int) (0x1A)))), (s32)((void *) (arg1)), (f32) (lbl_805DF214));
    free_member__17TWindowSubComCardFPv((s32)((int) (temp_r31)), (M2C_UNK)((int) (1)));
    free_windows__17TWindowSubComCardFPv((s32)((int) (temp_r31)));
    return temp_r31;
}

void TAdChrSelASlotGC__sub_8030CBD0(void) {  }
void TAdChrSelASlotGC__sub_8030CBD4(void) {  }
void update_load_state__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        if ((u32) (get_load_result__15TAdPlayerLoadGCFv(0) + 0x10000) == 0xFF81U) {
            M2C_FIELD(arg0, s32 *, 0x24) = 0x13;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0x14;
    }
}
void set_state__16TAdChrSelASlotGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_8020051C();
    TAdSinglePlyChrSelectGC__sub_801FDAAC();
    M2C_FIELD(arg0, s32 *, 0x24) = 0x12;
}
void check_load_state__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_instance__15TAdPlayerLoadGCFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
    }
}
void init_selection__16TAdChrSelASlotGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_8020051C();
    TAdSinglePlyChrSelectGC__sub_801FDAAC();
    M2C_FIELD(arg0, s32 *, 0x24) = 0x10;
}
void TAdChrSelASlotGC__sub_8030CCE0(void) {  }

void update_window_78__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 0xB) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x78));
            M2C_FIELD(arg0, u32 *, 0x78) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0xC;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x78) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x78) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 0x12);
    }
}

void update_window_7c__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 0xA) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0xB;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xF) && ((u32) M2C_FIELD(arg0, u32 *, 0x7C) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x7C) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 0x14);
    }
}

void update_window_74__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 8) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x74));
            M2C_FIELD(arg0, u32 *, 0x74) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0xA;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x74) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x74) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 0x10);
    }
}

void update_window_70__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 7) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x70));
            M2C_FIELD(arg0, u32 *, 0x70) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 9;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x70) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 0xE);
    }
}

void update_window_6c__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 6) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
            M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 8;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x6C) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x6C) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 0xC);
    }
}

void update_slot5__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 5) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 7;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x68) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x68) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 0xA);
    }
}

void update_slot4__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 4) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 6;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x64) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 8);
    }
}

void update_slot3__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 3) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x60));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 5;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x60) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x60) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 6);
    }
}

void update_slot2__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 2) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x5C));
            M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 4;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x5C) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 4);
    }
}

void update_slot1__16TAdChrSelASlotGCFPv(void *arg0) {
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x58));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x58) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 2);
    }
}

void TAdChrSelASlotGC__sub_8030D5DC(void *arg0) {
    s32 temp_r0;

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
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x70));
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
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x34));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x3C));
        TAdChrSelMovePlateGC__sub_8032572C(M2C_FIELD(arg0, s32 *, 0x44));
        break;
    case 1:
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x34));
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x38));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x3C));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x40));
        TAdChrSelMovePlateGC__sub_8032572C(M2C_FIELD(arg0, s32 *, 0x44));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x50));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        break;
    case 2:
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x38));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x40));
        break;
    }
    TAdChrSelSlotGC__sub_802C7498(M2C_FIELD(arg0, s32 *, 0x2C), 0);
    TAdChrSelSlotGC__sub_802C7498(M2C_FIELD(arg0, s32 *, 0x2C), 1);
    TAdChrSelSlotGC__sub_802C7498(M2C_FIELD(arg0, s32 *, 0x2C), 2);
    if (get_slot_index__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x30))) > 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x54));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 2;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x54) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x54) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 0);
    }
}

extern M2C_UNK lbl_80475840[];
extern M2C_UNK lbl_804758A0[];
extern const f32 lbl_805DF218;

void close_windows__16TAdChrSelASlotGCFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    reset_all_slots__15TAdChrSelSlotGCFPv(M2C_FIELD(arg0, s32 *, 0x2C));
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
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x70));
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
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x34));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x3C));
        break;
    case 1:
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x34));
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x38));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x3C));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x40));
        break;
    case 2:
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x38));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x40));
        break;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0_2) {
    case 0:
        M2C_FIELD(arg0, u32 *, 0x4C) = TAdMcSelectGC__sub_80019DA8(arg0, 0xC, lbl_805DF218);
        TAdMcSelectGC__sub_802C7560(M2C_FIELD(arg0, s32 *, 0x2C), 0, lbl_80475840);
        M2C_FIELD(arg0, u32 *, 0x48) = TAdMcSelectGC__sub_80019DA8(arg0, 0xB, lbl_805DF218);
        break;
    case 1:
        TAdMcSelectGC__sub_802C7560(M2C_FIELD(arg0, s32 *, 0x2C), 0, lbl_80475840);
        M2C_FIELD(arg0, u32 *, 0x48) = TAdMcSelectGC__sub_80019DA8(arg0, 0xB, lbl_805DF218);
        break;
    case 2:
        TAdMcSelectGC__sub_802C7560(M2C_FIELD(arg0, s32 *, 0x2C), 0, lbl_804758A0);
        M2C_FIELD(arg0, u32 *, 0x48) = TAdMcSelectGC__sub_80019DA8(arg0, 0xD, lbl_805DF218);
        M2C_FIELD(arg0, u32 *, 0x4C) = TAdMcSelectGC__sub_80019DA8(arg0, 0x14, lbl_805DF218);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
}

void init__16TAdChrSelASlotGCFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
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

extern M2C_UNK __vt__16TAdChrSelASlotGC[];
extern u32 lbl_805D6A98;

void *__dt__16TAdChrSelASlotGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdChrSelASlotGC;
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
        if ((u32) lbl_805D6A98 != 0U) {
            lbl_805D6A98 = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__16TAdChrSelASlotGC[];
extern void *lbl_805D4100;

void *TAdChrSelASlotGC__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TAdChrSelASlotGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4100;
    init__16TAdChrSelASlotGCFPvi((void *)(arg0), (s32)(arg2));
    TAdChrSelASlotGC__sub_8030DE58(arg0, arg2);
    return arg0;
}

s32 get_slot_index__16TAdChrSelASlotGCFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

}
