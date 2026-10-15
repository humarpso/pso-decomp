#include "types.h"

extern "C" {

s32 reparent_to_main_ctrl__17TWindowSubComCardFi(void *);
s32 get_selected_menu_value(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 create_window_menu(s32, s32, s32);
int confirm_selection__11TWindowMenuFPv(void*);
int is_child_visible__17TWindowSubComCardFPv(void* a0 = 0);
void run_task__19TWindowMessageYesNoFv(void* p);
int open_yes_no_prompt(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(void* p, void* a1, void* a2);
void update_card_slot__17TWindowSubComCardFPv(void* p);
void notify_trade_main__17TWindowSubComCardFPv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFPv(void* p);
int close__17TWindowSubComCardFPv(void* p);
void free_member__17TWindowSubComCardFPv(void* p);
int set_flag_40__16TAdChrSelASlotGCFPv(void*);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int set_selected_index__17TWindowSubComCardFPvs(void*);
int clear_trade_flag__19TWindowSubTradeMainFPv(void*);
int queue_destruction__7TObjectFv(void*);

void notify_warp_flag70__19TWindowSubShortMailFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) set_flag70_bit10__16TObjCityMainWarpFPv(m); }

}
