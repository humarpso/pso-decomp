#include "types.h"
struct VBase_18_9c7036
{
  char pad[0x18];
};

struct VObj_18_9c7036 : VBase_18_9c7036 {
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
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual u8 m41();
};

extern "C" {
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 obj_getField1c(void *);
u8 *get_item_field_6__10TObjPlayerFPv(void *);
s32 queue_destruction__7TObjectFv(int);
s32 check_value_equals__13TQuestColCtrlFPvi(int, void *);
s32 obj_clear_flag30_20000(void *);
u32 create__15TFontSmallLobbyFPv(void *);
s32 init_feed_timer__8TItemMagFPv(void *);
s32 check_state_flag_1__8TItemMagFPv(void *);
s32 TKeyBoardControl__sub_801AFCF4(void *, void *);
s32 TFontSmallLobby__sub_801AFEE0();
s32 check_flag_800000__10TObjPlayerFPv(void *);
s32 draw_small_label__15TFontSmallLobbyFi(void *);
s32 TFontSmallLobby__sub_801C013C(void *);
s32 request_player_size_restore(void *);
s32 update_photon_blast_state__10TObjPlayerFv();
s32 TFontSmallLobby__sub_801D5F08(void *);
s32 update_if_ready__15TFontSmallLobbyFPv(void *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 TObjPlayer__sub_80354E7C();
extern s32 lbl_805D2B28;
void TFontSmallLobby__ct(u8 *arg0);
}

extern "C" {

typedef struct VBase_18_9c7036 VBase_18_9c7036;
typedef struct VObj_18_9c7036 VObj_18_9c7036;
#define PSO_VCALL_VObj_18_9c7036_m41(_self) (((VObj_18_9c7036 *)(_self))->m41())
void TFontSmallLobby__ct(u8 *arg0) {
  u32 temp_r3_2;
  u8 *temp_r3;
  if (reset_key_machine_state__10TObjPlayerFv() != 0)
  {
    temp_r3 = (u8 *) get_item_field_6__10TObjPlayerFPv(arg0);
    if (temp_r3 != 0)
    {
      TKeyBoardControl__sub_801AFCF4((void *) arg0, (void *) ((s16) PSO_VCALL_VObj_18_9c7036_m41(temp_r3)));
    }
  }
  if ((is_locally_controlled__10TObjPlayerFPv((void *) arg0) != 0) && (TFontSmallLobby__sub_801AFEE0() == 0))
  {
    if (reset_key_machine_state__10TObjPlayerFv() == 0)
    {
      init_feed_timer__8TItemMagFPv((void *) (arg0 + 0x4AC));
    }
    TFontSmallLobby__sub_801D5F08((void *) (arg0 + 0x4AC));
    update_if_ready__15TFontSmallLobbyFPv((void *) (arg0 + 0x4AC));
    update_photon_blast_state__10TObjPlayerFv();
  }
  if (TFontSmallLobby__sub_801AFEE0() != 0)
  {
    temp_r3_2 = *((u32 *) (((s8 *) arg0) + 0x54C));
    if ((temp_r3_2 != 0U) && (check_value_equals__13TQuestColCtrlFPvi((int) temp_r3_2, (void *) lbl_805D2B28) != 0))
    {
      queue_destruction__7TObjectFv((int) (*((u32 *) (((s8 *) arg0) + 0x54C))));
    }
    *((u32 *) (((s8 *) arg0) + 0x54C)) = create__15TFontSmallLobbyFPv((void *) ((s32) (obj_getField1c((void *) arg0) & 0xFFFFu)));
  }
  obj_clear_flag30_20000((void *) arg0);
  if (is_locally_controlled__10TObjPlayerFPv((void *) arg0) != 0)
  {
    if (check_flag_800000__10TObjPlayerFPv((void *) arg0) != 0)
    {
      draw_small_label__15TFontSmallLobbyFi((void *) arg0);
    }
    if (check_state_flag_1__8TItemMagFPv((void *) (arg0 + 0x5B0)) != 0)
    {
      request_player_size_restore((void *) (arg0 + 0x5B0));
    }
  }
  TFontSmallLobby__sub_801C013C((void *) (arg0 + 0x428));
  TObjPlayer__sub_80354E7C();
}

}
