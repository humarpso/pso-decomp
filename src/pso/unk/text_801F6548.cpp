#include "types.h"
#include "pso/TMCFormatSequence.h"

struct RecoveredGlobal_801F6548_lbl_80512790 {
    s32 value;
    u8 remaining[0x1C];
};

struct MCFmt_801F68FC {
    u8 pad0[0x24];
    s32 f24;
    s32 f28;
    s32 f2C;
    s32 f30;
    u32 f34;
    u32 f38;
};

struct Pair_801F68FC { s32 a; s32 b; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_message_window_ready();
extern s8 controller_input_state[];
void wait_confirm_and_finish__17TMCFormatSequenceFPv(void *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_message_window_ready();
extern s8 controller_input_state[];
void update_wait_confirm__17TMCFormatSequenceFPv(void *arg0);
extern RecoveredGlobal_801F6548_lbl_80512790 offline_quest_filename_buffer_a;
s32 *TQuestThread__sub_801F6548(void);
s32 get_localized_text_entry(s32, s32);
s32 init_shop_judgment_window();
s32 set_text__18TWindowMessagePageFlll(s32, void *, s32);
s32 get_window_layout_position(s32);
extern Pair_801F68FC lbl_8044A684[];
}

extern "C" {

s32 probe_and_check_card__15TAdPlayerLoadGCFv(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFv(s32);
s32 TAdPlayerLoadGC__sub_801E24F8(s32, s32, s32, s32, s32);
s32 get_localized_text_entry(s32, s32);
s32 get_selected_menu_value(u32);
int TWindow__close(void*);
s32 check_memcard_status__15TAdPlayerLoadGCFl(s32);
s32 get_status_flag__17TWindowSubComCardFv(u32);
s32 is_visible__17TWindowSubComCardFv(u32);
s32 send_and_handle__6TLobbyFii(s32, s32, s32);

typedef char RecoveredGlobal_801F6548_lbl_80512790_size[sizeof(RecoveredGlobal_801F6548_lbl_80512790) == 0x20 ? 1 : -1];
s32 *TQuestThread__sub_801F6548(void) {
    return &offline_quest_filename_buffer_a.value;
}

void TMCFormatSequence::close_window() { if (*(unsigned int*)((char*)this + 0x34) != 0) { TWindow__close((void*)(*(void**)((char*)this + 0x34))); *(int*)((char*)this + 0x34) = 0; } }

void TMCFormatSequence::show_message(s32 arg1, s32 arg2) {
    u32 v = *(u32 *)((s8 *)this + 0x34);
    if (v != 0U) {
        send_and_handle__6TLobbyFii(v, arg1, arg2 | 0x81);
    }
}

void wait_confirm_and_finish__17TMCFormatSequenceFPv(void *arg0) {
    s32 (*temp_r12)(void *);
    void *self = arg0;
    arg0 = *(void **)((s8 *)arg0 + 0x34);
    if (arg0 == NULL || ((is_message_window_ready() != 0) && (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0))) {
        temp_r12 = *(s32 (**)(void *))((s8 *)self + 0x20);
        if (temp_r12 != NULL) {
            temp_r12(self);
            queue_destruction__7TObjectFv(self);
        }
    }
}

void update_wait_confirm__17TMCFormatSequenceFPv(void *arg0) {
    s32 (*temp_r12)(void *);
    void *self = arg0;
    arg0 = *(void **)((s8 *)arg0 + 0x34);
    if (arg0 == NULL || ((is_message_window_ready() != 0) && (TWindowShortListCtrl__check_controller_button(controller_input_state + 0x20, 4) != 0))) {
        temp_r12 = *(s32 (**)(void *))((s8 *)self + 0x1C);
        if (temp_r12 != NULL) {
            temp_r12(self);
            queue_destruction__7TObjectFv(self);
        }
    }
}

void TMCFormatSequence::check_memcard_load_result() {
    if (probe_card_slot__15TAdPlayerLoadGCFv(*(s32 *)((s8 *)this + 0x28)) == 0) {
        show_message((s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
        *(s32 *)((s8 *)this + 0x24) = 3;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(*(s32 *)((s8 *)this + 0x28)) == 0) {
        show_message((s32)(get_localized_text_entry(0xB, 0x6B)), (s32)(0));
        *(s32 *)((s8 *)this + 0x24) = 4;
    }
}

void TMCFormatSequence::process_format_result() {
    s32 temp_r3;

    if (probe_card_slot__15TAdPlayerLoadGCFv(*(s32 *)((s8 *)this + 0x28)) == 0) {
        show_message((s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
        *(s32 *)((s8 *)this + 0x24) = 3;
        return;
    }
    if (probe_and_check_card__15TAdPlayerLoadGCFv(*(s32 *)((s8 *)this + 0x28)) == 0) {
        show_message((s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
        *(s32 *)((s8 *)this + 0x24) = 3;
        return;
    }
    if ((u32) (check_memcard_status__15TAdPlayerLoadGCFl(*(s32 *)((s8 *)this + 0x28)) + 0x10000) != 0xFF03U) {
        show_message((s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
        *(s32 *)((s8 *)this + 0x24) = 3;
        return;
    }
    if (((u32) *(u32 *)((s8 *)this + 0x38) != 0U) && (is_visible__17TWindowSubComCardFv(*(u32 *)((s8 *)this + 0x38)) != 0)) {
        temp_r3 = get_selected_menu_value(*(u32 *)((s8 *)this + 0x38));
        if (temp_r3 == 0) {
            if (TAdPlayerLoadGC__sub_801E24F8(*(s32 *)((s8 *)this + 0x28), 0, 0, 0, 0) == 0) {
                *(s32 *)((s8 *)this + 0x24) = 2;
            } else {
                show_message((s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
                *(s32 *)((s8 *)this + 0x24) = 3;
            }
        }
        if (temp_r3 == 1) {
            close_window();
            *(s32 *)((s8 *)this + 0x24) = 4;
        }
        TWindow__close((void*)(*(u32 *)((s8 *)this + 0x38)));
        *(u32 *)((s8 *)this + 0x38) = 0U;
    }
    if (((u32) *(u32 *)((s8 *)this + 0x38) != 0U) && (get_status_flag__17TWindowSubComCardFv(*(u32 *)((s8 *)this + 0x38)) != 0)) {
        *(s32 *)((s8 *)this + 0x24) = 4;
        TWindow__close((void*)(*(u32 *)((s8 *)this + 0x38)));
        *(u32 *)((s8 *)this + 0x38) = 0U;
        close_window();
    }
}
void TMCFormatSequence::open_windows() {
    MCFmt_801F68FC *self = (MCFmt_801F68FC *)this;
    if (self->f34 == 0) {
        Pair_801F68FC t = lbl_8044A684[0];
        self->f34 = set_text__18TWindowMessagePageFlll(get_window_layout_position(0x2F), &t, 1);
        show_message(get_localized_text_entry((s32)(self->f2C), (s32)(self->f30)), 0);
    }
    if (self->f38 == 0) {
        get_window_layout_position(0x2B);
        self->f38 = init_shop_judgment_window();
    }
    self->f24 = 1;
}

}
