#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801F6548_lbl_80512790 {
    M2C_UNK value;
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
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 TMCFormatSequence__sub_802693B4();
extern s8 lbl_8050E208[];
void TMCFormatSequence__sub_801F65C4(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 TMCFormatSequence__sub_802693B4();
extern s8 lbl_8050E208[];
void TMCFormatSequence__sub_801F6640(void *arg0);
extern RecoveredGlobal_801F6548_lbl_80512790 lbl_80512790;
M2C_UNK *TQuestThread__sub_801F6548(void);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
void show_message__17TMCFormatSequenceFPvii(void *arg0, s32 arg1, s32 arg2);
s32 init_shop_judgment_window();
s32 set_text__18TWindowMessagePageFiii(s32, void *, s32);
s32 get_window_layout_position(s32);
extern Pair_801F68FC lbl_8044A684[];
void TMCFormatSequence__sub_801F68FC(MCFmt_801F68FC *self);
}

extern "C" {

void check_memcard_load_result__17TMCFormatSequenceFPv(void *arg0);
void close_window__17TMCFormatSequenceFPv(void* p);
void process_format_result__17TMCFormatSequenceFPv(void *arg0);
void show_message__17TMCFormatSequenceFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TAdPlayerLoadGC__sub_801E0D8C(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
s32 TAdPlayerLoadGC__sub_801E24F8(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
s32 get_selected_menu_value(u32);
int TWindow__close(void*);
s32 check_memcard_status__15TAdPlayerLoadGCFi(s32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 is_visible__17TWindowSubComCardFPv(u32);
M2C_UNK send_and_handle__6TLobbyFPvii(s32, s32, s32);

typedef char RecoveredGlobal_801F6548_lbl_80512790_size[sizeof(RecoveredGlobal_801F6548_lbl_80512790) == 0x20 ? 1 : -1];
M2C_UNK *TQuestThread__sub_801F6548(void) {
    return &lbl_80512790.value;
}

void close_window__17TMCFormatSequenceFPv(void* p) { if (*(unsigned int*)((char*)p + 0x34) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x34))); *(int*)((char*)p + 0x34) = 0; } }

void show_message__17TMCFormatSequenceFPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 v = M2C_FIELD(arg0, u32 *, 0x34);
    if (v != 0U) {
        send_and_handle__6TLobbyFPvii(v, arg1, arg2 | 0x81);
    }
}

void TMCFormatSequence__sub_801F65C4(void *arg0) {
    M2C_UNK (*temp_r12)(void *);
    void *self = arg0;
    arg0 = M2C_FIELD(arg0, void **, 0x34);
    if (arg0 == NULL || ((TMCFormatSequence__sub_802693B4() != 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0))) {
        temp_r12 = M2C_FIELD(self, M2C_UNK (**)(void *), 0x20);
        if (temp_r12 != NULL) {
            temp_r12(self);
            queue_destruction__7TObjectFv(self);
        }
    }
}

void TMCFormatSequence__sub_801F6640(void *arg0) {
    M2C_UNK (*temp_r12)(void *);
    void *self = arg0;
    arg0 = M2C_FIELD(arg0, void **, 0x34);
    if (arg0 == NULL || ((TMCFormatSequence__sub_802693B4() != 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0))) {
        temp_r12 = M2C_FIELD(self, M2C_UNK (**)(void *), 0x1C);
        if (temp_r12 != NULL) {
            temp_r12(self);
            queue_destruction__7TObjectFv(self);
        }
    }
}

void check_memcard_load_result__17TMCFormatSequenceFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1E38(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(get_localized_text_entry(0xB, 0x6B)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 4;
    }
}

void process_format_result__17TMCFormatSequenceFPv(void *arg0) {
    s32 temp_r3;

    if (TAdPlayerLoadGC__sub_801E1E38(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if ((u32) (check_memcard_status__15TAdPlayerLoadGCFi(M2C_FIELD(arg0, s32 *, 0x28)) + 0x10000) != 0xFF03U) {
        show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0)) {
        temp_r3 = get_selected_menu_value(M2C_FIELD(arg0, u32 *, 0x38));
        if (temp_r3 == 0) {
            if (TAdPlayerLoadGC__sub_801E24F8(M2C_FIELD(arg0, s32 *, 0x28), 0, 0, 0, 0) == 0) {
                M2C_FIELD(arg0, s32 *, 0x24) = 2;
            } else {
                show_message__17TMCFormatSequenceFPvii((void *)(arg0), (s32)(get_localized_text_entry(0xB, 0x6C)), (s32)(0));
                M2C_FIELD(arg0, s32 *, 0x24) = 3;
            }
        }
        if (temp_r3 == 1) {
            close_window__17TMCFormatSequenceFPv((void*)(arg0));
            M2C_FIELD(arg0, s32 *, 0x24) = 4;
        }
        TWindow__close((void*)(M2C_FIELD(arg0, u32 *, 0x38)));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) && (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x38)) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 4;
        TWindow__close((void*)(M2C_FIELD(arg0, u32 *, 0x38)));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        close_window__17TMCFormatSequenceFPv((void*)(arg0));
    }
}
void TMCFormatSequence__sub_801F68FC(MCFmt_801F68FC *self) {
    if (self->f34 == 0) {
        Pair_801F68FC t = lbl_8044A684[0];
        self->f34 = set_text__18TWindowMessagePageFiii(get_window_layout_position(0x2F), &t, 1);
        show_message__17TMCFormatSequenceFPvii(self, get_localized_text_entry((M2C_UNK)(self->f2C), (M2C_UNK)(self->f30)), 0);
    }
    if (self->f38 == 0) {
        get_window_layout_position(0x2B);
        self->f38 = init_shop_judgment_window();
    }
    self->f24 = 1;
}

}
