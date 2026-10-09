#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Base_802870C4 { char pad[0x18]; };

struct VObj_802870C4 : Base_802870C4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
};

struct Tech_802870C4 {
    u8 pad0[0x1C];
    u8 state;
    u8 pad1D;
    s16 f1E;
    u8 f20[4];
    u8 f24[4];
    s32 player;
    u8 pad2C[4];
    VObj_802870C4 *f30;
    void *list;
    void *sel;
    void *help;
};

struct Pad_802870C4 { u8 pad[0x20]; u8 m20[0x30]; };

extern "C" {
extern u8 *text_language_group_table;
s32 TWindowSubTechnique__sub_8028753C(s32 arg0);
u8 *calc_technique_parameters(s16, u8, M2C_UNK);
M2C_UNK *get_shared_text_buffer();
s32 get_player_by_client_id(int);
s32 get_cast_technique_level(void *, int);
s32 validate_and_clear_slot__10TObjPlayerFPv(void *, int);
s32 TWindowSubStatusDisp__sub_80228F5C(void *);
s32 text_builder_append(int);
s32 text_builder_reset();
s32 get_help_text_string(int);
s32 toggle_help_window_on_button(int, int);
s32 send_and_handle__6TLobbyFPvii(int, void *, int);
s32 TWindowSubTechnique__sub_8028753C(s32 arg0);
extern M2C_UNK lbl_805DD83C;
void update_selected_help__19TWindowSubTechniqueFPvi(u8 *arg0, s32 arg1);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
void set_flag_40__16TAdChrSelASlotGCFPv(void *);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 get_player_by_client_id(int);
void update_cursor__10TObjPlayerFPvi(s32, s32);
s32 try_equip_item__10TObjPlayerFii(s32, s32);
void set_status_flag_80__12TQuestThreadFPv(void *);
void clear_flag_and_release__17TWindowSubComCardFPv(void *);
void play_sound_effect(s32, s32, s32, s32);
void TWindow__close(void *);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
s32 is_player_input_active(s32);
void call_if_split_screen(void *, s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
s16 get_selected_menu_value(void *);
void set_selected_index__17TWindowSubComCardFPvs(void *, s16);
void *create_message_window__6TLobbyFiiUis(s32, void *, s32, s32);
void clear_flag70_bit4__17TWindowOptionCtrlFPv(void *);
M2C_UNK get_window_layout_position(M2C_UNK);
s32 fn_80286AA8(void *);
s32 update_selection__19TWindowSubTechniqueFPvPv(void *, void *, s32);
void get_current_selection__19TWindowSubTechniqueFPvPv(void *, void *, s32);
s32 is_technique_available__19TWindowSubTechniqueFii(s32, s32);
void rebuildTechniqueList__19TWindowSubTechniqueFll(void *, void *, s16);
void *create_title_window__19TWindowSubTechniqueFPv(void *, s16);
void update_selected_help__19TWindowSubTechniqueFPvi(u8 *arg0, s32 arg1);
void clear_flag70_bit80__19TWindowSubTechniqueFPv(void* p);
void clear_trade_flag__19TWindowSubTradeMainFPv(void* p);
extern u8 lbl_8044FC54[];
extern Pad_802870C4 lbl_8050E208[];
void run_task__19TWindowSubTechniqueFv(Tech_802870C4 *self);
}

extern "C" {

void *TWindowSubTechnique__ct(void *arg0, s32 arg1, s32 arg2);
void *__dt__19TWindowSubTechniqueFv(void *arg0, s16 arg1);
void clear_flag70_bit80__19TWindowSubTechniqueFPv(void* p);
void clear_trade_flag__19TWindowSubTradeMainFPv(void* p);
s32 open_menu__19TWindowSubTechniqueFPv(void *arg0);
void render__19TWindowSubTechniqueFv(void);
M2C_UNK align_menu_entry_positions(s32);
M2C_UNK update_layout_height__17TWindowSubComCardFPvf(s32, f32);
M2C_UNK get_window_layout_position(M2C_UNK);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
void TWindow__close(void *);
M2C_UNK __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 create_titled_window_menu(s32, M2C_UNK, s32, s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK set_flag70_bit100__17TWindowOptionCtrlFPv(s32);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);

extern const f32 lbl_805DD838;

s32 open_menu__19TWindowSubTechniqueFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = create_titled_window_menu(get_window_layout_position(0x12), 5, get_message_10__20TWindowSubStatusDispFPv(0x2F), M2C_FIELD(arg0, s32 *, 0x28));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 0);
    set_field_1c__6TLobbyFPvf(temp_r31);
    set_flag70_bit100__17TWindowOptionCtrlFPv(temp_r31);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9C), 6, 0);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9D), 6, 1);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9E), 6, 2);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0x9F), 6, 3);
    forward_trade_action_default__16TObjCityMainWarpFPviii(temp_r31, get_message_10__20TWindowSubStatusDispFPv(0xA0), 6, 4);
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    update_layout_height__17TWindowSubComCardFPvf(temp_r31, lbl_805DD838);
    align_menu_entry_positions(temp_r31);
    return temp_r31;
}

void update_selected_help__19TWindowSubTechniqueFPvi(u8 *arg0, s32 arg1) {
  M2C_UNK saved_reg_r30;
  s32 temp_r3;
  s32 var_r29;
  s32 var_r30;
  var_r29 = arg1;
  toggle_help_window_on_button((int) (*((s32 *) (((s8 *) arg0) + 0x3C))), (int) (*((s32 *) (((s8 *) arg0) + 0x28))));
  temp_r3 = get_player_by_client_id((int) (*((s32 *) (((s8 *) arg0) + 0x28))));
  if (temp_r3 != 0)
  {
    if (validate_and_clear_slot__10TObjPlayerFPv((void *) (temp_r3 + 0x428), (int) var_r29) != 0)
    {
      var_r29 = 0x13;
      var_r30 = saved_reg_r30;
    }
    if (((s16) var_r29) != ((s16) (*((s16 *) (((s8 *) arg0) + 0x1E)))))
    {
      *((s16 *) (((s8 *) arg0) + 0x1E)) = (s16) var_r29;
      if (((s16) var_r29) == 0x13)
      {
        send_and_handle__6TLobbyFPvii((int) (*((s32 *) (((s8 *) arg0) + 0x3C))), (void *) (&lbl_805DD83C), (int) 0x82);
        return;
      }
      text_builder_reset();
      if ((((s16) var_r29) != 0x11) && (((s16) var_r29) != 0xE))
      {
        var_r30 = get_cast_technique_level((void *) (temp_r3 + 0x428), (int) var_r29);
        text_builder_append((int) TWindowSubTechnique__sub_8028753C((s32)((int) 0x13)));
        TWindowSubStatusDisp__sub_80228F5C((void *) (((u8) var_r30) + 1));
      }
      text_builder_append((int) get_help_text_string((int) 0x2E));
      TWindowSubStatusDisp__sub_80228F5C((void *) ((s32) (*((s16 *) (((s8 *) calc_technique_parameters((s16) var_r29, (u8) var_r30, 0xFFFF)) + 0x10)))));
      text_builder_append((int) TWindowSubTechnique__sub_8028753C((s32)((int) ((s32) ((s16) var_r29)))));
      send_and_handle__6TLobbyFPvii((int) (*((s32 *) (((s8 *) arg0) + 0x3C))), (void *) get_shared_text_buffer(), (int) 0x82);
    }
  }
}

void render__19TWindowSubTechniqueFv(void) {  }

extern M2C_UNK __vt__19TWindowSubTechnique[];

void run_task__19TWindowSubTechniqueFv(Tech_802870C4 *self) {
    s32 port = is_player_input_active(self->player);
    s32 ply = get_player_by_client_id(self->player);
    switch (self->state) {
    case 0:
    case 1:
        if (self->help != 0) {
            TWindow__close(self->help);
            self->help = 0;
            self->f1E = 0x13;
        }
        if (self->sel == 0) {
            self->sel = create_title_window__19TWindowSubTechniqueFPv(self, get_selected_menu_value(self->list));
        }
        set_flag_40__16TAdChrSelASlotGCFPv(self->sel);
        set_status_flag_80__12TQuestThreadFPv(self->sel);
        get_current_selection__19TWindowSubTechniqueFPvPv(self->f20, self->f24, self->player);
        clear_flag_and_release__17TWindowSubComCardFPv(self->list);
        self->state = 2;
    case 2: {
        s32 r = fn_80286AA8(self);
        if (r == 1 || update_selection__19TWindowSubTechniqueFPvPv(self->f20, self->f24, self->player) != 0) {
            rebuildTechniqueList__19TWindowSubTechniqueFll(self, self->sel, get_selected_menu_value(self->list));
            if (r != 0) {
                set_selected_index__17TWindowSubComCardFPvs(self->sel, 0);
            }
        }
        if (get_status_flag__17TWindowSubComCardFPv(self->list) != 0) {
            self->f30->m7();
            self->state = 6;
        } else if (is_visible__17TWindowSubComCardFPv(self->list) != 0) {
            self->state = 3;
        }
        break;
    }
    case 3:
        self->help = create_message_window__6TLobbyFiiUis(get_window_layout_position(0x14), lbl_8044FC54, 1, self->player);
        TWindowSubEquip__sub_80263AF8((s32)self->f30, 2);
        set_field_1c__6TLobbyFPvf((s32)self->help);
        call_if_split_screen(self->help, self->player);
        clear_trade_flag__19TWindowSubTradeMainFPv((void*)(self->sel));
        clear_flag70_bit80__19TWindowSubTechniqueFPv((void*)(self->sel));
        clear_flag_and_release__17TWindowSubComCardFPv(self->sel);
        clear_flag70_bit4__17TWindowOptionCtrlFPv(self->sel);
        self->state = 4;
    case 4:
        update_cursor__10TObjPlayerFPvi(ply, get_selected_menu_value(self->sel));
        if (update_selection__19TWindowSubTechniqueFPvPv(self->f20, self->f24, self->player) != 0) {
            rebuildTechniqueList__19TWindowSubTechniqueFll(self, self->sel, get_selected_menu_value(self->list));
        }
        update_selected_help__19TWindowSubTechniqueFPvi((u8 *)self, get_selected_menu_value(self->sel));
        if (get_status_flag__17TWindowSubComCardFPv(self->sel) != 0) {
            self->state = 1;
        }
        if (is_visible__17TWindowSubComCardFPv(self->sel) != 0) {
            self->state = 5;
        }
        break;
    case 5:
        update_cursor__10TObjPlayerFPvi(ply, get_selected_menu_value(self->sel));
        if (is_technique_available__19TWindowSubTechniqueFii(get_selected_menu_value(self->sel), self->player) == 0 ||
            TWindowShortListCtrl__check_controller_button(lbl_8050E208[port].m20, 2) != 0 ||
            test_flag_4c__23TAdSinglePlyChrSelectGCFPv(lbl_8050E208[4].m20, 2) != 0) {
            play_sound_effect(0x52F16, 0, 0, 0);
            rebuildTechniqueList__19TWindowSubTechniqueFll(self, self->sel, get_selected_menu_value(self->list));
            self->state = 1;
        } else if (try_equip_item__10TObjPlayerFii(ply, get_selected_menu_value(self->sel)) != 0) {
            self->state = 1;
        }
        break;
    case 6:
        break;
    }
}

void *__dt__19TWindowSubTechniqueFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubTechnique;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__19TWindowSubTechnique[];
extern s32 lbl_805D3AD0;

void *TWindowSubTechnique__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubTechnique;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3AD0;
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = open_menu__19TWindowSubTechniqueFPv((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s16 *, 0x1E) = 0x13;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

s32 TWindowSubTechnique__sub_8028753C(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(text_language_group_table, s32 *, 0x14), M2C_UNK *, (arg0 * 4));
}

void clear_flag70_bit80__19TWindowSubTechniqueFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffff7f; }
void clear_trade_flag__19TWindowSubTradeMainFPv(void* p) { *(u16*)((char*)p + 0x70) &= 0xffffffbf; }

}
