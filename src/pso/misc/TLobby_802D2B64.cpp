#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802D2C38_lbl_804E1920 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

typedef struct E_802D2BC0 { u8 p[0x14]; } E_802D2BC0;

typedef struct S_802D2BC0 {
    u8 pad0[6];
    u16 count;
    E_802D2BC0 e[1];
} S_802D2BC0;

extern "C" {
void TLobby__sub_802D30E8(s32 arg0);
M2C_UNK byteswap_trade_packet__6TLobbyFPv();
extern RecoveredGlobal_802D2C38_lbl_804E1920 lbl_804E1920;
extern u8 TLobby__data_805D688A;
extern u8 TLobby__data_805D688B;
void handle_6xA6_modify_trade_proposal(u8 *arg0);
void init_owner__5TItemFPvUs(void *, u16);
extern s32 local_client_id;
extern u8 TLobby__data_805D688B;
void TLobby__sub_802D2BC0(S_802D2BC0 *arg0);
M2C_UNK send_cancel_trade__9TProtocolFv(s32);
void reset__6TLobbyFv(void);
void send_trade_proposal_result__6TLobbyFcc(s8 arg0, s8 arg1);
extern s32 TLobby__protocol_instance;
extern u8 TLobby__data_805D688B;
void cancel_trade__6TLobbyFv(void);
}

extern "C" {

void check_flags_and_proceed__6TLobbyFv(void);
void clear_flag400__6TLobbyFv(void);
void handle_6xA7(void);
void handle_reset_choice__6TLobbyFi(s32 arg0);
M2C_UNK send_cancel_trade__9TProtocolFv(s32);
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
void reset__6TLobbyFi(s32 arg0);

extern u8 TLobby__data_805D688B;

void handle_reset_choice__6TLobbyFi(s32 arg0) {
    if ((s8) TLobby__data_805D688B != 0) {
        switch (arg0) {
        case 0:
            get_message_10__20TWindowSubStatusDispFPv(0xEC);
            ((M2C_UNK (*)())reset__6TLobbyFi)();
            return;
        case 1:
            get_message_10__20TWindowSubStatusDispFPv(0xEB);
            ((M2C_UNK (*)())reset__6TLobbyFi)();
            break;
        }
    }
}

void TLobby__sub_802D2BC0(S_802D2BC0 *arg0) {
    s32 i;
    E_802D2BC0 *p;
    if ((s32)TLobby__data_805D688B == 8 && arg0 != 0) {
        p = arg0->e;
        for (i = 0; i < arg0->count; i++, p++) {
            init_owner__5TItemFPvUs(p, local_client_id);
        }
        TLobby__data_805D688B = 9;
    }
}

void handle_6xA7(void) {  }

extern s32 TLobby__protocol_instance;
extern u16 lbl_805D6888;

typedef char RecoveredGlobal_802D2C38_lbl_804E1920_size[sizeof(RecoveredGlobal_802D2C38_lbl_804E1920) == 0x140 ? 1 : -1];
void handle_6xA6_modify_trade_proposal(u8 *arg0) {
    M2C_UNK (*temp_r12)(void *);
    u16 temp_r3;
    u8 temp_r5;
    byteswap_trade_packet__6TLobbyFPv();
    temp_r3 = M2C_FIELD(arg0, u16 *, 2);
    if ((temp_r3 < 4U) && (temp_r5 = M2C_FIELD(arg0, u8 *, 4), ((temp_r5 < 8U) != 0))) {
        if (((s8) TLobby__data_805D688A != 4) && ((s32) temp_r3 != (s8) TLobby__data_805D688A)) {
            if ((temp_r5 == 0) && ((u8) M2C_FIELD(arg0, u8 *, 5) == 0)) {
                ((M2C_UNK (*)())TLobby__sub_802D30E8)();
            }
        } else {
            temp_r12 = M2C_FIELD(((u8 *)(((u8 *)(&lbl_804E1920.value) + ((s8) TLobby__data_805D688B << 5))) + ((temp_r5 * 4) & 0x3FC)), M2C_UNK (**)(void *), 0);
            if (temp_r12 != NULL) {
                temp_r12(arg0);
            }
        }
    }
}

void clear_flag400__6TLobbyFv(void) {
    if (lbl_805D6888 & 0x400) {
        send_cancel_trade__9TProtocolFv(TLobby__protocol_instance);
        lbl_805D6888 &= 0xFFFFFBFF;
    }
}

extern u32 TLobby__data_805D6894;
extern u32 TLobby__data_805D6898;
extern u32 TLobby__data_805D689C;

void check_flags_and_proceed__6TLobbyFv(void) {
    if (((u32) TLobby__data_805D6894 == 0U) && ((u32) TLobby__data_805D6898 == 0U) && ((u32) TLobby__data_805D689C == 0U)) {
        cancel_trade__6TLobbyFv();
    }
}
void cancel_trade__6TLobbyFv(void) {
    s8 s = TLobby__data_805D688B;
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
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
void update_sub_status_disp__6TLobbyFi(s32 arg0);
s32 get_shared_text_buffer();
void * find_item_by_id(s32);
M2C_UNK text_builder_append();
M2C_UNK text_builder_reset();
M2C_UNK fn_80330A40(s32);

s32 is_trade_active();
M2C_UNK refresh_player_status__6TLobbyFv(s32);
M2C_UNK reset__15TLobby_802D2F7CFPv(s32);
M2C_UNK reset_impl__15TLobby_802D2F7CFPv(s32);

extern s32 local_client_id;

void update_sub_status_disp__6TLobbyFi(s32 arg0) {
    if ((s32) local_client_id == arg0) {
        ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xF0));
        return;
    }
    text_builder_reset();
    refresh_player_status__6TLobbyFv(arg0);
    ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xEF));
    text_builder_append();
    get_shared_text_buffer();
}

extern s32 local_client_id;

s32 show_event_message__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    switch (arg1) {
    case 0:
        return 0;
    case 1:
        if (arg0 == (s32) local_client_id) {
            return ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xF4));
        }
        text_builder_reset();
        refresh_player_status__6TLobbyFv(arg0);
        ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xEA));
        text_builder_append();
        return get_shared_text_buffer();
    case 2:
        temp_r3 = find_item_by_id(arg2);
        if (temp_r3 == NULL) {
            return 0;
        }
        text_builder_reset();
        if (arg0 == (s32) local_client_id) {
            ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xF3));
            text_builder_append();
        } else {
            refresh_player_status__6TLobbyFv(arg0);
            ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xE8));
            text_builder_append();
        }
        ((VObj_802D2E28_0x30_802D2B64 *)temp_r3)->vma();
        text_builder_append();
        ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xE9));
        text_builder_append();
        return get_shared_text_buffer();
    case 3:
        if (arg0 == (s32) local_client_id) {
            return ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xF2));
        }
        text_builder_reset();
        refresh_player_status__6TLobbyFv(arg0);
        ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xE7));
        text_builder_append();
        return get_shared_text_buffer();
    case 4:
        return ((s32 (*)(M2C_UNK))get_message_10__20TWindowSubStatusDispFPv)((M2C_UNK)(0xEE));
    default:
        return 0;
    }
}

extern u16 lbl_805D6888;
#define TLobby__data_805D688A (*(s8 *)&TLobby__data_805D688A)
#define TLobby__data_805D688B (*(s8 *)&TLobby__data_805D688B)
extern s32 TLobby__data_805D688C;
extern s32 lbl_805D6890;
#define TLobby__data_805D6894 (*(const u32 *)&TLobby__data_805D6894)
#define TLobby__data_805D6898 (*(const u32 *)&TLobby__data_805D6898)
#define TLobby__data_805D689C (*(const u32 *)&TLobby__data_805D689C)

void reset__6TLobbyFv(void) {
    if (is_trade_active() == 0) {
        TLobby__data_805D688A = 4;
        TLobby__data_805D688B = 0;
        TLobby__data_805D688C = 0;
        lbl_805D6890 = 0;
        lbl_805D6888 &= 0xFFFFF80F;
        if ((u32) TLobby__data_805D689C != 0U) {
            reset_impl__15TLobby_802D2F7CFPv(TLobby__data_805D689C);
        }
        if ((u32) TLobby__data_805D6898 != 0U) {
            fn_80330A40(TLobby__data_805D6898);
        }
        if ((u32) TLobby__data_805D6894 != 0U) {
            reset__15TLobby_802D2F7CFPv(TLobby__data_805D6894);
        }
    }
}

}

#undef TLobby__data_805D688A
#undef TLobby__data_805D688B
#undef TLobby__data_805D6894
#undef TLobby__data_805D6898
#undef TLobby__data_805D689C
#include "pso/protocol/subcmd_6x.h"
#include <stddef.h>
typedef char TradeProposalSize[(sizeof(G_ModifyTradeProposal_6xA6) == 0x10) ? 1 : -1];
typedef char TradeProposalAmountOffset[(offsetof(G_ModifyTradeProposal_6xA6, amount) == 0xC) ? 1 : -1];

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>

struct Stack_802D3228
{
  M2C_UNK sp8;
  s8 spC;
  s8 spD;
  u8 pad_E[0x2];
  s32 sp10;
  s32 sp14;
};

struct O_802D33C0 { u8 pad[5]; u8 state; };

struct O_802D3384 { u8 pad[5]; u8 state; s16 h6; };

typedef s32 M2C_UNK;

struct Item_802D3134 { u32 a; u32 b; u32 c; s32 d; u32 e; };

struct Ent_802D3134 { u32 id; s32 count; };

struct Trade_802D3134 { u8 pad[4]; s16 who; u16 count; Item_802D3134 items[1]; };

extern "C" {
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
void TLobby__sub_802D30E8(s32 arg0);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
#define TLobby__data_805D688A (*(s8 *)&TLobby__data_805D688A)
void send_trade_proposal_result__6TLobbyFcc(s8 arg0, s8 arg1);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);

char send_modify_trade_proposal__6TLobbyFcii(s8 arg0, s32 arg1, s32 arg2);
u8 *get_quest_id__12TQuestListVMFPv(u32);
u32 get_player_by_client_id(void *);
s32 close_request_window__19TWindowTradeRequestFv();
M2C_UNK TLobby__sub_8024AAA0(s32, M2C_UNK);
s32 send_trade_proposal_modify__6TLobbyFv();
void TLobby__sub_802D30E8(s32 arg0);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
extern s32 local_client_id;

#define TLobby__data_805D688B (*(s8 *)&TLobby__data_805D688B)
void send_modify_trade_proposal__6TLobbyFi(s32 arg0);

#define TLobby__protocol_instance (*(void * *)&TLobby__protocol_instance)
void handle_trade_state_cancel__6TLobbyFPv(O_802D33C0 *self);

void reset__6TLobbyFi(s32 arg0);
void TLobby__sub_802D3384(O_802D3384 *self);
s32 close_request_window__19TWindowTradeRequestFv();

void reset__6TLobbyFi(s32 arg0);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);

void TLobby__sub_802D3070(s32 arg0);

M2C_UNK copy_to_item_data__5TItemFPvPv(void *, void *);
M2C_UNK copy_item_data__6TLobbyFPvPv(void *, void *);
M2C_UNK init_item_data__10TObjPlayerFPvi(void *, int);
M2C_UNK set_stack_count__24TShopEquipmentListWindowFPvc(void *, u8);
Ent_802D3134 *TLobby__sub_802D29AC(s32);

void build_trade_item_list__6TLobbyFPv(Trade_802D3134 *arg0);
s32 get_shared_text_buffer();
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK refresh_player_status__6TLobbyFv(s32);
M2C_UNK text_builder_append();
M2C_UNK text_builder_reset();
void reset__6TLobbyFi(s32 arg0);

void TLobby__sub_802D33F8(void *arg0);
}

extern "C" {

void TLobby__sub_802D3380(void);
void reset__6TLobbyFi(s32 arg0);
M2C_UNK TLobby_802D2F7C__sub_80339910(u32, s32);
M2C_UNK TLobby__sub_8024AAA0(s32, M2C_UNK);
s32 is_trade_active();

extern s32 local_client_id;
extern u16 lbl_805D6888;

extern s32 TLobby__data_805D688C;
extern s32 lbl_805D6890;
extern u32 TLobby__data_805D689C;

void reset__6TLobbyFi(s32 arg0) {
    if (is_trade_active() == 0) {
        TLobby__data_805D688B = 0;
        TLobby__data_805D688A = 4;
        TLobby__data_805D688C = 0;
        lbl_805D6890 = 0;
        lbl_805D6888 &= 0xFFFFF80F;
        TLobby__sub_8024AAA0(local_client_id, 0x1E);
        u32 temp_r3 = TLobby__data_805D689C;
        if (temp_r3 != 0U) {
            TLobby_802D2F7C__sub_80339910(temp_r3, arg0);
        }
    }
}

void TLobby__sub_802D3070(s32 arg0) {
    G_ModifyTradeProposal_6xA6 packet;
    s8 new_var;
    build_6xA6_modify_trade_proposal(&packet.header);
    new_var = (s8) ((*(u8 *)&TLobby__data_805D688A) & 0xFFFFFFFFFFFFFFFFu);
    packet.what = 7;
    packet.result = 0;
    packet.unknown_a1 = arg0;
    prepare_and_send_trade_packet__6TLobbyFPvPv(&packet.header, (void *)((s32) new_var));
    if (TLobby__data_805D688B == 2) {
        close_request_window__19TWindowTradeRequestFv();
        ((M2C_UNK (*)())reset__6TLobbyFv)();
        return;
    }
    reset__6TLobbyFi(((s32 (*)(s32))update_sub_status_disp__6TLobbyFi)(arg0));
}

void TLobby__sub_802D30E8(s32 arg0) {
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
    s8 cc = TLobby__data_805D688A;
    arg0->who = cc;
    arg0->count = 0;
    list = TLobby__sub_802D29AC(cc);
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
                    init_item_data__10TObjPlayerFPvi(&item, n);
                    copy_item_data__6TLobbyFPvPv(&arg0->items[arg0->count++], &item);
                } else if ((p = ((void *(*)(u32))find_item_by_id)(id)) != NULL) {
                    copy_to_item_data__5TItemFPvPv(p, &item);
                    item.d = -1;
                    set_stack_count__24TShopEquipmentListWindowFPvc(&item, n);
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
  if (((!(*(u8 *)&TLobby__data_805D688A)) && (!(*(u8 *)&TLobby__data_805D688A))) && (!(*(u8 *)&TLobby__data_805D688A)))
  {
  }
  prepare_and_send_trade_packet__6TLobbyFPvPv((void *)((s32) (&stack.sp8)), (void *)((s32) ((s8) (*(u8 *)&TLobby__data_805D688A))));
}

void send_trade_proposal_result__6TLobbyFcc(s8 arg0, s8 arg1) {
  G_ModifyTradeProposal_6xA6 packet;
  s8 new_var;
  arg1++;
  arg1--;
  build_6xA6_modify_trade_proposal(&packet.header);
  new_var = (s8) ((*(u8 *)&TLobby__data_805D688A) & 0xFFFFFFFFFFFFFFFFu);
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
    if ((temp_r3 != 0U) && (temp_r3_2 = get_quest_id__12TQuestListVMFPv(temp_r3), ((temp_r3_2 == NULL) == 0))) {
        if ((s32) (*(u8 *)&TLobby__data_805D688A) != 4) {
            close_request_window__19TWindowTradeRequestFv();
            if ((s8) (*(u8 *)&TLobby__data_805D688A) == arg0) {
                send_trade_proposal_modify__6TLobbyFv();
                TLobby__sub_8024AAA0((s32)((void *) (local_client_id)), (M2C_UNK)((int) (0x1D)));
                return;
            }
            TLobby__sub_802D30E8((s32)((int) ((s32) (s8) (*(u8 *)&TLobby__data_805D688A))));
            goto block_6;
        }
block_6:
        packet.what = 0;
        packet.result = 0;
        packet.amount = M2C_FIELD(temp_r3_2, s32 *, 0x20);
        prepare_and_send_trade_packet__6TLobbyFPvPv((void *) (&packet.header), (void *) (arg0));
        (*(u8 *)&TLobby__data_805D688A) = (u8) arg0;
        TLobby__data_805D688B = 1;
    }
}

void TLobby__sub_802D3380(void) {  }

void TLobby__sub_802D3384(O_802D3384 *self) {
    switch (self->state) {
    case 0:
        reset__6TLobbyFi(((s32 (*)(s32))update_sub_status_disp__6TLobbyFi)(self->h6));
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
void TLobby__sub_802D33F8(void *arg0) {
    switch (M2C_FIELD(arg0, u8 *, 5)) {
    case 4:
        text_builder_reset();
        refresh_player_status__6TLobbyFv(TLobby__data_805D688A);
        get_message_10__20TWindowSubStatusDispFPv(0xED);
        text_builder_append();
        reset__6TLobbyFi(get_shared_text_buffer());
        break;
    case 3:
        break;
    }
}

}

#undef TLobby__data_805D688A
#undef TLobby__data_805D688B
#undef TLobby__protocol_instance

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

typedef s32 M2C_UNK;
struct O_802D368C { u8 pad[5]; u8 state; };

struct O_802D377C { u8 pad0[2]; u16 f2; u8 pad4; u8 state; u8 pad6[6]; s32 fC; };

extern "C" {

M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);

M2C_UNK text_builder_append();
M2C_UNK text_builder_reset();
M2C_UNK TLobby__sub_8024AAA0(s32, M2C_UNK);

extern s32 local_client_id;
#define TLobby__data_805D688A (*(s8 *)&TLobby__data_805D688A)
#define TLobby__data_805D688B (*(s8 *)&TLobby__data_805D688B)
extern s32 TLobby__data_805D688C;
void TLobby__sub_802D36E0(void *arg0);
s32 close_request_window__19TWindowTradeRequestFv();
void reset__6TLobbyFv(void);
void handle_trade_request_state_a__6TLobbyFPv(O_802D361C *self);
s32 close_request_window__19TWindowTradeRequestFv();
void reset__6TLobbyFv(void);
void handle_trade_request_state_b__6TLobbyFPv(O_802D3654 *self);
void move_trade_item_amount__6TLobbyFPvUii(void *, s32, s32, void *);
void update_trade_window__19TWindowSubTradeMainFPv(u32);
extern u8 TLobby__trade_window_state[];

extern u32 TLobby__data_805D6898;
void handle_trade_item_move__6TLobbyFPv(S_802D35B0 *arg0);
void transfer_trade_item_amount__6TLobbyFPvUii(void *, s32, s32, void *);
void update_trade_window__19TWindowSubTradeMainFPv(u32);
extern u8 TLobby__trade_window_state[];

extern u32 TLobby__data_805D6898;
void handle_trade_item_amount__6TLobbyFPv(S_802D3544 *arg0);

M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);

M2C_UNK text_builder_append();
M2C_UNK text_builder_reset();

void update_status_message__6TLobbyFPv(O_802D368C *self);
M2C_UNK TLobby__sub_802D3AA8();

extern s32 TLobby__data_805D688C;
void handle_state_init__6TLobbyFPv(O_802D377C *self);
}

extern "C" {

void update_music_state__6TLobbyFPv(void *arg0);
void update_flag_by_state__6TLobbyFPv(void *arg0);
M2C_UNK notify_child_if_present__19TWindowSubTradeMainFPvi(u32, s32);

extern u16 lbl_805D6888;
extern u32 TLobby__data_805D6898;

void update_music_state__6TLobbyFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 0:
        lbl_805D6888 |= 0x200;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 2);
        }
        break;
    case 4:
        lbl_805D6888 &= 0xFFFFFDFF;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
        }
        break;
    }
}

extern u16 lbl_805D6888;
extern u32 TLobby__data_805D6898;

void update_flag_by_state__6TLobbyFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 0:
        lbl_805D6888 |= 0x40;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
        }
        break;
    case 4:
        lbl_805D6888 &= 0xFFFFFFBF;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 0);
        }
        break;
    }
}

void handle_trade_item_amount__6TLobbyFPv(S_802D3544 *arg0) {
    s32 t = arg0->f5;
    switch (t) {
    case 0:
        if (arg0->f2 == TLobby__data_805D688A) {
            transfer_trade_item_amount__6TLobbyFPvUii(TLobby__trade_window_state + 0x1F0, arg0->f8, arg0->fC, TLobby__trade_window_state);
            if (TLobby__data_805D6898 != 0) {
                update_trade_window__19TWindowSubTradeMainFPv(TLobby__data_805D6898);
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
        if (arg0->f2 == TLobby__data_805D688A) {
            move_trade_item_amount__6TLobbyFPvUii(TLobby__trade_window_state + 0x1F0, arg0->f8, arg0->fC, TLobby__trade_window_state);
            if (TLobby__data_805D6898 != 0) {
                update_trade_window__19TWindowSubTradeMainFPv(TLobby__data_805D6898);
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
        ((M2C_UNK (*)(int))refresh_player_status__6TLobbyFv)(TLobby__data_805D688A);
        get_message_10__20TWindowSubStatusDispFPv(0xF1);
        text_builder_append();
        ((M2C_UNK (*)())get_shared_text_buffer)();
        ((M2C_UNK (*)())reset__6TLobbyFi)();
        break;
    case 1:
    case 2:
        break;
    }
}

void TLobby__sub_802D36E0(void *arg0) {
    u8 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 2:
        TLobby__data_805D688C = M2C_FIELD(arg0, s32 *, 0xC);
        TLobby__sub_8024AAA0(local_client_id, 0x1D);
        TLobby__data_805D688B = 3;
        return;
    case 3:
        text_builder_reset();
        ((M2C_UNK (*)(int))refresh_player_status__6TLobbyFv)(TLobby__data_805D688A);
        get_message_10__20TWindowSubStatusDispFPv(0xD8);
        text_builder_append();
        ((M2C_UNK (*)())get_shared_text_buffer)();
        ((M2C_UNK (*)())reset__6TLobbyFi)();
        return;
    case 0:
        ((M2C_UNK (*)(int))TLobby__sub_802D30E8)(TLobby__data_805D688A);
    case 4:
        return;
    }
}
void handle_state_init__6TLobbyFPv(O_802D377C *self) {
    switch (self->state) {
    case 0:
        TLobby__data_805D688A = self->f2;
        TLobby__data_805D688C = self->fC;
        TLobby__sub_802D3AA8();
        TLobby__data_805D688B = 2;
        break;
    case 1:
    case 2:
        break;
    }
}

}

#undef TLobby__data_805D688A
#undef TLobby__data_805D688B

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Half_802D38B4 { u8 data[0x1F0]; };

extern "C" {

s32 TWindowSubTradeMain__sub_802D3924(s32);
#define TLobby__data_805D688A (*(s8 *)&TLobby__data_805D688A)
extern u8 TLobby__data_805D688B;
void update_trade_partner__6TLobbyFv(void);
void update_both_halves__6TLobbyFPv(void *);
void close_trade_request__6TLobbyFv(void);
#define TLobby__trade_window_state ((Half_802D38B4 *)TLobby__trade_window_state)

extern u8 TLobby__data_805D688B;
extern s32 TLobby__data_805D688C;
extern s32 lbl_805D6890;
#define TLobby__data_805D6894 (*(s32 *)&TLobby__data_805D6894)
#define TLobby__data_805D6898 (*(s32 *)&TLobby__data_805D6898)
#define TLobby__data_805D689C (*(s32 *)&TLobby__data_805D689C)
void reset_trade_state__6TLobbyFv(void);
}

extern "C" {

void close_trade_request__6TLobbyFv(void);
void update_battle_mode__6TLobbyFv(void);

s32 TWindowSubTradeMain__sub_802D3924(s32);

extern s32 local_client_id;
extern u8 TLobby__data_805D688B;

void update_battle_mode__6TLobbyFv(void) {
    if ((s8) TLobby__data_805D688B != 0) {
        if (((u32 (*)(s32))get_player_by_client_id)(local_client_id) == 0U) {
            ((M2C_UNK (*)())cancel_trade__6TLobbyFv)();
            return;
        }
        if (TWindowSubTradeMain__sub_802D3924(local_client_id) == 0) {
            ((M2C_UNK (*)(s32))TLobby__sub_802D3070)(local_client_id);
        }
    }
}

    extern u16 lbl_805D6888;

void update_trade_partner__6TLobbyFv(void) {
    if ((s8) TLobby__data_805D688B == 0) {
        return;
    }
    if (TLobby__data_805D688A == 4) {
        return;
    }
    if (((u32 (*)(s32))get_player_by_client_id)(TLobby__data_805D688A) == 0U) {
        ((M2C_UNK (*)())cancel_trade__6TLobbyFv)();
        return;
    }
    if (TWindowSubTradeMain__sub_802D3924(TLobby__data_805D688A) == 0) {
        ((M2C_UNK (*)(s32))TLobby__sub_802D3070)(TLobby__data_805D688A);
    }
}

void close_trade_request__6TLobbyFv(void) { lbl_805D6888 = 0; close_request_window__19TWindowTradeRequestFv(); }
void reset_trade_state__6TLobbyFv(void) {
    s32 i;
    TLobby__data_805D688A = 4;
    TLobby__data_805D688B = 0;
    TLobby__data_805D688C = 0;
    lbl_805D6890 = 0;
    TLobby__data_805D6894 = 0;
    TLobby__data_805D6898 = 0;
    TLobby__data_805D689C = 0;
    for (i = 0; i < 2; i++) {
        update_both_halves__6TLobbyFPv(&TLobby__trade_window_state[i]);
    }
    close_trade_request__6TLobbyFv();
}

}

#undef TLobby__data_805D688A
#undef TLobby__data_805D6894
#undef TLobby__data_805D6898
#undef TLobby__data_805D689C
#undef TLobby__trade_window_state
