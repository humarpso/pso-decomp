#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Msg_801CC6B8 {
    u8 pad0[2];
    u16 id;
    s8 kind;
    u8 pad5;
    s16 count;
    s16 param;
    u8 padA[2];
    u32 techs[13];
} Msg_801CC6B8;

typedef struct Player_801CC6B8 {
    u8 pad0[0x4AC];
    u8 pb[4];
} Player_801CC6B8;

extern "C" {
M2C_UNK apply_velocity__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8011E204(void *, int);
s32 lerp_angle_half__10TObjPlayerFUsUs(int, int);
s32 objInBand__FP7GameObjf(void *);
u8 *get_photon_blast_entry__10TObjPlayerFi(unsigned int);
u32 TObjPlayer__sub_801B5EA4(void *);
M2C_UNK update_active_instance__10TObjPlayerFi(void *, void *);
M2C_UNK clear_status_bit6__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801D2A50(void *);
M2C_UNK TObjPlayer__sub_801D2A78(void *);
s32 TObjPlayer__sub_801D2A80(void *);
M2C_UNK TObjPlayer__sub_801D2A88(void *);
f32 TObjPlayer__sub_801D2A98(void *);
M2C_UNK set_field_0c__10TObjPlayerFPvf(void *, f32);
M2C_UNK set_field8__10TObjPlayerFPvi(void *, int);
s16 get_valid_index__15TFontSmallLobbyFPv(void *);
M2C_UNK TObjPlayer__sub_801D8F0C(void *);
f32 TObjPlayer__sub_801D8F60(void *);
f32 TObjPlayer__sub_801D8FB4(void *);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, int, int, int);
extern f32 TObjPlayer__data_805DC360;
extern f32 TObjPlayer__data_805DC36C;
extern const f32 lbl_805DC398;
extern f32 TObjPlayer__data_805DC39C;
void TObjPlayer__sub_801CC34C(u8 *arg0);
M2C_UNK obj_getField1c(void *);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK reset_lobby_model__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_8011E204(void *, int);
s32 is_final_phase__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_801CBD38();
M2C_UNK update_photon_blast_state__10TObjPlayerFv();
M2C_UNK TFontSmallLobby__sub_801D6498(void *);
void TObjPlayer__sub_801CC2B0(u8 *arg0);
s32 TObjPlayer__sub_800196EC(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 TLobby__sub_800822E8(void *, s32);
Player_801CC6B8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void fn_801C1F14(void *, s32);
void apply_photon_blast__10TObjPlayerFii(u16, s32);
void copy_tech_params__10TObjPlayerFPvPv(u32 *, u32 *);
void TObjPlayer__sub_801D0BC0(void *, s32, s32);
void set_float_param__10TObjPlayerFis(void *, s16);
void TObjPlayer__sub_801D1DDC(void *);
void TObjPlayer__sub_801D1E7C(void *, void *);
void TObjPlayer__sub_801D1EE4(void *);
u32 *TObjPlayer__sub_801D2AB0(void *, s32);
void start_photon_blast_action__10TObjPlayerFPv(void *);
void set_section_index__15TFontSmallLobbyFPvs(void *, s16);
s32 reset_key_machine_state__10TObjPlayerFv(void);
s32 TObjEneHoldEffect__sub_8036BBF4(void *);
void handle_6x49_execute_photon_blast(void *arg0);
}

extern "C" {

void TObjPlayer__sub_801CC2B0(u8 *arg0) {
    u8 *temp_r4;
    M2C_FIELD(arg0, u32 *, 0xB0) &= ~0x40;
    TObjPlayer__sub_8011E204((void *) (arg0), (int) (0x80));
    obj_clearFlags30((void *) (arg0), (int) (0x400000));
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x424));
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
    TFontSmallLobby__sub_801D6498((void *) (arg0 + 0x4AC));
    if (is_final_phase__10TObjPlayerFv() != 0) {
        obj_getField1c((void *) (arg0));
        TObjPlayer__sub_801CBD38();
    } else {
        update_photon_blast_state__10TObjPlayerFv();
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x33C) != 0x13) {
        reset_lobby_model__10TObjPlayerFPv((void *) (arg0 + 0x644));
    }
}

void TObjPlayer__sub_801CC34C(u8 *arg0) {
  s16 temp_r0;
  *((s32 *) (((s8 *) arg0) + 0x60)) = lerp_angle_half__10TObjPlayerFUsUs((int) (*((s32 *) (((s8 *) arg0) + 0x60))), (int) (*((s32 *) (((s8 *) arg0) + 0x3F0))));
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x328));
  switch (temp_r0)
  {
    case 2:
    case 4:
      break;
    case 0:
      TObjPlayer__sub_801D8FB4((void *) arg0);
      if (objInBand__FP7GameObjf((void *) arg0) != 0)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 1;
      *((s32 *) (((s8 *) arg0) + 0xB0)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xB0))) | 0x40);
      set_field8__10TObjPlayerFPvi((void *) (arg0 + 0x4AC), (int) (*((s16 *) (((s8 *) get_photon_blast_entry__10TObjPlayerFi(get_valid_index__15TFontSmallLobbyFPv((void *) (arg0 + 0x4AC)))) + 0x12))));
      set_field_0c__10TObjPlayerFPvf((void *) (arg0 + 0x4AC), (f32) lbl_805DC398);
    }
      TOTrapAncient01__sub_80226578((int) 0x4002A823, (void *) arg0, (int) 0, (int) 0, (int) 0);
      break;
    case 1:
      *((f32 *) (((s8 *) arg0) + 0xC0)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC0))) + TObjPlayer__sub_801D2A98((void *) (arg0 + 0x4AC)));
      if (TObjPlayer__sub_801D2A98((void *) (arg0 + 0x4AC)) > TObjPlayer__data_805DC36C)
    {
      if ((*((f32 *) (((s8 *) arg0) + 0xC0))) >= TObjPlayer__sub_801D8F60((void *) arg0))
      {
        set_field_0c__10TObjPlayerFPvf((void *) (arg0 + 0x4AC), (f32) lbl_805DC398);
      }
    }
    else
      if ((*((f32 *) (((s8 *) arg0) + 0xC0))) <= (TObjPlayer__sub_801D8FB4((void *) arg0) - TObjPlayer__data_805DC360))
    {
      if (1)
      {
        set_field_0c__10TObjPlayerFPvf((void *) (arg0 + 0x4AC), (f32) TObjPlayer__data_805DC39C);
      }
    }
      TObjPlayer__sub_801D2A88((void *) (arg0 + 0x4AC));
      if (TObjPlayer__sub_801D2A80((void *) (arg0 + 0x4AC)) < 0)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 2;
      *((s32 *) (((s8 *) arg0) + 0xB0)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xB0))) & 0xFFFFFFBF);
      TObjPlayer__sub_801D8F0C((void *) arg0);
      TObjPlayer__sub_801D2A78((void *) (arg0 + 0x4AC));
    }
      TOTrapAncient01__sub_80226578((int) 0x4002A823, (void *) arg0, (int) 0, (int) 0, (int) 0);
      break;
    case 3:
      if (TObjPlayer__sub_801D2A50((void *) (arg0 + 0x4AC)) != 0)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 4;
      TObjPlayer__sub_8011E204((void *) arg0, (int) 0x80);
      clear_status_bit6__10TObjPlayerFPv((void *) arg0);
      update_active_instance__10TObjPlayerFi((void *) arg0, (void *) get_valid_index__15TFontSmallLobbyFPv((void *) (arg0 + 0x4AC)));
    }
      break;
  }
  if (TObjPlayer__sub_801B5EA4((void *) arg0) == 0U)
  {
    apply_velocity__10TObjPlayerFPv((void *) arg0);
  }
}
void handle_6x49_execute_photon_blast(void *arg0) {
    s32 i;
    Player_801CC6B8 *p;
    Msg_801CC6B8 m;
    TObjPlayer__sub_801D1EE4(&m);
    TObjPlayer__sub_801D1E7C(&m, arg0);
    TObjPlayer__sub_801D1DDC(&m);
    if (TObjEneHoldEffect__sub_8036BBF4(&m) != 0) {
        p = TPlayerBattleCtrl4P__sub_801BA74C(m.id);
        if (p != NULL && TLobby__sub_800822E8(p, 0x8000) == 0 && reset_key_machine_state__10TObjPlayerFv() != 0) {
            if (TObjPlayer__sub_800196EC() == get_field_3e4__10TObjPlayerFPv(p)) {
                s32 count;
                u32 *dst;
                u32 *src;
                start_photon_blast_action__10TObjPlayerFPv(p->pb);
                apply_photon_blast__10TObjPlayerFii(m.id, m.kind);
                fn_801C1F14(p->pb, m.kind);
                count = m.count;
                set_section_index__15TFontSmallLobbyFPvs(p->pb, count);
                set_float_param__10TObjPlayerFis(p, m.param);
                dst = TObjPlayer__sub_801D2AB0(p->pb, 0);
                src = m.techs;
                for (i = 0; i < count; i++) {
                    copy_tech_params__10TObjPlayerFPvPv(dst++, src++);
                }
                TObjPlayer__sub_801D0BC0(p, 9, 0);
            }
        }
    }
}

}
