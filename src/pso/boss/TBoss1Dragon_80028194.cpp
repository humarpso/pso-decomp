#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_phase_advance__12TBoss1DragonFPv(void *arg0);
s32 update_max_hp_phase__12TBoss1DragonFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_800284B4(void *, M2C_UNK);
M2C_UNK TBoss1Dragon__sub_800291F4(void *, M2C_UNK);

s32 check_phase_advance__12TBoss1DragonFPv(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s16) M2C_FIELD(arg0, s16 *, 0x680)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 1) {
            TBoss1Dragon__sub_800284B4(arg0, 0xA);
            return 1;
        }
        TBoss1Dragon__sub_800284B4(arg0, 9);
        return 1;
    }
    return 0;
}

s32 update_max_hp_phase__12TBoss1DragonFPv(void *arg0) {
    s16 temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (temp_r4 = M2C_FIELD(arg0, s16 *, 0x682))) {
        M2C_FIELD(arg0, s16 *, 0x32C) = temp_r4;
        TBoss1Dragon__sub_800291F4(arg0, 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 0) {
            TBoss1Dragon__sub_800284B4(arg0, 0xD);
            return 1;
        }
        TBoss1Dragon__sub_800284B4(arg0, 0xB);
        return 1;
    }
    return 0;
}

}
