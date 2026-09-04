#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowSubComCard__sub_802A57FC(void*);
int TWindowSubShortMail__sub_802A58AC(void*, void*, void*, void*);
int close__17TWindowSubComCardFPv(void* p);
void free_member__17TWindowSubComCardFPv(void* p);
s32 get_card_data__17TWindowSubComCardFPv(void *arg0);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *arg0);
void initialize_option_dialog(void *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 TCheckRoomSequence__sub_802664A8(s32, s32, s32);
int TWindowMenu__sub_802657E4(void*);
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

int TWindowSubComCard__sub_802A57FC(void*) { return 0; }
void initialize_option_dialog(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = TCheckRoomSequence__sub_802664A8(arg2, 1, M2C_FIELD(arg0, s32 *, 0x24));
    forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, s32 *, 0x28), arg1, 0x21, 0);
    set_flag_40__16TAdChrSelASlotGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x28)));
    set_status_flag_80__12TQuestThreadFPv(M2C_FIELD(arg0, s32 *, 0x28));
    TWindowSubComCard__sub_80265CFC(M2C_FIELD(arg0, s32 *, 0x28), farg0);
}
int TWindowSubShortMail__sub_802A58AC(void*, void*, void*, void*) { return 0; }

}
