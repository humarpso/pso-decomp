#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdChrSelASlotGC__sub_8030CBD0(void);
void TAdChrSelASlotGC__sub_8030CBD4(void);
void TAdChrSelASlotGC__sub_8030CBD8(void *arg0);
void TAdChrSelASlotGC__sub_8030CC34(void *arg0);
void TAdChrSelASlotGC__sub_8030CC6C(void *arg0);
void TAdChrSelASlotGC__sub_8030CCA8(void *arg0);
void TAdChrSelASlotGC__sub_8030CCE0(void);
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdPlayerLoadGC__sub_801E1530(s32);
s32 fn_801FDAAC();
s32 fn_8020051C();

void TAdChrSelASlotGC__sub_8030CBD0(void) {  }
void TAdChrSelASlotGC__sub_8030CBD4(void) {  }
void TAdChrSelASlotGC__sub_8030CBD8(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        if ((u32) (TAdPlayerLoadGC__sub_801E1530(0) + 0x10000) == 0xFF81U) {
            M2C_FIELD(arg0, s32 *, 0x24) = 0x13;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0x14;
    }
}
void TAdChrSelASlotGC__sub_8030CC34(void *arg0) {
    fn_8020051C();
    fn_801FDAAC();
    M2C_FIELD(arg0, s32 *, 0x24) = 0x12;
}
void TAdChrSelASlotGC__sub_8030CC6C(void *arg0) {
    if (TAdPlayerLoadGC__sub_80076BBC() == 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
    }
}
void TAdChrSelASlotGC__sub_8030CCA8(void *arg0) {
    fn_8020051C();
    fn_801FDAAC();
    M2C_FIELD(arg0, s32 *, 0x24) = 0x10;
}
void TAdChrSelASlotGC__sub_8030CCE0(void) {  }

}
