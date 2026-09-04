#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__vt7(s32 arg0);
M2C_UNK TWindowHelpItem__sub_802541E0();
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
M2C_UNK set_flag0_bit2__15TWindowHelpItemFPv(int);

void TWindowHelpItem__vt7(s32 arg0) {
    s32 temp_r31;
    s32 temp_r31_2;

    TWindowHelpItem__sub_802541E0();
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (5));
    temp_r31_2 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (6));
    set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r31));
    set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r31_2));
}

}
