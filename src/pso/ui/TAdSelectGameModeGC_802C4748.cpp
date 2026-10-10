#include "pso/TAdSelectGameModeGC.h"

TAdSelectGameModeGC::~TAdSelectGameModeGC() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802C47E8_lbl_8050E208 { M2C_UNK value; u8 remaining[0x1AC]; };
typedef char RecoveredGlobal_802C47E8_lbl_8050E208_size[sizeof(RecoveredGlobal_802C47E8_lbl_8050E208) == 0x1B0 ? 1 : -1];

struct RecoveredGlobal_802C47E8_lbl_8050E3B8 { M2C_UNK value; u8 remaining[0x1AC]; };
typedef char RecoveredGlobal_802C47E8_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802C47E8_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

typedef s32 M2C_UNK;
struct S8_802C4944 { s32 a, b; };

struct S16_802C4944 { S8_802C4944 x[2]; };

struct T12_802C4944 { s32 a, b, c; };

struct S24_802C4944 { T12_802C4944 t[2]; };

extern "C" {
void render__19TAdSelectGameModeGCFv(void);
int call_enable_camera__19TAdSelectGameModeGCFPv(void* p);
int enable_camera__19TAdSelectGameModeGCFv(void);
s32 get_main_phase();
s32 get_mode_data__19TAdSelectGameModeGCFv();
int enable_camera__19TAdSelectGameModeGCFv(void);
s32 free_sub_ctrls__19TAdSelectGameModeGCFPv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
void TAdSelectGameModeGC__sub_802C478C(void);
s32 get_localized_text_entry(int, int);
s32 get_selected_slot__23TAdSinglePlyChrSelectGCFPv(int);
s32 TAdSinglePlyChrSelectGC__sub_801334DC(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK play_sound_effect(int, int, int, int);
M2C_UNK set_default_camera__21TAdMultiChgGameModeGCFv();
M2C_UNK request_scene_change__21TAdMultiChgGameModeGCFv();
M2C_UNK set_change_game_mode__21TAdMultiChgGameModeGCFv();
M2C_UNK set_game_mode__21TAdMultiChgGameModeGCFv();
s32 get_mode_data__19TAdSelectGameModeGCFv();
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(int, int, int);
extern RecoveredGlobal_802C47E8_lbl_8050E208 controller_input_state;
extern RecoveredGlobal_802C47E8_lbl_8050E3B8 controller_physical_port_bank;
extern s32 lbl_805D67C8;
void run_task__19TAdSelectGameModeGCFv(u8 *arg0);
void create_draw_line_ctrl__13TAdMcSelectGCFiif(void *, s32, f32);
s32 get_localized_text_entry(int, int);
void *__nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *, void *);
void *__ct__9TAdBackGCFv(void *, void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__8TAdRayGCFv(void *, void *);
void *__ct__10TAdTitleGCFv(void *, void *, int);
void *__ct__14TAdSelectTxtGCFv(void *, void *, void *, int);
void __ct__13TAdTitleTexGCFv(void *, void *);
void add_item_rect__12TLevelSelectFPvPv(void *, void *);
void *__ct__14TAdSelectCurGCFv(void *, void *, void *, void *);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(int, int, int);
void *__ct__13TAdGuideTxtGCFv(void *, void *);
extern S24_802C4944 lbl_80471A2C;
extern S8_802C4944 lbl_80471A44[];
extern S16_802C4944 lbl_80471A4C;
extern M2C_UNK __vt__19TAdSelectGameModeGC[];
extern void *lbl_805D3ED0;
extern s32 lbl_805D67C8;
extern const f32 lbl_805DE538;
u8 *__ct__19TAdSelectGameModeGCFv(u8 *arg0, void *parent);
}

extern "C" {

int fn_802C4748(void* p);
s32 DateToSeconds__FP9DateStampPi(s32 *, s32 *);
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 free_sub_ctrls__19TAdSelectGameModeGCFPv();
int clear_inventory_slot__23TAdSinglePlyChrSelectGCFPv(void*);
int TObjPlayer__sub_8011E204(void*, void*);
int init_action_config__10TObjPlayerFPv(void*);
int init_character_action_config(void* p);
int TObjPlayer__sub_802C46E0(void* p);
int set_palette_entry__20TWindowActionPaletteFiiiii(void*);
int enable_camera__19TAdSelectGameModeGCFv(void);
s32 getDateStamp__FP9DateStamp(s32 *);
void* get_action_data__10TObjPlayerFPv(void* p);
s32 get_main_phase();
s32 get_mode_data__19TAdSelectGameModeGCFv();
void set_action_flags__10TObjPlayerFPvUc(void* p, u8 v);
void set_action_state__10TObjPlayerFPvUc(void* p, u8 v);
void set_byte_13b__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_157__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_18f__10TObjPlayerFPvUc(void* p, u8 v);
void set_field_1ab__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_103__10TObjPlayerFPvUc(void* p, u8 v);
void set_flag_40__10TObjPlayerFPv(void* p);
void set_flag_e7__10TObjPlayerFPvUc(void* p, u8 v);
int set_state_flags__10TObjPlayerFPvUi(void*, void*);
int sync_char_select_state__10TObjPlayerFv(void*);

int fn_802C4748(void* p) { return sync_char_select_state__10TObjPlayerFv(p); }

void render__19TAdSelectGameModeGCFv(void) {  }

int call_enable_camera__19TAdSelectGameModeGCFPv(void* p) { return enable_camera__19TAdSelectGameModeGCFv(); }
void TAdSelectGameModeGC__sub_802C478C(void) {
    s32 temp_r3;
    if (get_main_phase() == 0xE) {
        temp_r3 = get_mode_data__19TAdSelectGameModeGCFv();
        switch (temp_r3) {
        case 0:
            ((M2C_UNK)enable_camera__19TAdSelectGameModeGCFv());
            return;
        case 1:
            ((M2C_UNK)TAdMultiPlyChrSelectGC__sub_802C6558());
            free_sub_ctrls__19TAdSelectGameModeGCFPv();
            return;
        }
    } else {
        enable_camera__19TAdSelectGameModeGCFv();
    }
}
void run_task__19TAdSelectGameModeGCFv(u8 *arg0) {
    s32 temp_r3;
    set_default_camera__21TAdMultiChgGameModeGCFv();
    if ((s32) lbl_805D67C8 != TAdSinglePlyChrSelectGC__sub_801334DC((int) (M2C_FIELD(arg0, s32 *, 0x1C)))) {
        set_entry_value__22TAdMultiPlyChrSelectGCFiiUi((int) (M2C_FIELD(arg0, s32 *, 0x20)), (int) (1), (int) (get_localized_text_entry((int) (0x15), (int) (TAdSinglePlyChrSelectGC__sub_801334DC((int) (M2C_FIELD(arg0, s32 *, 0x1C))) + 1))));
    }
    lbl_805D67C8 = TAdSinglePlyChrSelectGC__sub_801334DC((int) (M2C_FIELD(arg0, s32 *, 0x1C)));
    if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)&controller_physical_port_bank.value + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (2)) != 0)) {
        play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
        request_scene_change__21TAdMultiChgGameModeGCFv();
        return;
    }
    if (get_selected_slot__23TAdSinglePlyChrSelectGCFPv((int) (M2C_FIELD(arg0, s32 *, 0x1C))) == 1) {
        temp_r3 = get_mode_data__19TAdSelectGameModeGCFv();
        switch (temp_r3) {
        case 0:
            set_game_mode__21TAdMultiChgGameModeGCFv();
            return;
        case 1:
            set_change_game_mode__21TAdMultiChgGameModeGCFv();
            break;
        }
    }
}
u8 *__ct__19TAdSelectGameModeGCFv(u8 *arg0, void *parent) {
    void *p;
    __ct__7TObjectFP7TObject(arg0, parent);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TAdSelectGameModeGC;
    M2C_FIELD(arg0, void **, 0) = lbl_805D3ED0;
    lbl_805D67C8 = 0;
    M2C_FIELD(arg0, void **, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = 0;
    if ((p = __nw__7TObjectFUl(0x24)) != 0) {
        __ct__9TAdBackGCFv(p, arg0);
    }
    if ((p = __nw__7TObjectFUl(0x28)) != 0) {
        __ct__12TAdBackTxtGCFv(p, arg0);
    }
    if ((p = __nw__7TObjectFUl(0x24)) != 0) {
        __ct__8TAdRayGCFv(p, arg0);
    }
    if ((p = __nw__7TObjectFUl(0x138)) != 0) {
        __ct__10TAdTitleGCFv(p, arg0, 4);
    }
    if ((p = __nw__7TObjectFUl(0x9C)) != 0) {
        __ct__13TAdTitleTexGCFv(p, arg0);
    }
    {
        S24_802C4944 txt = lbl_80471A2C;
        if ((p = __nw__7TObjectFUl(0xE0)) != 0) {
            __ct__14TAdSelectTxtGCFv(p, arg0, &txt.t[0], 6);
        }
        if ((p = __nw__7TObjectFUl(0xE0)) != 0) {
            __ct__14TAdSelectTxtGCFv(p, arg0, &txt.t[1], 7);
        }
    }
    {
        S8_802C4944 a = lbl_80471A44[0];
        S16_802C4944 b = lbl_80471A4C;
        p = __nw__7TObjectFUl(0x708);
        if (p != 0) {
            p = __ct__14TAdSelectCurGCFv(p, arg0, &b, &a);
        }
        M2C_FIELD(arg0, void **, 0x1C) = p;
        add_item_rect__12TLevelSelectFPvPv(M2C_FIELD(arg0, void **, 0x1C), &b.x[0]);
        add_item_rect__12TLevelSelectFPvPv(M2C_FIELD(arg0, void **, 0x1C), &b.x[1]);
    }
    p = __nw__7TObjectFUl(0x44);
    if (p != 0) {
        p = __ct__13TAdGuideTxtGCFv(p, arg0);
    }
    M2C_FIELD(arg0, void **, 0x20) = p;
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x20), 0, get_localized_text_entry(0x15, 0));
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x20), 1, get_localized_text_entry(0x15, 1));
    create_draw_line_ctrl__13TAdMcSelectGCFiif(arg0, 0xA, lbl_805DE538);
    return arg0;
}

}
