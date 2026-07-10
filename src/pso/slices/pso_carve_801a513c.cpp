#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *get_card_window__17TWindowSubComCardFUi();
s32 fn_801A513C(void* p);
int fn_801A5144(void* p);

s32 fn_801A513C(void* p) { return *(s32*)((char*)p + 0x24); }
int fn_801A5144(void* p) { return *(u8*)((char*)p + 0x1d) & 0x1; }
s32 fn_801A5150(void) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 0x10U) & 3;
}
s32 fn_801A5188(void) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 0xDU) & 7;
}

}
