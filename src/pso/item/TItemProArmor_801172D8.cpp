#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/item/TItemProArmor.h"

extern "C" {

void *__dt__13TUnk_8049FE00Fv(void *arg0, s16 arg1);
s32 add_actor_tp(u8 *arg0, s32 arg1);
void *__dt__11TItemObjectFv(void *arg0, s16 arg1);
s32 calc_armor_value__13TItemProArmorFv(void *);
s32 calc_scaled_offset__13TItemProArmorFv(void *);
u8 get_slot_count__14TItemProShieldFv();

void TItemProArmor::apply_armor_stat() {
    s32 stat_value;

    stat_value = 0;
    switch ((s32) get_slot_count__14TItemProShieldFv()) {
    case 0:
        stat_value = calc_armor_value__13TItemProArmorFv(this);
        break;
    case 1:
        stat_value = calc_scaled_offset__13TItemProArmorFv(this);
        break;
    case 2:
        stat_value = get_stat_value();
        break;
    }
    add_actor_tp((u8 *)(this->m_f0), stat_value);
}

extern s32 lbl_8049FE00[];

void *__dt__13TUnk_8049FE00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049FE00;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

}
