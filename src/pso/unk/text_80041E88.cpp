#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/boss/TBoss3VoloptHiraisin.h"
#include "pso/enemy/TObjEneMe1GiGue.h"

extern "C" {

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
        ((TBoss3VoloptHiraisin *)arg0)->damage_player_if_aligned();
        *(s16 *)((s8 *)arg0 + 0x33E) = (s16) *(s16 *)((s8 *)arg0 + 0x32C);
        *(s16 *)((s8 *)arg0 + 0x33C) = 3;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
        break;
    case 1:
        if (--*(s16 *)((s8 *)arg0 + 0x33C) <= 0) {
            ((TUnk_804B9870 *)arg0)->obj_clearFlags30(0x200200);
            ((TObjEneMe1GiGue *)arg0)->update_if_active(0);
            *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xFFFFFFFE);
        }
        break;
    }
}

}
