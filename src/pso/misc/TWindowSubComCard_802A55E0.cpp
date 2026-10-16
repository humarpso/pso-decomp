#include "types.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/TChCrTagPlBack.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowMessageYesNo.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/ui/TAdChrSelASlotGC.h"

struct P_802A5628 { u8 pad[0x30]; f32 x; f32 y; };

struct O_802A5628 { u8 pad[0x28]; P_802A5628 *a; P_802A5628 *b; };

struct V_802A5628 { f32 x, y; };

extern "C" {
void TWindowSubTradeMain__sub_802448E4(void *, void *);
void update_label_positions__17TWindowSubComCardFPvPv(O_802A5628 *arg0, V_802A5628 *arg1);
}

extern "C" {

s32 create_window_menu(s32, s32, s32);
s32 get_selected_menu_value(s32);
s32 calc_layout_height__17TWindowSubComCardFPvf(s32, f32);
int open_yes_no_prompt(void* a0 = 0, void* a1 = 0, void* a2 = 0, void* a3 = 0);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
int queue_destruction__7TObjectFv(void*);
s32 set_status_flag_80__12TQuestThreadFPv(s32);

void TWindowSubComCard::free_windows() {
    if ((u32) this->m_28 != 0U) {
        ((TWindowSubComCard *)(*(void * *)&this->m_28))->reparent_to_main_ctrl();
    }
    if ((u32) this->m_2c != 0U) {
        ((TWindowSubComCard *)(*(void * *)&this->m_2c))->reparent_to_main_ctrl();
    }
}

void update_label_positions__17TWindowSubComCardFPvPv(O_802A5628 *arg0, V_802A5628 *arg1) {
    V_802A5628 v;
    P_802A5628 *p = arg0->a;
    if (p != NULL && (p->x != arg1->x || p->y != arg1->y)) {
        TWindowSubTradeMain__sub_802448E4(p, arg1);
    }
    if (arg0->b != NULL) {
        ((TChCrTagPlBack *)arg0)->get_position_offset(&v);
        p = arg0->b;
        if (p->x != v.x || p->y != v.y) {
            TWindowSubTradeMain__sub_802448E4(p, &v);
        }
    }
}

void TWindowSubComCard::update_card_slot() { void* m = *(void* *)&this->m_2c; if (m) ((TAdChrSelASlotGC *)m)->set_flag_40(); }
void TWindowSubComCard::notify_trade_main() { void* m = *(void* *)&this->m_2c; if (m) ((TWindowSubTradeMain *)m)->clear_trade_flag(); }

}
