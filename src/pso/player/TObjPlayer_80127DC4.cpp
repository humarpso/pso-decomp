#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void yamigarasu_start_timers(void *arg0);
s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK paralysis_curse_timer_ct(s32, u32, s32, M2C_UNK, f32);
s32 __nw__15TItemHeapObjectFUl(M2C_UNK);
M2C_UNK ct__13TItemProArmorFPv(s32, u32, s32, M2C_UNK);

extern f32 lbl_805DADD8;

void yamigarasu_start_timers(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x30);
        if (temp_r3 != 0) {
            paralysis_curse_timer_ct(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0xE10, lbl_805DADD8);
        }
        temp_r3_2 = __nw__15TItemHeapObjectFUl(0x2C);
        if (temp_r3_2 != 0) {
            ct__13TItemProArmorFPv(temp_r3_2, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
}

}
