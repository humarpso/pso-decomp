#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026EA60_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct RecoveredFields_8026EA60_arg0
{
  u8 unknown_0[0x1C];
  u8 field_1C;
  u8 unknown_1D[0x7];
  s32 field_24;
  u8 unknown_28[0xC];
  u32 field_34;
};

struct RecoveredFields_8026EA60_temp_r29
{
  u8 unknown_0[0x34];
  s32 field_34;
};

struct Sc_8026EBB0 { f32 x; f32 y; };

struct Tb_8026EBB0 { s16 e[0x13]; };

struct Wn_8026EBB0 { u8 pad[0x24]; s32 card; };

extern "C" {
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
void TWindowShortListCtrl__sub_8026F66C(u8 *arg0);
u8 * TLobby__sub_80101AB0(s32);
u8 get_field_ec__12TOSwitchItemFPv(void *);
s32 canSetMenuCursorAction(M2C_UNK, s32, u8, u8);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
u32 TItemObject__sub_80115DE8(int);
M2C_UNK set_slot__20TWindowActionPaletteFPvUc(int, int);
M2C_UNK set_mode__20TWindowActionPaletteFPvUc(int, int);
M2C_UNK TMainCursor__sub_8013DFC4(int);
void TWindowShortListCtrl__sub_8026E93C(u32 arg0, u32 arg1);
extern M2C_UNK lbl_805DD380;
void TWindowShortListCtrl__sub_8026EA48(u8 *arg0);
s32 fn_8002AE08(int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_player_input_active(int);
s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0);
void destroy_children__20TWindowShortListCtrlFPv(void *arg0);
void TWindowShortListCtrl__sub_8026EA48(u8 *arg0);
void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1);
extern RecoveredGlobal_8026EA60_lbl_8050E208 lbl_8050E208;
void TWindowShortListCtrl__sub_8026EA60(u8 *arg0);
s32 get_card_window__17TWindowSubComCardFUi(int);
void TWindowShortListCtrl__sub_8026E8EC(u8 *arg0, s32 arg1, s32 arg2);
s32 get_card_window__17TWindowSubComCardFUi(int);
void TWindowSubComCard__sub_802655E4(void *);
void set_selected_index__17TWindowSubComCardFPvs(void *, s16);
void TWindowSubComCard__sub_80265C30(void *);
void set_scroll_target__17TWindowSubComCardFPvff(void *, f32, f32);
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
void draw_technique_row__19TWindowSubTechniqueFiii(int, int, void *);
void TWindowShortListCtrl__sub_8026EBB0(Wn_8026EBB0 *arg0, s32 arg1, Sc_8026EBB0 *arg2);
}

extern "C" {

void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1);
void *create_window__20TWindowShortListCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
void destroy_children__20TWindowShortListCtrlFPv(void *arg0);
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
s16 get_selected_index__20TWindowShortListCtrlFPv(void* p);
s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0);
void render__20TWindowShortListCtrlFv(void);
void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1);
void set_displayed_item__20TWindowShortListCtrlFPvi(void *arg0, s32 arg1);
void *TCheckRoomSequence__sub_802664A8(s32, s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowChat__sub_8024AD30(s32);
s32 TWindowCtrl__sub_8024A1A8();
s32 TWindowCtrl__sub_8024AF74(s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK clear_flag_8__11TWindowCtrlFv();
M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);
s32 set_flag70_bit100__17TWindowOptionCtrlFPv(void *);
s32 set_flag70_bit10__16TObjCityMainWarpFPv();

void set_displayed_item__20TWindowShortListCtrlFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x38))) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, u32 *, 0x34));
    }
}

s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r31;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)((int) (M2C_FIELD(arg0, s32 *, 0x24))));
    if (temp_r3 == 0U) {
        return 0;
    }
    temp_r31 = (unsigned char *) (temp_r3 + 0x85C);
    if (temp_r31 == NULL) {
        return 0;
    }
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        return 1;
    }
    return ((u32) M2C_FIELD(temp_r31, u32 *, 0x34) >> 4U) & 1;
}

void TWindowShortListCtrl__sub_8026E8EC(u8 *arg0, s32 arg1, s32 arg2) {
    s16 *p = (s16 *)(get_card_window__17TWindowSubComCardFUi(*(s32 *)(arg0 + 0x24)) + 0x22C4);
    s16 t = p[arg1];
    p[arg1] = p[arg2];
    p[arg2] = t;
}

void TWindowShortListCtrl__sub_8026E93C(u32 arg0, u32 arg1) {
    s32 var_r30;
    s32 var_r4;
    s32 var_r5;
    u32 temp_r3;
    u32 var_r29;
    u32 var_r31;
    u32 var_r3;
    u8 var_r6;
    var_r31 = arg0;
    var_r3 = arg1;
    var_r30 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r3));
    if (var_r30 != 0) {
        var_r29 = M2C_FIELD(var_r30, u32 *, 0x424);
        if (var_r29 != 0U) {
            var_r3 = var_r31;
            temp_r3 = (unsigned long) (TLobby__sub_80101AB0((s32) var_r3));
            var_r31 = temp_r3;
            if ((var_r31 != 0) && (get_field_ec__12TOSwitchItemFPv((void *) temp_r3) == 3)) {
                var_r3 = var_r31;
                var_r31 = TItemObject__sub_80115DE8((int) (var_r3));
                if ((s32) var_r31 != -1) {
                    var_r4 = var_r30;
                    var_r3 = var_r29 + 0x520;
                    var_r6 = (u8) var_r31;
                    var_r5 = 4;
                    if (canSetMenuCursorAction((s32) var_r3, var_r4, 4U, var_r6) != 0) {
                        var_r3 = var_r29 + 0x520;
                        var_r4 = 4;
                        set_mode__20TWindowActionPaletteFPvUc((int) (var_r3), (int) (4));
                        var_r3 = var_r29 + 0x520;
                        var_r4 = (s32) (u8) var_r31;
                        set_slot__20TWindowActionPaletteFPvUc((int) (var_r3), (int) (var_r4));
                        var_r3 = var_r29 + 0x520;
                        TMainCursor__sub_8013DFC4((int) (var_r3));
                    }
                }
            }
        }
    }
}

void destroy_children__20TWindowShortListCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
}

void TWindowShortListCtrl__sub_8026EA48(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) M2C_FIELD(((u8 *)(&lbl_805DD380) + (s8) M2C_FIELD(arg0, u8 *, 0x1C)), u8 *, 0);
}

typedef struct RecoveredFields_8026EA60_arg0 RecoveredFields_8026EA60_arg0;
typedef struct RecoveredFields_8026EA60_temp_r29 RecoveredFields_8026EA60_temp_r29;
typedef struct RecoveredGlobal_8026EA60_lbl_8050E208 RecoveredGlobal_8026EA60_lbl_8050E208;
void TWindowShortListCtrl__sub_8026EA60(u8 *arg0) {
  s32 temp_r31;
  u32 temp_r3;
  u8 temp_r31_2;
  u8 temp_r3_2;
  u8 temp_r3_3;
  u8 temp_r3_4;
  u8 temp_r3_5;
  u8 temp_r3_6;
  u8 *temp_r29;
  temp_r31 = is_player_input_active((int) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_24);
  if (TWindowShortListCtrl__check_controller_button((void *) ((((u8 *) (&lbl_8050E208.value)) + (temp_r31 * 0x50)) + 0x20), (int) fn_8002AE08((int) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_24)) != 0)
  {
    temp_r31_2 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
    temp_r3 = ((u32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((int) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_24)));
    if (temp_r3 != 0U)
    {
      temp_r29 = (u8 *) (temp_r3 + 0x85C);
      if ((temp_r29 != 0) && (((u32) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_34) == 0U))
      {
        ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C + 1);
        temp_r3_2 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
        if (((s8) temp_r3_2) >= 4)
        {
          ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (temp_r3_2 - 4);
        }
        if ((((s32) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C) == 2) && (is_technique_usable__20TWindowShortListCtrlFPv((u8 *)((void *) arg0)) == 0))
        {
          ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C + 1);
          temp_r3_3 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
          if (((s8) temp_r3_3) >= 4)
          {
            ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (temp_r3_3 - 4);
          }
        }
        if (((RecoveredFields_8026EA60_temp_r29 *) temp_r29)->field_34 & 0x10)
        {
          temp_r3_4 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
          if (((s32) temp_r3_4) == 3)
          {
            ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (temp_r3_4 + 1);
            temp_r3_5 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
            if (((s8) temp_r3_5) >= 4)
            {
              ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C = (u8) (temp_r3_5 - 4);
            }
          }
        }
        temp_r3_6 = ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C;
        if (((s8) temp_r31_2) != ((s8) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_1C))
        {
          set_card_window_flags__20TWindowShortListCtrlFii((s32)((int) ((RecoveredFields_8026EA60_arg0 *) arg0)->field_24), (s32)((int) ((s32) ((s8) temp_r3_6))));
          destroy_children__20TWindowShortListCtrlFPv((void *) arg0);
          TWindowShortListCtrl__sub_8026EA48((u8 *)((void *) arg0));
        }
      }
    }
  }
}

void TWindowShortListCtrl__sub_8026EBB0(Wn_8026EBB0 *arg0, s32 arg1, Sc_8026EBB0 *arg2) {
    s32 i;
    s16 cur;
    Tb_8026EBB0 *tbl;
    tbl = (Tb_8026EBB0 *)(get_card_window__17TWindowSubComCardFUi(arg0->card) + 0x22C4);
    cur = get_cursor_pos__20TWindowShortListCtrlFPv((void*)((void *)arg1));
    TWindowSubComCard__sub_802655E4((void *)arg1);
    for (i = 0; i < 0x13; i++) {
        draw_technique_row__19TWindowSubTechniqueFiii(tbl->e[i], arg0->card, (void *)arg1);
    }
    set_scroll_target__17TWindowSubComCardFPvff((void *)arg1, arg2->x, arg2->y);
    TWindowSubComCard__sub_80265C30((void *)arg1);
    set_selected_index__17TWindowSubComCardFPvs((void *)arg1, cur);
}

void *create_window__20TWindowShortListCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r31;

    temp_r31 = TCheckRoomSequence__sub_802664A8(arg1, 0x13, M2C_FIELD(arg0, s32 *, 0x24));
    set_flag70_bit10__16TObjCityMainWarpFPv();
    M2C_FIELD(temp_r31, s32 *, 0x5C) = 0x01000000;
    set_flag70_bit100__17TWindowOptionCtrlFPv(temp_r31);
    TWindowShortListCtrl__sub_8026EBB0((Wn_8026EBB0 *)((void*)((void*)(arg0))), (s32)((void*)((void*)(temp_r31))), (Sc_8026EBB0 *)((void*)((void*)(arg2))));
    return temp_r31;
}
void render__20TWindowShortListCtrlFv(void) {  }

extern void *__vt__20TWindowShortListCtrl[];

void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1) {
    s32 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__20TWindowShortListCtrl;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(M2C_FIELD(arg0, s32 *, 0x24)));
        if ((temp_r3 != 0) && (TWindowCtrl__sub_8024AF74(M2C_FIELD(arg0, s32 *, 0x24)) == 0) && (TWindowCtrl__sub_8024A1A8() == 0)) {
            init_parts__10TObjPlayerFPv(temp_r3);
        }
        TWindowChat__sub_8024AD30(M2C_FIELD(arg0, s32 *, 0x24));
        clear_flag_8__11TWindowCtrlFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0x10, 0xFFFCFFFF);
}
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x78); }

void TWindowShortListCtrl__sub_8026F66C(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x7A) = get_cursor_pos__20TWindowShortListCtrlFPv((void*)arg0);
}

s16 get_selected_index__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x7a); }

}
