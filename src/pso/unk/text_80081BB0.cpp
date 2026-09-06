#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK queue_destruction__10TObjPlayerFPv(void *);
M2C_UNK fn_80081B7C(void *);
M2C_UNK TObjFish__sub_80081BB0(void *);
M2C_UNK TObjPlayer__sub_80081CD0(void *);
u32 TNpcPlayer__sub_800D87EC(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
void TObjPlayer__sub_80081DC8(void *arg0);
}

extern "C" {

void TObjPlayer__sub_80081DC8(void *arg0) {
    s32 temp_r0;
    u32 var_r3;
    u16 id = M2C_FIELD(arg0, u16 *, 0x358);
    if ((id != 0xffffU) && (id < 0x4000U)) {
        var_r3 = TNpcPlayer__sub_800D87EC(id);
    } else {
        var_r3 = 0U;
    }
    if (var_r3 == 0U) {
        queue_destruction__7TObjectFv(arg0);
        disallow_rendering__7TObjectFv(arg0);
        return;
    }
    if (all_parents_unqueued_for_destruction__7TObjectFv() == 0) {
        disallow_rendering__7TObjectFv(arg0);
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x334);
    switch (temp_r0) {
    case 0:
        TObjPlayer__sub_80081CD0(arg0);
        return;
    case 1:
        TObjFish__sub_80081BB0(arg0);
        return;
    case 2:
        fn_80081B7C(arg0);
        return;
    case 3:
        queue_destruction__10TObjPlayerFPv(arg0);
        return;
    }
}

}
