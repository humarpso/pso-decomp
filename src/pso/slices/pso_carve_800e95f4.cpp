#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK set_display_mode__15TObjEneSlimeOneFPvi(void *, int);
M2C_UNK fn_800EB778(int, int);
M2C_UNK TObjEneSlimeOne__sub_800EC7F4(int, int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
extern const f32 lbl_805DA67C;

void fn_800E95F4(u8 *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x3F0) != 0U) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
        fn_800EB778((int) (M2C_FIELD(arg0, u32 *, 0x3F0)), (int) (M2C_FIELD(arg0, u16 *, 0x1C)));
    }
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, s32 *, 0x390) = 5;
    refresh_lobby_state__10TObjPlayerFPv((void *) (arg0));
    TBoss3Volopt__sub_8022675C((int) (0x4003A81B), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x2FC), (int) (0xFE));
    TObjEneSlimeOne__sub_800EC7F4((int) (M2C_FIELD(arg0, s32 *, 0x388)), (int) (5));
    set_display_mode__15TObjEneSlimeOneFPvi((void *) (arg0), (int) (0));
}

}
