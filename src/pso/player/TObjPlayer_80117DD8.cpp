#include "types.h"
#include "pso/player/TObjPlayer.h"

struct Pl_80117F14 { u8 pad0[0x38]; f32 pos[3]; };

extern "C" {
s32 get_field_3e4__10TObjPlayerFv(Pl_80117F14 *);
u32 test_flag3__9TItemDataFv(Pl_80117F14 *);
u8 get_slot_count__14TItemProShieldFv(void *);
f32 horizontal_distance_squared(void *, void *);
Pl_80117F14 *get_player_by_client_id(s32);
extern const f64 lbl_8043E650[];
}

extern "C" {

void TItemTimerEvent__ct(void *);

extern s32 lbl_804A0628[];

void *TObjPlayer::construct_timer_event() {
    TItemTimerEvent__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A0628;
    return this;
}

extern s32 lbl_804A0648[];

void *TObjPlayer::init_item_timer_event() {
    TItemTimerEvent__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A0648;
    return this;
}
s32 TObjPlayer::count_nearby_players_with_shield(u16 idx, u8 *item) {
    s32 key;
    Pl_80117F14 *me;
    s32 count;
    u16 i;
    Pl_80117F14 *other;
    void *it;
    count = 0;
    me = get_player_by_client_id(idx);
    if (me != NULL && item != NULL) {
        key = get_field_3e4__10TObjPlayerFv(me);
        for (i = 0; i != 4; i++) {
            if (i != idx) {
                other = get_player_by_client_id(i);
                if (other != NULL && key == get_field_3e4__10TObjPlayerFv(other) &&
                    horizontal_distance_squared(me->pos, other->pos) < lbl_8043E650[0] &&
                    (it = (void *)test_flag3__9TItemDataFv(other)) != NULL &&
                    item[2] == get_slot_count__14TItemProShieldFv(it)) {
                    count++;
                }
            }
        }
    }
    return count;
}

}
