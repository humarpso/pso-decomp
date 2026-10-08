#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_80285E10 { u8 a, b, c, d; };

struct Data_80285E10 { u8 pad[4]; u16 vals[4]; Rec_80285E10 recs[1]; };

extern "C" {
void TWindowSubSymbolChatPartsSet__sub_8028625C(void *);
void set_selection_and_refresh__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1);
s32 find_free_entry__20TWindowSubSymbolChatFPvi(s32, s32);
s32 get_instance__20TWindowSubSymbolChatFv(void);
u16 *TWindowSubSymbolChatPartsSet__sub_802482B8(void *, s32);
u16 *get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *, s32);
u16 *get_parts_entry__28TWindowSubSymbolChatPartsSetFii(void *, s32);
void TWindowSubSymbolChatPartsSet__sub_8028625C(void *);
extern const f32 lbl_805DD810;
void init_symbol_layout__20TWindowSubSymbolChatFPvPv(u8 *arg0, s32 *arg1);
s32 find_free_entry__20TWindowSubSymbolChatFPvi(s32, s32);
s32 TWindowSubSymbolChat__sub_800771C4(int, int);
s32 get_data_ptr__20TWindowSubSymbolChatFPv();
s32 get_instance__20TWindowSubSymbolChatFv(void);
u16 *TWindowSubSymbolChatPartsSet__sub_802482B8(void *, s32);
u16 *get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *, s32);
u16 *get_parts_entry__28TWindowSubSymbolChatPartsSetFii(void *, s32);
s32 calc_remaining_slots__20TWindowSubSymbolChatFv();
extern const f32 lbl_805DD810;
s32 select_symbol_chat_record__20TWindowSubSymbolChatFPvPvPv(u8 *arg0, s8 *arg1, s32 *arg2);
}

extern "C" {

#pragma push
#pragma opt_lifetimes off
#pragma opt_loop_invariants off
s32 select_symbol_chat_record__20TWindowSubSymbolChatFPvPvPv(u8 *arg0, s8 *arg1, s32 *arg2) {
    Data_80285E10 *temp_r28;
    s32 var_r31;
    s16 temp_r0;
    s32 *temp_r3;
    s32 temp_r3_2;
    s32 var_r29;
    u16 *temp_r28_2;
    u16 *temp_r29_2;
    u16 *temp_r3_3;
    u16 temp_r8;
    u32 temp_r4;
    u8 *temp_r29;
    s32 temp_r27;
    M2C_FIELD(arg0, s32 **, 0x84) = arg2;
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x84);
    *temp_r3 = 0;
    temp_r27 = get_instance__20TWindowSubSymbolChatFv();
    temp_r28 = (Data_80285E10 *)get_data_ptr__20TWindowSubSymbolChatFPv();
    temp_r3_2 = calc_remaining_slots__20TWindowSubSymbolChatFv();
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x6E);
    if (temp_r3_2 > temp_r0) {
        M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DD810;
        temp_r29 = (u8 *)&temp_r28->recs[temp_r0];
        M2C_FIELD(arg0, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s16 *, 0x6E);
        M2C_FIELD(arg0, s32 *, 0x78) = find_free_entry__20TWindowSubSymbolChatFPvi((s32)((int) (temp_r27)), (s32)((int) (0)));
        var_r31 = 0;
        M2C_FIELD(arg0, s16 *, 0x6E) = (s16) (s8) M2C_FIELD(temp_r29, u8 *, 0);
        M2C_FIELD(arg0, s16 *, 0x6A) = (s16) M2C_FIELD(temp_r29, u8 *, 1);
        M2C_FIELD(arg0, s16 *, 0x6C) = (s16) M2C_FIELD(temp_r29, u8 *, 2);
        *M2C_FIELD(arg0, s32 **, 0x7C) = M2C_FIELD(temp_r29, u8 *, 3) & 1;
        *M2C_FIELD(arg0, s32 **, 0x80) = ((u8) M2C_FIELD(temp_r29, u8 *, 3) >> 1U) & 1;
        do {
            temp_r28_2 = get_parts_entry__28TWindowSubSymbolChatPartsSetFii(arg0, var_r31);
            temp_r29_2 = get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(arg0, var_r31);
            temp_r3_3 = TWindowSubSymbolChatPartsSet__sub_802482B8(arg0, var_r31);
            var_r31 += 1;
            *temp_r28_2 |= 2;
            *temp_r29_2 |= 2;
            *temp_r3_3 |= 2;
        } while (var_r31 < 4);
        M2C_FIELD(arg0, s8 *, 0x69) = 2;
        return 0;
    }
    M2C_FIELD(arg0, s8 **, 0x70) = arg1;
    var_r31 = 0;
    M2C_FIELD(arg0, s8 *, 0x69) = 3;
    var_r29 = M2C_FIELD(arg0, s16 *, 0x6E) - temp_r3_2;
    for (; var_r31 < 4; var_r31++) {
        if (TWindowSubSymbolChat__sub_800771C4((int) (temp_r27), (int) (var_r31)) != 0) {
            if (var_r29-- <= 0) {
                temp_r4 = (u32) var_r31 >> 0x1FU;
                temp_r8 = temp_r28->vals[var_r31];
                M2C_FIELD(arg0, s32 *, 0x74) = var_r31;
                M2C_FIELD(arg0, s32 *, 0x78) = var_r31;
                M2C_FIELD(arg0, s16 *, 0x6A) = (s16) (((var_r31 & 1) ^ temp_r4) - temp_r4);
                M2C_FIELD(arg0, s16 *, 0x6C) = (s16) (var_r31 / 2);
                M2C_FIELD(arg0, s16 *, 0x6E) = (s16) (u8) temp_r8;
                *M2C_FIELD(arg0, s8 **, 0x70) = (temp_r8 >> 8U) & 7;
                *M2C_FIELD(arg0, s32 **, 0x7C) = (temp_r8 >> 0xBU) & 1;
                *M2C_FIELD(arg0, s32 **, 0x80) = (temp_r8 >> 0xCU) & 1;
                return 1;
            }
        }
    }
    return 1;
}
#pragma pop

void set_selection_and_refresh__20TWindowSubSymbolChatFPvi(u8 *arg0, s32 arg1) {
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
