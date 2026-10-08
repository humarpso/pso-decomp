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
M2C_UNK TWindowKeyBoardSoft__sub_8026088C(void *, s32);
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
            TWindowKeyBoardSoft__sub_8026088C(arg0, temp_r3);
            TWindowKeyBoardSoft__sub_80260808(arg0, temp_r3);
        }
        initialize_subwindow__9TWindowDDFPv(arg0);
        update_fade__17TWindowSubComCardFPv(arg0);
        M2C_FIELD(arg0, f32 *, 0x68) -= lbl_805DD0D4 * M2C_FIELD(arg0, f32 *, 0x68);
    }
}

}
