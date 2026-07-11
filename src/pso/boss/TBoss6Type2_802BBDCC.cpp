#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_parts_flags__11TBoss6Type2FPv(void *arg0);
M2C_UNK set_owner_flag_bit0__11TBoss6Type2FPv(void *);
M2C_UNK set_child_flags__11TBoss6Type2FPv(void *);
M2C_UNK TBoss6Type2__sub_802BBD88();

void update_parts_flags__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_802BBD88();
    if (M2C_FIELD(arg0, s32 *, 0x474) & 1) {
        set_child_flags__11TBoss6Type2FPv(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x474) & 2) {
        set_owner_flag_bit0__11TBoss6Type2FPv(arg0);
    }
}

}
