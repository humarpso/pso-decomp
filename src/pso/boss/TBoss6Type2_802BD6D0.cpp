#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK update_segments__11TBoss6Type2FPv(void *);
M2C_UNK TBoss6Type2__sub_802BC62C(void *);
u32 get_table_entry__11TBoss6Type2Fi(s32);
M2C_UNK TBoss6Type2__sub_8032E718(void *, u32, s32);

void set_target_state__11TBoss6Type2FPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r31;
    s32 temp_r30;

    temp_r31 = M2C_FIELD(arg0, u32 *, 0x2E4);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x42C);
    M2C_FIELD(arg0, u32 *, 0x2E4) = get_table_entry__11TBoss6Type2Fi(arg1);
    M2C_FIELD(arg0, s32 *, 0x42C) = arg2;
    update_segments__11TBoss6Type2FPv(arg0);
    if ((temp_r31 != (u32) M2C_FIELD(arg0, u32 *, 0x2E4)) || (temp_r30 != (s32) M2C_FIELD(arg0, s32 *, 0x42C))) {
        TBoss6Type2__sub_802BC62C(arg0);
    }
    if (M2C_FIELD(arg0, void **, 0x410) != 0) {
        TBoss6Type2__sub_8032E718(M2C_FIELD(arg0, void **, 0x410), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
    if (M2C_FIELD(arg0, void **, 0x414) != 0) {
        TBoss6Type2__sub_8032E718(M2C_FIELD(arg0, void **, 0x414), M2C_FIELD(arg0, u32 *, 0x2E4), M2C_FIELD(arg0, s32 *, 0x42C));
    }
}

}
