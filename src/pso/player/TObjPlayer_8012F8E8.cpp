#include "types.h"

extern "C" {

void cast_gizonde_chain__10TObjPlayerFPv(u8 *arg0);
s32 roll_technique__11TItemWeaponFv(void *);
u8 *get_captured_target_entry(s32, s32);
s32 get_captured_target_count();
s32 get_tp__10TObjPlayerFv(void *);
s32 create__11TTecGiZondeFPvPvPv(int, void *, void *, void *);
s32 draw_icon__10TObjPlayerFll(void *, int, void *);
s32 get_extended_state__10TObjPlayerFv(int);
s32 is_mode_two_and_ready__10TObjPlayerFv();
s32 update_active_game_effect__10TObjPlayerFv(void *);

void cast_gizonde_chain__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    u8 *var_r30;
    s32 var_r29;
    u8 *temp_r3_2;

    if (is_mode_two_and_ready__10TObjPlayerFv() != 0) {
        draw_icon__10TObjPlayerFll((void *) (arg0), (int) (0), (void *) (arg0 + 0x1F8));
        temp_r3 = get_extended_state__10TObjPlayerFv((int) (*(s32 *)((s8 *)arg0 + 0xF0)));
        if (temp_r3 != 0) {
            *(s32 *)((s8 *)arg0 + 0x204) = get_captured_target_count();
            var_r30 = arg0 + 0x208;
            var_r29 = 0;
            do {
                temp_r3_2 = get_captured_target_entry(temp_r3, var_r29);
                if (temp_r3_2 != NULL) {
                    *(u16 *)((s8 *)var_r30 + 0) = (u16) *(u16 *)((s8 *)temp_r3_2 + 0);
                    *(s16 *)((s8 *)var_r30 + 2) = (s16) *(s16 *)((s8 *)temp_r3_2 + 2);
                    var_r30 += 8;
                }
                var_r29 += 1;
            } while (var_r29 != 0xA);
            if ((s32) *(s32 *)((s8 *)arg0 + 0x204) != 0) {
                create__11TTecGiZondeFPvPvPv((int) (*(s32 *)((s8 *)arg0 + 0xF0)), (void *) (arg0 + 0x1F8), (void *) (arg0 + 0x204), (void *) (get_tp__10TObjPlayerFv((void *) (arg0))));
            }
            roll_technique__11TItemWeaponFv((void *) (arg0));
        }
    } else {
        update_active_game_effect__10TObjPlayerFv((void *) (arg0));
    }
}

}
