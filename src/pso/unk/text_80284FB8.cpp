#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80285054_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
s32 play_sound_effect(s32, u32, s16, s32);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
extern RecoveredGlobal_80285054_lbl_8050E208 lbl_8050E208;
void fn_80285054(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80285054_lbl_8050E208_size[sizeof(RecoveredGlobal_80285054_lbl_8050E208) == 0x1B0 ? 1 : -1];
void fn_80285054(u8 *arg0) {
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 temp_r4;
    u8 temp_r5;
    u8 *temp_r31;
    temp_r31 = (u8 *)&lbl_8050E208.value + 0x20;
    if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31), (int) (0xF0), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0xF0), (int) (6), (int) (1)) != 0)) {
        play_sound_effect(0x54100, 0U, 0, 0);
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31), (int) (0x80), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x80), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x72) = (u8) (M2C_FIELD(arg0, u8 *, 0x72) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31), (int) (0x40), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x40), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x72) = (u8) (M2C_FIELD(arg0, u8 *, 0x72) - 1);
        }
        temp_r3 = M2C_FIELD(arg0, u8 *, 0x72);
        if ((s8) temp_r3 < 0) {
            M2C_FIELD(arg0, u8 *, 0x72) = (u8) (temp_r3 + 4);
        }
        temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x72);
        if ((s8) temp_r3_2 >= 4) {
            M2C_FIELD(arg0, u8 *, 0x72) = (u8) (temp_r3_2 - 4);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x73) = (u8) (M2C_FIELD(arg0, u8 *, 0x73) - 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&lbl_8050E208.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x73) = (u8) (M2C_FIELD(arg0, u8 *, 0x73) + 1);
        }
        temp_r3_3 = M2C_FIELD(arg0, u8 *, 0x73);
        if ((s8) temp_r3_3 < 0) {
            M2C_FIELD(arg0, u8 *, 0x73) = (u8) (temp_r3_3 + M2C_FIELD(arg0, u8 *, 0x74));
        }
        temp_r4 = M2C_FIELD(arg0, u8 *, 0x73);
        temp_r5 = M2C_FIELD(arg0, u8 *, 0x74);
        if ((s8) temp_r4 >= (s8) temp_r5) {
            M2C_FIELD(arg0, u8 *, 0x73) = (u8) (temp_r4 - temp_r5);
        }
    }
}

}
