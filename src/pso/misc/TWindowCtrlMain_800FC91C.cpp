#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_card_status__15TWindowCtrlMainFi(s32 arg0);
int get_instance__15TWindowCtrlMainFv(void);
M2C_UNK fn_800FCCC8(s32, s32);
s32 get_card_status_bits__20TWindowShortListCtrlFv();

    extern int TWindowCtrlMain__data_805D6404;
int get_instance__15TWindowCtrlMainFv(void) {  return TWindowCtrlMain__data_805D6404; }

void advance_card_status__15TWindowCtrlMainFi(s32 arg0) {
    s32 var_r4;

    var_r4 = get_card_status_bits__20TWindowShortListCtrlFv() + 1;
    if (var_r4 >= 5) {
        var_r4 = 0;
    }
    fn_800FCCC8(arg0, var_r4);
}

}
