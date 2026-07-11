#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm9Mericarol__sub_802D09AC(void);
void set_state_a__19TObjEneBm9MericarolFPv(void *arg0);
void change_state__19TObjEneBm9MericarolFPv(void *arg0);
void TObjEneBm9Mericarol__sub_802D0A2C(void);
s32 TObjEneDD__sub_800BBA18(void * a0 = 0, s32 a1 = 0);
s32 fn_800BB780(void);

void TObjEneBm9Mericarol__sub_802D09AC(void) {  }
void set_state_a__19TObjEneBm9MericarolFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        if (M2C_FIELD(arg0, s32 *, 0x438) & 0x20) {
            fn_800BB780();
            return;
        }
        TObjEneDD__sub_800BBA18(arg0, 0xA);
    }
}
void change_state__19TObjEneBm9MericarolFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xB) && (temp_r0 != 0xC)) {
        TObjEneDD__sub_800BBA18(arg0, 0xB);
    }
}
void TObjEneBm9Mericarol__sub_802D0A2C(void) {  }

}
