#include "pso/TAdMultiChgGameModeGC.h"

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_802FFCE4_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct RecoveredFields_802FFCE4_arg0
{
  u8 unknown_0[0x20];
  s32 field_20;
  s32 field_24;
  s32 field_28;
  s32 field_2C;
};

struct Txt_802FFE58 { s32 v[9]; };

struct Pos_802FFE58 { s32 v[6]; };

struct Cur_802FFE58 { s32 v[2]; };

struct Obj_802FFE58 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s32 f1C;
    s32 f20;
    s32 f24;
    void *f28;
    void *f2C;
};

extern "C" {
s32 get_localized_text_entry(int, int);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(int);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 set_default_camera__21TAdMultiChgGameModeGCFv();
s32 set_mode_18__21TAdMultiChgGameModeGCFv();
s32 set_mode_state_0e__21TAdMultiChgGameModeGCFv();
s32 set_mode_state_0d__21TAdMultiChgGameModeGCFv();
s32 request_scene_change__21TAdMultiChgGameModeGCFv();
s32 set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(int, int, int);
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 check_players_ready__21TAdMultiChgGameModeGCFv(void *);
extern RecoveredGlobal_802FFCE4_lbl_8050E208 lbl_8050E208;
extern s32 lbl_805D69E8;
void run_task__21TAdMultiChgGameModeGCFv(RecoveredFields_802FFCE4_arg0 *arg0);
void create_draw_line_ctrl__13TAdMcSelectGCFiif(void *, s32, f32);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *);
void __ct__9TAdBackGCFv(void *, void *);
void __ct__12TAdBackTxtGCFv(void *, void *);
void __ct__8TAdRayGCFv(void *, void *);
void __ct__10TAdTitleGCFv(void *, void *, s32);
void __ct__14TAdSelectTxtGCFv(void *, void *, void *, s32);
void __ct__13TAdTitleTexGCFv(void *, void *);
void add_item_rect__12TLevelSelectFPvPv(void *, void *);
void *__ct__14TAdSelectCurGCFv(void *, void *, void *, void *);
void *__ct__13TAdGuideTxtGCFv(void *, void *);
void set_ad_field__6TLobbyFPvi(void *, s32);
extern Txt_802FFE58 lbl_80474DF8;
extern Cur_802FFE58 lbl_80474E1C[];
extern Pos_802FFE58 lbl_80474E24;
extern void *__vt__21TAdMultiChgGameModeGC[];
extern s32 lbl_805D4058;
extern const f32 lbl_805DEF38;
Obj_802FFE58 *__ct__21TAdMultiChgGameModeGCFv(Obj_802FFE58 *self);
}

extern "C" {

void fn_802FFC78(void);
void fn_802FFC7C(void);
void render__21TAdMultiChgGameModeGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(u32);
s32 TAdMultiPlyChrSelectGC__sub_802C658C(u32);

void fn_802FFC78(void) {  }
void fn_802FFC7C(void) {  }
void render__21TAdMultiChgGameModeGCFv(void) {  }
s32 check_players_ready__21TAdMultiChgGameModeGCFv(void * _w0) {
    u32 var_r31;

    var_r31 = 0U;
loop_1:
    if ((TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) != 0) && (TAdMultiPlyChrSelectGC__sub_802C658C(var_r31) > 3)) {
        return 1;
    }
    var_r31 += 1;
    if (var_r31 >= 4U) {
        return 0;
    }
    goto loop_1;
}
typedef struct RecoveredFields_802FFCE4_arg0 RecoveredFields_802FFCE4_arg0;
typedef struct RecoveredGlobal_802FFCE4_lbl_8050E208 RecoveredGlobal_802FFCE4_lbl_8050E208;
void run_task__21TAdMultiChgGameModeGCFv(RecoveredFields_802FFCE4_arg0 *arg0) {
  s32 temp_r3;
  s32 *new_var;
  s32 temp_r4;
  set_default_camera__21TAdMultiChgGameModeGCFv();
  arg0->field_20 = TAdSinglePlyChrSelectGC__sub_801334DC((int) arg0->field_2C);
  temp_r4 = arg0->field_20;
  new_var = &arg0->field_2C;
  if (((s32) arg0->field_24) != temp_r4)
  {
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi((int) arg0->field_28, (int) 0, (int) get_localized_text_entry((int) 0x21, (int) arg0->field_20));
  }
  if ((TWindowShortListCtrl__check_controller_button((void *) (((u8 *) (&lbl_8050E208.value)) + 0x20), (int) 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) (((u8 *) (&lbl_8050E208.value)) + 0x160), (int) 2) != 0))
  {
    request_scene_change__21TAdMultiChgGameModeGCFv();
  }
  else
    if (1 == get_selected_slot__23TAdSinglePlyChrSelectGCFPv((int) arg0->field_2C))
  {
    temp_r3 = TAdSinglePlyChrSelectGC__sub_801334DC((int) (*new_var));
    switch (temp_r3)
    {
      case 0:
        set_mode_state_0d__21TAdMultiChgGameModeGCFv();
        break;
      case 1:
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        lbl_805D69E8 = 1;
        set_mode_18__21TAdMultiChgGameModeGCFv();
        break;
      case 2:
        if (check_players_ready__21TAdMultiChgGameModeGCFv((void *)((void *) ((u8 *) arg0))) != 0)
      {
        set_mode_state_0e__21TAdMultiChgGameModeGCFv();
      }
      else
      {
        request_scene_change__21TAdMultiChgGameModeGCFv();
      }
        break;
    }
  }
  arg0->field_24 = (s32) arg0->field_20;
}
TAdMultiChgGameModeGC::~TAdMultiChgGameModeGC() {}
Obj_802FFE58 *__ct__21TAdMultiChgGameModeGCFv(Obj_802FFE58 *self) {
    void *p;
    __ct__7TObjectFP7TObject(self);
    self->vt = __vt__21TAdMultiChgGameModeGC;
    self->f0 = lbl_805D4058;
    self->f1C = 0;
    self->f20 = 2;
    self->f24 = -1;
    self->f28 = 0;
    self->f2C = 0;
    if ((p = __nw__7TObjectFUl(0x24)) != NULL) {
        __ct__9TAdBackGCFv(p, self);
    }
    if ((p = __nw__7TObjectFUl(0x28)) != NULL) {
        __ct__12TAdBackTxtGCFv(p, self);
    }
    if ((p = __nw__7TObjectFUl(0x24)) != NULL) {
        __ct__8TAdRayGCFv(p, self);
    }
    if ((p = __nw__7TObjectFUl(0x138)) != NULL) {
        __ct__10TAdTitleGCFv(p, self, 0xF);
    }
    {
        Txt_802FFE58 txt = lbl_80474DF8;
        if ((p = __nw__7TObjectFUl(0xE0)) != NULL) {
            __ct__14TAdSelectTxtGCFv(p, self, &txt.v[0], 0xC);
        }
        if ((p = __nw__7TObjectFUl(0xE0)) != NULL) {
            __ct__14TAdSelectTxtGCFv(p, self, &txt.v[3], 0xD);
        }
        if ((p = __nw__7TObjectFUl(0xE0)) != NULL) {
            __ct__14TAdSelectTxtGCFv(p, self, &txt.v[6], 0xE);
        }
        if ((p = __nw__7TObjectFUl(0x9C)) != NULL) {
            __ct__13TAdTitleTexGCFv(p, self);
        }
        {
            Cur_802FFE58 cur = lbl_80474E1C[0];
            Pos_802FFE58 pos = lbl_80474E24;
            p = __nw__7TObjectFUl(0x708);
            if (p != NULL) {
                p = __ct__14TAdSelectCurGCFv(p, self, &pos, &cur);
            }
            self->f2C = p;
            add_item_rect__12TLevelSelectFPvPv(self->f2C, &pos.v[0]);
            add_item_rect__12TLevelSelectFPvPv(self->f2C, &pos.v[2]);
            add_item_rect__12TLevelSelectFPvPv(self->f2C, &pos.v[4]);
        }
    }
    set_ad_field__6TLobbyFPvi(self->f2C, self->f20);
    p = __nw__7TObjectFUl(0x44);
    if (p != NULL) {
        p = __ct__13TAdGuideTxtGCFv(p, self);
    }
    self->f28 = p;
    create_draw_line_ctrl__13TAdMcSelectGCFiif(self, 0xF, lbl_805DEF38);
    return self;
}

}
