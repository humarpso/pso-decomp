#include "types.h"

extern "C" {
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv();
f32 xz_distance_squared(void *, void *);
s32 get_player_by_client_id(int);
s32 advance_matching_entries__22THunterGuildSeqOfflineFPvii(int, int, int);
void update_players_in_range(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void update_players_in_range(u8 *arg0) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r28;
    *(s32 *)((s8 *)arg0 + 0x14) = 1;
    *(s32 *)((s8 *)arg0 + 0x18) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U) {
        var_r28 = 0;
        do {
            temp_r3 = get_player_by_client_id((int) (var_r28));
            if (temp_r3 != 0) {
                if ((get_current_floor() == get_field_3e4__10TObjPlayerFPv()) && (xz_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 8)) <= *(f32 *)((s8 *)arg0 + 0))) {
                    advance_matching_entries__22THunterGuildSeqOfflineFPvii((int) (*(u32 *)((s8 *)arg0 + 0x24)), (int) (1), (int) (var_r28));
                    *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) | (1 << var_r28));
                    *(s32 *)((s8 *)arg0 + 0x18) = 1;
                } else {
                    advance_matching_entries__22THunterGuildSeqOfflineFPvii((int) (*(u32 *)((s8 *)arg0 + 0x24)), (int) (0), (int) (var_r28));
                    *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) & ~(1 << var_r28));
                    *(s32 *)((s8 *)arg0 + 0x14) = 0;
                }
            } else {
                advance_matching_entries__22THunterGuildSeqOfflineFPvii((int) (*(u32 *)((s8 *)arg0 + 0x24)), (int) (0), (int) (var_r28));
            }
            var_r28 += 1;
        } while (var_r28 < 4);
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x14) == 0) {
        *(s32 *)((s8 *)arg0 + 0x1C) = (s32) *(s32 *)((s8 *)arg0 + 0x20);
    }
}
#pragma pop

}
