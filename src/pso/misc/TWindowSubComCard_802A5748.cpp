#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

extern "C" {
s32 is_visible__17TWindowSubComCardFv(s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
u8 * create_yes_no_window(s32, s32, void *, u32);
s32 create_window_menu(s32, s32, s32);
u8 * create_titled_window_menu(s32, s32, s32, s32);
int set_flag_40__16TAdChrSelASlotGCFv(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 get_position_offset__14TChCrTagPlBackFPv(void *, void *);
void open_yes_no_prompt(u8 *arg0, u32 arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

void initialize_option_dialog(void *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 create_window_menu(s32, s32, s32);
int confirm_selection__11TWindowMenuFv(void*);
s32 reparent_to_main_ctrl__17TWindowSubComCardFv(void *);
s32 get_selected_menu_value(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
int clear_trade_flag__19TWindowSubTradeMainFv(void*);
void forward_slot_selection__16TAdChrSelASlotGCFPvPv(void* p, void* a1, void* a2);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 get_status_flag__17TWindowSubComCardFv(s32);
void notify_trade_main__17TWindowSubComCardFv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFv(void* p);
int queue_destruction__7TObjectFv(void*);
void run_task__19TWindowMessageYesNoFv(void* p);
int set_flag70_bit10__16TObjCityMainWarpFv(void*);
int set_flag_40__16TAdChrSelASlotGCFv(void*);
int set_selected_index__17TWindowSubComCardFs(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
void update_card_slot__17TWindowSubComCardFv(void* p);

int TWindowSubComCard::close() { return queue_destruction__7TObjectFv(this); }
void TWindowSubComCard::free_member() { void* m = *(void**)((char*)this + 0x2c); if (m) set_selected_index__17TWindowSubComCardFs(m); }
s32 TWindowSubComCard::get_slot_or_neg1() {
    s32 v = *(u32 *)((s8 *)this + 0x2C);
    if ((u32) v == 0U) {
        return -1;
    }
    return get_selected_menu_value(v);
}
s32 TWindowSubComCard::get_card_data() {
    s32 v = *(u32 *)((s8 *)this + 0x2C);
    if ((u32) v == 0U) {
        return 0;
    }
    return get_status_flag__17TWindowSubComCardFv(v);
}

s32 TWindowSubComCard::is_child_visible() {
    if ((u32) *(u32 *)((s8 *)this + 0x2C) == 0U) {
        return 0;
    }
    return is_visible__17TWindowSubComCardFv(*(s32 *)((s8 *)this + 0x2C));
}

void initialize_option_dialog(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    *(s32 *)((s8 *)arg0 + 0x28) = create_window_menu(arg2, 1, *(s32 *)((s8 *)arg0 + 0x24));
    forward_trade_action_default__16TObjCityMainWarpFPviii(*(s32 *)((s8 *)arg0 + 0x28), arg1, 0x21, 0);
    set_flag_40__16TAdChrSelASlotGCFv((void*)(*(s32 *)((s8 *)arg0 + 0x28)));
    set_status_flag_80__12TQuestThreadFPv(*(s32 *)((s8 *)arg0 + 0x28));
    calc_layout_height__17TWindowSubComCardFPvf(*(s32 *)((s8 *)arg0 + 0x28), farg0);
}
void open_yes_no_prompt(u8 *arg0, u32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    s32 sp8;
    if (arg1 == 0U) {
        *(s32 *)((s8 *)arg0 + 0x28) = create_window_menu(arg3, 1, *(s32 *)((s8 *)arg0 + 0x24));
    } else {
        *(s32 *)((s8 *)arg0 + 0x28) = (long) (create_titled_window_menu(arg3, 1, (s32) arg1, *(s32 *)((s8 *)arg0 + 0x24)));
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)((void *) *(s32 *)((s8 *)arg0 + 0x28)), (s32)(arg2), (s32)(0x21), (s32)(0));
    set_flag_40__16TAdChrSelASlotGCFv((void*)((int) (*(s32 *)((s8 *)arg0 + 0x28))));
    set_status_flag_80__12TQuestThreadFPv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x28))));
    calc_layout_height__17TWindowSubComCardFPvf((s32)((int) (*(s32 *)((s8 *)arg0 + 0x28))), (f32) (farg0));
    get_position_offset__14TChCrTagPlBackFPv((void *) (arg0), (void *) (&sp8));
    *(u8 **)((s8 *)arg0 + 0x2C) = create_yes_no_window((s32) &sp8, *(s32 *)((s8 *)arg0 + 0x24), *(u8 **)((s8 *)arg0 + 0x20), *(u32 *)((s8 *)arg0 + 0x1C));
}

}
