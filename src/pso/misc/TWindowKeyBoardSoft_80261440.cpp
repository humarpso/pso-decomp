#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowKeyBoardSoft__sub_8026262C(void *arg0);
s32 is_key_active__16TKeyBoardControlFPv(u32);
M2C_UNK TWindowKeyBoardSoft__sub_80260904(void *, s32);
M2C_UNK TWindowKeyBoardSoft__sub_80260E30(void *, s32);
s32 fn_80244994();
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
s32 is_player_input_active(s16);
M2C_UNK TWindowKeyBoardSoft__sub_80260808(void *, s32);
M2C_UNK update_keyboard_child_input_from_controller(void *, s32);
M2C_UNK handle_page_cycle_input__19TWindowKeyBoardSoftFPvi(void *, s32);

extern const f32 lbl_805DD0D4;

void TWindowKeyBoardSoft__sub_8026262C(void *arg0) {
    f32 temp_f0;
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        if ((fn_80244994() != 0) && (is_key_active__16TKeyBoardControlFPv(M2C_FIELD(arg0, u32 *, 0x6C)) == 0)) {
            temp_r3 = is_player_input_active(M2C_FIELD(arg0, s16 *, 0x20));
            handle_page_cycle_input__19TWindowKeyBoardSoftFPvi(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_80260E30(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_80260904(arg0, temp_r3);
            update_keyboard_child_input_from_controller(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_80260808(arg0, temp_r3);
        }
        initialize_subwindow__9TWindowDDFPv(arg0);
        update_fade__17TWindowSubComCardFPv(arg0);
        M2C_FIELD(arg0, f32 *, 0x68) -= lbl_805DD0D4 * M2C_FIELD(arg0, f32 *, 0x68);
    }
}

}

#pragma fp_contract off

struct RecoveredGlobal_80262740___vt__19TWindowKeyBoardSoft {
    M2C_UNK value;
    u8 remaining[0x220];
};

struct RecoveredGlobal_80262740_lbl_804D0004 {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
s32 construct_base__9TWindowDDFPvPvsPv(void *, void *, void *, int);
s32 close__19TWindowKeyBoardSoftFPv(void *);
s32 get_window_layout_position(int);
extern RecoveredGlobal_80262740___vt__19TWindowKeyBoardSoft __vt__19TWindowKeyBoardSoft;
extern M2C_UNK lbl_804D0004[];
extern s32 keyboard_soft_type_name_pointer;
extern const f32 TWindowKeyBoardSoft__data_805DD090;
u8 *TWindowKeyBoardSoft__ct(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

void *destroy__19TWindowKeyBoardSoftFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804D0004[];

void *destroy__19TWindowKeyBoardSoftFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0004;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80262740___vt__19TWindowKeyBoardSoft_size[sizeof(RecoveredGlobal_80262740___vt__19TWindowKeyBoardSoft) == 0x224 ? 1 : -1];
typedef char RecoveredGlobal_80262740_lbl_804D0004_size[sizeof(RecoveredGlobal_80262740_lbl_804D0004) == 0x1C ? 1 : -1];
u8 *TWindowKeyBoardSoft__ct(u8 *arg0, s32 arg1, s16 arg2) {
    construct_base__9TWindowDDFPvPvsPv((void *) (arg0), (void *) (&__vt__19TWindowKeyBoardSoft.value), (void *) (arg2), (int) (get_window_layout_position((int) (0xBA))));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80262740_lbl_804D0004 *)&lbl_804D0004).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) keyboard_soft_type_name_pointer;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s8 *, 0x64) = 0;
    M2C_FIELD(arg0, s8 *, 0x65) = 2;
    M2C_FIELD(arg0, s8 *, 0x66) = 1;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) TWindowKeyBoardSoft__data_805DD090;
    M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
    close__19TWindowKeyBoardSoftFPv((void *) (arg0));
    return arg0;
}

}
