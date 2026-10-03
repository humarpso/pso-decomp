#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_visible__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(void *arg0);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
u8 * create_yes_no_window(M2C_UNK, s32, void *, u32);
s32 create_window_menu(s32, s32, s32);
u8 * fn_8026652C(M2C_UNK, M2C_UNK, s32, s32);
int set_flag_40__16TAdChrSelASlotGCFPv(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 TWindowSubComCard__sub_80265CFC(s32, f32);
M2C_UNK get_position_offset__14TChCrTagPlBackFPvPv(void *, void *);
void TWindowSubShortMail__sub_802A58AC(u8 *arg0, u32 arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

int close__17TWindowSubComCardFPv(void* p);
void free_member__17TWindowSubComCardFPv(void* p);
s32 get_card_data__17TWindowSubComCardFPv(void *arg0);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *arg0);
void initialize_option_dialog(void *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 create_window_menu(s32, s32, s32);
int confirm_selection__11TWindowMenuFPv(void*);
s32 TWindowSubComCard__sub_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 TWindowSubComCard__sub_80265CFC(s32, f32);
int clear_trade_flag__19TWindowSubTradeMainFPv(void*);
void forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(void* p, void* a1, void* a2);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
void notify_trade_main__17TWindowSubComCardFPv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFPv(void* p);
int queue_destruction__7TObjectFv(void*);
void run_task__19TWindowMessageYesNoFv(void* p);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int set_flag_40__16TAdChrSelASlotGCFPv(void*);
int set_selected_index__17TWindowSubComCardFPvs(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
void update_card_slot__17TWindowSubComCardFPv(void* p);

int close__17TWindowSubComCardFPv(void* p) { return queue_destruction__7TObjectFv(p); }
void free_member__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) set_selected_index__17TWindowSubComCardFPvs(m); }
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *arg0) {
    s32 v = M2C_FIELD(arg0, u32 *, 0x2C);
    if ((u32) v == 0U) {
        return -1;
    }
    return TWindowSubComCard__sub_80265BF8(v);
}
s32 get_card_data__17TWindowSubComCardFPv(void *arg0) {
    s32 v = M2C_FIELD(arg0, u32 *, 0x2C);
    if ((u32) v == 0U) {
        return 0;
    }
    return get_status_flag__17TWindowSubComCardFPv(v);
}

s32 TWindowSubComCard__sub_802A57FC(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        return 0;
    }
    return is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x2C));
}

void initialize_option_dialog(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = create_window_menu(arg2, 1, M2C_FIELD(arg0, s32 *, 0x24));
    forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, s32 *, 0x28), arg1, 0x21, 0);
    set_flag_40__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x28)));
    set_status_flag_80__12TQuestThreadFPv(M2C_FIELD(arg0, s32 *, 0x28));
    TWindowSubComCard__sub_80265CFC(M2C_FIELD(arg0, s32 *, 0x28), farg0);
}
void TWindowSubShortMail__sub_802A58AC(u8 *arg0, u32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    M2C_UNK sp8;
    if (arg1 == 0U) {
        M2C_FIELD(arg0, s32 *, 0x28) = create_window_menu(arg3, 1, M2C_FIELD(arg0, s32 *, 0x24));
    } else {
        M2C_FIELD(arg0, s32 *, 0x28) = (long) (fn_8026652C(arg3, 1, (s32) arg1, M2C_FIELD(arg0, s32 *, 0x24)));
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((void *) M2C_FIELD(arg0, s32 *, 0x28)), (s32)(arg2), (s32)(0x21), (s32)(0));
    set_flag_40__16TAdChrSelASlotGCFPv((void*)((int) (M2C_FIELD(arg0, s32 *, 0x28))));
    set_status_flag_80__12TQuestThreadFPv((s32)((int) (M2C_FIELD(arg0, s32 *, 0x28))));
    TWindowSubComCard__sub_80265CFC((s32)((int) (M2C_FIELD(arg0, s32 *, 0x28))), (f32) (farg0));
    get_position_offset__14TChCrTagPlBackFPvPv((void *) (arg0), (void *) (&sp8));
    M2C_FIELD(arg0, u8 **, 0x2C) = create_yes_no_window((s32) &sp8, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, u8 **, 0x20), M2C_FIELD(arg0, u32 *, 0x1C));
}

}
