#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802E0224___vt__19TWindowTradeRequest {
    M2C_UNK value;
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
    virtual M2C_UNK m10();
};

struct RecoveredGlobal_802E02D4___vt__19TWindowTradeRequest
{
  M2C_UNK value;
  u8 remaining[0x14];
};

extern "C" {
M2C_UNK __dt__7TObjectFv(void *, int);
M2C_UNK init_parts__10TObjPlayerFPv();
u32 get_player_by_client_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK fn_8024AADC(void *, int);
M2C_UNK TLobby__sub_8024AC20(void *);
M2C_UNK TWindowReturnCity__sub_8024ACA8(void *);
M2C_UNK close__17TWindowSubComCardFPv(void *);
extern RecoveredGlobal_802E0224___vt__19TWindowTradeRequest __vt__19TWindowTradeRequest;
extern s32 lbl_805D53A0;
u8 *__dt__19TWindowTradeRequestFv(u8 *arg0, s16 arg1);
u8 *TLobby__sub_8001DC24(void);
u32 get_player_by_client_id(void *);
u8 *get_window_layout_position(s32);
s32 TWindowMessageYesNo__sub_802A59D8(s32, s32, s32, s32);
char get_trade_mode__6TLobbyFv(void);
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(int);
M2C_UNK reset_equip_slots__10TObjPlayerFPv();
M2C_UNK text_builder_append();
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK TObjPlayer__sub_8024ABDC(void *);
M2C_UNK fn_8024AC64(void *);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(int);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(int, int, int, f32);
extern RecoveredGlobal_802E0224___vt__19TWindowTradeRequest __vt__19TWindowTradeRequest;
extern s32 lbl_805D3F70;
extern s32 lbl_805D53A0;
extern const f32 lbl_805DE8A0;
u8 *TWindowTradeRequest__ct(u8 *arg0);
}

extern "C" {

void render__19TWindowTradeRequestFv(void);
int run_task__19TWindowTradeRequestFv(void);

void render__19TWindowTradeRequestFv(void) {  }

int run_task__19TWindowTradeRequestFv(void) { return 0; }
typedef char RecoveredGlobal_802E0224___vt__19TWindowTradeRequest_size[sizeof(RecoveredGlobal_802E0224___vt__19TWindowTradeRequest) == 0x18 ? 1 : -1];
u8 *__dt__19TWindowTradeRequestFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__19TWindowTradeRequest.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        TWindowReturnCity__sub_8024ACA8((void *) (lbl_805D53A0));
        TLobby__sub_8024AC20((void *) (lbl_805D53A0));
        if (get_player_by_client_id((void *) (lbl_805D53A0)) != 0U) {
            init_parts__10TObjPlayerFPv();
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 2U) {
            fn_8024AADC((void *) (lbl_805D53A0), (int) (0x1D));
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
  *((M2C_UNK **) (((s8 *) arg0) + 0x18)) = &(*(RecoveredGlobal_802E02D4___vt__19TWindowTradeRequest *)&__vt__19TWindowTradeRequest).value;
  *((s32 *) (((s8 *) arg0) + 0)) = (s32) lbl_805D3F70;
  temp_r31 = ((s32)get_player_by_client_id((void *)((u32) get_trade_mode__6TLobbyFv())));
  TWindowSubStatusDisp__sub_802290E0();
  new_var = (u32) temp_r31;
  if (new_var)
  {
    PSO_VCALL_VObj_18_f23ffb_m10(temp_r31);
    text_builder_append();
  }
  get_message_10__20TWindowSubStatusDispFPv((int) 0xD9);
  text_builder_append();
  *((s32 *) (((s8 *) arg0) + 0x20)) = TWindowMessageYesNo__sub_802A59D8((s32) arg0, lbl_805D53A0, 0, 0);
  temp_r31_2 = (u8 *) get_window_layout_position(0xB2);
  forward_slot_selection__16TAdChrSelASlotGCFPvPvPv((int) (*((s32 *) (((s8 *) arg0) + 0x20))), (int) TLobby__sub_8001DC24(), (int) temp_r31_2, (f32) lbl_805DE8A0);
  new_var2 = ((s8 *) arg0) + 0x1C;
  notify_warp_flag70__19TWindowSubShortMailFPv((int) (*((s32 *) (((s8 *) arg0) + 0x20))));
  if (((s32)get_player_by_client_id((void *)((u32) lbl_805D53A0))) != 0U)
  {
    reset_equip_slots__10TObjPlayerFPv();
  }
  TObjPlayer__sub_8024ABDC((void *) lbl_805D53A0);
  fn_8024AC64((void *) lbl_805D53A0);
  *((s32 *) new_var2) = 0;
  return arg0;
}

}
