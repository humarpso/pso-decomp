#include "types.h"
#include "pso/enemy/TObjEneRe7BeruraPunch.h"
#include "pso/enemy/TObjEneDD.h"

extern "C" {

void TObjEneRe7BeruraPunch__vt20(void *arg0, s32 arg1);
s32 TObjEneDD__sub_800BA438(s32, s32);
s32 is_player_entity_id();
s32 find_entity_by_id(u16);
s32 apply_hit_if_active__13TUnk_804928CCFPvPf();
f32 calc_boss4_scale__10TObjPlayerFi();
s32 obj_getField1c(s32);

int TObjEneRe7BeruraPunch::is_patrol_active() { return (*(u32 *)&this->m_b0 >> 2) & 0x1; }

extern f32 lbl_805D9790;

void TObjEneRe7BeruraPunch__vt20(void *arg0, s32 target) {
    s32 entity;

    apply_hit_if_active__13TUnk_804928CCFPvPf();
    if (TObjEneDD::check_v2_mode() != 0) {
        obj_getField1c(target);
        if (is_player_entity_id() != 0) {
            entity = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0xB0));
            if ((entity != 0) && (calc_boss4_scale__10TObjPlayerFi() < lbl_805D9790)) {
                TObjEneDD__sub_800BA438(entity, target);
            }
        }
    }
}

}
