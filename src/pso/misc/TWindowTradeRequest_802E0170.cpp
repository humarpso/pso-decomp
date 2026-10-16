#include "types.h"
#include "pso/misc/TWindowMessageYesNo.h"
#include "pso/misc/TWindowTradeRequest.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/misc/TWindowSubStatusDisp.h"

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
extern RecoveredGlobal_802E0224___vt__19TWindowTradeRequest __vt__19TWindowTradeRequest;
extern s32 local_client_id;
u8 *__dt__19TWindowTradeRequestFv(u8 *arg0, s16 arg1);
u8 *get_shared_text_buffer(void);
u32 get_player_by_client_id(void *);
u8 *get_window_layout_position(s32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(s32, s32, s32, s32);
char get_trade_mode__6TLobbyFv(void);
s32 reset_equip_slots__10TObjPlayerFv();
s32 text_builder_append();
s32 text_builder_reset();
s32 __ct__7TObjectFP7TObject();
s32 TObjPlayer__sub_8024ABDC(void *);
s32 fn_8024AC64(void *);
s32 forward_slot_selection__16TAdChrSelASlotGCFPvPv(int, int, int, f32);
extern RecoveredGlobal_802E0224___vt__19TWindowTradeRequest __vt__19TWindowTradeRequest;
extern s32 lbl_805D3F70;
extern s32 local_client_id;
extern const f32 lbl_805DE8A0;
u8 *TWindowTradeRequest__ct(u8 *arg0);
}

extern "C" {

void TWindowTradeRequest::render() {  }

typedef char RecoveredGlobal_802E0224___vt__19TWindowTradeRequest_size[sizeof(RecoveredGlobal_802E0224___vt__19TWindowTradeRequest) == 0x18 ? 1 : -1];

void TWindowTradeRequest::run_task() {
    Obj_802E0174 *arg0 = (Obj_802E0174 *)this;
    s32 slot;
    switch (arg0->state) {
    case 0:
    case 1:
        if (((TWindowSubComCard *)(arg0->card))->get_card_data() != 0) {
            TWindowTradeRequest::reset_trade();
            TWindowTradeRequest::close_request_window();
            arg0->state = 3;
            break;
        }
        if (((TWindowMessageYesNo *)(arg0->card))->is_child_visible() != 0) {
            slot = ((TWindowSubComCard *)(arg0->card))->get_slot_or_neg1();
            if (slot == 0) {
                TLobby::send_trade_proposal_modify();
                TWindowTradeRequest::close_request_window();
                arg0->state = 2;
            }
            if (slot == 1) {
                TWindowTradeRequest::reset_trade();
                TWindowTradeRequest::close_request_window();
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
            ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x20)))->close();
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
  TWindowSubStatusDisp::get_message_10((int) 0xD9);
  text_builder_append();
  *((s32 *) (((s8 *) arg0) + 0x20)) = create__19TWindowMessageYesNoFPvPvPvPv((s32) arg0, local_client_id, 0, 0);
  temp_r31_2 = (u8 *) get_window_layout_position(0xB2);
  forward_slot_selection__16TAdChrSelASlotGCFPvPv((int) (*((s32 *) (((s8 *) arg0) + 0x20))), (int) get_shared_text_buffer(), (int) temp_r31_2, (f32) lbl_805DE8A0);
  new_var2 = ((s8 *) arg0) + 0x1C;
  ((TWindowSubShortMail *)(*((s32 *) (((s8 *) arg0) + 0x20))))->notify_warp_flag70();
  if (((s32)get_player_by_client_id((void *)((u32) local_client_id))) != 0U)
  {
    reset_equip_slots__10TObjPlayerFv();
  }
  TObjPlayer__sub_8024ABDC((void *) local_client_id);
  fn_8024AC64((void *) local_client_id);
  *((s32 *) new_var2) = 0;
  return arg0;
}

}
