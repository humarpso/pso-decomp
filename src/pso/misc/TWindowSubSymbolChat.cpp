#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 compute_total_height__20TWindowSubSymbolChatFv(void);
s32 TWindowSubSymbolChat__sub_802837DC(void);
void* TWindowSubSymbolChat__sub_80283800(void* p);
unsigned char TWindowSubSymbolChat__sub_80283808(void);
void set_flag_bit1__20TWindowSubSymbolChatFPv(s32 *arg0);
s32 commit__20TWindowSubSymbolChatFi(s32 arg0);
s32 TWindowSubSymbolChat__sub_80077310();
M2C_UNK TWindowSubSymbolChat__sub_80283850();
s32 fn_80077334(void);

s32 compute_total_height__20TWindowSubSymbolChatFv(void) {
    s32 temp_r31;

    s32 temp_r3;
    temp_r31 = TWindowSubSymbolChat__sub_802837DC();
    temp_r3 = fn_80077334();
    return temp_r3 + temp_r31;
}
s32 TWindowSubSymbolChat__sub_802837DC(void) {
    return 0xC - TWindowSubSymbolChat__sub_80077310();
}
void* TWindowSubSymbolChat__sub_80283800(void* p) { return (char*)p + 0x4; }

    extern unsigned char lbl_805D4E54;
unsigned char TWindowSubSymbolChat__sub_80283808(void) {  return lbl_805D4E54; }

void set_flag_bit1__20TWindowSubSymbolChatFPv(s32 *arg0) {
    *arg0 |= 1;
}

s32 commit__20TWindowSubSymbolChatFi(s32 arg0) {
    TWindowSubSymbolChat__sub_80283850();
    return arg0;
}

}
