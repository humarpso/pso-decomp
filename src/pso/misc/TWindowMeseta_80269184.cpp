#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TWindowMesetaFv(u8 *arg0);
s32 get_meseta_value__13TWindowMesetaFPv();
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK fn_8024664C(void *);
M2C_UNK fn_80257C28(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_80259E00(M2C_UNK, s32, f32);

extern const f32 lbl_805DD200;

void run_task__13TWindowMesetaFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_meseta_value__13TWindowMesetaFPv();
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x68)) {
        M2C_FIELD(arg0, s32 *, 0x68) = temp_r3;
        TWindowSubStatusDisp__sub_80259E00(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), M2C_FIELD(arg0, s32 *, 0x68), lbl_805DD200);
    }
    fn_8024664C(arg0);
    fn_80257C28(arg0, arg0 + 0x24);
}

}
