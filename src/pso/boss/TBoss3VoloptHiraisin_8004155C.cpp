#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss3VoloptHiraisin__sub_8004155C(void *arg0);
M2C_UNK TBoss3VoloptHiraisin__sub_8004118C();
M2C_UNK TBoss3VoloptHiraisin__sub_800411F0();
M2C_UNK TBoss3VoloptHiraisin__sub_80041314();
M2C_UNK fn_80040FDC();

void TBoss3VoloptHiraisin__sub_8004155C(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
    case 1:
        TBoss3VoloptHiraisin__sub_8004118C();
        break;
    case 4:
        TBoss3VoloptHiraisin__sub_80041314();
        break;
    case 5:
        TBoss3VoloptHiraisin__sub_800411F0();
        break;
    case 7:
        fn_80040FDC();
        break;
    }
}

}
