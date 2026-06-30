#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(s32);
s32 objInBand__FP7GameObjf(s32, f32);
M2C_UNK fn_803086A8(s32);
M2C_UNK fn_8030880C(s32, M2C_UNK);
M2C_UNK fn_80308910(s32);
f32 TBoss7Crawfish__sub_803094D8(s32);
extern const f32 lbl_805DF0D8;
extern const f32 lbl_805DF0F0;

void TBoss7Crawfish__sub_80308C10(s32 arg0) {
    if (objInBand__FP7GameObjf(arg0, lbl_805DF0F0) != 0) {
        fn_80308910(arg0);
        fn_8030880C(arg0, 0x39E0D);
    }
    fn_803086A8(arg0);
    if (lbl_805DF0D8 == TBoss7Crawfish__sub_803094D8(arg0)) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
