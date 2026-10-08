#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct Stack_8031E708
{
  s32 sp8;
  s32 spC;
  s32 sp10;
  s32 sp14;
};

struct RecoveredGlobal_8031E708_lbl_804760EC
{
  M2C_UNK value;
  u8 remaining[0xC];
};

struct RecoveredGlobal_8031E708_lbl_804EC40C
{
  M2C_UNK value;
  u8 remaining[0x28];
};

struct RecoveredFields_8031E708_TObjEneRecon__data_805D6B00
{
  u8 unknown_0[0x42C];
  u8 *field_42C;
  s32 field_430;
};

struct RecoveredFields_8031E708_temp_r5
{
  u8 unknown_0[0x8];
  s32 field_8;
  s32 field_C;
};

extern "C" {
s32 dispatch_shared_handler_a__6TLobbyFPv(int);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 init_from_model__11TBreakUpMdlFPvi(int, void *);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
s32 TObjEneRecon__sub_8031BC94();
u8 *TObjEneRecobox__sub_803201D0();
extern RecoveredGlobal_8031E708_lbl_804760EC lbl_804760EC;
extern RecoveredGlobal_8031E708_lbl_804EC40C lbl_804EC40C;
extern s32 lbl_805D6AF0;
extern s32 TObjEneRecon__data_805D6AF4;
extern s32 lbl_805D6AF8;
extern s32 TObjEneRecon__data_805D6AFC;
extern u8 *TObjEneRecon__data_805D6B00;
extern s32 lbl_805D6B04;
extern s32 lbl_805D6B08;
extern s32 lbl_805D6B0C;
extern const f32 TObjEneRecon__data_805DF3C0;
void TObjEneRecon__sub_8031E708(void);
}

extern "C" {

typedef struct RecoveredFields_8031E708_TObjEneRecon__data_805D6B00 RecoveredFields_8031E708_TObjEneRecon__data_805D6B00;
typedef struct RecoveredFields_8031E708_temp_r5 RecoveredFields_8031E708_temp_r5;
typedef struct RecoveredGlobal_8031E708_lbl_804760EC RecoveredGlobal_8031E708_lbl_804760EC;
typedef struct RecoveredGlobal_8031E708_lbl_804EC40C RecoveredGlobal_8031E708_lbl_804EC40C;
typedef struct Stack_8031E708 Stack_8031E708;
typedef char RecoveredGlobal_8031E708_lbl_804760EC_size[((sizeof(RecoveredGlobal_8031E708_lbl_804760EC)) == 0x10) ? (1) : (-1)];
typedef char RecoveredGlobal_8031E708_lbl_804EC40C_size[((sizeof(RecoveredGlobal_8031E708_lbl_804EC40C)) == 0x2C) ? (1) : (-1)];
void TObjEneRecon__sub_8031E708(void) {
  Stack_8031E708 stack;
  s32 temp_r3;
  s32 var_r4;
  u8 *temp_r5;
  TObjEneRecon__data_805D6B00 = TObjEneRecobox__sub_803201D0();
  temp_r3 = (var_r4 = alloc__23TAdSinglePlyChrSelectGCFPv((int) 0x10));
  if (var_r4 != 0)
  {
    var_r4 = init_from_model__11TBreakUpMdlFPvi((int) temp_r3, (void *) (*((s32 *) (((s8 *) ((RecoveredFields_8031E708_TObjEneRecon__data_805D6B00 *) TObjEneRecon__data_805D6B00)->field_42C) + 8))));
  }
  lbl_805D6B04 = var_r4;
  lbl_805D6B08 = 0;
  lbl_805D6B0C = 0;
  lbl_805D6AF0 = register_boss__6TLobbyFPv((int) 0x42);
  TObjEneRecon__data_805D6AF4 = dispatch_shared_handler_b__6TLobbyFPv((int) 0x42);
  lbl_805D6AF8 = register_object__6TLobbyFPv((int) 0x42);
  TObjEneRecon__data_805D6AFC = dispatch_shared_handler_a__6TLobbyFPv((int) 0x42);
  TObjEneRecon__sub_8031BC94();
  stack.sp8 = *((s32 *) (((s8 *) (&lbl_804760EC.value)) + 0));
  stack.spC = *((s32 *) (((s8 *) (&lbl_804760EC.value)) + 4));
  stack.sp10 = *((s32 *) (((s8 *) (&lbl_804760EC.value)) + 8));
  stack.sp14 = *((s32 *) (((s8 *) (&lbl_804760EC.value)) + 0xC));
  stack.sp8 = ((RecoveredFields_8031E708_TObjEneRecon__data_805D6B00 *) TObjEneRecon__data_805D6B00)->field_430;
  temp_r5 = (u8 *) ((RecoveredFields_8031E708_TObjEneRecon__data_805D6B00 *) TObjEneRecon__data_805D6B00)->field_42C;
  spawn_npc_enemy__6TLobbyFsiiiff((int) 0xC, (int) ((RecoveredFields_8031E708_temp_r5 *) temp_r5)->field_8, (int) ((RecoveredFields_8031E708_temp_r5 *) temp_r5)->field_C, (void *) (&stack.sp8), (f32) (*((f32 *) (((s8 *) (&lbl_804EC40C.value)) + 0xC))), (f32) TObjEneRecon__data_805DF3C0);
}

}
