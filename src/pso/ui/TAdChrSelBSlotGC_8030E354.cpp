#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8030EBD0_lbl_8050E3B8
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct RecoveredGlobal_8030ECB8_lbl_8050E3B8
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

extern "C" {
M2C_UNK TWindow__close(void *);
u32 TAdChrSelASlotGC__sub_8030CB08(void *, int, int);
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
M2C_UNK get_global_slot_data__16TAdChrSelBSlotGCFv();
void TAdChrSelBSlotGC__sub_8030E768(u8 *arg0);
M2C_UNK TWindow__close(void *);
u32 TAdChrSelASlotGC__sub_8030CB08(void *, int, int);
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
M2C_UNK get_global_slot_data__16TAdChrSelBSlotGCFv();
void TAdChrSelBSlotGC__sub_8030E824(u8 *arg0);
M2C_UNK TWindow__close(void *);
u32 TAdChrSelASlotGC__sub_8030CB08(void *, int, int);
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
M2C_UNK get_global_slot_data__16TAdChrSelBSlotGCFv();
void TAdChrSelBSlotGC__sub_8030E8E0(u8 *arg0);
M2C_UNK TWindow__close(void *);
u32 TAdChrSelASlotGC__sub_8030CB08(void *, int, int);
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
M2C_UNK get_global_slot_data__16TAdChrSelBSlotGCFv();
void TAdChrSelBSlotGC__sub_8030E99C(u8 *arg0);
M2C_UNK TWindow__close(void *);
u32 TAdChrSelASlotGC__sub_8030CB08(void *, int, int);
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
M2C_UNK get_global_slot_data__16TAdChrSelBSlotGCFv();
void TAdChrSelBSlotGC__sub_8030EA58(u8 *arg0);
M2C_UNK TWindow__close(void *);
u32 TAdChrSelASlotGC__sub_8030CB08(void *, int, int);
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
M2C_UNK get_global_slot_data__16TAdChrSelBSlotGCFv();
void TAdChrSelBSlotGC__sub_8030EB14(u8 *arg0);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK TWindow__close(void *);
s32 close__17TWindowSubComCardFPv(int);
s32 get_state__22TAdMultiPlyChrSelectGCFv();
s32 get_state_result__22TAdMultiPlyChrSelectGCFPv(int);
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
extern RecoveredGlobal_8030EBD0_lbl_8050E3B8 lbl_8050E3B8;
void TAdChrSelBSlotGC__sub_8030EBD0(u8 *arg0);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK TWindow__close(void *);
s32 get_state__22TAdMultiPlyChrSelectGCFv();
s32 get_state_result__22TAdMultiPlyChrSelectGCFPv(int);
s32 get_global_state__16TAdChrSelBSlotGCFv(void *);
extern RecoveredGlobal_8030EBD0_lbl_8050E3B8 lbl_8050E3B8;
void TAdChrSelBSlotGC__sub_8030ECB8(u8 *arg0);
}

extern "C" {

int TAdChrSelBSlotGC__sub_8030E378(void);
void TAdChrSelBSlotGC__sub_8030E458(void);
void TAdChrSelBSlotGC__sub_8030E550(void);
void TAdChrSelBSlotGC__sub_8030E620(void);
void enter_state17__16TAdChrSelBSlotGCFPv(void *arg0);
void init__16TAdChrSelBSlotGCFPv(void *arg0);
int render__16TAdChrSelBSlotGCFv(void);
void reset_load_state__16TAdChrSelBSlotGCFPv(void *arg0);
void reset_slot_state__16TAdChrSelBSlotGCFPv(void *arg0);
void set_load_state__16TAdChrSelBSlotGCFPv(void *arg0);
void set_state_confirm__16TAdChrSelBSlotGCFPv(void *arg0);
void update_load_state__16TAdChrSelBSlotGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_802004D8();
s32 get_instance__15TAdPlayerLoadGCFv();
s32 get_load_result__15TAdPlayerLoadGCFv(s32);
s32 get_slot_index__16TAdChrSelASlotGCFPv(void* p);
s32 open_confirm_window__23TAdSinglePlyChrSelectGCFv();

int render__16TAdChrSelBSlotGCFv(void) { return 0; }
int TAdChrSelBSlotGC__sub_8030E378(void) { return 0; }

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
    if (get_global_state__16TAdChrSelBSlotGCFv(arg0) <= 0xD) {
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
void TAdChrSelBSlotGC__sub_8030E768(u8 *arg0) {
    if (get_global_state__16TAdChrSelBSlotGCFv((void *)((void *) (arg0))) > 0x18) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x64));
            M2C_FIELD(arg0, u32 *, 0x64) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x12;
        return;
    }
    if (get_global_state__16TAdChrSelBSlotGCFv((void *)((void *) (arg0))) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x64) == 0U)) {
        get_global_slot_data__16TAdChrSelBSlotGCFv();
        M2C_FIELD(arg0, u32 *, 0x64) = TAdChrSelASlotGC__sub_8030CB08((void *)(get_global_slot_data__16TAdChrSelBSlotGCFv()), (int) (1), (int) (0x13));
    }
}
void TAdChrSelBSlotGC__sub_8030E824(u8 *arg0) {
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) > 0x17) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x11;
        return;
    }
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x68) == 0U)) {
        get_global_slot_data__16TAdChrSelBSlotGCFv();
        M2C_FIELD(arg0, u32 *, 0x68) = TAdChrSelASlotGC__sub_8030CB08((void *)(get_global_slot_data__16TAdChrSelBSlotGCFv()), (int) (1), (int) (0x15));
    }
}
void TAdChrSelBSlotGC__sub_8030E8E0(u8 *arg0) {
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) > 0x15) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x60));
            M2C_FIELD(arg0, u32 *, 0x60) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x10;
        return;
    }
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x60) == 0U)) {
        get_global_slot_data__16TAdChrSelBSlotGCFv();
        M2C_FIELD(arg0, u32 *, 0x60) = TAdChrSelASlotGC__sub_8030CB08((void *)(get_global_slot_data__16TAdChrSelBSlotGCFv()), (int) (1), (int) (0x11));
    }
}
void TAdChrSelBSlotGC__sub_8030E99C(u8 *arg0) {
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) > 0x14) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x5C));
            M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xF;
        return;
    }
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xF;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) == 0U)) {
        get_global_slot_data__16TAdChrSelBSlotGCFv();
        M2C_FIELD(arg0, u32 *, 0x5C) = TAdChrSelASlotGC__sub_8030CB08((void *)(get_global_slot_data__16TAdChrSelBSlotGCFv()), (int) (1), (int) (0xF));
    }
}
void TAdChrSelBSlotGC__sub_8030EA58(u8 *arg0) {
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) > 0x13) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x58));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xE;
        return;
    }
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xF;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) == 0U)) {
        get_global_slot_data__16TAdChrSelBSlotGCFv();
        M2C_FIELD(arg0, u32 *, 0x58) = TAdChrSelASlotGC__sub_8030CB08((void *)(get_global_slot_data__16TAdChrSelBSlotGCFv()), (int) (1), (int) (0xD));
    }
}
void TAdChrSelBSlotGC__sub_8030EB14(u8 *arg0) {
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) > 0x12) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x54));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xD;
        return;
    }
    if (get_global_state__16TAdChrSelBSlotGCFv((void *) (arg0)) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xF;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x54) == 0U)) {
        get_global_slot_data__16TAdChrSelBSlotGCFv();
        M2C_FIELD(arg0, u32 *, 0x54) = TAdChrSelASlotGC__sub_8030CB08((void *)(get_global_slot_data__16TAdChrSelBSlotGCFv()), (int) (1), (int) (0xB));
    }
}
typedef struct RecoveredGlobal_8030EBD0_lbl_8050E3B8 RecoveredGlobal_8030EBD0_lbl_8050E3B8;
typedef char RecoveredGlobal_8030EBD0_lbl_8050E3B8_size[((sizeof(RecoveredGlobal_8030EBD0_lbl_8050E3B8)) == 0x1B0) ? (1) : (-1)];
void TAdChrSelBSlotGC__sub_8030EBD0(u8 *arg0) {
  u32 temp_r3;
  u32 temp_r3_2;
  u8 *temp_r31;
  temp_r3 = *((u32 *) (((s8 *) arg0) + 0x70));
  if (temp_r3 != 0U)
  {
    close__17TWindowSubComCardFPv((int) temp_r3);
    *((u32 *) (((s8 *) arg0) + 0x70)) = 0U;
  }
  temp_r31 = ((u8 *) (&lbl_8050E3B8.value)) + (get_state_result__22TAdMultiPlyChrSelectGCFPv((int) get_state__22TAdMultiPlyChrSelectGCFv()) * 0x50);
  temp_r31 = temp_r31 + 0x20;
  if ((((TWindowShortListCtrl__check_controller_button((int) temp_r31, (int) 4) != 0) || (TWindowShortListCtrl__check_controller_button((int) temp_r31, (int) 2) != 0)) || (TWindowShortListCtrl__check_controller_button((int) temp_r31, (int) 0x400) != 0)) || (TWindowShortListCtrl__check_controller_button((int) temp_r31, (int) 0x200) != 0))
  {
    *((s32 *) (((s8 *) arg0) + 0x1C)) = 1;
    return;
  }
  if (get_global_state__16TAdChrSelBSlotGCFv((void *) arg0) < 0xC)
  {
    temp_r3_2 = *((u32 *) (((s8 *) arg0) + 0x40));
    if (temp_r3_2 != 0U)
    {
      TWindow__close((void *)((int) temp_r3_2));
      *((u32 *) (((s8 *) arg0) + 0x40)) = 0U;
    }
    *((s32 *) (((s8 *) arg0) + 0x1C)) = 1;
  }
}
typedef struct RecoveredGlobal_8030ECB8_lbl_8050E3B8 RecoveredGlobal_8030ECB8_lbl_8050E3B8;
typedef char RecoveredGlobal_8030ECB8_lbl_8050E3B8_size[((sizeof(RecoveredGlobal_8030ECB8_lbl_8050E3B8)) == 0x1B0) ? (1) : (-1)];
void TAdChrSelBSlotGC__sub_8030ECB8(u8 *arg0) {
  u32 temp_r3;
  s32 new_var;
  u8 *temp_r31;
  new_var = get_state_result__22TAdMultiPlyChrSelectGCFPv((int) get_state__22TAdMultiPlyChrSelectGCFv());
  temp_r31 = (((u8 *) (&(*(RecoveredGlobal_8030ECB8_lbl_8050E3B8 *)&lbl_8050E3B8).value)) + (new_var * 0x50)) + 0x20;
  if ((((TWindowShortListCtrl__check_controller_button((int) temp_r31, (int) 4) != 0) || (TWindowShortListCtrl__check_controller_button((int) temp_r31, (int) 2) != 0)) || (TWindowShortListCtrl__check_controller_button((int) temp_r31, (int) 0x400) != 0)) || (TWindowShortListCtrl__check_controller_button((int) temp_r31, (int) 0x200) != 0))
  {
    *((s32 *) (((s8 *) arg0) + 0x1C)) = 1;
    return;
  }
  if (get_global_state__16TAdChrSelBSlotGCFv((void *) arg0) < 0xC)
  {
    temp_r3 = *((u32 *) (((s8 *) arg0) + 0x40));
    if (temp_r3 != 0U)
    {
      TWindow__close((void *)((int) temp_r3));
      *((u32 *) (((s8 *) arg0) + 0x40)) = 0U;
    }
    *((s32 *) (((s8 *) arg0) + 0x1C)) = 1;
  }
}

}
