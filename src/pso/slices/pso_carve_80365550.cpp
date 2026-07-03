#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019248();
s32 obj_testFlags30(s32, s32);
s32 TObjPlayer__sub_801B53BC(s32, s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
int TObjIllGillKage__sub_80365450(void* p);
void render__15TObjIllGillKageFv(void);
int queue_destruction__7TObjectFv(void*);

int run_task__15TObjIllGillKageFv(void) { return 0; }

}
