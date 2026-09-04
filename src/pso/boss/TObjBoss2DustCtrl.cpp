#include "pso/TObjBoss2DustCtrl.h"

void TObjBoss2DustCtrl::run_task() {}

TObjBoss2DustCtrl::~TObjBoss2DustCtrl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2DustCtrl__sub_8003AB5C(void);

extern s32 lbl_805D4BF0;

void TObjBoss2DustCtrl__sub_8003AB5C(void) {
    s32 temp_r0;

    temp_r0 = lbl_805D4BF0 + 1;
    lbl_805D4BF0 = temp_r0;
    if (temp_r0 >= 0xA) {
        lbl_805D4BF0 = 0;
    }
}

}
