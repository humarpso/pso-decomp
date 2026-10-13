#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct W_803429B0 { u8 pad[0x20]; s32 idx; s32 ids[1]; };

extern "C" {
s16 TWindowDD__sub_80342158(int);
M2C_UNK apply_entry_layout__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK update_selection_state__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);
void TWindowDD__sub_80342800(u8 *arg0);
s16 TWindowDD__sub_80342158(int);
void TWindowDD__sub_803428C4(u8 *arg0);
s16 TWindowDD__sub_80342158(int);
s32 update_numeric_parameter_input__9TWindowDDFPv();
s32 update_close_flag__9TWindowDDFPv(void *);
M2C_UNK apply_entry_layout__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
s32 TWindowDD_is_id_in_range_5AC_5F9();
M2C_UNK update_selection_state__9TWindowDDFPv(void *);
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);
void TWindowDD__sub_803429B0(u8 *arg0);
}

extern "C" {

void enter_state_16__9TWindowDDFPv(void *arg0);
void update__9TWindowDDFi(s32 arg0);
void update_state__9TWindowDDFPv(void *arg0);
s32 update_numeric_parameter_input__9TWindowDDFPv();
M2C_UNK apply_entry_layout__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK update_selection_state__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_80347C50();
s32 TWindowDD__sub_803482B0(void *);
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 test_input_flag_4__9TWindowDDFPv(void *);
s32 update_close_flag__9TWindowDDFPv(void *);

void enter_state_16__9TWindowDDFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        update_selection_state__9TWindowDDFPv(arg0);
        if (test_input_flag_4__9TWindowDDFPv((void *)(arg0)) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = update_close_flag__9TWindowDDFPv(arg0) == 0;
        } else if (TWindowDD__sub_803482B0((void *)(arg0)) != 0) {
            play_se__9TWindowDDFv();
            apply_entry_layout__9TWindowDDFPv((void *)(arg0));
        }
        break;
    case 1:
        var_r31 = update_numeric_parameter_input__9TWindowDDFPv();
        break;
    }
    if ((s32) var_r31 != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x10;
        TWindowDD__sub_803435A0((void *)(arg0));
    }
}

void update_state__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347C50();
    update_selection_state__9TWindowDDFPv(arg0);
    if (test_input_flag_4__9TWindowDDFPv((void *)(arg0)) != 0) {
        play_sound__9TWindowDDFv();
        M2C_FIELD(arg0, s32 *, 0xB4) = 0xF;
        TWindowDD__sub_803435A0((void *)(arg0));
        return;
    }
    if (TWindowDD__sub_803482B0((void *)(arg0)) != 0) {
        play_se__9TWindowDDFv();
        apply_entry_layout__9TWindowDDFPv((void *)(arg0));
    }
}

void TWindowDD__sub_80342800(u8 *arg0) {
    u8 *var_r31;
    u8 *var_r3;
    var_r31 = (u8 *)(arg0);
    TWindowDD__sub_80347C50();
    var_r3 = (u8 *)(var_r31);
    update_selection_state__9TWindowDDFPv((void *)((int) (var_r3)));
    var_r3 = (u8 *)(var_r31);
    if (test_input_flag_4__9TWindowDDFPv((void *)((int) (var_r3))) != 0) {
        play_sound__9TWindowDDFv();
        var_r3 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
        var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
        if (TWindowDD__sub_80342158((int) (var_r3)) == 0x2C8) {
            var_r3 = (u8 *)((void *)5);
            M2C_FIELD(var_r31, s32 *, 0xB4) = 0x11;
            M2C_FIELD(var_r31, s16 *, 0xC6) = 5;
            M2C_FIELD(var_r31, s16 *, 0xC4) = 0;
        } else {
            var_r3 = (u8 *)((void *)4);
            M2C_FIELD(var_r31, s32 *, 0xB4) = 0xE;
            M2C_FIELD(var_r31, s16 *, 0xC6) = 4;
            M2C_FIELD(var_r31, s16 *, 0xC4) = 1;
        }
        var_r3 = (u8 *)(var_r31);
        TWindowDD__sub_803435A0((void *)((int) (var_r3)));
        return;
    }
    var_r3 = (u8 *)(var_r31);
    if (TWindowDD__sub_803482B0((void *)((int) (var_r3))) != 0) {
        play_se__9TWindowDDFv();
        var_r3 = (u8 *)(var_r31);
        apply_entry_layout__9TWindowDDFPv((void *)((int) (var_r3)));
    }
}

void TWindowDD__sub_803428C4(u8 *arg0) {
    u8 *var_r31;
    u8 *var_r3;
    var_r31 = (u8 *)(arg0);
    M2C_FIELD(arg0, M2C_UNK32 *, 0xB4) = 0xD;
    M2C_FIELD(arg0, s16 *, 0xFC) = 0x37;
    var_r3 = (u8 *)(var_r31 + (M2C_FIELD(arg0, s32 *, 0x20) * 4));
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
    if (var_r3 != NULL) {
        M2C_FIELD(var_r31, s16 *, 0xFC) = TWindowDD__sub_80342158((int)(var_r3));
        if ((s16) M2C_FIELD(var_r31, s16 *, 0xFC) == 0x43) {
            var_r3 = (u8 *)((void *)0x11U);
            M2C_FIELD(var_r31, M2C_UNK32 *, 0xB4) = 0x11;
            M2C_FIELD(var_r31, s16 *, 0xC6) = 5;
        }
        M2C_FIELD(var_r31, s16 *, 0xC4) = 0;
    }
}

void update__9TWindowDDFi(s32 arg0) {
    TWindowDD__sub_80347C50();
    if (test_input_flag_4__9TWindowDDFPv((void *)(arg0)) != 0) {
        play_sound__9TWindowDDFv();
        TWindowDD__sub_803428C4((u8 *)(arg0));
        TWindowDD__sub_803435A0((void *)(arg0));
        return;
    }
    if (TWindowDD__sub_803482B0((void *)(arg0)) != 0) {
        play_se__9TWindowDDFv();
        apply_entry_layout__9TWindowDDFPv((void *)(arg0));
    }
}
void TWindowDD__sub_803429B0(u8 *arg0) {
    s32 var_r31;
    u8 *var_r3;
    var_r31 = 0;
    switch (M2C_FIELD(arg0, s32 *, 0xB8)) {
    case 0:
        ((M2C_UNK (*)())update_selection_state__9TWindowDDFPv)();
        if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = update_close_flag__9TWindowDDFPv(arg0) == 0;
        } else if (TWindowDD__sub_803482B0(arg0) != 0) {
            play_se__9TWindowDDFv();
            apply_entry_layout__9TWindowDDFPv(arg0);
        }
        break;
    case 1:
        var_r31 = update_numeric_parameter_input__9TWindowDDFPv();
        break;
    }
    if (var_r31 != 0) {
        var_r3 = (u8 *)(arg0 + (M2C_FIELD(arg0, s32 *, 0x20) * 4));
        var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
        TWindowDD__sub_80342158((int)(var_r3));
        if (TWindowDD_is_id_in_range_5AC_5F9() != 0) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0xA;
        } else {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0xB;
            M2C_FIELD(arg0, s32 *, 0x90) = -1;
        }
        M2C_FIELD(arg0, s32 *, 0x8C) = -0x32;
        TWindowDD__sub_803435A0(arg0);
    }
}

}
