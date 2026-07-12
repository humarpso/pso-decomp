#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_80063C1C(void *arg0);
void spawn_attack_effect__12TBoss8DragonFPv(void *arg0);
s32 TOSwitchAttack__sub_80087278(void *, M2C_UNK, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjFish__sub_800660D4(s32, s32, s32, M2C_UNK, M2C_UNK, f32);

extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;

void TBoss8Dragon__sub_80063C1C(void *arg0) {
    s32 temp_r3;

    temp_r3 = TOSwitchAttack__sub_80087278(arg0, 0x211, 0x40);
    if (temp_r3 != 0) {
        TObjFish__sub_800660D4(temp_r3, TObjFish__sub_8001EDC4(lbl_805D4DA4, 2), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}

extern s32 lbl_805D4DA4;
extern s32 lbl_805D4DA8;
extern f32 lbl_805D8D88;

void spawn_attack_effect__12TBoss8DragonFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TOSwitchAttack__sub_80087278(arg0, 0x210, 0x40);
    if (temp_r3 != 0) {
        TObjFish__sub_800660D4(temp_r3, TObjFish__sub_8001EDC4(lbl_805D4DA4, 1), lbl_805D4DA8, 0, 0, lbl_805D8D88);
    }
}

}
