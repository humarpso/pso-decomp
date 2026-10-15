#include "types.h"

#include "pso/protocol/TradeSession.h"

typedef struct E_802D2BC0 { u8 p[0x14]; } E_802D2BC0;

typedef struct S_802D2BC0 {
    u8 pad0[6];
    u16 count;
    E_802D2BC0 e[1];
} S_802D2BC0;

extern "C" {
void send_trade_busy_reply(s32 arg0);
s32 byteswap_trade_packet__6TLobbyFPv();

extern u8 TLobby__trade_partner_client_id;
extern u8 TLobby__trade_proposal_state;
void handle_6xA6_modify_trade_proposal(u8 *arg0);
void init_owner__5TItemFUs(void *, u16);
extern s32 local_client_id;
extern u8 TLobby__trade_proposal_state;
void handle_trade_received_items(S_802D2BC0 *arg0);
s32 send_cancel_trade__9TProtocolFv(s32);
void reset__6TLobbyFv(void);
void send_trade_proposal_result__6TLobbyFcc(s8 arg0, s8 arg1);
extern s32 TLobby__protocol_instance;
extern u8 TLobby__trade_proposal_state;
void cancel_trade__6TLobbyFv(void);
}

extern "C" {

void check_flags_and_proceed__6TLobbyFv(void);
void clear_flag400__6TLobbyFv(void);
void handle_6xA7(void);
void handle_reset_choice__6TLobbyFi(s32 arg0);
s32 send_cancel_trade__9TProtocolFv(s32);
s32 get_message_10__20TWindowSubStatusDispFl(s32);
void reset__6TLobbyFi(s32 arg0);

extern u8 TLobby__trade_proposal_state;

void handle_reset_choice__6TLobbyFi(s32 arg0) {
    if ((s8) TLobby__trade_proposal_state != 0) {
        switch (arg0) {
        case 0:
            get_message_10__20TWindowSubStatusDispFl(0xEC);
            ((s32 (*)())reset__6TLobbyFi)();
            return;
        case 1:
            get_message_10__20TWindowSubStatusDispFl(0xEB);
            ((s32 (*)())reset__6TLobbyFi)();
            break;
        }
    }
}

void handle_trade_received_items(S_802D2BC0 *arg0) {
    s32 i;
    E_802D2BC0 *p;
    if ((s32)TLobby__trade_proposal_state == 8 && arg0 != 0) {
        p = arg0->e;
        for (i = 0; i < arg0->count; i++, p++) {
            init_owner__5TItemFUs(p, local_client_id);
        }
        TLobby__trade_proposal_state = 9;
    }
}

void handle_6xA7(void) {  }

extern s32 TLobby__protocol_instance;
extern u16 trade_protocol_flags;

typedef char RecoveredGlobal_802D2C38_lbl_804E1920_size[sizeof(trade_proposal_state_handlers) == 0x140 ? 1 : -1];
void handle_6xA6_modify_trade_proposal(u8 *arg0) {
    s32 (*temp_r12)(void *);
    u16 temp_r3;
    u8 temp_r5;
    byteswap_trade_packet__6TLobbyFPv();
    temp_r3 = *(u16 *)((s8 *)arg0 + 2);
    if ((temp_r3 < 4U) && (temp_r5 = *(u8 *)((s8 *)arg0 + 4), ((temp_r5 < 8U) != 0))) {
        if (((s8) TLobby__trade_partner_client_id != 4) && ((s32) temp_r3 != (s8) TLobby__trade_partner_client_id)) {
            if ((temp_r5 == 0) && ((u8) *(u8 *)((s8 *)arg0 + 5) == 0)) {
                ((s32 (*)())send_trade_busy_reply)();
            }
        } else {
            temp_r12 = *(s32 (**)(void *))((s8 *)((u8 *)(((u8 *)(&trade_proposal_state_handlers) + ((s8) TLobby__trade_proposal_state << 5))) + ((temp_r5 * 4) & 0x3FC)) + 0);
            if (temp_r12 != NULL) {
                temp_r12(arg0);
            }
        }
    }
}

void clear_flag400__6TLobbyFv(void) {
    if (trade_protocol_flags & 0x400) {
        send_cancel_trade__9TProtocolFv(TLobby__protocol_instance);
        trade_protocol_flags &= 0xFFFFFBFF;
    }
}

extern u32 TLobby__data_805D6894;
extern u32 TLobby__trade_main_window;
extern u32 trade_message_controller;

void check_flags_and_proceed__6TLobbyFv(void) {
    if (((u32) TLobby__data_805D6894 == 0U) && ((u32) TLobby__trade_main_window == 0U) && ((u32) trade_message_controller == 0U)) {
        cancel_trade__6TLobbyFv();
    }
}
void cancel_trade__6TLobbyFv(void) {
    s8 s = TLobby__trade_proposal_state;
    switch (s) {
    case 0:
        break;
    case 1: case 2: case 3: case 4: case 5: case 6:
        ((void (*)(s32, s32))send_trade_proposal_result__6TLobbyFcc)(5, 4);
        reset__6TLobbyFv();
        break;
    case 7:
    case 8:
        send_cancel_trade__9TProtocolFv(TLobby__protocol_instance);
        break;
    case 9:
        break;
    }
}

}

#include "types.h"

struct VObj_802D2E28_0x30_802D2B64 {
    char pad[0x18];
    virtual void vm0();
    virtual void vm1();
    virtual void vm2();
    virtual void vm3();
    virtual void vm4();
    virtual void vm5();
    virtual void vm6();
    virtual void vm7();
    virtual void vm8();
    virtual void vm9();
    virtual void vma();
};

extern "C" {

void reset__6TLobbyFv(void);
s32 show_event_message__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
s32 format_trade_out_of_range_message(s32 arg0);
s32 get_shared_text_buffer();
void * find_item_by_id(s32);
s32 text_builder_append();
s32 text_builder_reset();
s32 fn_80330A40(s32);

s32 is_trade_active();
s32 refresh_player_status__6TLobbyFv(s32);
s32 reset__15TLobby_802D2F7CFPv(s32);
s32 finish__22TWindowSubTradeMessageFv(s32);

extern s32 local_client_id;

s32 format_trade_out_of_range_message(s32 arg0) {
    if ((s32) local_client_id == arg0) {
        return ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xF0));
    }
    text_builder_reset();
    refresh_player_status__6TLobbyFv(arg0);
    ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xEF));
    text_builder_append();
    return get_shared_text_buffer();
}

extern s32 local_client_id;

s32 show_event_message__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    switch (arg1) {
    case 0:
        return 0;
    case 1:
        if (arg0 == (s32) local_client_id) {
            return ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xF4));
        }
        text_builder_reset();
        refresh_player_status__6TLobbyFv(arg0);
        ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xEA));
        text_builder_append();
        return get_shared_text_buffer();
    case 2:
        temp_r3 = find_item_by_id(arg2);
        if (temp_r3 == NULL) {
            return 0;
        }
        text_builder_reset();
        if (arg0 == (s32) local_client_id) {
            ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xF3));
            text_builder_append();
        } else {
            refresh_player_status__6TLobbyFv(arg0);
            ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xE8));
            text_builder_append();
        }
        ((VObj_802D2E28_0x30_802D2B64 *)temp_r3)->vma();
        text_builder_append();
        ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xE9));
        text_builder_append();
        return get_shared_text_buffer();
    case 3:
        if (arg0 == (s32) local_client_id) {
            return ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xF2));
        }
        text_builder_reset();
        refresh_player_status__6TLobbyFv(arg0);
        ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xE7));
        text_builder_append();
        return get_shared_text_buffer();
    case 4:
        return ((s32 (*)(s32))get_message_10__20TWindowSubStatusDispFl)((s32)(0xEE));
    default:
        return 0;
    }
}

extern u16 trade_protocol_flags;
#define TLobby__trade_partner_client_id (*(s8 *)&TLobby__trade_partner_client_id)
#define TLobby__trade_proposal_state (*(s8 *)&TLobby__trade_proposal_state)
extern s32 TLobby__data_805D688C;
extern s32 trade_proposal_delay;
#define TLobby__data_805D6894 (*(const u32 *)&TLobby__data_805D6894)
#define TLobby__trade_main_window (*(const u32 *)&TLobby__trade_main_window)
#define trade_message_controller (*(const u32 *)&trade_message_controller)

void reset__6TLobbyFv(void) {
    if (is_trade_active() == 0) {
        TLobby__trade_partner_client_id = 4;
        TLobby__trade_proposal_state = 0;
        TLobby__data_805D688C = 0;
        trade_proposal_delay = 0;
        trade_protocol_flags &= 0xFFFFF80F;
        if ((u32) trade_message_controller != 0U) {
            finish__22TWindowSubTradeMessageFv(trade_message_controller);
        }
        if ((u32) TLobby__trade_main_window != 0U) {
            fn_80330A40(TLobby__trade_main_window);
        }
        if ((u32) TLobby__data_805D6894 != 0U) {
            reset__15TLobby_802D2F7CFPv(TLobby__data_805D6894);
        }
    }
}

}

#undef TLobby__trade_partner_client_id
#undef TLobby__trade_proposal_state
#undef TLobby__data_805D6894
#undef TLobby__trade_main_window
#undef trade_message_controller
#include "pso/protocol/subcmd_6x.h"
#include <stddef.h>
typedef char TradeProposalSize[(sizeof(G_ModifyTradeProposal_6xA6) == 0x10) ? 1 : -1];
typedef char TradeProposalAmountOffset[(offsetof(G_ModifyTradeProposal_6xA6, amount) == 0xC) ? 1 : -1];

#include "types.h"

#include <stddef.h>

struct Stack_802D3228
{
  s32 sp8;
  s8 spC;
  s8 spD;
  u8 pad_E[0x2];
  s32 sp10;
  s32 sp14;
};

struct O_802D33C0 { u8 pad[5]; u8 state; };

struct O_802D3384 { u8 pad[5]; u8 state; s16 h6; };

struct Item_802D3134 { u32 a; u32 b; u32 c; s32 d; u32 e; };

struct Ent_802D3134 { u32 id; s32 count; };

struct Trade_802D3134 { u8 pad[4]; s16 who; u16 count; Item_802D3134 items[1]; };

extern "C" {
s32 prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
s32 build_6xA6_modify_trade_proposal(void *);
void send_trade_busy_reply(s32 arg0);
s32 prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
s32 build_6xA6_modify_trade_proposal(void *);
#define TLobby__trade_partner_client_id (*(s8 *)&TLobby__trade_partner_client_id)
void send_trade_proposal_result__6TLobbyFcc(s8 arg0, s8 arg1);
s32 prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
s32 build_6xA6_modify_trade_proposal(void *);

char send_modify_trade_proposal__6TLobbyFcii(s8 arg0, s32 arg1, s32 arg2);
u8 *get_quest_id__12TQuestListVMFv(u32);
u32 get_player_by_client_id(void *);
s32 close_request_window__19TWindowTradeRequestFv();
s32 TLobby__sub_8024AAA0(s32, s32);
s32 send_trade_proposal_modify__6TLobbyFv();
void send_trade_busy_reply(s32 arg0);
s32 prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
s32 build_6xA6_modify_trade_proposal(void *);
extern s32 local_client_id;

#define TLobby__trade_proposal_state (*(s8 *)&TLobby__trade_proposal_state)
void send_modify_trade_proposal__6TLobbyFi(s32 arg0);

#define TLobby__protocol_instance (*(void * *)&TLobby__protocol_instance)
void handle_trade_state_cancel__6TLobbyFPv(O_802D33C0 *self);

void reset__6TLobbyFi(s32 arg0);
void handle_trade_member_out_of_range(O_802D3384 *self);
s32 close_request_window__19TWindowTradeRequestFv();

void reset__6TLobbyFi(s32 arg0);
s32 prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
s32 build_6xA6_modify_trade_proposal(void *);

void cancel_trade_for_member_out_of_range(s32 arg0);

s32 copy_to_item_data__5TItemFPv(void *, void *);
s32 copy_item_data__6TLobbyFPvPv(void *, void *);
s32 init_item_data__10TObjPlayerFl(void *, int);
s32 set_stack_count__24TShopEquipmentListWindowFSc(void *, u8);
Ent_802D3134 *get_trade_window_state(s32);

void build_trade_item_list__6TLobbyFPv(Trade_802D3134 *arg0);
s32 get_shared_text_buffer();
s32 get_message_10__20TWindowSubStatusDispFl(s32);
s32 refresh_player_status__6TLobbyFv(s32);
s32 text_builder_append();
s32 text_builder_reset();
void reset__6TLobbyFi(s32 arg0);

void handle_trade_partner_cancel(void *arg0);
}

extern "C" {

void ignore_trade_proposal_event(void);
void reset__6TLobbyFi(s32 arg0);
s32 show_message__22TWindowSubTradeMessageFPCc(u32, s32);
s32 TLobby__sub_8024AAA0(s32, s32);
s32 is_trade_active();

extern s32 local_client_id;
extern u16 trade_protocol_flags;

extern s32 TLobby__data_805D688C;
extern s32 trade_proposal_delay;
extern u32 trade_message_controller;

void reset__6TLobbyFi(s32 arg0) {
    if (is_trade_active() == 0) {
        TLobby__trade_proposal_state = 0;
        TLobby__trade_partner_client_id = 4;
        TLobby__data_805D688C = 0;
        trade_proposal_delay = 0;
        trade_protocol_flags &= 0xFFFFF80F;
        TLobby__sub_8024AAA0(local_client_id, 0x1E);
        u32 temp_r3 = trade_message_controller;
        if (temp_r3 != 0U) {
            show_message__22TWindowSubTradeMessageFPCc(temp_r3, arg0);
        }
    }
}

void cancel_trade_for_member_out_of_range(s32 arg0) {
    G_ModifyTradeProposal_6xA6 packet;
    s8 new_var;
    build_6xA6_modify_trade_proposal(&packet.header);
    new_var = (s8) ((*(u8 *)&TLobby__trade_partner_client_id) & 0xFFFFFFFFFFFFFFFFu);
    packet.what = 7;
    packet.result = 0;
    packet.unknown_a1 = arg0;
    prepare_and_send_trade_packet__6TLobbyFPvPv(&packet.header, (void *)((s32) new_var));
    if (TLobby__trade_proposal_state == 2) {
        close_request_window__19TWindowTradeRequestFv();
        ((s32 (*)())reset__6TLobbyFv)();
        return;
    }
    reset__6TLobbyFi(format_trade_out_of_range_message(arg0));
}

void send_trade_busy_reply(s32 arg0) {
    G_ModifyTradeProposal_6xA6 packet;
    build_6xA6_modify_trade_proposal((void *) (&packet.header));
    packet.what = 6;
    packet.result = 0;
    prepare_and_send_trade_packet__6TLobbyFPvPv((void *) (&packet.header), (void *) (arg0));
}

void build_trade_item_list__6TLobbyFPv(Trade_802D3134 *arg0) {
    Item_802D3134 item;
    Ent_802D3134 *list;
    s32 c;
    s8 cc = TLobby__trade_partner_client_id;
    arg0->who = cc;
    arg0->count = 0;
    list = get_trade_window_state(cc);
    if (list != NULL) {
        u32 i;
        s32 n;
        Ent_802D3134 *e;
        u32 id;
        void *p;
        e = list;
        for (i = 0; i < 31; i++, e++) {
            n = e->count;
            id = e->id;
            if (n > 0) {
                if (id == 0xFFFFFF01) {
                    init_item_data__10TObjPlayerFl(&item, n);
                    copy_item_data__6TLobbyFPvPv(&arg0->items[arg0->count++], &item);
                } else if ((p = ((void *(*)(u32))find_item_by_id)(id)) != NULL) {
                    copy_to_item_data__5TItemFPv(p, &item);
                    item.d = -1;
                    set_stack_count__24TShopEquipmentListWindowFSc(&item, n);
                    copy_item_data__6TLobbyFPvPv(&arg0->items[arg0->count++], &item);
                }
            }
        }
    }
}

char send_modify_trade_proposal__6TLobbyFcii(s8 arg0, s32 arg1, s32 arg2) {
  Stack_802D3228 stack;
  build_6xA6_modify_trade_proposal(&stack.sp8);
  stack.spC = arg0;
  stack.spD = 0;
  stack.sp10 = arg1;
  stack.sp14 = arg2;
  if (((!(*(u8 *)&TLobby__trade_partner_client_id)) && (!(*(u8 *)&TLobby__trade_partner_client_id))) && (!(*(u8 *)&TLobby__trade_partner_client_id)))
  {
  }
  prepare_and_send_trade_packet__6TLobbyFPvPv((void *)((s32) (&stack.sp8)), (void *)((s32) ((s8) (*(u8 *)&TLobby__trade_partner_client_id))));
}

void send_trade_proposal_result__6TLobbyFcc(s8 arg0, s8 arg1) {
  G_ModifyTradeProposal_6xA6 packet;
  s8 new_var;
  arg1++;
  arg1--;
  build_6xA6_modify_trade_proposal(&packet.header);
  new_var = (s8) ((*(u8 *)&TLobby__trade_partner_client_id) & 0xFFFFFFFFFFFFFFFFu);
  packet.what = arg0;
  packet.result = arg1;
  prepare_and_send_trade_packet__6TLobbyFPvPv((void *)((s32) (&packet.header)), (void *)((s32) new_var));
}

void send_modify_trade_proposal__6TLobbyFi(s32 arg0) {
    G_ModifyTradeProposal_6xA6 packet;
    u32 temp_r3;
    u8 *temp_r3_2;
    build_6xA6_modify_trade_proposal((void *) (&packet.header));
    temp_r3 = get_player_by_client_id((void *) (local_client_id));
    if ((temp_r3 != 0U) && (temp_r3_2 = get_quest_id__12TQuestListVMFv(temp_r3), ((temp_r3_2 == NULL) == 0))) {
        if ((s32) (*(u8 *)&TLobby__trade_partner_client_id) != 4) {
            close_request_window__19TWindowTradeRequestFv();
            if ((s8) (*(u8 *)&TLobby__trade_partner_client_id) == arg0) {
                send_trade_proposal_modify__6TLobbyFv();
                TLobby__sub_8024AAA0((s32)((void *) (local_client_id)), (s32)((int) (0x1D)));
                return;
            }
            send_trade_busy_reply((s32)((int) ((s32) (s8) (*(u8 *)&TLobby__trade_partner_client_id))));
            goto block_6;
        }
block_6:
        packet.what = 0;
        packet.result = 0;
        packet.amount = *(s32 *)((s8 *)temp_r3_2 + 0x20);
        prepare_and_send_trade_packet__6TLobbyFPvPv((void *) (&packet.header), (void *) (arg0));
        (*(u8 *)&TLobby__trade_partner_client_id) = (u8) arg0;
        TLobby__trade_proposal_state = 1;
    }
}

void ignore_trade_proposal_event(void) {  }

void handle_trade_member_out_of_range(O_802D3384 *self) {
    switch (self->state) {
    case 0:
        reset__6TLobbyFi(format_trade_out_of_range_message(self->h6));
        break;
    case 1:
    case 2:
        break;
    }
}

void handle_trade_state_cancel__6TLobbyFPv(O_802D33C0 *self) {
    switch (self->state) {
    case 3:
        break;
    case 4:
        ((void (*)(void *))send_cancel_trade__9TProtocolFv)(TLobby__protocol_instance);
        break;
    }
}
void handle_trade_partner_cancel(void *arg0) {
    switch (*(u8 *)((s8 *)arg0 + 5)) {
    case 4:
        text_builder_reset();
        refresh_player_status__6TLobbyFv(TLobby__trade_partner_client_id);
        get_message_10__20TWindowSubStatusDispFl(0xED);
        text_builder_append();
        reset__6TLobbyFi(get_shared_text_buffer());
        break;
    case 3:
        break;
    }
}

}

#undef TLobby__trade_partner_client_id
#undef TLobby__trade_proposal_state
#undef TLobby__protocol_instance

#include "types.h"

struct O_802D361C { u8 pad[5]; u8 state; };

struct O_802D3654 { u8 pad[5]; u8 state; };

typedef struct S_802D35B0 {
    u8 pad0[2];
    u16 f2;
    u8 pad4;
    u8 f5;
    u8 pad6[2];
    s32 f8;
    s32 fC;
} S_802D35B0;

typedef struct S_802D3544 {
    u8 pad0[2];
    u16 f2;
    u8 pad4;
    u8 f5;
    u8 pad6[2];
    s32 f8;
    s32 fC;
} S_802D3544;

struct O_802D368C { u8 pad[5]; u8 state; };

struct O_802D377C { u8 pad0[2]; u16 f2; u8 pad4; u8 state; u8 pad6[6]; s32 fC; };

extern "C" {

s32 get_message_10__20TWindowSubStatusDispFl(s32);

s32 text_builder_append();
s32 text_builder_reset();
s32 TLobby__sub_8024AAA0(s32, s32);

extern s32 local_client_id;
#define TLobby__trade_partner_client_id (*(s8 *)&TLobby__trade_partner_client_id)
#define TLobby__trade_proposal_state (*(s8 *)&TLobby__trade_proposal_state)
extern s32 TLobby__data_805D688C;
void handle_trade_request_reply(void *arg0);
s32 close_request_window__19TWindowTradeRequestFv();
void reset__6TLobbyFv(void);
void handle_trade_request_state_a__6TLobbyFPv(O_802D361C *self);
s32 close_request_window__19TWindowTradeRequestFv();
void reset__6TLobbyFv(void);
void handle_trade_request_state_b__6TLobbyFPv(O_802D3654 *self);
void move_trade_item_amount__6TLobbyFPvUii(void *, s32, s32, void *);
void update_trade_window__19TWindowSubTradeMainFPv(u32);
extern u8 TLobby__trade_window_state[];

extern u32 TLobby__trade_main_window;
void handle_trade_item_move__6TLobbyFPv(S_802D35B0 *arg0);
void transfer_trade_item_amount__6TLobbyFPvUii(void *, s32, s32, void *);
void update_trade_window__19TWindowSubTradeMainFPv(u32);
extern u8 TLobby__trade_window_state[];

extern u32 TLobby__trade_main_window;
void handle_trade_item_amount__6TLobbyFPv(S_802D3544 *arg0);

s32 get_message_10__20TWindowSubStatusDispFl(s32);

s32 text_builder_append();
s32 text_builder_reset();

void update_status_message__6TLobbyFPv(O_802D368C *self);
s32 TLobby__sub_802D3AA8();

extern s32 TLobby__data_805D688C;
void handle_state_init__6TLobbyFPv(O_802D377C *self);
}

extern "C" {

void handle_trade_final_confirmation(void *arg0);
void handle_trade_offer_confirmation(void *arg0);
s32 notify_child_if_present__19TWindowSubTradeMainFPvi(u32, s32);

extern u16 trade_protocol_flags;
extern u32 TLobby__trade_main_window;

void handle_trade_final_confirmation(void *arg0) {
    u8 temp_r0;

    temp_r0 = *(u8 *)((s8 *)arg0 + 5);
    switch ((s32) temp_r0) {
    case 0:
        trade_protocol_flags |= 0x200;
        if (TLobby__trade_main_window != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__trade_main_window, 2);
        }
        break;
    case 4:
        trade_protocol_flags &= 0xFFFFFDFF;
        if (TLobby__trade_main_window != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__trade_main_window, 1);
        }
        break;
    }
}

extern u16 trade_protocol_flags;
extern u32 TLobby__trade_main_window;

void handle_trade_offer_confirmation(void *arg0) {
    u8 temp_r0;

    temp_r0 = *(u8 *)((s8 *)arg0 + 5);
    switch ((s32) temp_r0) {
    case 0:
        trade_protocol_flags |= 0x40;
        if (TLobby__trade_main_window != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__trade_main_window, 1);
        }
        break;
    case 4:
        trade_protocol_flags &= 0xFFFFFFBF;
        if (TLobby__trade_main_window != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__trade_main_window, 0);
        }
        break;
    }
}

void handle_trade_item_amount__6TLobbyFPv(S_802D3544 *arg0) {
    s32 t = arg0->f5;
    switch (t) {
    case 0:
        if (arg0->f2 == TLobby__trade_partner_client_id) {
            transfer_trade_item_amount__6TLobbyFPvUii(TLobby__trade_window_state + 0x1F0, arg0->f8, arg0->fC, TLobby__trade_window_state);
            if (TLobby__trade_main_window != 0) {
                update_trade_window__19TWindowSubTradeMainFPv(TLobby__trade_main_window);
            }
        }
        break;
    case 1:
    case 2:
        break;
    }
}

void handle_trade_item_move__6TLobbyFPv(S_802D35B0 *arg0) {
    s32 t = arg0->f5;
    switch (t) {
    case 0:
        if (arg0->f2 == TLobby__trade_partner_client_id) {
            move_trade_item_amount__6TLobbyFPvUii(TLobby__trade_window_state + 0x1F0, arg0->f8, arg0->fC, TLobby__trade_window_state);
            if (TLobby__trade_main_window != 0) {
                update_trade_window__19TWindowSubTradeMainFPv(TLobby__trade_main_window);
            }
        }
        break;
    case 1:
    case 2:
        break;
    }
}

void handle_trade_request_state_a__6TLobbyFPv(O_802D361C *self) {
    switch (self->state) {
    case 0:
        close_request_window__19TWindowTradeRequestFv();
        reset__6TLobbyFv();
        break;
    case 1:
    case 2:
        break;
    }
}

void handle_trade_request_state_b__6TLobbyFPv(O_802D3654 *self) {
    switch (self->state) {
    case 3:
        break;
    case 4:
        close_request_window__19TWindowTradeRequestFv();
        reset__6TLobbyFv();
        break;
    }
}

void update_status_message__6TLobbyFPv(O_802D368C *self) {
    switch (self->state) {
    case 0:
        text_builder_reset();
        ((s32 (*)(int))refresh_player_status__6TLobbyFv)(TLobby__trade_partner_client_id);
        get_message_10__20TWindowSubStatusDispFl(0xF1);
        text_builder_append();
        ((s32 (*)())get_shared_text_buffer)();
        ((s32 (*)())reset__6TLobbyFi)();
        break;
    case 1:
    case 2:
        break;
    }
}

void handle_trade_request_reply(void *arg0) {
    u8 temp_r0;
    temp_r0 = *(u8 *)((s8 *)arg0 + 5);
    switch ((s32) temp_r0) {
    case 2:
        TLobby__data_805D688C = *(s32 *)((s8 *)arg0 + 0xC);
        TLobby__sub_8024AAA0(local_client_id, 0x1D);
        TLobby__trade_proposal_state = 3;
        return;
    case 3:
        text_builder_reset();
        ((s32 (*)(int))refresh_player_status__6TLobbyFv)(TLobby__trade_partner_client_id);
        get_message_10__20TWindowSubStatusDispFl(0xD8);
        text_builder_append();
        ((s32 (*)())get_shared_text_buffer)();
        ((s32 (*)())reset__6TLobbyFi)();
        return;
    case 0:
        ((s32 (*)(int))send_trade_busy_reply)(TLobby__trade_partner_client_id);
    case 4:
        return;
    }
}
void handle_state_init__6TLobbyFPv(O_802D377C *self) {
    switch (self->state) {
    case 0:
        TLobby__trade_partner_client_id = self->f2;
        TLobby__data_805D688C = self->fC;
        TLobby__sub_802D3AA8();
        TLobby__trade_proposal_state = 2;
        break;
    case 1:
    case 2:
        break;
    }
}

}

#undef TLobby__trade_partner_client_id
#undef TLobby__trade_proposal_state

#include "types.h"
#include "pso/misc/TLobby.h"

struct Half_802D38B4 { u8 data[0x1F0]; };

extern "C" {

s32 is_trade_range_bit_set(s32);
#define TLobby__trade_partner_client_id (*(s8 *)&TLobby__trade_partner_client_id)
extern u8 TLobby__trade_proposal_state;
void update_both_halves__6TLobbyFv(void *);
#define TLobby__trade_window_state ((Half_802D38B4 *)TLobby__trade_window_state)

extern u8 TLobby__trade_proposal_state;
extern s32 TLobby__data_805D688C;
extern s32 trade_proposal_delay;
#define TLobby__data_805D6894 (*(s32 *)&TLobby__data_805D6894)
#define TLobby__trade_main_window (*(s32 *)&TLobby__trade_main_window)
#define trade_message_controller (*(s32 *)&trade_message_controller)
}

extern "C" {

s32 is_trade_range_bit_set(s32);

extern s32 local_client_id;
extern u8 TLobby__trade_proposal_state;

void TLobby::update_battle_mode() {
    if ((s8) TLobby__trade_proposal_state != 0) {
        if (((u32 (*)(s32))get_player_by_client_id)(local_client_id) == 0U) {
            ((s32 (*)())cancel_trade__6TLobbyFv)();
            return;
        }
        if (is_trade_range_bit_set(local_client_id) == 0) {
            ((s32 (*)(s32))cancel_trade_for_member_out_of_range)(local_client_id);
        }
    }
}

    extern u16 trade_protocol_flags;

void TLobby::update_trade_partner() {
    if ((s8) TLobby__trade_proposal_state == 0) {
        return;
    }
    if (TLobby__trade_partner_client_id == 4) {
        return;
    }
    if (((u32 (*)(s32))get_player_by_client_id)(TLobby__trade_partner_client_id) == 0U) {
        ((s32 (*)())cancel_trade__6TLobbyFv)();
        return;
    }
    if (is_trade_range_bit_set(TLobby__trade_partner_client_id) == 0) {
        ((s32 (*)(s32))cancel_trade_for_member_out_of_range)(TLobby__trade_partner_client_id);
    }
}

void TLobby::close_trade_request() { trade_protocol_flags = 0; close_request_window__19TWindowTradeRequestFv(); }
void TLobby::reset_trade_state() {
    s32 i;
    TLobby__trade_partner_client_id = 4;
    TLobby__trade_proposal_state = 0;
    TLobby__data_805D688C = 0;
    trade_proposal_delay = 0;
    TLobby__data_805D6894 = 0;
    TLobby__trade_main_window = 0;
    trade_message_controller = 0;
    for (i = 0; i < 2; i++) {
        update_both_halves__6TLobbyFv(&TLobby__trade_window_state[i]);
    }
    TLobby::close_trade_request();
}

}

#undef TLobby__trade_partner_client_id
#undef TLobby__data_805D6894
#undef TLobby__trade_main_window
#undef trade_message_controller
#undef TLobby__trade_window_state
extern "C" TradeProposalHandler trade_proposal_state_handlers[10][8] = {
    { (TradeProposalHandler)handle_state_init__6TLobbyFPv, 0, 0, 0, 0, 0, 0, 0 },
    { (TradeProposalHandler)handle_trade_request_reply, 0, 0, 0, 0, 0, (TradeProposalHandler)update_status_message__6TLobbyFPv, (TradeProposalHandler)handle_trade_member_out_of_range },
    { 0, 0, 0, 0, 0, (TradeProposalHandler)handle_trade_request_state_b__6TLobbyFPv, 0, (TradeProposalHandler)handle_trade_request_state_a__6TLobbyFPv },
    { (TradeProposalHandler)ignore_trade_proposal_event, (TradeProposalHandler)handle_trade_item_move__6TLobbyFPv, (TradeProposalHandler)handle_trade_item_amount__6TLobbyFPv, (TradeProposalHandler)handle_trade_offer_confirmation, (TradeProposalHandler)handle_trade_final_confirmation, (TradeProposalHandler)handle_trade_partner_cancel, 0, (TradeProposalHandler)handle_trade_member_out_of_range },
    { (TradeProposalHandler)ignore_trade_proposal_event, (TradeProposalHandler)handle_trade_item_move__6TLobbyFPv, (TradeProposalHandler)handle_trade_item_amount__6TLobbyFPv, (TradeProposalHandler)handle_trade_offer_confirmation, (TradeProposalHandler)handle_trade_final_confirmation, (TradeProposalHandler)handle_trade_partner_cancel, 0, (TradeProposalHandler)handle_trade_member_out_of_range },
    { (TradeProposalHandler)ignore_trade_proposal_event, (TradeProposalHandler)ignore_trade_proposal_event, (TradeProposalHandler)ignore_trade_proposal_event, (TradeProposalHandler)handle_trade_offer_confirmation, (TradeProposalHandler)handle_trade_final_confirmation, (TradeProposalHandler)handle_trade_partner_cancel, 0, (TradeProposalHandler)ignore_trade_proposal_event },
    { (TradeProposalHandler)ignore_trade_proposal_event, 0, 0, 0, (TradeProposalHandler)handle_trade_final_confirmation, (TradeProposalHandler)handle_trade_partner_cancel, 0, (TradeProposalHandler)ignore_trade_proposal_event },
    { (TradeProposalHandler)ignore_trade_proposal_event, 0, 0, 0, (TradeProposalHandler)handle_trade_final_confirmation, (TradeProposalHandler)handle_trade_state_cancel__6TLobbyFPv, 0, (TradeProposalHandler)ignore_trade_proposal_event },
    { (TradeProposalHandler)ignore_trade_proposal_event, 0, 0, 0, (TradeProposalHandler)handle_trade_final_confirmation, (TradeProposalHandler)handle_trade_state_cancel__6TLobbyFPv, 0, (TradeProposalHandler)ignore_trade_proposal_event },
    { (TradeProposalHandler)ignore_trade_proposal_event, 0, 0, 0, 0, (TradeProposalHandler)handle_trade_state_cancel__6TLobbyFPv, 0, (TradeProposalHandler)ignore_trade_proposal_event },
};
