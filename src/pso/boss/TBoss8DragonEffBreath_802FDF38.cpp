#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__21TBoss8DragonEffBreathFv(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
M2C_UNK TBoss8Dragon__sub_802FB290(u32, void *, int, int);
u32 get_enemy_entity(int);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f32 lbl_805DEEF0;
extern const f32 lbl_805DEEF4;

void run_task__21TBoss8DragonEffBreathFv(u8 *arg0) {
    f32 temp_f1;
    u32 ent;

    TBoss4Zako__sub_803D8910((void *) (arg0 + 0x1C), (void *) (arg0 + 0x28));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
    if (temp_f1 < lbl_805DEEF0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((temp_f1 < lbl_805DEEF4) && ((ent = get_enemy_entity((int) (M2C_FIELD(arg0, u16 *, 0x38)))) != 0U)) {
        TBoss8Dragon__sub_802FB290(ent, (void *) (arg0 + 0x1C), (int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0x3C)));
    }
}

}
