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
void render__12TObjGrassWebFv(void);

void apply_to_player__12TObjGrassWebFPv(void *arg0) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0xA4));
    if ((temp_r3 != 0) && (fn_80019248() != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) && (obj_testFlags30(temp_r3, 0x800) == 0)) {
        TObjPlayer__sub_801B53BC(temp_r3, M2C_FIELD(arg0, s32 *, 0x84), 1);
    }
}

}
