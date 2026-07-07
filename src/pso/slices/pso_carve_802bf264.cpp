#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(int, void *, int, int);
M2C_UNK TBoss6Type2__sub_802BB768(void *);
M2C_UNK TBoss6Type2__sub_802BB7C0(void *);

void fn_802BF264(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x45C) = 0xB4;
    M2C_FIELD(arg0, s32 *, 0x460) = 0xB4;
    fn_8022675C(0x4006970E, arg0 + 0x38, 0, 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        TBoss6Type2__sub_802BB7C0(arg0);
        return;
    }
    TBoss6Type2__sub_802BB768(arg0);
}

}
