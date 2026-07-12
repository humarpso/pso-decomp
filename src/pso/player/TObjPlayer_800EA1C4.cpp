#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800EA1C4(u8 *arg0);
void TObjPlayer__sub_800EA224(u8 *arg0);
void TObjPlayer__sub_800EA284(u8 *arg0);
void TObjPlayer__sub_800EA304(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, M2C_UNK);
M2C_UNK TObjEneSlimeOne__sub_800EAE78(void *, M2C_UNK);
s32 TObjEneSlimeOne__sub_800EC41C(void *);
M2C_UNK TObjEneSlimeOne__sub_800EC7F4(s32, M2C_UNK);
s32 is_reached_target_depth__15TObjEneSlimeOneFPv(s32);
M2C_UNK set_display_mode__15TObjEneSlimeOneFPvi(void *, M2C_UNK);

void TObjPlayer__sub_800EA1C4(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394) - 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r0;
    if (temp_r0 == 0) {
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0xCD);
    }
    if (is_reached_target_depth__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x388)) == 1) {
        TObjEneSlimeOne__sub_800EAE78(arg0, 3);
    }
}

void TObjPlayer__sub_800EA224(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x394) = 0x14;
    TBoss3Volopt__sub_8022675C(0x4003AD1D, arg0 + 0x38, 0, 0);
    TObjEneSlimeOne__sub_800EC7F4(M2C_FIELD(arg0, s32 *, 0x388), 0xA);
    set_display_mode__15TObjEneSlimeOneFPvi(arg0, 1);
}

void TObjPlayer__sub_800EA284(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x394) - 1;
    M2C_FIELD(arg0, s32 *, 0x394) = temp_r0;
    if (temp_r0 == 0) {
        TObjEneDellBiter__sub_80087350(arg0 + 0x2FC, 0xCD);
    }
    if (is_reached_target_depth__15TObjEneSlimeOneFPv(M2C_FIELD(arg0, s32 *, 0x388)) == 1) {
        if (TObjEneSlimeOne__sub_800EC41C(arg0) != 0) {
            TObjEneSlimeOne__sub_800EAE78(arg0, 7);
            return;
        }
        TObjEneSlimeOne__sub_800EAE78(arg0, 6);
    }
}

void TObjPlayer__sub_800EA304(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x394) = 8;
    TObjEneSlimeOne__sub_800EC7F4(M2C_FIELD(arg0, s32 *, 0x388), 9);
    TBoss3Volopt__sub_8022675C(0x4003AD1D, arg0 + 0x38, 0, 0);
    set_display_mode__15TObjEneSlimeOneFPvi(arg0, 1);
}

}
