#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TPlyOnCreatedFv(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK queue_destruction__7TObjectFv(void *);

void run_task__13TPlyOnCreatedFv(void *arg0) {
    M2C_UNK (*temp_r12)();

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x1C)) != 0U) {
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x20);
        if (temp_r12 != NULL) {
            temp_r12();
        }
        queue_destruction__7TObjectFv(arg0);
    }
}

}
