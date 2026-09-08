#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_800DFC18
{
  s32 sp8;
  s32 spC;
  s32 sp10;
  s32 sp14;
  s32 sp18;
  s32 sp1C;
  s32 sp20;
  s32 sp24;
};

struct RecoveredGlobal_800DFC18_lbl_8043CDA8
{
  M2C_UNK value;
  u8 remaining[0xC];
};

struct RecoveredGlobal_800DFC18_lbl_8043CDB8
{
  M2C_UNK value;
  u8 remaining[0xC];
};

extern "C" {
s32 TObjPlayer__sub_800114D8(void *, void *, f32);
int TObjEnePanarms__sub_800DFBD0(u8 *arg0, s32 arg1, f32 farg0);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern RecoveredGlobal_800DFC18_lbl_8043CDA8 lbl_8043CDA8;
extern RecoveredGlobal_800DFC18_lbl_8043CDB8 lbl_8043CDB8;
extern u8 *TObjEnePanarms__data_805D5278;
extern const f32 lbl_805DA520;
extern const f32 TObjEnePanarms__data_805DA524;
void TObjEnePanarms__sub_800DFC18(void);
}

extern "C" {

int fn_8002AE64(void*);
int fn_800660B8(void*);
int TObjPlayer__sub_80143198(void*, void*);
int get_state_flag__14TObjEnePanarmsFPv(void* p);
int TObjEnePanarms__sub_800DFBC4(void* p);

int TObjEnePanarms__sub_800DFBD0(u8 *arg0, s32 arg1, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = TObjPlayer__sub_800114D8((void *) (arg0), (void *) (arg1), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}
typedef struct RecoveredGlobal_800DFC18_lbl_8043CDA8 RecoveredGlobal_800DFC18_lbl_8043CDA8;
typedef struct RecoveredGlobal_800DFC18_lbl_8043CDB8 RecoveredGlobal_800DFC18_lbl_8043CDB8;
typedef struct Stack_800DFC18 Stack_800DFC18;
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
typedef char RecoveredGlobal_800DFC18_lbl_8043CDA8_size[((sizeof(RecoveredGlobal_800DFC18_lbl_8043CDA8)) == 0x10) ? (1) : (-1)];
typedef char RecoveredGlobal_800DFC18_lbl_8043CDB8_size[((sizeof(RecoveredGlobal_800DFC18_lbl_8043CDB8)) == 0x10) ? (1) : (-1)];
void TObjEnePanarms__sub_800DFC18(void) {
  s8 *new_var;
  Stack_800DFC18 stack;
  s32 temp_r8;
  u8 *temp_r5;
  u8 *temp_r5_2;
  stack.sp18 = *((s32 *) (((s8 *) (&lbl_8043CDA8.value)) + 0));
  stack.sp1C = *((s32 *) (((s8 *) (&lbl_8043CDA8.value)) + 4));
  stack.sp20 = *((s32 *) (((s8 *) (&lbl_8043CDA8.value)) + 8));
  stack.sp24 = *((s32 *) (((s8 *) (&lbl_8043CDA8.value)) + 0xC));
  temp_r8 = *((s32 *) ((new_var = (s8 *) TObjEnePanarms__data_805D5278) + 0x430));
  stack.sp8 = *((s32 *) (((s8 *) (&lbl_8043CDB8.value)) + 0));
  stack.sp18 = temp_r8;
  stack.spC = *((s32 *) (((s8 *) (&lbl_8043CDB8.value)) + 4));
  stack.sp10 = *((s32 *) (((s8 *) (&lbl_8043CDB8.value)) + 8));
  stack.sp14 = *((s32 *) (((s8 *) (&lbl_8043CDB8.value)) + 0xC));
  stack.sp8 = temp_r8;
  temp_r5 = (u8 *) (*((u8 **) (new_var + 0x42C)));
  spawn_npc_enemy__6TLobbyFsiiiff((int) 0x24, (int) (*((s32 *) (((s8 *) temp_r5) + 0x18))), (int) (*((s32 *) (((s8 *) temp_r5) + 0x1C))), (void *) (&stack.sp18), (f32) lbl_805DA520, (f32) TObjEnePanarms__data_805DA524);
  temp_r5_2 = (u8 *) (*((u8 **) (((s8 *) TObjEnePanarms__data_805D5278) + 0x42C)));
  spawn_npc_enemy__6TLobbyFsiiiff((int) 0x25, (int) (*((s32 *) (((s8 *) temp_r5_2) + 0x28))), (int) (*((s32 *) (((s8 *) temp_r5_2) + 0x2C))), (void *) (&stack.sp8), (f32) lbl_805DA520, (f32) TObjEnePanarms__data_805DA524);
}

}
