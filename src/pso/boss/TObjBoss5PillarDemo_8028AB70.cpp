#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss5PillarDemo__sub_8028AB70(void);
M2C_UNK fn_8028A9CC(s32, s32);

extern void *lbl_805D4DD8;

void TObjBoss5PillarDemo__sub_8028AB70(void) {
    void *temp_r4;

    if ((void *) lbl_805D4DD8 != NULL) {
        temp_r4 = M2C_FIELD(lbl_805D4DD8, void **, 0x42C);
        fn_8028A9CC(M2C_FIELD(temp_r4, s32 *, 0x78), M2C_FIELD(temp_r4, s32 *, 0x68));
    }
}

}
