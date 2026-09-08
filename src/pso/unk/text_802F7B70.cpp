#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TBoss8Dragon__sub_802FAF18(void *);
s32 TBoss8Dragon__sub_802FBA84(void *);
s32 TBoss8Dragon__sub_802FBBFC(void *, int);
void TBoss8Dragon__sub_802FA478(u8 *arg0, u32 arg1);
}

extern "C" {

void TBoss8Dragon__sub_802FA478(u8 *arg0, u32 arg1) {
    switch (arg1) {
    case 4:
        TBoss8Dragon__sub_802FAF18((void *) (arg0));
        return;
    case 2:
    case 11:
        TBoss8Dragon__sub_802FBBFC((void *) (arg0), (int) (0x18));
        return;
    case 9:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x74C) != 0) {
            TBoss8Dragon__sub_802FBBFC((void *) (arg0), (int) (0x18));
            return;
        }
        TBoss8Dragon__sub_802FBA84((void *) (arg0));
    default:
        return;
    }
}

}
