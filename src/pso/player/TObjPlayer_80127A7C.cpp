#include "types.h"

extern "C" {

void create_foie_effect__10TObjPlayerFPv(void *arg0);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, s32 *);
s32 create__8TTecFoieFPvPvPvPv(void *, s32 *, s32, s32);

void create_foie_effect__10TObjPlayerFPv(void *arg0) {
    s32 sp8;
    void *temp_r3;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 1, &sp8) != 0) {
            temp_r3 = *(void **)((s8 *)arg0 + 0xF0);
            create__8TTecFoieFPvPvPvPv(temp_r3, &sp8, *(s32 *)((s8 *)temp_r3 + 0x60), 5);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

}
