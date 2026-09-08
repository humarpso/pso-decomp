#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803DCBD8_lbl_8058D380 {
    M2C_UNK value;
    u8 remaining[0xEC];
};

typedef M2C_UNK (*RecoveredCallback_92513335c3ed)(void *);
extern "C" {
extern RecoveredGlobal_803DCBD8_lbl_8058D380 lbl_8058D380;
extern u8 *lbl_805D774C;
void TObjPlayer__sub_803DCBD8(s32 arg0);
s32 TObjPlayer__sub_803D7CA4(int);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
s32 TObjPlayer__sub_803DB270(int, void *);
extern s32 lbl_805D7710;
extern s32 lbl_805D7774;
void TObjPlayer__sub_803DC904(u8 *arg0);
}

extern "C" {

extern s32 lbl_805D7710;

void set_npc_enemy_param(s32 arg0) {
    lbl_805D7710 = arg0;
}
typedef char RecoveredGlobal_803DCBD8_lbl_8058D380_size[sizeof(RecoveredGlobal_803DCBD8_lbl_8058D380) == 0xF0 ? 1 : -1];

#pragma push
#pragma peephole off
#pragma scheduling off
void TObjPlayer__sub_803DC904(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r3_2;
    u8 *var_r31;
    var_r31 = (u8 *)(arg0);
    do {
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D7CA4((int) (var_r31));
        if (((M2C_UNK (*)(void *)) (*(RecoveredCallback_92513335c3ed *)&lbl_805D7710)) != NULL) {
            (*(RecoveredCallback_92513335c3ed *)&lbl_805D7710)(var_r31);
        }
        temp_r3 = M2C_FIELD(var_r31, u32 *, 4);
        if ((temp_r3 != 0U) && ((u32) (M2C_FIELD(var_r31, s32 *, 0) & 8) == 0)) {
            TObjPlayer__sub_803DB270((int) (temp_r3), (void *) (lbl_805D7774));
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x2C));
        if (temp_r3_2 != NULL) {
            TObjPlayer__sub_803DC904(temp_r3_2);
        }
        TObjPlayer__sub_803D9B78();
        var_r31 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x30));
    } while (var_r31 != NULL);
}
#pragma pop

void TObjPlayer__sub_803DCBD8(s32 arg0) {
    lbl_805D774C = (u8 *)&lbl_8058D380.value + (arg0 * 0x28);
}

}
