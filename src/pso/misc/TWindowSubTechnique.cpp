#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u8 *lbl_805D553C;
s32 TWindowSubTechnique__sub_8028753C(s32 arg0);
u8 *TTecCtrl__sub_8022DBC4(s16, u8, M2C_UNK);
M2C_UNK *TLobby__sub_8001DC24();
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 fn_801D9870(void *, int);
s32 validate_and_clear_slot__10TObjPlayerFPv(void *, int);
s32 TWindowSubStatusDisp__sub_80228F5C(void *);
s32 TWindowSubStatusDisp__sub_80229080(int);
s32 TWindowSubStatusDisp__sub_802290E0();
s32 TWindowHelpItem__sub_80255DC8(int);
s32 fn_80263A20(int, int);
s32 send_and_handle__6TLobbyFPvii(int, void *, int);
s32 TWindowSubTechnique__sub_8028753C(s32 arg0);
extern M2C_UNK lbl_805DD83C;
void TWindowSubTechnique__sub_80286FA4(u8 *arg0, s32 arg1);
}

extern "C" {

void *TWindowSubTechnique__ct(void *arg0, s32 arg1, s32 arg2);
void *__dt__19TWindowSubTechniqueFv(void *arg0, s16 arg1);
void clear_flag70_bit80__19TWindowSubTechniqueFPv(void* p);
void clear_trade_flag__19TWindowSubTradeMainFPv(void* p);
s32 open_menu__19TWindowSubTechniqueFPv(void *arg0);
void render__19TWindowSubTechniqueFv(void);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
void TWindow__close(void *);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 fn_8026652C(s32, M2C_UNK, s32, s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK set_flag70_bit100__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);

extern const f32 lbl_805DD838;

s32 open_menu__19TWindowSubTechniqueFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_8026652C(TWindowSubComCard__sub_8026CBB8(0x12), 5, get_message_10__20TWindowSubStatusDispFPv(0x2F), M2C_FIELD(arg0, s32 *, 0x28));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 0);
    set_field_1c__6TLobbyFPvf(temp_r31);
    set_flag70_bit100__17TWindowOptionCtrlFPv(temp_r31);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9C), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9D), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9E), 6, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9F), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xA0), 6, 4);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD838);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

void TWindowSubTechnique__sub_80286FA4(u8 *arg0, s32 arg1) {
  M2C_UNK saved_reg_r30;
  s32 temp_r3;
  s32 var_r29;
  s32 var_r30;
  var_r29 = arg1;
  fn_80263A20((int) (*((s32 *) (((s8 *) arg0) + 0x3C))), (int) (*((s32 *) (((s8 *) arg0) + 0x28))));
  temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (*((s32 *) (((s8 *) arg0) + 0x28))));
  if (temp_r3 != 0)
  {
    if (validate_and_clear_slot__10TObjPlayerFPv((void *) (temp_r3 + 0x428), (int) var_r29) != 0)
    {
      var_r29 = 0x13;
      var_r30 = saved_reg_r30;
    }
    if (((s16) var_r29) != ((s16) (*((s16 *) (((s8 *) arg0) + 0x1E)))))
    {
      *((s16 *) (((s8 *) arg0) + 0x1E)) = (s16) var_r29;
      if (((s16) var_r29) == 0x13)
      {
        send_and_handle__6TLobbyFPvii((int) (*((s32 *) (((s8 *) arg0) + 0x3C))), (void *) (&lbl_805DD83C), (int) 0x82);
        return;
      }
      TWindowSubStatusDisp__sub_802290E0();
      if ((((s16) var_r29) != 0x11) && (((s16) var_r29) != 0xE))
      {
        var_r30 = fn_801D9870((void *) (temp_r3 + 0x428), (int) var_r29);
        TWindowSubStatusDisp__sub_80229080((int) TWindowSubTechnique__sub_8028753C((s32)((int) 0x13)));
        TWindowSubStatusDisp__sub_80228F5C((void *) (((u8) var_r30) + 1));
      }
      TWindowSubStatusDisp__sub_80229080((int) TWindowHelpItem__sub_80255DC8((int) 0x2E));
      TWindowSubStatusDisp__sub_80228F5C((void *) ((s32) (*((s16 *) (((s8 *) TTecCtrl__sub_8022DBC4((s16) var_r29, (u8) var_r30, 0xFFFF)) + 0x10)))));
      TWindowSubStatusDisp__sub_80229080((int) TWindowSubTechnique__sub_8028753C((s32)((int) ((s32) ((s16) var_r29)))));
      send_and_handle__6TLobbyFPvii((int) (*((s32 *) (((s8 *) arg0) + 0x3C))), (void *) TLobby__sub_8001DC24(), (int) 0x82);
    }
  }
}

void render__19TWindowSubTechniqueFv(void) {  }

extern M2C_UNK __vt__19TWindowSubTechnique[];

void *__dt__19TWindowSubTechniqueFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubTechnique;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__19TWindowSubTechnique[];
extern s32 lbl_805D3AD0;

void *TWindowSubTechnique__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubTechnique;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3AD0;
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = open_menu__19TWindowSubTechniqueFPv((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0x13;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

s32 TWindowSubTechnique__sub_8028753C(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 0x14), M2C_UNK *, (arg0 * 4));
}

void clear_flag70_bit80__19TWindowSubTechniqueFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }
void clear_trade_flag__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }

}
