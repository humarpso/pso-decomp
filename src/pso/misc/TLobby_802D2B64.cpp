#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802D30E8 {
    M2C_UNK sp8;
    s8 spC;
    s8 spD;
};

struct Stack_802D3284
{
  M2C_UNK sp8;
  s8 spC;
  s8 spD;
};

struct Stack_802D3228
{
  M2C_UNK sp8;
  s8 spC;
  s8 spD;
  u8 pad_E[0x2];
  s32 sp10;
  s32 sp14;
};

extern "C" {
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
void TLobby__sub_802D30E8(s32 arg0);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
extern s8 TLobby__data_805D688A;
void TLobby__sub_802D3284(s8 arg0, s8 arg1);
M2C_UNK prepare_and_send_trade_packet__6TLobbyFPvPv(void *, void *);
M2C_UNK build_6xA6_modify_trade_proposal(void *);
extern s8 TLobby__data_805D688A;
char TLobby__sub_802D3228(s8 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TLobby__sub_802D3380(void);
int TLobby__sub_802D3384(void);
void reset__6TLobbyFi(s32 arg0);
M2C_UNK TLobby_802D2F7C__sub_80339910(u32, s32);
M2C_UNK TLobby__sub_8024AAA0(s32, M2C_UNK);
s32 is_trade_active();

extern s32 lbl_805D53A0;
extern u16 lbl_805D6888;
extern s8 TLobby__data_805D688A;
extern s8 TLobby__data_805D688B;
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
        TLobby__sub_8024AAA0(lbl_805D53A0, 0x1E);
        u32 temp_r3 = TLobby__data_805D689C;
        if (temp_r3 != 0U) {
            TLobby_802D2F7C__sub_80339910(temp_r3, arg0);
        }
    }
}

void TLobby__sub_802D30E8(s32 arg0) {
    Stack_802D30E8 stack;
    build_6xA6_modify_trade_proposal((void *) (&stack.sp8));
    stack.spC = 6;
    stack.spD = 0;
    prepare_and_send_trade_packet__6TLobbyFPvPv((void *) (&stack.sp8), (void *) (arg0));
}

typedef struct Stack_802D3284 Stack_802D3284;

typedef struct Stack_802D3228 Stack_802D3228;
char TLobby__sub_802D3228(s8 arg0, s32 arg1, s32 arg2) {
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

void TLobby__sub_802D3284(s8 arg0, s8 arg1) {
  Stack_802D3284 stack;
  s8 new_var;
  arg1++;
  arg1--;
  build_6xA6_modify_trade_proposal(&stack.sp8);
  new_var = (s8) ((*(u8 *)&TLobby__data_805D688A) & 0xFFFFFFFFFFFFFFFFu);
  stack.spC = arg0;
  stack.spD = arg1;
  prepare_and_send_trade_packet__6TLobbyFPvPv((void *)((s32) (&stack.sp8)), (void *)((s32) new_var));
}

void TLobby__sub_802D3380(void) {  }

int TLobby__sub_802D3384(void) { return 0; }

}
