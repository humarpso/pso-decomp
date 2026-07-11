#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_801E1530(s32);
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 fn_801FDB14();
s32 fn_802004D8();
s32 fn_803100EC();
void TAdChrSelBSlotGC__sub_8030E458(void);
void TAdChrSelBSlotGC__sub_8030E550(void);
void TAdChrSelBSlotGC__sub_8030E620(void);

void TAdChrSelBSlotGC__sub_8030E458(void) {  }
void TAdChrSelBSlotGC__sub_8030E45C(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x1D;
    }
}
void TAdChrSelBSlotGC__sub_8030E498(void *arg0) {
    fn_802004D8();
    fn_801FDB14();
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1C;
}
void TAdChrSelBSlotGC__sub_8030E4D0(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
}
void TAdChrSelBSlotGC__sub_8030E50C(void *arg0) {
    if (fn_803100EC() <= 0xD) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}
void TAdChrSelBSlotGC__sub_8030E550(void) {  }
void TAdChrSelBSlotGC__sub_8030E554(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        if ((u32) (TAdPlayerLoadGC__sub_801E1530(1) + 0x10000) == 0xFF83U) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0x18;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x19;
    }
}
void TAdChrSelBSlotGC__sub_8030E5B0(void *arg0) {
    fn_802004D8();
    fn_801FDB14();
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1A;
}
void TAdChrSelBSlotGC__sub_8030E5E8(void *arg0) {
    fn_802004D8();
    fn_801FDB14();
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x17;
}
void TAdChrSelBSlotGC__sub_8030E620(void) {  }

}
