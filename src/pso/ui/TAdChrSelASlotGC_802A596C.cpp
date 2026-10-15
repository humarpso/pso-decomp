#include "types.h"
#include "pso/ui/TAdChrSelASlotGC.h"

extern "C" {

s32 reparent_to_main_ctrl__17TWindowSubComCardFv(void *);
s32 get_selected_menu_value(s32);
s32 get_status_flag__17TWindowSubComCardFv(s32);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 create_window_menu(s32, s32, s32);
int confirm_selection__11TWindowMenuFv(void*);
int is_child_visible__17TWindowSubComCardFv(void* a0 = 0);
void run_task__19TWindowMessageYesNoFv(void* p);
int open_yes_no_prompt(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
void update_card_slot__17TWindowSubComCardFv(void* p);
void notify_trade_main__17TWindowSubComCardFv(void* p);
void notify_warp_flag70__19TWindowSubShortMailFv(void* p);
int close__17TWindowSubComCardFv(void* p);
void free_member__17TWindowSubComCardFv(void* p);
int set_flag_40__16TAdChrSelASlotGCFv(void*);
int set_flag70_bit10__16TObjCityMainWarpFv(void*);
int set_selected_index__17TWindowSubComCardFs(void*);
int clear_trade_flag__19TWindowSubTradeMainFv(void*);
int queue_destruction__7TObjectFv(void*);

void TAdChrSelASlotGC::forward_slot_selection(void* a1, void* a2) { open_yes_no_prompt(this, (void*)0, a1, a2); }

}
