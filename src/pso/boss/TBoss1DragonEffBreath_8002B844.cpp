#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__21TBoss1DragonEffBreathFv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80027710(int, void *, int);
M2C_UNK TBoss1Dragon__sub_8002AA74();
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f32 lbl_805D8130;
extern const f32 lbl_805D8134;

void run_task__21TBoss1DragonEffBreathFv(u8 *arg0) {
    f32 temp_f1;

    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
    if (temp_f1 < lbl_805D8130) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (temp_f1 < lbl_805D8134) {
        TBoss1Dragon__sub_80027710((int) TBoss1Dragon__sub_8002AA74(), (void *) (arg0 + 0x1C), (int) (M2C_FIELD(arg0, s32 *, 0x34)));
    }
}

}
