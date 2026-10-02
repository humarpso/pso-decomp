#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
typedef struct Pkt_801B0300
{
  u16 hdr;
  u16 a;
  u16 b;
  s16 c;
} Pkt_801B0300;

extern "C" {
s32 TObjPlayer__sub_80019248(u32);
s32 obj_isState2_324(u32);
s32 obj_testFlags30(u32, M2C_UNK);
u16 obj_getField1c(u32);
s32 check_value_equals__13TQuestColCtrlFPvi(u32, s32);
u32 TPhotonMylla__sub_80154CB4();
u16 get_trap_type__10TOMineTrapFPv(u32);
s32 is_final_phase__10TObjPlayerFv();
s32 is_technique_ready__8TTecCtrlFv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK TFontSmallLobby__sub_801C0350(Pkt_801B0300 *);
M2C_UNK TFontSmallLobby__sub_801C0378(Pkt_801B0300 *);
int TOMineTrap__sub_801D6A44(void*);
extern s32 TOMineTrap__data_805D3080;
void TOMineTrap__sub_801B0300(u32 arg0, u32 arg1, s16 arg2);
}

extern "C" {

int update_trap_sub__10TOMineTrapFPv(void* p);
int TOMineTrap__sub_801D6A44(void*);

typedef struct Pkt_801B0300 Pkt_801B0300;
void TOMineTrap__sub_801B0300(u32 arg0, u32 arg1, s16 arg2) {
  Pkt_801B0300 pkt;
  u32 temp_r3;
  u32 obj;
  if (is_technique_ready__8TTecCtrlFv() != 0)
  {
    obj = arg1;
    if ((check_value_equals__13TQuestColCtrlFPvi(obj, TOMineTrap__data_805D3080) != 0) && (get_trap_type__10TOMineTrapFPv(obj) != 0xFFFF))
    {
      obj = TPhotonMylla__sub_80154CB4();
    }
    if (obj_testFlags30(obj, 0x10000000) == 0)
    {
      if (TObjPlayer__sub_80019248(arg0) != 0)
      {
        ((int (*)(u32, u32, s16)) TOMineTrap__sub_801D6A44)(arg0 + 0x77C, obj, arg2);
      }
    }
    else
      if ((TObjPlayer__sub_80019248(arg0) != 0) && ((arg0 == 0U) || (obj_isState2_324(arg0) == 0)))
    {
      ((int (*)(u32, u32, s16)) TOMineTrap__sub_801D6A44)(arg0 + 0x77C, obj, arg2);
      if (obj_getField1c(obj) != obj_getField1c(arg0))
      {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(obj_getField1c(obj));
        if (temp_r3 != 0U)
        {
          ((int (*)(u32, u32, s16)) TOMineTrap__sub_801D6A44)(temp_r3 + 0x78C, arg0, arg2);
        }
      }
      if (is_final_phase__10TObjPlayerFv() != 0)
      {
        TFontSmallLobby__sub_801C0350(&pkt);
        pkt.a = obj_getField1c(obj);
        pkt.b = obj_getField1c(arg0);
        pkt.c = arg2;
        TFontSmallLobby__sub_801C0378(&pkt);
      }
    }
  }
}

int update_trap_sub__10TOMineTrapFPv(void* p) { return TOMineTrap__sub_801D6A44((char*)p + 0x76c); }

}
