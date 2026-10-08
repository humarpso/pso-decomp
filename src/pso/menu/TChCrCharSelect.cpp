#ifndef PSO_CLASS_PACKAGE
#include "pso/TChCrCharSelect.h"

TChCrCharSelect::~TChCrCharSelect() {}

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

M2C_UNK __ct__7TObjectFP7TObject(void *);
void init_widgets__15TChCrCharSelectFv(void);
M2C_UNK fn_802993F0();
M2C_UNK fn_8029945C(void *);
M2C_UNK set_eff_tag__11TChCrEffTagFi(M2C_UNK);
extern u8 lbl_80464E88[];
extern void *__vt__15TChCrCharSelect[];
extern s32 lbl_805D3CB0;
extern s32 TChCrCharSelect__selected_char_index;
extern s32 TChCrCharSelect__selected_slot_index;
extern s32 TChCrCharSelect__data_805D6590;

void *__ct__15TChCrCharSelectFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, void ***, 0x18) = __vt__15TChCrCharSelect;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3CB0;
    set_eff_tag__11TChCrEffTagFi(0);
    fn_802993F0();
    if (TChCrCharSelect__selected_char_index == -1 || TChCrCharSelect__selected_slot_index == -1) {
        TChCrCharSelect__selected_char_index = 0;
        TChCrCharSelect__selected_slot_index = 0;
        TChCrCharSelect__data_805D6590 = 0;
    } else {
        TChCrCharSelect__data_805D6590 = 1;
    }
    fn_8029945C(lbl_80464E88);
    ((void (*)(void *))init_widgets__15TChCrCharSelectFv)(arg0);
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802937D4
#include "types.h"

extern "C" {

int get_char_select_class_id(int a0);

    extern int lbl_80464E98[];
int get_char_select_class_id(int a0) {  return lbl_80464E98[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80293860
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_and_apply_selection__15TChCrCharSelectFPv(u8 *arg0);
M2C_UNK get_char_select_class_id(void *);
s32 get_class_appearance_preset();
M2C_UNK create__12TCharaMakingFPvPv(void *, int);
M2C_UNK copy_player_visual_record(int, int);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 TChCrCharSelect__selected_slot_index;
extern s32 tl_03;

void tick_and_apply_selection__15TChCrCharSelectFPv(u8 *arg0) {
    s32 temp_r0;
    u8 *temp_r31;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 <= 0) {
        temp_r31 = (unsigned char *) (get_char_index__23TAdSinglePlyChrSelectGCFUi((int) (0xFFFF)) + 0x370);
        get_char_select_class_id((void *) (TChCrCharSelect__selected_slot_index));
        copy_player_visual_record((int) (temp_r31), (int) (get_class_appearance_preset()));
        M2C_FIELD(temp_r31, s8 *, 0x30) = -1;
        M2C_FIELD(temp_r31, s8 *, 0) = 0;
        create__12TCharaMakingFPvPv((void *) (tl_03), (int) (temp_r31));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802938E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_menu_input__15TChCrCharSelectFPv(void *arg0);
void handle_cursor_input__15TChCrCharSelectFi(s32 arg0);
M2C_UNK TChCrCharSelect__sub_802937E8(void *);
M2C_UNK TChCrCharSelect__sub_80293828(s32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TChCrCharSelect__sub_80298F8C(M2C_UNK);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);

extern s32 TChCrCharSelect__selected_slot_index;
extern s32 TChCrCharSelect__data_805D6590;

void handle_menu_input__15TChCrCharSelectFPv(void *arg0) {
    if (TChCrCharSelect__sub_80298F8C(0x20) != 0) {
        TChCrCharSelect__selected_slot_index += 1;
        play_sound_effect(0x54100, 0, 0, 0);
    } else if (TChCrCharSelect__sub_80298F8C(0x10) != 0) {
        TChCrCharSelect__selected_slot_index -= 1;
        play_sound_effect(0x54100, 0, 0, 0);
    }
    TChCrCharSelect__sub_802937E8(arg0);
    if ((TObjCMProportion__sub_8029916C(2) != 0) || (TChCrCharSelect__sub_80298F8C(0x40) != 0)) {
        play_sound_effect(0x53704, 0, 0, 0);
        TChCrCharSelect__data_805D6590 = 0;
        return;
    }
    if (TObjCMProportion__sub_8029916C(4) != 0) {
        play_sound_effect(0x52D01, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xA;
        TChCrCharSelect__data_805D6590 = 2;
    }
}

extern s32 TChCrCharSelect__selected_char_index;
extern s32 TChCrCharSelect__data_805D6590;

void handle_cursor_input__15TChCrCharSelectFi(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (TChCrCharSelect__sub_80298F8C(0x20) != 0) {
        temp_r0 = TChCrCharSelect__selected_char_index + 1;
        TChCrCharSelect__selected_char_index = temp_r0;
        if (temp_r0 >= 3) {
            TChCrCharSelect__selected_char_index = 0;
        }
        play_sound_effect(0x54100, 0, 0, 0);
    } else if (TChCrCharSelect__sub_80298F8C(0x10) != 0) {
        temp_r0_2 = TChCrCharSelect__selected_char_index - 1;
        TChCrCharSelect__selected_char_index = temp_r0_2;
        if (temp_r0_2 < 0) {
            TChCrCharSelect__selected_char_index = 2;
        }
        play_sound_effect(0x54100, 0, 0, 0);
    }
    if ((TObjCMProportion__sub_8029916C(4) != 0) || (TChCrCharSelect__sub_80298F8C(0x80) != 0)) {
        play_sound_effect(0x52D01, 0, 0, 0);
        TChCrCharSelect__sub_80293828(arg0);
        TChCrCharSelect__data_805D6590 = 1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80293BEC
#include "types.h"

extern "C" {

void init_widgets__15TChCrCharSelectFv(void);
int create_default__19TChCrTagInformationFv(void);
int create_all__12TChCrTagNameFv(void);
int create_all_ch_cr_tag_headers(void);
int create_all__18TChCrTagOccupationFv(void);
int TChCrTagPlGraphic__sub_802A3534(void);
int create_default__14TChCrTagPlBackFv(void);

void init_widgets__15TChCrCharSelectFv(void) { create_all__18TChCrTagOccupationFv(); create_all__12TChCrTagNameFv(); create_all_ch_cr_tag_headers(); create_default__14TChCrTagPlBackFv(); TChCrTagPlGraphic__sub_802A3534(); create_default__19TChCrTagInformationFv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80293D10
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TChCrCharSelectFPv(void *arg0);
void *__ct__15TChCrCharSelectFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__15TChCrCharSelectFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = __ct__15TChCrCharSelectFv(o, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80293D58
#include "types.h"

extern "C" {

void init_and_create__15TChCrCharSelectFv(void);
int create__15TChCrCharSelectFPv(void);

    extern int TChCrCharSelect__selected_char_index;
    extern int TChCrCharSelect__selected_slot_index;
void init_and_create__15TChCrCharSelectFv(void) { TChCrCharSelect__selected_char_index = -1; TChCrCharSelect__selected_slot_index = -1; create__15TChCrCharSelectFPv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A1BFC
#include "types.h"

extern "C" {

int get_selected_index__15TChCrCharSelectFv(void);

    extern int TChCrCharSelect__data_805D6590;
int get_selected_index__15TChCrCharSelectFv(void) {  return TChCrCharSelect__data_805D6590; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A207C
#include "types.h"

extern "C" {

int get_selected_char__15TChCrCharSelectFv(void);
int get_instance__15TChCrCharSelectFv(void);

    extern int TChCrCharSelect__selected_char_index;
int get_selected_char__15TChCrCharSelectFv(void) {  return TChCrCharSelect__selected_char_index; }

    extern int TChCrCharSelect__selected_slot_index;
int get_instance__15TChCrCharSelectFv(void) {  return TChCrCharSelect__selected_slot_index; }

}
#endif
#endif
