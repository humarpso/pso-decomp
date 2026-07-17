#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv();
M2C_UNK fn_800E3428(void *);
M2C_UNK fn_800E35C8(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK TOTrapAncient01__sub_80226578(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);

void run_task__22TObjEnePanarmsAtkColliFv(u8 *arg0) {
    s32 temp_r0_2;

    if (--M2C_FIELD(arg0, s32 *, 0x380) < 0) {
        queue_destruction__7TObjectFv();
        return;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    TBoss4Zako__sub_803D8910(arg0 + 0x38, arg0 + 0x308);
    M2C_FIELD(arg0, f32 *, 0x378) = (f32) (M2C_FIELD(arg0, f32 *, 0x378) + M2C_FIELD(arg0, f32 *, 0x37C));
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0_2) {
    case 0:
        fn_800E35C8(arg0);
        return;
    case 1:
        TOTrapAncient01__sub_80226578(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BA2A), arg0, arg0 + 0x38, 0, 0);
        fn_800E3428(arg0);
        return;
    }
}

}
