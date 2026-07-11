#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__vt4(void *arg0);
M2C_UNK TWindowDuelResult__sub_8025AD38(void *, s32);
M2C_UNK TWindowHelpItem__sub_8025A9B4(void *);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK TWindowHelpItem__sub_802541E0();

void TWindowHelpItem__vt4(void *arg0) {
    void *temp_r30;
    void *temp_r31;

    TWindowHelpItem__sub_802541E0();
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 5);
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
    TWindowDuelResult__sub_8025AD38(temp_r30, TWindowSubStatusDisp__sub_80077760(0xA1));
    TWindowHelpItem__sub_8025A9B4(temp_r30);
    M2C_FIELD(temp_r31, s32 *, 0x20) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 5);
}

}
