#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TTecGiZonde__vt1(void *arg0);
u32 TPhotonMylla__sub_80154CB4(u16);
s32 TTecGiZonde__sub_80231C58(void *);
M2C_UNK TTecGiZonde__sub_80232598(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TTecGiZonde__vt1(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xC8));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x130) == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (TTecGiZonde__sub_80231C58(arg0) == 1) {
        TTecGiZonde__sub_80232598(arg0);
    }
    queue_destruction__7TObjectFv(arg0);
}

}
