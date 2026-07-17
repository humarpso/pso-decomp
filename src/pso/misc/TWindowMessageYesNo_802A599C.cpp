#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 set_status_flag_80__12TQuestThreadFPv(s32);
s32 TWindowSubComCard__sub_80265CFC(s32, f32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 TCheckRoomSequence__sub_802664A8(s32, s32, s32);
int TWindowMenu__sub_802657E4(void*);
int TWindowSubComCard__sub_802A57FC(void* a0 = 0);
void run_task__19TWindowMessageYesNoFv(void* p);
int TWindowSubShortMail__sub_802A58AC(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
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

void run_task__19TWindowMessageYesNoFv(void* p) { if (TWindowSubComCard__sub_802A57FC(p) != 0) { TWindowMenu__sub_802657E4(*(void**)((char*)p + 0x28)); } }

}
