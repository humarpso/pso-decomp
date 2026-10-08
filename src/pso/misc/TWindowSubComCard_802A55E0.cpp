#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct P_802A5628 { u8 pad[0x30]; f32 x; f32 y; };

struct O_802A5628 { u8 pad[0x28]; P_802A5628 *a; P_802A5628 *b; };

struct V_802A5628 { f32 x, y; };

extern "C" {
void TWindowSubTradeMain__sub_802448E4(void *, void *);
void get_position_offset__14TChCrTagPlBackFPvPv(void *, void *);
void TWindowSubComCard__sub_802A5628(O_802A5628 *arg0, V_802A5628 *arg1);
}

extern "C" {

void free_windows__17TWindowSubComCardFPv(void *arg0);
void notify_trade_main__17TWindowSubComCardFPv(void* p);
void update_card_slot__17TWindowSubComCardFPv(void* p);
s32 create_window_menu(s32, s32, s32);
int confirm_selection__11TWindowMenuFPv(void*);
s32 reparent_to_main_ctrl__17TWindowSubComCardFi(void *);
s32 get_selected_menu_value(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
int is_child_visible__17TWindowSubComCardFPv(void* a0 = 0);
int open_yes_no_prompt(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
int clear_trade_flag__19TWindowSubTradeMainFPv(void*);
int close__17TWindowSubComCardFPv(void* p);
void forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(void* p, void* a1, void* a2);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
void free_member__17TWindowSubComCardFPv(void* p);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
void notify_warp_flag70__19TWindowSubShortMailFPv(void* p);
int queue_destruction__7TObjectFv(void*);
void run_task__19TWindowMessageYesNoFv(void* p);
int set_flag70_bit10__16TObjCityMainWarpFPv(void*);
int set_flag_40__16TAdChrSelASlotGCFPv(void*);
int set_selected_index__17TWindowSubComCardFPvs(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);

void free_windows__17TWindowSubComCardFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        reparent_to_main_ctrl__17TWindowSubComCardFi(M2C_FIELD(arg0, void **, 0x28));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        reparent_to_main_ctrl__17TWindowSubComCardFi(M2C_FIELD(arg0, void **, 0x2C));
    }
}

void TWindowSubComCard__sub_802A5628(O_802A5628 *arg0, V_802A5628 *arg1) {
    V_802A5628 v;
    P_802A5628 *p = arg0->a;
    if (p != NULL && (p->x != arg1->x || p->y != arg1->y)) {
        TWindowSubTradeMain__sub_802448E4(p, arg1);
    }
    if (arg0->b != NULL) {
        get_position_offset__14TChCrTagPlBackFPvPv(arg0, &v);
        p = arg0->b;
        if (p->x != v.x || p->y != v.y) {
            TWindowSubTradeMain__sub_802448E4(p, &v);
        }
    }
}

void update_card_slot__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) set_flag_40__16TAdChrSelASlotGCFPv(m); }
void notify_trade_main__17TWindowSubComCardFPv(void* p) { void* m = *(void**)((char*)p + 0x2c); if (m) clear_trade_flag__19TWindowSubTradeMainFPv(m); }

}
