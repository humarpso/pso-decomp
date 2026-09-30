#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Pl_80117F14 { u8 pad0[0x38]; f32 pos[3]; };

extern "C" {
s32 get_field_3e4__10TObjPlayerFPv(Pl_80117F14 *);
u32 test_flag3__9TItemDataFPv(Pl_80117F14 *);
u8 get_slot_count__14TItemProShieldFPv(void *);
f32 TObjPlayer__sub_80141CF8(void *, void *);
Pl_80117F14 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern const f64 lbl_8043E650[];
s32 TObjPlayer__sub_80117F14(u16 idx, u8 *item);
}

extern "C" {

void *construct_timer_event__10TObjPlayerFPv(void *arg0);
void *init_item_timer_event__10TObjPlayerFPv(void *arg0);
void TItemTimerEvent__ct(void *);

extern M2C_UNK lbl_804A0628[];

void *construct_timer_event__10TObjPlayerFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0628;
    return arg0;
}

extern M2C_UNK lbl_804A0648[];

void *init_item_timer_event__10TObjPlayerFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0648;
    return arg0;
}
s32 TObjPlayer__sub_80117F14(u16 idx, u8 *item) {
    s32 key;
    Pl_80117F14 *me;
    s32 count;
    u16 i;
    Pl_80117F14 *other;
    void *it;
    count = 0;
    me = TPlayerBattleCtrl4P__sub_801BA74C(idx);
    if (me != NULL && item != NULL) {
        key = get_field_3e4__10TObjPlayerFPv(me);
        for (i = 0; i != 4; i++) {
            if (i != idx) {
                other = TPlayerBattleCtrl4P__sub_801BA74C(i);
                if (other != NULL && key == get_field_3e4__10TObjPlayerFPv(other) &&
                    TObjPlayer__sub_80141CF8(me->pos, other->pos) < lbl_8043E650[0] &&
                    (it = (void *)test_flag3__9TItemDataFPv(other)) != NULL &&
                    item[2] == get_slot_count__14TItemProShieldFPv(it)) {
                    count++;
                }
            }
        }
    }
    return count;
}

}
