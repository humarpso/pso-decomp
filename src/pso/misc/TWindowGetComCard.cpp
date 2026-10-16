#include "types.h"
#include "pso/misc/TWindowMessagePage.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TUnk_804CF0B8.h"
#include "pso/misc/TWindowFukidasi.h"
#include "pso/misc/TWindowGetComCard.h"
#include "pso/TAdPlayerLoadGC.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/object/TObjCityMainWarp.h"

struct RecoveredGlobal_80252FCC___vt__17TWindowGetComCard {
    s32 value;
    u8 remaining[0x14];
};

struct Pad_80252CCC { u8 pad[0x20]; u8 m20[0x30]; };

struct GetCard_80252CCC {
    u8 pad0[0x1C];
    void *fmt;
    void *win;
    s32 state;
    s32 timer;
};

extern "C" {
s32 get_shared_text_buffer();
s32 init_com_card__17TWindowSubComCardFv();
s32 TWindowGetComCard__sub_8007B594();
s32 reset_equip_slots__10TObjPlayerFv();
u32 get_player_by_client_id(s32);
s32 get_com_card_list__6TLobbyFPv(int);
s32 text_builder_append();
s32 text_builder_reset();
s32 __ct__7TObjectFP7TObject();
s32 TObjPlayer__sub_8024ABDC(void *);
s32 fn_8024AC64(void *);
s32 set_window_mode_4__6TLobbyFPvll(void *, void *, int);
extern s32 lbl_8044ED94[];
extern s32 lbl_8044ED9C[];
extern void *__vt__17TWindowGetComCard[];
extern s32 TWindowGetComCard__name;
extern s32 local_client_id;
u8 *TWindowGetComCard__ct(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void start_player_data_load__17TWindowSubComCardFl(void);
void TWindowGetComCard__sub_8007B54C(void);
s32 TWindowGetComCard__sub_8007B594();
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
void play_sound_effect(s32, s32, s32, s32);
s32 is_player_input_active(s32);
s32 get_selected_menu_value(void *);
void *init_shop_judgment_window(void *);
void complete_reveal__14TWindowMessageFv(void *);
extern u8 TWindowGetComCard__window_rect[];
extern Pad_80252CCC controller_input_state[];
extern s32 local_client_id;
void run_task__17TWindowGetComCardFv(GetCard_80252CCC *self);
}

extern "C" {

void TWindowFukidasi__sub_80252C38(void* p);
void *__dt__17TWindowGetComCardFv(void *arg0, s16 arg1);
int fn_80252CBC(void* p);
s32 TLobby__sub_8024AC20(s32);
u32 get_player_by_client_id(s32);
s32 TWindowCtrl__sub_8024A314();
s32 TWindowReturnCity__sub_8024ACA8(s32);
s32 TWindow__close(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);
s32 init_parts__10TObjPlayerFPv();

void TWindowFukidasi__sub_80252C38(void* p) { *(u8*)((char*)p + 0x71) |= 0x4; }
void TUnk_804CF0B8::clear_visible_flag() { *(u8*)((char*)this + 0x71) &= 0xfe; }
void TUnk_804CF0B8::set_flag() { *(u8*)((char*)this + 0x71) |= 0x1; }
void TUnk_804CF0B8::sub_80252C68() { *(u8*)((char*)this + 0x71) |= 0x20; }
int TUnk_804CF0B8::is_flag_set() { return *(u8*)((char*)this + 0x71) & 0x1; }
void TUnk_804CF0B8::clear_flag_20() { *(u8*)((char*)this + 0x71) &= 0xffffffdf; }
int TUnk_804CF0B8::is_active() { return (*(u8*)((char*)this + 0x71) >> 2) & 0x1; }
void TUnk_804CF0B8::clear_flag() { *(u8*)((char*)this + 0x71) &= 0xfffffffb; }
int TUnk_804CF0B8::is_balloon_visible() { return (*(u8*)((char*)this + 0x71) >> 5) & 0x1; }
int fn_80252CBC(void* p) { return *(u16*)((char*)p + 0x0) & 0x10; }
void TWindowGetComCard::render() {  }

extern void *__vt__17TWindowGetComCard[];
extern s32 local_client_id;

void run_task__17TWindowGetComCardFv(GetCard_80252CCC *self) {
    s32 port = is_player_input_active(local_client_id);
    switch (self->state) {
    case 0:
    case 1:
        if (((TWindowMessagePage *)(self->fmt))->is_message_window_ready() != 0) {
            self->state = 2;
        }
        if (TWindowShortListCtrl__check_controller_button(controller_input_state[0].m20, 4) != 0) {
            complete_reveal__14TWindowMessageFv(self->fmt);
            self->state = 2;
        }
        break;
    case 2:
        if (self->timer != 0) {
            self->state = 5;
            break;
        }
        if (self->win == 0) {
            self->win = init_shop_judgment_window(TWindowGetComCard__window_rect);
            ((TWindowSubComCardList *)(self->win))->set_flag70_bit10();
        }
        ((TWindowSubComCard *)(self->win))->clear_flag_and_release();
        self->state = 3;
    case 3:
        if (((TWindowSubComCard *)(self->win))->get_status_flag() != 0) {
            TWindowGetComCard__sub_8007B54C();
            queue_destruction__7TObjectFv(self);
            self->state = 6;
        } else if (((TWindowMenu *)(self->win))->is_visible() != 0) {
            s32 r = get_selected_menu_value(self->win);
            if (r == 0) {
                self->state = 4;
            }
            if (r == 1) {
                TWindowGetComCard__sub_8007B54C();
                queue_destruction__7TObjectFv(self);
                self->state = 6;
            }
        }
        break;
    case 4:
        if (TAdPlayerLoadGC::get_instance() == 0) {
            TWindowGetComCard__sub_8007B594();
            start_player_data_load__17TWindowSubComCardFl();
            TWindowGetComCard__sub_8007B54C();
            queue_destruction__7TObjectFv(self);
            self->state = 6;
        } else if (TWindowShortListCtrl__check_controller_button(controller_input_state[port].m20, 2) != 0 ||
                   test_flag_4c__23TAdSinglePlyChrSelectGCFv(controller_input_state[4].m20, 2) != 0) {
            play_sound_effect(0x52F16, 0, 0, 0);
            self->state = 2;
        }
        break;
    case 5:
        if (self->timer-- <= 0 || TWindowShortListCtrl__check_controller_button(controller_input_state[0].m20, 4) != 0) {
            TWindowGetComCard__sub_8007B54C();
            queue_destruction__7TObjectFv(self);
            self->state = 6;
        }
        break;
    case 6:
        break;
    }
}

void *__dt__17TWindowGetComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)((s8 *)arg0 + 0x18) = __vt__17TWindowGetComCard;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x20) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x20));
            *(u32 *)((s8 *)arg0 + 0x20) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x1C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x1C));
            *(u32 *)((s8 *)arg0 + 0x1C) = 0U;
        }
        TWindowReturnCity__sub_8024ACA8(local_client_id);
        TLobby__sub_8024AC20(local_client_id);
        if ((TWindowCtrl__sub_8024A314() == 0) && (get_player_by_client_id(local_client_id) != 0U)) {
            init_parts__10TObjPlayerFPv();
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80252FCC___vt__17TWindowGetComCard_size[sizeof(RecoveredGlobal_80252FCC___vt__17TWindowGetComCard) == 0x18 ? 1 : -1];
u8 *TWindowGetComCard__ct(u8 *arg0) {
    s32 temp_r31;
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80252FCC___vt__17TWindowGetComCard *)&__vt__17TWindowGetComCard).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowGetComCard__name;
    *(s32 *)((s8 *)arg0 + 0x1C) = set_window_mode_4__6TLobbyFPvll((void *) (lbl_8044ED94), (void *) (lbl_8044ED9C), (int) (1));
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    if (init_com_card__17TWindowSubComCardFv() != 0) {
        temp_r31 = TWindowGetComCard__sub_8007B594();
        text_builder_reset();
        get_com_card_list__6TLobbyFPv((int) (temp_r31));
        text_builder_append();
        TWindowSubStatusDisp::get_message_10((int) (0x36));
        text_builder_append();
        ((TLobby *)(*(s32 *)((s8 *)arg0 + 0x1C)))->send_and_handle((int) (get_shared_text_buffer()), (int) (2));
        *(s32 *)((s8 *)arg0 + 0x28) = 0;
    } else {
        ((TLobby *)(*(s32 *)((s8 *)arg0 + 0x1C)))->send_and_handle((int) (TWindowSubStatusDisp::get_message_10((int) (0x37))), (int) (0));
        *(s32 *)((s8 *)arg0 + 0x28) = 0x384;
    }
    if (get_player_by_client_id((s32)((void *) (local_client_id))) != 0U) {
        reset_equip_slots__10TObjPlayerFv();
    }
    TObjPlayer__sub_8024ABDC((void *) (local_client_id));
    fn_8024AC64((void *) (local_client_id));
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    return arg0;
}

}
