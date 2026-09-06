#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjEneDellBiter__sub_80087350(s32, s32);
void set_display_mode__15TObjEneSlimeOneFPvi(void *, s32);
void fn_800EB778(void *, s32);
void TObjEneSlimeOne__sub_800EC7F4(void *, s32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern const f32 lbl_805DA67C;
void fn_800E95F4(u8 *arg0);
}

extern "C" {

void fn_800E95F4(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3F0));
    if ((temp_r3 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0)) {
        fn_800EB778(M2C_FIELD(arg0, u8 **, 0x3F0), (s32) M2C_FIELD(arg0, u16 *, 0x1C));
    }
    M2C_FIELD(arg0, f32 *, 0x3B0) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3AC) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, f32 *, 0x3A8) = (f32) lbl_805DA67C;
    M2C_FIELD(arg0, s32 *, 0x390) = 5;
    refresh_lobby_state__10TObjPlayerFPv(arg0);
    TBoss3Volopt__sub_8022675C(0x4003A81B, (u32) (arg0 + 0x38), 0, 0);
    TObjEneDellBiter__sub_80087350((s32) (arg0 + 0x2FC), 0xFE);
    TObjEneSlimeOne__sub_800EC7F4(M2C_FIELD(arg0, u8 **, 0x388), 5);
    set_display_mode__15TObjEneSlimeOneFPvi(arg0, 0);
}

}
