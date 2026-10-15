#include "types.h"

extern "C" {

s32 obj_clearFlags30(void *, s32);
s32 update_if_active__15TObjEneMe1GiGueFl(void *, s32);
s32 damage_player_if_aligned__20TBoss3VoloptHiraisinFv(void *);
struct Vec_8022675C;
s32 play_sound_effect(s32 id, Vec_8022675C *src, s32 a2, s32 flags);

void fn_80041E88(u8 *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 1);
        *(s16 *)((s8 *)arg0 + 0x390) = 3;
        *(s16 *)((s8 *)arg0 + 0x38E) = 0;
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 0x10000);
        play_sound_effect(0x4003BC03, (Vec_8022675C *)(arg0 + 0x38), 0, 0);
        damage_player_if_aligned__20TBoss3VoloptHiraisinFv(arg0);
        *(s16 *)((s8 *)arg0 + 0x33E) = (s16) *(s16 *)((s8 *)arg0 + 0x32C);
        *(s16 *)((s8 *)arg0 + 0x33C) = 3;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
        break;
    case 1:
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            obj_clearFlags30(arg0, 0x200200);
            update_if_active__15TObjEneMe1GiGueFl(arg0, 0);
            *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xFFFFFFFE);
        }
        break;
    }
}

}
