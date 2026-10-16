#include "types.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowMessageYesNo.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/ui/TAdChrSelASlotGC.h"

extern "C" {

s32 get_selected_menu_value(s32);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 create_window_menu(s32, s32, s32);
int open_yes_no_prompt(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
int queue_destruction__7TObjectFv(void*);

void TWindowSubShortMail::notify_warp_flag70() { void* m = *(void**)((char*)this + 0x2c); if (m) ((TObjCityMainWarp *)m)->set_flag70_bit10(); }

}
