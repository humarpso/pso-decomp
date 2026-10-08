#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
M2C_UNK damage_player_if_aligned__20TBoss3VoloptHiraisinFPv(void *);
struct Vec_8022675C;
s32 play_sound_effect(s32 id, Vec_8022675C *src, s32 a2, s32 flags);

void fn_80041E88(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
        M2C_FIELD(arg0, s16 *, 0x390) = 3;
        M2C_FIELD(arg0, s16 *, 0x38E) = 0;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x10000);
        play_sound_effect(0x4003BC03, (Vec_8022675C *)(arg0 + 0x38), 0, 0);
        damage_player_if_aligned__20TBoss3VoloptHiraisinFPv(arg0);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s16 *, 0x33C) = 3;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        break;
    case 1:
        if (--M2C_FIELD(arg0, s16 *, 0x33C) <= 0) {
            obj_clearFlags30(arg0, 0x200200);
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        }
        break;
    }
}

}
