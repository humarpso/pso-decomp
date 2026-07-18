#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(s32 arg0);
M2C_UNK TAdEnterPasswordGC__sub_8032BC94(u32, s32);
s32 get_confirm_state__20TAdSnAkPassConfirmGCFPv(u32);

extern u32 lbl_805D6CB8;

s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(s32 arg0) {
    if ((u32) lbl_805D6CB8 != 0U) {
        if (get_confirm_state__20TAdSnAkPassConfirmGCFPv(lbl_805D6CB8) != 0) {
            return 0;
        }
        TAdEnterPasswordGC__sub_8032BC94(lbl_805D6CB8, arg0);
        return 1;
    }
    return 0;
}

}
