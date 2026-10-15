#include "types.h"

struct Pl_80117F14 { u8 pad0[0x38]; f32 pos[3]; };

extern "C" {
s32 get_field_3e4__10TObjPlayerFPv(Pl_80117F14 *);
u32 test_flag3__9TItemDataFPv(Pl_80117F14 *);
u8 get_slot_count__14TItemProShieldFPv(void *);
f32 horizontal_distance_squared(void *, void *);
Pl_80117F14 *get_player_by_client_id(s32);
extern const f64 lbl_8043E650[];
s32 count_nearby_players_with_shield__10TObjPlayerFUsPv(u16 idx, u8 *item);
}

extern "C" {

void *construct_timer_event__10TObjPlayerFPv(void *arg0);
void *init_item_timer_event__10TObjPlayerFPv(void *arg0);
void TItemTimerEvent__ct(void *);

extern s32 lbl_804A0628[];

void *construct_timer_event__10TObjPlayerFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0628;
    return arg0;
}

extern s32 lbl_804A0648[];

void *init_item_timer_event__10TObjPlayerFPv(void *arg0) {
    TItemTimerEvent__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A0648;
    return arg0;
}
s32 count_nearby_players_with_shield__10TObjPlayerFUsPv(u16 idx, u8 *item) {
    s32 key;
    Pl_80117F14 *me;
    s32 count;
    u16 i;
    Pl_80117F14 *other;
    void *it;
    count = 0;
    me = get_player_by_client_id(idx);
    if (me != NULL && item != NULL) {
        key = get_field_3e4__10TObjPlayerFPv(me);
        for (i = 0; i != 4; i++) {
            if (i != idx) {
                other = get_player_by_client_id(i);
                if (other != NULL && key == get_field_3e4__10TObjPlayerFPv(other) &&
                    horizontal_distance_squared(me->pos, other->pos) < lbl_8043E650[0] &&
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
