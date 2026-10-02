#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 calc_buy_price__9TItemDataFPv(void *);
u32 format_item_description(void *);
void text_builder_append(s32);
void TWindowSubStatusDisp__sub_802290E0(void);
extern M2C_UNK lbl_805DCDE0;
void TWindowSubStatusDisp__sub_80253154(u8 *arg0);
}

extern "C" {

void TWindowSubStatusDisp__sub_80253154(u8 *arg0) {
    TWindowSubStatusDisp__sub_802290E0();
    text_builder_append(format_item_description(M2C_FIELD(arg0, u8 **, 0x68)));
    text_builder_append((s32) &lbl_805DCDE0);
    text_builder_append(calc_buy_price__9TItemDataFPv(M2C_FIELD(arg0, u8 **, 0x68)));
}

}
