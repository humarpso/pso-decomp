#include "types.h"
#include "pso/enemy/TObjEneRe7BeruraPunch.h"
#include "pso/enemy/TObjEneDD.h"

extern "C" {

void TObjEneRe7BeruraPunch__vt20(void *arg0, s32 arg1);
s32 TObjEneDD__sub_800BA438(s32, s32);
s32 is_player_entity_id();
s32 find_entity_by_id(u16);
s32 apply_hit_if_active__10TObjPlayerFPvPf();
f32 calc_boss4_scale__10TObjPlayerFi();
s32 obj_getField1c(s32);

int TObjEneRe7BeruraPunch::is_patrol_active() { return (*(u32 *)&this->m_b0 >> 2) & 0x1; }

extern f32 lbl_805D9790;

void TObjEneRe7BeruraPunch__vt20(void *arg0, s32 arg1) {
    s32 temp_r3;

    apply_hit_if_active__10TObjPlayerFPvPf();
    if (TObjEneDD::check_v2_mode() != 0) {
        obj_getField1c(arg1);
        if (is_player_entity_id() != 0) {
            temp_r3 = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0xB0));
            if ((temp_r3 != 0) && (calc_boss4_scale__10TObjPlayerFi() < lbl_805D9790)) {
                TObjEneDD__sub_800BA438(temp_r3, arg1);
            }
        }
    }
}

}
