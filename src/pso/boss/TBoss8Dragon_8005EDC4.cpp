#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_angle_state__12TBoss8DragonFPvPvPv(void *arg0, void *dst, void *src);
s16 TBoss8Dragon__sub_8005E944(void *, s16, s16);

void copy_angle_state__12TBoss8DragonFPvPvPv(void *arg0, void *dst, void *src) {
    M2C_FIELD(dst, s16 *, 0) = (s16) M2C_FIELD(src, s32 *, 0);
    M2C_FIELD(dst, s16 *, 2) = TBoss8Dragon__sub_8005E944(arg0, M2C_FIELD(src, s16 *, 4), M2C_FIELD(src, s16 *, 6));
}

}
