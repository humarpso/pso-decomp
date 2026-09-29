#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct M2CCopy_FC0 { u8 bytes[0xfc0]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off

struct M2CCopy_C0
{
  u8 bytes[0xc0];
};

extern "C" {
u8 *TAdSinglePlyChrSelectGC__sub_801FFC74(u8 *arg0, u8 *arg1);
s32 is_technique_ready__8TTecCtrlFv();
s32 update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_card_window__17TWindowSubComCardFUi(u32);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK clear_flags__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
s32 try_assign_battle_ctrl__10TObjPlayerFiUs(s32, u16);
s32 TLobby__sub_8030A770(void);
M2C_UNK TCameraCtrl__sub_8006B324();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FF4F0(void);
M2C_UNK TWindowSubComCard__sub_8007A9C0(int, int);
s32 TAdSinglePlyChrSelectGC__sub_801FFCFC(s32 arg0, s32 arg1);
void *memset(void *, int, unsigned long);
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;
void TAdSinglePlyChrSelectGC__sub_801FF58C(void);
}

extern "C" {

s32 init__23TAdSinglePlyChrSelectGCFv(void);
s32 load_and_verify_data(s32 arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FFF98(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80200470();
M2C_UNK TAdSinglePlyChrSelectGC__sub_802010E8();
u32 TAdSinglePlyChrSelectGC__sub_80201204(u32 *, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8028DC14();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK __dl__FPv(u32 *);
u32 *alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
M2C_UNK clear_flags__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK copy_card_window_data();
s32 fn_80203284();
s32 get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
M2C_UNK init_battle_selection__10TObjPlayerFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_timestamped_data();
u32 *init_windows__23TAdSinglePlyChrSelectGCFi();
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK memcpy(s32, s32, u32);
M2C_UNK set_save_slot__23TAdSinglePlyChrSelectGCFi(M2C_UNK);

extern s32 lbl_805D53A0;
extern u32 lbl_805D5F58;
extern u32 lbl_805D5F60;
extern u32 lbl_805D5F64;

s32 init__23TAdSinglePlyChrSelectGCFv(void) {
    init_slots__23TAdSinglePlyChrSelectGCFv();
    if (((u32) lbl_805D5F60 != 0U) && ((u32) lbl_805D5F64 != 0U) && ((u32) lbl_805D5F58 != 0U)) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (is_technique_ready__8TTecCtrlFv() == 0) && (fn_80203284() != 1)) {
            init_battle_selection__10TObjPlayerFv();
            TAdSinglePlyChrSelectGC__sub_8028DC14();
        }
        clear_flags__23TAdSinglePlyChrSelectGCFi(3);
        TAdSinglePlyChrSelectGC__sub_802010E8();
        copy_card_window_data();
        TAdSinglePlyChrSelectGC__sub_80200470();
    }
    return 0xFFFF0000;
}

extern s32 lbl_80513910[];
extern s32 lbl_805D5F68;
extern s32 lbl_805D5F98;

s32 TAdSinglePlyChrSelectGC__sub_801FF4F0(void) {
  u32 temp_r3;
  u32 var_r31;
  u8 *temp_r3_2;
  init_slots__23TAdSinglePlyChrSelectGCFv();
  TCameraCtrl__sub_8006B324();
  var_r31 = 0;
  do
  {
    if (((TPlayerBattleCtrl4P__sub_801BA74C((s32)((int) var_r31)) != 0U) && (((volatile long)is_technique_ready__8TTecCtrlFv()) == 0)) && (TLobby__sub_8030A770() == 0))
    {
      temp_r3 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
      if (temp_r3 != 0U)
      {
        try_assign_battle_ctrl__10TObjPlayerFiUs((s32) temp_r3, (u16) var_r31);
      }
      temp_r3_2 = (u8 *) get_card_window__17TWindowSubComCardFUi(var_r31);
      if (temp_r3_2 != 0)
      {
        update_elapsed_time__23TAdSinglePlyChrSelectGCFPv(temp_r3_2);
      }
    }
    clear_flags__23TAdSinglePlyChrSelectGCFi((M2C_UNK)(3));
    var_r31 += 1;
  }
  while (((s32) var_r31) < 4);
  return 0xFFFF0000;
}

void TAdSinglePlyChrSelectGC__sub_801FF58C(void) {
    if (lbl_805D5F58 != 0) {
        memset((void *)lbl_805D5F58, 0, 0x1156C);
        memset((void *)lbl_805D5F60, 0, 0x41C);
        memset((void *)lbl_805D5F64, 0, 0x2370);
    }
}

s32 load_and_verify_data(s32 arg0) {
    s32 temp_r3;
    u32 *var_r31;
    u32 temp_r30;

    set_save_slot__23TAdSinglePlyChrSelectGCFi(0);
    temp_r3 = get_serial_access_field_118__23TAdSinglePlyChrSelectGCFPv();
    lbl_80513910[1] = temp_r3;
    lbl_80513910[0] = temp_r3;
    memcpy(lbl_805D5F68, lbl_805D5F98 + 0x2048, 0xE28C);
    TAdSinglePlyChrSelectGC__sub_801FFF98(lbl_805D5F68);
    var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv(0xE28C);
    if (var_r31 != NULL) {
        var_r31 = init_windows__23TAdSinglePlyChrSelectGCFi();
    }
    TAdSinglePlyChrSelectGC__sub_801FFC74((u8 *)(var_r31), (u8 *)(lbl_805D5F68));
    temp_r30 = *var_r31;
    *var_r31 = 0U;
    if (temp_r30 != TAdSinglePlyChrSelectGC__sub_80201204(var_r31, 0xE28C)) {
        if (arg0 != 0) {
            __dl__FPv(var_r31);
            return 0;
        }
        init_timestamped_data();
        goto block_9;
    }
    if (arg0 != 0) {
        __dl__FPv(var_r31);
        return 1;
    }
    set_save_slot__23TAdSinglePlyChrSelectGCFi(1);
block_9:
    __dl__FPv(var_r31);
    return 1;
}
u8 *TAdSinglePlyChrSelectGC__sub_801FFC74(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    TAdSinglePlyChrSelectGC__sub_801FFCFC((s32)((void *) (arg0 + 4)), (s32)((void *) (arg1 + 4)));
    *(M2CCopy_FC0 *)((s32) (arg0 + 0xD2C0) + 4) = *(const M2CCopy_FC0 *)((s32) (arg1 + 0xD2C0) + 4);
    M2C_FIELD(arg0, s32 *, 0xE284) = (s32) M2C_FIELD(arg1, s32 *, 0xE284);
    M2C_FIELD(arg0, s32 *, 0xE288) = (s32) M2C_FIELD(arg1, s32 *, 0xE288);
    return arg0;
}
typedef struct M2CCopy_C0 M2CCopy_C0;
#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
s32 TAdSinglePlyChrSelectGC__sub_801FFCFC(s32 arg0, s32 arg1) {
  u32 end;
  u32 var_r30;
  s32 var_r29;
  *((M2CCopy_C0 *) arg0) = *((const M2CCopy_C0 *) arg1);
  var_r30 = arg0 + 0xC0;
  end = arg0;
  end = end + 0xD2C0;
  var_r29 = arg1 + 0xC0;
  do
  {
    TWindowSubComCard__sub_8007A9C0((int) var_r30, (int) var_r29);
    var_r30 += 0x100;
    var_r29 += 0x100;
  }
  while (var_r30 < end);
  return arg0;
}

}
