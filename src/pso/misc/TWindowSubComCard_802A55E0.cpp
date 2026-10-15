#include "types.h"
#include "pso/misc/TWindowSubComCard.h"

struct P_802A5628 { u8 pad[0x30]; f32 x; f32 y; };

struct O_802A5628 { u8 pad[0x28]; P_802A5628 *a; P_802A5628 *b; };

struct V_802A5628 { f32 x, y; };

extern "C" {
void TWindowSubTradeMain__sub_802448E4(void *, void *);
void get_position_offset__14TChCrTagPlBackFPv(void *, void *);
void update_label_positions__17TWindowSubComCardFPvPv(O_802A5628 *arg0, V_802A5628 *arg1);
}

extern "C" {

s32 create_window_menu(s32, s32, s32);
int confirm_selection__11TWindowMenuFv(void*);
s32 reparent_to_main_ctrl__17TWindowSubComCardFv(void *);
s32 get_selected_menu_value(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
int is_child_visible__17TWindowSubComCardFv(void* a0 = 0);
int open_yes_no_prompt(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
int clear_trade_flag__19TWindowSubTradeMainFv(void*);
int close__17TWindowSubComCardFv(void* p);
void forward_slot_selection__16TAdChrSelASlotGCFPvPv(void* p, void* a1, void* a2);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
void free_member__17TWindowSubComCardFv(void* p);
s32 get_status_flag__17TWindowSubComCardFv(s32);
void notify_warp_flag70__19TWindowSubShortMailFv(void* p);
int queue_destruction__7TObjectFv(void*);
void run_task__19TWindowMessageYesNoFv(void* p);
int set_flag70_bit10__16TObjCityMainWarpFv(void*);
int set_flag_40__16TAdChrSelASlotGCFv(void*);
int set_selected_index__17TWindowSubComCardFs(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);

void TWindowSubComCard::free_windows() {
    if ((u32) *(u32 *)((s8 *)this + 0x28) != 0U) {
        reparent_to_main_ctrl__17TWindowSubComCardFv(*(void **)((s8 *)this + 0x28));
    }
    if ((u32) *(u32 *)((s8 *)this + 0x2C) != 0U) {
        reparent_to_main_ctrl__17TWindowSubComCardFv(*(void **)((s8 *)this + 0x2C));
    }
}

void update_label_positions__17TWindowSubComCardFPvPv(O_802A5628 *arg0, V_802A5628 *arg1) {
    V_802A5628 v;
    P_802A5628 *p = arg0->a;
    if (p != NULL && (p->x != arg1->x || p->y != arg1->y)) {
        TWindowSubTradeMain__sub_802448E4(p, arg1);
    }
    if (arg0->b != NULL) {
        get_position_offset__14TChCrTagPlBackFPv(arg0, &v);
        p = arg0->b;
        if (p->x != v.x || p->y != v.y) {
            TWindowSubTradeMain__sub_802448E4(p, &v);
        }
    }
}

void TWindowSubComCard::update_card_slot() { void* m = *(void**)((char*)this + 0x2c); if (m) set_flag_40__16TAdChrSelASlotGCFv(m); }
void TWindowSubComCard::notify_trade_main() { void* m = *(void**)((char*)this + 0x2c); if (m) clear_trade_flag__19TWindowSubTradeMainFv(m); }

}
