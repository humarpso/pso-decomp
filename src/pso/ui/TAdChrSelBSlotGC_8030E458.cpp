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
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E1530(s32);
s32 open_confirm_window__23TAdSinglePlyChrSelectGCFv();
s32 TAdSinglePlyChrSelectGC__sub_802004D8();
s32 fn_803100EC();

void TAdChrSelBSlotGC__sub_8030E458(void) {  }
void set_load_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x1D;
    }
}
void init__16TAdChrSelBSlotGCFPv(void *arg0) {
    TAdSinglePlyChrSelectGC__sub_802004D8();
    open_confirm_window__23TAdSinglePlyChrSelectGCFv();
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1C;
}
void reset_load_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
void reset_slot_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if (fn_803100EC() <= 0xD) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}
void TAdChrSelBSlotGC__sub_8030E550(void) {  }
void update_load_state__16TAdChrSelBSlotGCFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        if ((u32) (TAdPlayerLoadGC__sub_801E1530(1) + 0x10000) == 0xFF83U) {
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
