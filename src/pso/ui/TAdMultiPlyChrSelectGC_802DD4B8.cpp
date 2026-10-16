#include "types.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {

s32 clear_entries__18TAdChrMoveEffectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
s32 clear_slot_entry__23TAdSinglePlyChrSelectGCFi();
s32 play_sound_effect(s32, s32, s32, s32);
s32 queue_destruction__7TObjectFv(void *);

void TAdMultiPlyChrSelectGC::update_state() {
    if ((u32) *(u32 *)((s8 *)this + 0x88) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x88));
        *(u32 *)((s8 *)this + 0x88) = 0U;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x6C)))->get_mode() <= 1) {
        if (((TAdMultiPlyChrSelectGC *)(*(u32 *)((s8 *)this + 0x68)))->get_player_index() == 1) {
            TAdMultiPlyChrSelectGC::reset_slot_selections();
        }
        ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x5C)))->set_state_ready();
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x68));
            *(u32 *)((s8 *)this + 0x68) = 0U;
        }
        *(s32 *)((s8 *)this + 0x20) = 0xB;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x6C)))->get_mode() == 0x19) {
        ((TAdMultiPlyChrSelectGC *)(*(u32 *)((s8 *)this + 0x68)))->set_cursor_index(0xF);
        *(s32 *)((s8 *)this + 0x20) = 0x13;
        return;
    }
    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x6C)))->get_mode() == 0x18) {
        if ((u32) *(u32 *)((s8 *)this + 0x80) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x80));
            *(u32 *)((s8 *)this + 0x80) = 0U;
        }
        if (TAdMultiPlyChrSelectGC::get_global_state() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFv();
        }
        *(s32 *)((s8 *)this + 0x20) = 0x12;
    }
}

void TAdMultiPlyChrSelectGC::update_card_select_state() {
    s32 temp_r3;

    if (((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x6C)))->get_mode() <= 1) {
        ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x5C)))->set_state_ready();
        play_sound_effect(0x52F16, 0, 0, 0);
        if (((TAdMultiPlyChrSelectGC *)(*(u32 *)((s8 *)this + 0x68)))->get_player_index() == 1) {
            TAdMultiPlyChrSelectGC::reset_slot_selections();
            if ((u32) *(u32 *)((s8 *)this + 0x68) != 0U) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)this + 0x68));
                *(u32 *)((s8 *)this + 0x68) = 0U;
            }
            *(s32 *)((s8 *)this + 0x20) = 0xB;
            return;
        }
        *(s32 *)((s8 *)this + 0x20) = 0xC;
        return;
    }
    TAdMultiPlyChrSelectGC::get_card_instance();
    TAdMultiPlyChrSelectGC::get_instance();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x5C)))->set_state_ready();
        *(s32 *)((s8 *)this + 0x20) = 0xE;
        return;
    }
    if (((TWindowSubComCard *)(*(s32 *)((s8 *)this + 0x8C)))->get_card_data() != 0) {
        ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x5C)))->set_state_ready();
        *(s32 *)((s8 *)this + 0x20) = 0xE;
        return;
    }
    if (((TWindowSubComCard *)(*(s32 *)((s8 *)this + 0x8C)))->is_child_visible() != 0) {
        temp_r3 = ((TWindowSubComCard *)(*(s32 *)((s8 *)this + 0x8C)))->get_slot_or_neg1();
        switch (temp_r3) {
        case 1:
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x5C)))->set_state_ready();
            *(s32 *)((s8 *)this + 0x20) = 0xE;
            return;
        case 0:
            TAdMultiPlyChrSelectGC__sub_802DFFE8(*(s32 *)((s8 *)this + 0x5C));
            clear_slot_entry__23TAdSinglePlyChrSelectGCFi();
            ((TAdMultiPlyChrSelectGC *)(*(s32 *)((s8 *)this + 0x6C)))->set_field_1c(0x16);
            *(s32 *)((s8 *)this + 0x20) = 0x14;
            break;
        }
    }
}

}
