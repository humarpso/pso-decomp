#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TWindowSubSymbolChat__sub_8007714C(struct TWSC *, s32);
M2C_UNK TWindowSubSymbolChat__sub_800771B0(struct TWSC *, s32);
s32 TWindowSubSymbolChat__sub_800771C4(struct TWSC *, s32);
struct TWSC *get_instance__20TWindowSubSymbolChatFv();
s32 calc_remaining_slots__20TWindowSubSymbolChatFv();
s32 calc_symbol_index__20TWindowSubSymbolChatFPv();
void fn_80284CB8(void);
}

extern "C" {

struct TWSC;
void fn_80284CB8(void) {
    s32 var_r31;
    s32 temp_r30;
    s32 temp_r3;
    struct TWSC *temp_r29;
    temp_r30 = calc_symbol_index__20TWindowSubSymbolChatFPv();
    temp_r29 = get_instance__20TWindowSubSymbolChatFv();
    temp_r3 = calc_remaining_slots__20TWindowSubSymbolChatFv();
    if (temp_r3 > temp_r30) {
        TWindowSubSymbolChat__sub_8007714C(temp_r29, temp_r30);
        return;
    }
    temp_r30 -= temp_r3;
    for (var_r31 = 0; var_r31 < 4; var_r31 += 1) {
        if (TWindowSubSymbolChat__sub_800771C4(temp_r29, var_r31) != 0) {
            if (temp_r30-- <= 0) {
                TWindowSubSymbolChat__sub_800771B0(temp_r29, var_r31);
                return;
            }
        }
    }
}

}
