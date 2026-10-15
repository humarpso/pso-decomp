#include "types.h"

extern "C" {

void update_position__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 save_position__14TBoss4DarkFalzFi(void *);
s32 set_position_from__14TBoss4DarkFalzFPvPv(void *, s32);
s32 calc_attach_pos__10TObjPlayerFPv(void *);
s32 set_position_history_entry__10TObjPlayerFiiff(void *, s32, f32, f32);

void update_position__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    set_position_from__14TBoss4DarkFalzFPvPv(arg0, arg1 + 8);
    save_position__14TBoss4DarkFalzFi(arg0);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    set_position_history_entry__10TObjPlayerFiiff(arg0, 0, *(f32 *)((s8 *)arg0 + 0x38), *(f32 *)((s8 *)arg0 + 0x40));
}

}
