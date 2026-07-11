#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248();
s32 obj_testFlags30(s32, s32);
s32 play_effect__10TObjPlayerFiii(s32, s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
void render__12TObjGrassWebFv(void);

int run_task__12TObjGrassWebFv(void) { return 0; }

}
