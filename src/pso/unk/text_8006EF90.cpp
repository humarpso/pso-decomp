#include "pso/item/ChallengeStageLoadouts.h"

#include "types.h"

extern "C" {
u8 *get_stage_table_entry__6TLobbyFii(s32 arg0, s32 arg1);
s32 is_flag_set__6TLobbyFv(void);
extern s32 challenge_mode_state[];
s32 get_online_result_value__6TLobbyFv(void);
}

extern "C" {

int TLobby__sub_8006EF90(void);

int TLobby__sub_8006EF90(void) { return 1; }
u8 *get_stage_table_entry__6TLobbyFii(s32 arg0, s32 arg1) {
    switch (arg0) {
    case 0:
        return (u8 *)hunter_stage_start_parameters + (arg1 * 0x10);
    case 1:
        return (u8 *)ranger_stage_start_parameters + (arg1 * 0x10);
    case 2:
        return (u8 *)force_stage_start_parameters + (arg1 * 0x10);
    default:
        return (u8 *)hunter_stage_start_parameters + (arg1 * 0x10);
    }
}
s32 get_online_result_value__6TLobbyFv(void) {
    s32 f = is_flag_set__6TLobbyFv();
    s32 r = -1;
    if (f) {
        r = challenge_mode_state[0];
    }
    return r;
}

}
