#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct M2CCopy_28
{
  u8 bytes[0x28];
};

extern "C" {
void TObjPlayer__sub_801D1F44(void* p);
extern M2C_UNK fn_80152EF8[];
void __construct_array(void *, void *, int, int, int);
void * TObjPlayer__sub_801D1EE4(void *arg0);
int TFontSmallLobby__sub_801C0228(void*);
s32 TObjPlayer__sub_801D1E7C(s32 arg0, u8 *arg1);
}

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

typedef struct M2CCopy_28 M2CCopy_28;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 TObjPlayer__sub_801D1E7C(s32 arg0, u8 *arg1) {
  s32 var_r30;
  s32 var_r3;
  s32 var_r5;
  s32 var_r6;
  u8 *var_r31;
  u8 *var_r4;
  var_r30 = arg0;
  var_r31 = (u8 *) arg1;
  TFontSmallLobby__sub_801C0228((void*)(arg0));
  var_r6 = *((s32 *) (((s8 *) var_r31) + 4));
  var_r3 = *((s32 *) (((s8 *) var_r31) + 8));
  if ((arg0 && arg0) && arg0)
  {
  }
  var_r5 = var_r30 + 8;
  var_r4 = (u8 *) (var_r31 + 8);
  *((s32 *) (((s8 *) var_r30) + 4)) = var_r6;
  *((s32 *) (((s8 *) var_r30) + 8)) = var_r3;
  *((M2CCopy_28 *) (var_r5 + 4)) = *((const M2CCopy_28 *) (((s32) var_r4) + 4));
  var_r5 += 0x28;
  var_r4 += 0x28;
  var_r3 = var_r30;
  return var_r3;
}

void *TObjPlayer__sub_801D1EE4(void *arg0) {
    TObjPlayer__sub_801D1F44((void*)((void *)((char *)arg0 + 4)));
    __construct_array((void *)((char *)arg0 + 12), fn_80152EF8, 0, 4, 10);
    M2C_FIELD(arg0, u8 *, 0x0) = 73;
    M2C_FIELD(arg0, u8 *, 0x1) = 13;
    return arg0;
}

}
