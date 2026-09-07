#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredFields_80331434_arg0
{
  u8 unknown_0[0x28];
  s32 field_28;
};

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(int);
M2C_UNK TWindowSubComCard__sub_80265E60(int, f32);
s32 TWindowSubTradeMain__sub_80266200(int, int, int, int, int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
s32 fn_8026652C(int, int, int, int);
s32 TWindowSubComCard__sub_8026CBB8(int);
extern const f32 TWindowSubTradeMain__data_805DF858;
s32 TWindowSubTradeMain__sub_80331434(u8 *arg0);
}

extern "C" {

void open_status_window__19TWindowSubTradeMainFi(s32 arg0);
void render__19TWindowSubTradeMainFv(void);
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0);
s32 TLobby__sub_802D268C();
int TWindowSubTradeMain__sub_803312BC(void*, void* a1 = 0);
int TWindowSubTradeMain__sub_8033131C(void* p);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);

void open_status_window__19TWindowSubTradeMainFi(s32 arg0) {
    TWindowSubTradeMain__sub_803312BC((void*)(arg0), (void*)(get_message_10__20TWindowSubStatusDispFPv(0xF7)));
}
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0) {
    TWindowSubTradeMain__sub_803312BC((void*)(arg0), (void*)(TLobby__sub_802D268C()));
}

typedef struct RecoveredFields_80331434_arg0 RecoveredFields_80331434_arg0;
#pragma fp_contract on
s32 TWindowSubTradeMain__sub_80331434(u8 *arg0) {
  s32 temp_r31;
  s32 temp_r31_2;
  temp_r31_2 = (0, get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDD)));
  temp_r31 = fn_8026652C((int) TWindowSubComCard__sub_8026CBB8((int) 0x5E), (int) 4, (int) temp_r31_2, (int) ((RecoveredFields_80331434_arg0 *) arg0)->field_28);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDC)), (int) 6, (int) 0x11);
  forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xE3)), (int) 6, (int) 0x16);
  TWindowSubTradeMain__sub_80266200((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDE)), (int) 6, (int) 0x1A, (int) 0xFFEE946E);
  TWindowSubTradeMain__sub_80266200((int) temp_r31, (int) get_message_10__20TWindowSubStatusDispFPv((s32)((int) 0xDF)), (int) 6, (int) 0x17, (int) 0xFFEE6ED8);
  TWindowSubComCard__sub_80265E60((int) temp_r31, (f32) TWindowSubTradeMain__data_805DF858);
  TWindowSubComCard__sub_80265C30((int) temp_r31);
  return temp_r31;
}

void render__19TWindowSubTradeMainFv(void) {  }

}
