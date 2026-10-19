#include "types.h"
#include "pso/item/TItemProArmor.h"
#include "pso/player/TObjPlayer_8012D4C0.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 get_id__13TItemProArmorFv(void *);
u16 sub_80100474__5TItemFv(void *);
s32 sub_8010047C__13TUnk_804A5930Fs(void *, u16);
s32 slow_curse_timer_ct(s32, u32, s32, s32, f32);
s32 __nw__15TItemHeapObjectFUl(s32);

void TObjPlayer::update_weapon_kill_count() {
    if ((s16) *(s16 *)&this->unk_1F8 < ((TObjPlayer *)(*(s32 *)&this->unk_F0))->get_kill_count()) {
        sub_8010047C__13TUnk_804A5930Fs(this, (u16) (sub_80100474__5TItemFv(this) + 1));
        *(s16 *)&this->unk_1F8 = ((TObjPlayer *)(*(s32 *)&this->unk_F0))->get_kill_count();
    }
    if ((sub_80100474__5TItemFv(this) >= 0x59D8U) && (test_item_flags(0x200) == 0U)) {
        add_item_flags(0x200);
    }
}
}

extern f32 lbl_805DAF20;

void sealed_j_sword_start_timers(void *item_pro_armor) {
    s32 temp_r3;

    if ((u32) ((TItemProArmor *)item_pro_armor)->m_174 != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x30);
        if (temp_r3 != 0) {
            slow_curse_timer_ct(temp_r3, ((TItemProArmor *)item_pro_armor)->m_174, get_id__13TItemProArmorFv(item_pro_armor), 0xE10, lbl_805DAF20);
        }
    }
    *(s16 *)((s8 *)item_pro_armor + 0x1F8) = ((TObjPlayer *)(((TItemProArmor *)item_pro_armor)->m_f0))->get_kill_count();
}
