#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_break_state__22TOWreckAncientBrakableFPv(u8 *arg0);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
u8 is_current_floor_switch_set(u16);
M2C_UNK spawn_particle_effect(void *, M2C_UNK);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TOWreckAncientBrakable__sub_8017D444(void *);
M2C_UNK spawn_debris__22TOWreckAncientBrakableFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);

void update_break_state__22TOWreckAncientBrakableFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TOWreckAncientBrakable__sub_8017D444(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    case 0:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xB8);
        if ((temp_r0_2 >= 0) && (temp_r0_2 < 0x100) && (is_current_floor_switch_set((u16) temp_r0_2) == 1)) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 1;
            play_sound_effect(0x43C11, arg0 + 0x38, 0, 0);
            spawn_particle_effect(arg0 + 0x38, 0x45);
            spawn_particle_effect(arg0 + 0x38, 0x46);
            spawn_debris__22TOWreckAncientBrakableFPv(arg0);
        }
        return;
    case 1:
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
