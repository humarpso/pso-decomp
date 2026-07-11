#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_parts_flags__11TBoss6Type1FPv(void *arg0);

M2C_UNK enable_parts__11TBoss6Type1FPv(void *);
M2C_UNK set_child_flags__11TBoss6Type1FPv(void *);
M2C_UNK TBoss6Type1__sub_802B7944();

void update_parts_flags__11TBoss6Type1FPv(void *arg0) {
    TBoss6Type1__sub_802B7944();
    if (M2C_FIELD(arg0, s32 *, 0x418) & 1) {
        set_child_flags__11TBoss6Type1FPv(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x418) & 2) {
        enable_parts__11TBoss6Type1FPv(arg0);
    }
}

}
