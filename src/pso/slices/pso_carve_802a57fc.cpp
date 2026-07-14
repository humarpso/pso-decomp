#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244888(void *);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 TWindowSubComCard__sub_80073DB8(s32);
s32 TQuestThread__sub_801F64BC(s32);
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
int TAdChrSelASlotGC__sub_800740FC(void*);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int TWindowSubComCard__sub_80265C10(void*);
int TWindowSubTradeMain__sub_80287560(void*);
int queue_destruction__7TObjectFv(void*);

int TWindowSubComCard__sub_802A57FC(void*) { return 0; }
void initialize_option_dialog(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = TCheckRoomSequence__sub_802664A8(arg2, 1, M2C_FIELD(arg0, s32 *, 0x24));
    forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, s32 *, 0x28), arg1, 0x21, 0);
    TAdChrSelASlotGC__sub_800740FC((void*)(M2C_FIELD(arg0, s32 *, 0x28)));
    TQuestThread__sub_801F64BC(M2C_FIELD(arg0, s32 *, 0x28));
    TWindowSubComCard__sub_80265CFC(M2C_FIELD(arg0, s32 *, 0x28), farg0);
}
int TWindowSubShortMail__sub_802A58AC(void*, void*, void*, void*) { return 0; }

}
