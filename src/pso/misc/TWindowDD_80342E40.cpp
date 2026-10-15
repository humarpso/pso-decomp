#include "types.h"
#include "pso/misc/TWindowDD.h"

struct E_80342F84 { s32 v; };

struct DD_80342F84 { u8 pad[0x24]; E_80342F84 arr[1]; };

struct W_80342ED0 {
    u8 pad0[0x20];
    s32 idx;
    s32 ids[(0xB4 - 0x24) / 4];
    s32 fb4;
    u8 padb8[0xC6 - 0xB8];
    s16 fc6;
    u8 padc8[0x104 - 0xC8];
    s32 f104;
};

extern "C" {
s32 is_confirmed__24TShopEquipmentSellWindowFv(int);
s32 get_result__24TShopEquipmentSellWindowFv(int);
s32 is_confirmed__18TWindowInputNumberFv(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 TWindow__close(int);
s32 TWindowDD__sub_80341AF8(int);
s32 open_numeric_parameter_input__9TWindowDDFPviii(void *, int, void *, void *);
s32 classify_id__9TWindowDDFs();
s32 TWindowDD__sub_80347CC8(void *, void *);
s32 get_current_child_index__9TWindowDDFv();
s32 reset_index__9TWindowDDFv(void *);
s32 set_field14__9TWindowDDFl(void *, int);
s32 TWindowDD__sub_80348D88(void *);
extern void *word_select_numeric_limits[];
u8 update_numeric_parameter_input__9TWindowDDFPv(u8 *arg0);
s32 TWindowDD__sub_80342158(s32);
s32 TWindowDD__sub_803435A0(void *);
s32 TWindowDD__sub_80347C50();
s32 play_se__9TWindowDDFv();
s32 play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFv(void *);
s32 TWindowDD__sub_80348424(void *, s16);
s16 TWindowDD__sub_80348448(void *, s32);
s32 set_state__9TWindowDDFv(void *);
s32 push_recent_id(s32);
void handle_confirm_input__9TWindowDDFPv(W_80342ED0 *arg0);
}

extern "C" {

s32 apply_entry_layout__9TWindowDDFPv(void *);
s32 TWindowDD__sub_803435A0(void *);
s32 update_selection_state__9TWindowDDFPv();
s32 play_se__9TWindowDDFv();
s32 play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFv(void *);
s32 TWindowDD__sub_803484C4(void *);

void TWindowDD::update() {
    update_selection_state__9TWindowDDFPv();
    if (test_input_flag_4__9TWindowDDFv(this) != 0) {
        play_sound__9TWindowDDFv();
        if ((s32) *(s32 *)((s8 *)this + 0xB0) == 1) {
            *(s32 *)((s8 *)this + 0xB4) = 0x14;
            *(s32 *)((s8 *)this + 0x8C) = -0x3C;
            TWindowDD__sub_803435A0(this);
            return;
        }
        TWindowDD__sub_803484C4(this);
        return;
    }
    if (TWindowDD__sub_803482B0(this) != 0) {
        play_se__9TWindowDDFv();
        apply_entry_layout__9TWindowDDFPv(this);
    }
}

void handle_confirm_input__9TWindowDDFPv(W_80342ED0 *arg0) {
    s32 id;
    TWindowDD__sub_80347C50();
    if (test_input_flag_4__9TWindowDDFv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        id = TWindowDD__sub_80342158(arg0->ids[arg0->idx]);
        arg0->fc6 = TWindowDD__sub_80348448(arg0, id);
        arg0->fb4 = TWindowDD__sub_80348424(arg0, id);
        push_recent_id(id);
        arg0->f104 = 0;
        TWindowDD__sub_803435A0(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        set_state__9TWindowDDFv(arg0);
    }
}

u8 update_numeric_parameter_input__9TWindowDDFPv(u8 *arg0) {
    s32 temp_r3;
    s32 var_r31;
    u8 *var_r3;
    var_r31 = 0;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x84) == 0U) {
        get_current_child_index__9TWindowDDFv();
        temp_r3 = classify_id__9TWindowDDFs();
        if (temp_r3 != 7) {
            open_numeric_parameter_input__9TWindowDDFPviii((void *) (arg0), (int) (0), word_select_numeric_limits[temp_r3], (void *) (TWindowDD__sub_80348D88((void *) (arg0 + 0xC4))));
            return 0U;
        }
        return 1U;
    }
    TWindowDD__sub_80347CC8(arg0, arg0 + 0xC4);
    if (((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) || (all_parents_unqueued_for_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x84)) != 0)) {
        set_field14__9TWindowDDFl((void *) (arg0 + 0xC4), (int) (get_result__24TShopEquipmentSellWindowFv((int) (*(u32 *)((s8 *)arg0 + 0x84)))));
        if (is_confirmed__24TShopEquipmentSellWindowFv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            var_r31 = 2;
            reset_index__9TWindowDDFv((void *) (arg0 + 0xC4));
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x84)));
        } else if (is_confirmed__18TWindowInputNumberFv((int) (*(u32 *)((s8 *)arg0 + 0x84))) != 0) {
            var_r31 = 1;
            TWindow__close((int) (*(u32 *)((s8 *)arg0 + 0x84)));
        }
    } else {
        var_r31 = 2;
    }
    if (var_r31 != 0) {
        var_r3 = (u8 *)(arg0 + (*(s32 *)((s8 *)arg0 + 0x20) * 4));
        var_r3 = (u8 *)(*(u8 **)((s8 *)var_r3 + 0x24));
        TWindowDD__sub_80341AF8((int)(var_r3));
        *(u32 *)((s8 *)arg0 + 0x84) = 0U;
        *(s32 *)((s8 *)arg0 + 0xB8) = 0;
    }
    return (u8) (var_r31 == 1);
}

}
