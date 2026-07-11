#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_list__13TWindowSubMagFPv(void *arg0);
s32 setup_list__13TWindowSubMagFPv(void *arg0);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
s32 TWindowShortListCtrl__sub_80278E48(s32, M2C_UNK *, s32);
M2C_UNK init_and_setup__13TWindowSubMagFPvPv(s32, M2C_UNK);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK fn_80244D2C(s32);
M2C_UNK fn_80263AF8(s32, M2C_UNK);
M2C_UNK fn_80267B90(s32, s32);
s32 fn_8026CBB8(M2C_UNK);
M2C_UNK fn_802785FC(s32);

extern M2C_UNK lbl_8044F9F8[];

s32 create_list__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r31;

    s32 temp_r3 = fn_8026CBB8((M2C_UNK)(0xD));
    temp_r31 = TWindowShortListCtrl__sub_80278E48((s32)(temp_r3), (M2C_UNK *)(lbl_8044F9F8), (s32)(M2C_FIELD(arg0, s32 *, 0x28)));
    fn_80267B90(temp_r31, TWindowSubStatusDisp__sub_80077760(0x24));
    fn_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 2);
    fn_80244D2C(temp_r31);
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    fn_802785FC(temp_r31);
    return temp_r31;
}

extern M2C_UNK lbl_8044F9F0[];

s32 setup_list__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r31;
    M2C_UNK temp_r3;

    temp_r3 = fn_8026CBB8((M2C_UNK)(7));
    temp_r31 = TWindowShortListCtrl__sub_80278E48((s32)(temp_r3), (M2C_UNK *)(lbl_8044F9F0), (s32)(M2C_FIELD(arg0, s32 *, 0x28)));
    fn_80267B90(temp_r31, TWindowSubStatusDisp__sub_80077760(0x29));
    fn_80263AF8(M2C_FIELD(arg0, s32 *, 0x30), 0);
    fn_80244D2C(temp_r31);
    set_flag70_bit10__20TWindowShortListCtrlFPv(temp_r31);
    init_and_setup__13TWindowSubMagFPvPv(temp_r31, 2);
    return temp_r31;
}

}
