#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_F8 { u8 bytes[0xf8]; };

struct Stack_802D23E0
{
  M2C_UNK sp8;
  s8 spC;
  s8 spD;
  u8 pad_E[0x6];
  s32 sp14;
};

extern "C" {
u8 * TLobby__sub_802D27E0(s32 arg0, s32 arg1);
M2C_UNK get_shared_text_buffer();
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK refresh_player_status__6TLobbyFv(int);
M2C_UNK text_builder_append();
M2C_UNK text_builder_reset();
extern s8 TLobby__data_805D688A;
void TLobby__sub_802D268C(void);
s32 get_quest_id__12TQuestListVMFPv(void *);
s32 get_player_by_client_id(u32);
void prepare_and_send_trade_packet__6TLobbyFPvPv(s32, s32);
void build_6xA6_modify_trade_proposal(void *);
extern u32 lbl_805D53A0;
extern s8 TLobby__data_805D688A;
extern u8 TLobby__data_805D688B;
void TLobby__sub_802D23E0(void);
}

extern "C" {

typedef struct Stack_802D23E0 Stack_802D23E0;
void TLobby__sub_802D23E0(void) {
  Stack_802D23E0 stack;
  u8 *temp_r3;
  u8 *temp_r3_2;
  build_6xA6_modify_trade_proposal(&stack.sp8);
  if (((s32) TLobby__data_805D688B) == 2)
  {
    temp_r3 = (u8 *) get_player_by_client_id(lbl_805D53A0);
    if (temp_r3)
    {
      temp_r3_2 = (u8 *) get_quest_id__12TQuestListVMFPv(temp_r3);
      if (temp_r3_2 != 0)
      {
        stack.spC = 0;
        stack.spD = 2;
        stack.sp14 = *((s32 *) (((s8 *) temp_r3_2) - -0x20));
        if (((*(u8 *)&TLobby__data_805D688A) && (*(u8 *)&TLobby__data_805D688A)) && (*(u8 *)&TLobby__data_805D688A))
        {
        }
        prepare_and_send_trade_packet__6TLobbyFPvPv((s32) (&stack.sp8), (s32) ((s8) (*(u8 *)&TLobby__data_805D688A)));
        TLobby__data_805D688B = 3;
      }
    }
  }
}

#pragma push
#pragma scheduling off
void TLobby__sub_802D268C(void) {
    text_builder_reset();
    refresh_player_status__6TLobbyFv(TLobby__data_805D688A);
    get_message_10__20TWindowSubStatusDispFPv(0xF6);
    text_builder_append();
    get_shared_text_buffer();
}
#pragma pop

u8 * TLobby__sub_802D27E0(s32 arg0, s32 arg1) {
    *(M2CCopy_F8 *)(arg0) = *(const M2CCopy_F8 *)(arg1);
    return (u8 *)arg0;
}

}
