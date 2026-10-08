#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowSubSymbolChatPartsSet__sub_8028625C(void *);
void TWindowSubSymbolChat__sub_80285FF4(u8 *arg0, s32 arg1);
s32 find_free_entry__20TWindowSubSymbolChatFPvi(s32, s32);
s32 get_instance__20TWindowSubSymbolChatFv(void);
u16 *TWindowSubSymbolChatPartsSet__sub_802482B8(void *, s32);
u16 *get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *, s32);
u16 *get_parts_entry__28TWindowSubSymbolChatPartsSetFii(void *, s32);
void TWindowSubSymbolChatPartsSet__sub_8028625C(void *);
extern const f32 lbl_805DD810;
void init_symbol_layout__20TWindowSubSymbolChatFPvPv(u8 *arg0, s32 *arg1);
}

extern "C" {

void TWindowSubSymbolChat__sub_80285FF4(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    M2C_FIELD(arg0, s8 *, 0x69) = 1;
    TWindowSubSymbolChatPartsSet__sub_8028625C(arg0);
}
void init_symbol_layout__20TWindowSubSymbolChatFPvPv(u8 *arg0, s32 *arg1) {
  s32 var_r29;
  u16 *temp_r30;
  u16 *temp_r31;
  u16 *temp_r3;
  s32 temp_r3_2;
  *((s32 **) (((s8 *) arg0) + 0x84)) = arg1;
  *((f32 *) (((s8 *) arg0) + 0x94)) = (f32) lbl_805DD810;
  if (((s32) (*arg1)) == 1)
  {
    *((s16 *) (((s8 *) arg0) + 0x6A)) = 0x14;
    *((s16 *) (((s8 *) arg0) + 0x6C)) = 0x20;
  }
  else
  {
    *((s16 *) (((s8 *) arg0) + 0x6A)) = 0x20;
    *((s16 *) (((s8 *) arg0) + 0x6C)) = 0x20;
  }
  var_r29 = 0;
  do
  {
    temp_r30 = (u16 *) get_parts_entry__28TWindowSubSymbolChatPartsSetFii(arg0, var_r29);
    temp_r31 = (u16 *) get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(arg0, var_r29);
    temp_r3 = (u16 *) TWindowSubSymbolChatPartsSet__sub_802482B8(arg0, var_r29);
    var_r29 += 1;
    *temp_r30 |= 2;
    *temp_r31 |= 2;
    *temp_r3 |= 2;
  }
  while (var_r29 < 4);
  temp_r3_2 = get_instance__20TWindowSubSymbolChatFv();
  *((s32 *) (((s8 *) arg0) + 0x74)) = find_free_entry__20TWindowSubSymbolChatFPvi(temp_r3_2, 0);
  *((s32 *) (((s8 *) arg0) + 0x78)) = find_free_entry__20TWindowSubSymbolChatFPvi(temp_r3_2, (*((s32 *) (((s8 *) arg0) + 0x74))) + 1);
  *((s8 *) (((s8 *) arg0) + 0x69)) = 0;
  TWindowSubSymbolChatPartsSet__sub_8028625C((void *) arg0);
}

}
