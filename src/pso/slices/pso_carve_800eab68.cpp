#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, int);
M2C_UNK TObjEneSlimeOne__sub_800EB654(int, void *);
s16 check_player_field_7cc__15TObjEneSlimeOneFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
extern s32 lbl_805D586C;

void TObjEneSlimeOne__vt60(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != 0xC) {
        if (((s32) M2C_FIELD(arg0, u16 *, 0x2D4) < (s32) lbl_805D586C) && (TPlayerBattleCtrl4P__sub_801BA74C() != 0U) && (check_player_field_7cc__15TObjEneSlimeOneFPv() == 2) && ((u32) M2C_FIELD(arg0, u32 *, 0x3F0) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
            TObjEneSlimeOne__sub_800EB654((int) (M2C_FIELD(arg0, u32 *, 0x3F0)), (void *) (arg0 + 0x38));
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        TObjEneSlimeOne__sub_800EAE78((void *) (arg0), (int) (0xC));
    }
}

}
