#include "types.h"

struct RecoveredGlobal_802E0224___vt__19TWindowTradeRequest {
    s32 value;
    u8 remaining[0x14];
};

struct VBase_18_f23ffb
{
  char pad[0x18];
};

struct VObj_18_f23ffb : VBase_18_f23ffb {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual s32 m10();
};

struct RecoveredGlobal_802E02D4___vt__19TWindowTradeRequest
{
  s32 value;
  u8 remaining[0x14];
};

struct Obj_802E0174 { u8 pad[0x1C]; s32 state; void *card; };

extern "C" {
s32 __dt__7TObjectFv(void *, int);
s32 init_parts__10TObjPlayerFPv();
u32 get_player_by_client_id(void *);
s32 __dl__7TObjectFPv(void *);
s32 fn_8024AADC(void *, int);
s32 TLobby__sub_8024AC20(void *);
s32 TWindowReturnCity__sub_8024ACA8(void *);
s32 close__17TWindowSubComCardFPv(void *);
extern RecoveredGlobal_802E0224___vt__19TWindowTradeRequest __vt__19TWindowTradeRequest;
extern s32 local_client_id;
u8 *__dt__19TWindowTradeRequestFv(u8 *arg0, s16 arg1);
u8 *get_shared_text_buffer(void);
u32 get_player_by_client_id(void *);
u8 *get_window_layout_position(s32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
char get_trade_mode__6TLobbyFv(void);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 reset_equip_slots__10TObjPlayerFPv();
s32 text_builder_append();
s32 text_builder_reset();
s32 __ct__7TObjectFP7TObject();
s32 TObjPlayer__sub_8024ABDC(void *);
s32 fn_8024AC64(void *);
s32 notify_warp_flag70__19TWindowSubShortMailFPv(int);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, int, int, f32);
extern RecoveredGlobal_802E0224___vt__19TWindowTradeRequest __vt__19TWindowTradeRequest;
extern s32 lbl_805D3F70;
extern s32 local_client_id;
extern const f32 lbl_805DE8A0;
u8 *TWindowTradeRequest__ct(u8 *arg0);
void close_request_window__19TWindowTradeRequestFv();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(void *);
s32 is_child_visible__17TWindowSubComCardFPv(void *);
void reset_trade__19TWindowTradeRequestFv();
void send_trade_proposal_modify__6TLobbyFv();
void run_task__19TWindowTradeRequestFv(Obj_802E0174 *arg0);
}

extern "C" {

void render__19TWindowTradeRequestFv(void);

void render__19TWindowTradeRequestFv(void) {  }

typedef char RecoveredGlobal_802E0224___vt__19TWindowTradeRequest_size[sizeof(RecoveredGlobal_802E0224___vt__19TWindowTradeRequest) == 0x18 ? 1 : -1];

void run_task__19TWindowTradeRequestFv(Obj_802E0174 *arg0) {
    s32 slot;
    switch (arg0->state) {
    case 0:
    case 1:
        if (get_card_data__17TWindowSubComCardFPv(arg0->card) != 0) {
            reset_trade__19TWindowTradeRequestFv();
            close_request_window__19TWindowTradeRequestFv();
            arg0->state = 3;
            break;
        }
        if (is_child_visible__17TWindowSubComCardFPv(arg0->card) != 0) {
            slot = get_slot_or_neg1__17TWindowSubComCardFPv(arg0->card);
            if (slot == 0) {
                send_trade_proposal_modify__6TLobbyFv();
                close_request_window__19TWindowTradeRequestFv();
                arg0->state = 2;
            }
            if (slot == 1) {
                reset_trade__19TWindowTradeRequestFv();
                close_request_window__19TWindowTradeRequestFv();
                arg0->state = 3;
            }
        }
        break;
    case 2:
    case 3:
    default:
        break;
    }
}

u8 *__dt__19TWindowTradeRequestFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &__vt__19TWindowTradeRequest.value;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x20) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x20));
            *(u32 *)((s8 *)arg0 + 0x20) = 0U;
        }
        TWindowReturnCity__sub_8024ACA8((void *) (local_client_id));
        TLobby__sub_8024AC20((void *) (local_client_id));
        if (get_player_by_client_id((void *) (local_client_id)) != 0U) {
            init_parts__10TObjPlayerFPv();
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x1C) == 2U) {
            fn_8024AADC((void *) (local_client_id), (int) (0x1D));
        }
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
typedef struct RecoveredGlobal_802E02D4___vt__19TWindowTradeRequest RecoveredGlobal_802E02D4___vt__19TWindowTradeRequest;
typedef struct VBase_18_f23ffb VBase_18_f23ffb;
typedef struct VObj_18_f23ffb VObj_18_f23ffb;
#pragma fp_contract on
#define PSO_VCALL_VObj_18_f23ffb_m10(_self) (((VObj_18_f23ffb *)(_self))->m10())
u8 *TWindowTradeRequest__ct(u8 *arg0) {
  u32 new_var;
  s32 temp_r31;
  s8 *new_var2;
  u8 *temp_r31_2;
  __ct__7TObjectFP7TObject();
  *((s32 **) (((s8 *) arg0) + 0x18)) = &(*(RecoveredGlobal_802E02D4___vt__19TWindowTradeRequest *)&__vt__19TWindowTradeRequest).value;
  *((s32 *) (((s8 *) arg0) + 0)) = (s32) lbl_805D3F70;
  temp_r31 = ((s32)get_player_by_client_id((void *)((u32) get_trade_mode__6TLobbyFv())));
  text_builder_reset();
  new_var = (u32) temp_r31;
  if (new_var)
  {
    PSO_VCALL_VObj_18_f23ffb_m10(temp_r31);
    text_builder_append();
  }
  get_message_10__20TWindowSubStatusDispFPv((int) 0xD9);
  text_builder_append();
  *((s32 *) (((s8 *) arg0) + 0x20)) = create__19TWindowMessageYesNoFPvPvPvPv((s32) arg0, local_client_id, 0, 0);
  temp_r31_2 = (u8 *) get_window_layout_position(0xB2);
  forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((int) (*((s32 *) (((s8 *) arg0) + 0x20))), (int) get_shared_text_buffer(), (int) temp_r31_2, (f32) lbl_805DE8A0);
  new_var2 = ((s8 *) arg0) + 0x1C;
  notify_warp_flag70__19TWindowSubShortMailFPv((int) (*((s32 *) (((s8 *) arg0) + 0x20))));
  if (((s32)get_player_by_client_id((void *)((u32) local_client_id))) != 0U)
  {
    reset_equip_slots__10TObjPlayerFPv();
  }
  TObjPlayer__sub_8024ABDC((void *) local_client_id);
  fn_8024AC64((void *) local_client_id);
  *((s32 *) new_var2) = 0;
  return arg0;
}

}
