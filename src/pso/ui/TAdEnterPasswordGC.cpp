#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Elt80364258_80364258 { s32 f0; };

struct RecoveredGlobal_8032B904_lbl_80477278 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8032B904_lbl_80477278_size[sizeof(RecoveredGlobal_8032B904_lbl_80477278) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 {
    char value;
    u8 remaining[8];
};

struct RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct T_8032BBF0 { u8 pad[0x20]; s32 arr[24]; s32 count; };

struct B_8032BC1C { u8 pad[0x18]; };

struct VObj_8032BC1C : B_8032BC1C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};

struct O_8032BC1C { u8 pad[0x20]; VObj_8032BC1C *items[1]; };

struct O2_8032BC1C { u8 pad[0x80]; s32 n; };

struct Pw_8032B6A0
{
  u8 pad0[0x20];
  s32 f20;
  u8 pad24[0x2C - 0x24];
  u32 serial;
  u8 pad30[0x38 - 0x30];
  s32 f38;
  s32 f3C;
  s32 len;
};

struct TAdEnterPasswordGC {
    virtual void m0();
    char pad[0x18];
    s32 state;
    s32 f20;
    s32 f24;
    void open_keyboard_window(void *);
    void update_password_input(void *);
    void request_transition(void *);
    void set_multi_chg_game_mode_0x14(void *);
    void close_window_and_destroy(void *);
};
typedef TAdEnterPasswordGC TAdEnterPasswordGC_8032B984;
typedef void (TAdEnterPasswordGC_8032B984::*Pmf_8032B984)();

extern "C" {
void fn_8032B318(void *, void *);
extern u8 lbl_804ED9F0[];
extern s32 lbl_805D6CA4;
#pragma explicit_zero_data on
RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 TAdEnterPasswordGC__data_804EDA20 = { 0 };
#pragma explicit_zero_data off
}

extern "C" {
void TAdEnterPasswordGC__sub_8032BC94(u8 *arg0, s32 arg1);
void queue_destruction__7TObjectFv(void *);
void TWindow__close(void *);
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
extern const f32 lbl_805DF780;
void close_window_and_destroy__18TAdEnterPasswordGCFPv(u8 *arg0);
u32 create_keyboard_control__22TAdEnterSerialAccessGCFii(s32, s32);
s32 show_message_window__22TAdEnterSerialAccessGCFPvPv(M2C_UNK, s32);
M2C_UNK reset_input_state__22TAdEnterSerialAccessGCFPv(void *);
M2C_UNK add_item_rect__12TLevelSelectFPvPv(int, void *);
M2C_UNK set_active__22TAdEnterSerialAccessGCFPv(int);
s32 create_default_callback__22TAdEnterSerialAccessGCFv(void *);
extern RecoveredGlobal_8032B904_lbl_80477278 enter_password_item_rect_table;
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
void open_keyboard_window__18TAdEnterPasswordGCFPv(s32 arg0);
void strncpy(s32, s32, s32);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 TAdEnterPasswordGC__data_804EDA20;
void set_password__18TAdEnterPasswordGCFi(s32 arg0);
s32 TKeyBoardControl__sub_8000F9CC(int);
void queue_destruction__7TObjectFv(void *);
u8 *get_instance__23TAdSinglePlyChrSelectGCFv();
u32 __nw__7TObjectFUl(int);
s32 __ct__10TAdTitleGCFv(int, void *, int);
s32 create_parts__14TAdEnterBaseGCFPv(void *);
s32 reset__14TAdEnterBaseGCFPvi(void *, int);
s32 TAdEnterBaseGC__ct(void *);
void set_password__18TAdEnterPasswordGCFi(s32 arg0);
extern M2C_UNK __vt__18TAdEnterPasswordGC[];
extern s32 TAdEnterPasswordGC__class_name;
extern s32 lbl_805D6CA4;
u8 *TAdEnterPasswordGC__ct(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
void render__18TAdEnterPasswordGCFv(void *self);
void clear_password__18TAdEnterPasswordGCFPv(T_8032BBF0 *self);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void update_children__18TAdEnterPasswordGCFPv(O_8032BC1C *arg0);
s32 realloc_buffer__17TWindowSubComCardFPv(void *);
s32 update_keyboard__17TWindowSubComCardFPv(void *);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(u32);
void free__11TOBoss4RockFUi(s32);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
void free_menu_object(void *);
s32 get_field_118__22TAdEnterSerialAccessGCFv(void);
M2C_UNK play_sound_effect(int, int, int, int);
M2C_UNK reset_input_state__22TAdEnterSerialAccessGCFPv(void *);
M2C_UNK add_item_rect__12TLevelSelectFPvPv(int, void *);
M2C_UNK set_active__22TAdEnterSerialAccessGCFPv(int);
void TAdEnterSerialAccessGC__sub_80322418(s32, int);
void set_state_3__22TAdEnterSerialAccessGCFPv(u32);
s32 forward_input__22TAdEnterSerialAccessGCFPv(void *, int, s32);
void strncpy(s32, s32, s32);
M2C_UNK memset(void *, int, int);
s32 strlen(s32);
extern RecoveredGlobal_8032B904_lbl_80477278 enter_password_item_rect_table;
extern RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 TAdEnterPasswordGC__data_804EDA20;
extern u8 lbl_8050E208[];
extern u8 lbl_8050E3B8[];
extern u8 *lbl_805D6CA0;
extern s32 lbl_805D6CA4;
void update_password_input__18TAdEnterPasswordGCFPv(Pw_8032B6A0 *self);
}

extern "C" {

void *__dt__18TAdEnterPasswordGCFv(void *arg0, s16 arg1);
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(s32 arg0);
int request_transition__18TAdEnterPasswordGCFPv(void* p);
int set_multi_chg_game_mode_0x14__18TAdEnterPasswordGCFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__14TAdEnterBaseGCFv(void *, int);
s32 get_confirm_state__20TAdSnAkPassConfirmGCFPv(u32);
int request_transition__21TAdMultiChgGameModeGCFv(void*);
int set_mode_0x14__21TAdMultiChgGameModeGCFv(void*);

void render__18TAdEnterPasswordGCFv(void *self) {
    if (get_state_flag__9TMainTaskFv() == 1) { return;
    }
}

void close_window_and_destroy__18TAdEnterPasswordGCFPv(u8 *arg0) {
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x30));
    if (temp_r3 != NULL) {
        TWindow__close(temp_r3);
        M2C_FIELD(arg0, u8 **, 0x30) = NULL;
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
    if (temp_r3_2 != NULL) {
        TWindow__close(temp_r3_2);
        M2C_FIELD(arg0, u8 **, 0x34) = NULL;
    }
    if ((void *) lbl_805D6CA0 != NULL) {
        queue_destruction__7TObjectFv(lbl_805D6CA0);
        lbl_805D6CA0 = NULL;
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x24) + 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r4;
    if ((f32) temp_r4 > lbl_805DF780) {
        lbl_805D6CA4 = M2C_FIELD(arg0, s32 *, 0x20);
    }
}

int set_multi_chg_game_mode_0x14__18TAdEnterPasswordGCFPv(void* p) { return set_mode_0x14__21TAdMultiChgGameModeGCFv(p); }
int request_transition__18TAdEnterPasswordGCFPv(void* p) { return request_transition__21TAdMultiChgGameModeGCFv(p); }

extern M2C_UNK __vt__18TAdEnterPasswordGC[];

typedef struct Pw_8032B6A0 Pw_8032B6A0;
typedef struct RecoveredGlobal_8032B904_lbl_80477278 RecoveredGlobal_8032B904_lbl_80477278;
typedef struct RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20 RecoveredGlobal_8032BA8C_TAdEnterPasswordGC__data_804EDA20;
void update_password_input__18TAdEnterPasswordGCFPv(Pw_8032B6A0 *self) {
  s32 buf = realloc_buffer__17TWindowSubComCardFPv(lbl_805D6CA0);
  s32 prev;
  int cur;
  if (((self->len == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0)) || ((self->len == 0) && (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0)))
  {
    free__11TOBoss4RockFUi(buf);
    memset(&TAdEnterPasswordGC__data_804EDA20.value, 0, 9);
    self->f20 = 2;
    lbl_805D6CA4 = 4;
    return;
  }
  self->f3C = self->f38;
  if (lbl_805D6CA0 != 0)
  {
    if (update_keyboard__17TWindowSubComCardFPv(lbl_805D6CA0) != 0)
    {
      if ((TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208 + 0x160, 2) != 0))
      {
        free_menu_object(lbl_805D6CA0);
        self->f38 = 0;
        if (self->serial != 0)
        {
          set_active__22TAdEnterSerialAccessGCFPv(self->serial);
        }
      }
      else
        if (forward_input__22TAdEnterSerialAccessGCFPv(self, 2, buf) == 0)
      {
        free_menu_object(lbl_805D6CA0);
        play_sound_effect(0x53F06, 0, 0, 0);
      }
      else
      {
        self->f38 = 1;
        if (self->serial != 0)
        {
          set_state_3__22TAdEnterSerialAccessGCFPv(self->serial);
        }
      }
    }
    else
    {
      self->f38 = 0;
      if (self->serial != 0)
      {
        set_active__22TAdEnterSerialAccessGCFPv(self->serial);
      }
    }
  }
  prev = self->f3C;
  cur = self->f38;
  if (prev != cur)
  {
    if (cur != 0)
    {
      if (self->serial != 0)
      {
        reset_input_state__22TAdEnterSerialAccessGCFPv((void *) self->serial);
        add_item_rect__12TLevelSelectFPvPv(self->serial, ((u8 *) (&enter_password_item_rect_table.value)) + 8);
      }
    }
    else
      if (self->serial != 0)
    {
      reset_input_state__22TAdEnterSerialAccessGCFPv((void *) self->serial);
      add_item_rect__12TLevelSelectFPvPv(self->serial, &enter_password_item_rect_table.value);
    }
  }
  if ((get_selected_slot__23TAdSinglePlyChrSelectGCFPv(self->serial) == 1) && (update_keyboard__17TWindowSubComCardFPv(lbl_805D6CA0) != 0))
  {
    strncpy((s32) (&TAdEnterPasswordGC__data_804EDA20.value), buf, 9);
    TAdEnterSerialAccessGC__sub_80322418(get_field_118__22TAdEnterSerialAccessGCFv(), 2);
    self->f20 = 3;
    lbl_805D6CA4 = 4;
  }
  self->len = strlen(buf);
  free__11TOBoss4RockFUi(buf);
}

void open_keyboard_window__18TAdEnterPasswordGCFPv(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = show_message_window__22TAdEnterSerialAccessGCFPvPv(arg0, 2);
    M2C_FIELD(arg0, s32 *, 0x34) = create_default_callback__22TAdEnterSerialAccessGCFv((void *) (arg0));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        reset_input_state__22TAdEnterSerialAccessGCFPv(M2C_FIELD(arg0, void **, 0x2C));
        add_item_rect__12TLevelSelectFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x2C)), (void *) (&enter_password_item_rect_table.value));
        set_active__22TAdEnterSerialAccessGCFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C)));
    }
    (*(u32 *)&lbl_805D6CA0) = create_keyboard_control__22TAdEnterSerialAccessGCFii(arg0, 2);
    lbl_805D6CA4 = 1;
}

void run_task__18TAdEnterPasswordGCFv(TAdEnterPasswordGC_8032B984 *self) {
    fn_8032B318(self, lbl_804ED9F0);
    self->state = lbl_805D6CA4;
    static Pmf_8032B984 tbl[5] = {
        (Pmf_8032B984)&TAdEnterPasswordGC::open_keyboard_window,
        (Pmf_8032B984)&TAdEnterPasswordGC::update_password_input,
        (Pmf_8032B984)&TAdEnterPasswordGC::request_transition,
        (Pmf_8032B984)&TAdEnterPasswordGC::set_multi_chg_game_mode_0x14,
        (Pmf_8032B984)&TAdEnterPasswordGC::close_window_and_destroy,
    };
    (self->*tbl[lbl_805D6CA4])();
    if (self->state != lbl_805D6CA4) {
        self->f24 = 0;
    }
}

void set_password__18TAdEnterPasswordGCFi(s32 arg0) {
    memset((void *) (&TAdEnterPasswordGC__data_804EDA20.value), (int) (0), (int) (9));
    strncpy((s32) &TAdEnterPasswordGC__data_804EDA20.value, arg0, 9);
}

void *__dt__18TAdEnterPasswordGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdEnterPasswordGC;
        __dt__14TAdEnterBaseGCFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D6CB8;

typedef char RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC_size[sizeof(RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC) == 0x1C ? 1 : -1];
u8 *TAdEnterPasswordGC__ct(u8 *arg0) {
    u32 temp_r3;
    TAdEnterBaseGC__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8032BB34___vt__18TAdEnterPasswordGC *)&__vt__18TAdEnterPasswordGC).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TAdEnterPasswordGC__class_name;
    reset__14TAdEnterBaseGCFPvi((void *) (arg0), (int) (2));
    lbl_805D6CA4 = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    if ((s8) M2C_FIELD(get_instance__23TAdSinglePlyChrSelectGCFv(), u8 *, 0x1154C) != 0) {
        set_password__18TAdEnterPasswordGCFi((s32)((void *) (get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1154C)));
        TKeyBoardControl__sub_8000F9CC((int) (0xF));
        queue_destruction__7TObjectFv((void *) (arg0));
        return arg0;
    }
    create_parts__14TAdEnterBaseGCFPv((void *) (arg0));
    temp_r3 = __nw__7TObjectFUl((int) (0x138));
    if (temp_r3 != 0U) {
        __ct__10TAdTitleGCFv((int) (temp_r3), (void *) (arg0), (int) (0xC));
    }
    return arg0;
}

void clear_password__18TAdEnterPasswordGCFPv(T_8032BBF0 *self) {
    s32 i;
    for (i = 0; i < 24; i++) {
        self->arr[i] = 0;
    }
    self->count = 0;
}

void update_children__18TAdEnterPasswordGCFPv(O_8032BC1C *arg0) {
    s32 i;
    for (i = 0; i < ((O2_8032BC1C *)arg0)->n; i++) {
        if (arg0->items[i] != 0 && all_parents_unqueued_for_destruction__7TObjectFv(arg0->items[i]) != 0) {
            arg0->items[i]->m2();
        }
    }
}

void TAdEnterPasswordGC__sub_8032BC94(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r0 < 0x18) {
        ((struct Elt80364258_80364258 *)(arg0 + 0x20))[temp_r0].f0 = arg1;
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) + 1);
    }
}

s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(s32 arg0) {
    if ((u32) lbl_805D6CB8 != 0U) {
        if (get_confirm_state__20TAdSnAkPassConfirmGCFPv(lbl_805D6CB8) != 0) {
            return 0;
        }
        TAdEnterPasswordGC__sub_8032BC94((u8 *)(lbl_805D6CB8), (s32)(arg0));
        return 1;
    }
    return 0;
}

}
