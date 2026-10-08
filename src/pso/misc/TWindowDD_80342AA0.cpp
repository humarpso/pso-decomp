#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s16 TWindowDD__sub_80342158(void *);
void TWindowDD__sub_80342B5C(u8 *arg0);
}

extern "C" {

void enter_state_9__9TWindowDDFPv(void *arg0);
s32 TWindowDD__sub_80342F84();
s32 update_close_flag__9TWindowDDFPv(void *);
M2C_UNK apply_entry_layout__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK update_selection_state__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void enter_state_9__9TWindowDDFPv(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        update_selection_state__9TWindowDDFPv(arg0);
        if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = update_close_flag__9TWindowDDFPv(arg0) == 0;
        } else if (TWindowDD__sub_803482B0(arg0) != 0) {
            play_se__9TWindowDDFv();
            apply_entry_layout__9TWindowDDFPv(arg0);
        }
        break;
    case 1:
        var_r31 = TWindowDD__sub_80342F84();
        break;
    }
    if ((s32) var_r31 != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 9;
        TWindowDD__sub_803435A0(arg0);
    }
}
void TWindowDD__sub_80342B5C(u8 *arg0) {
    u8 *var_r31;
    u8 *var_r3;
    var_r31 = (u8 *)(arg0);
    M2C_FIELD(arg0, s32 *, 0xB4) = 8;
    M2C_FIELD(arg0, s16 *, 0xFC) = 0x37;
    var_r3 = (u8 *)(var_r31 + (M2C_FIELD(arg0, s32 *, 0x20) * 4));
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
    if (var_r3 != NULL) {
        M2C_FIELD(var_r31, s16 *, 0xFC) = TWindowDD__sub_80342158(var_r3);
    }
}

}
