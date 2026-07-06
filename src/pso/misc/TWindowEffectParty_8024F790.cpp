#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowEffectParty__sub_8024F790(s32 arg0, s32 arg1, void *arg2);
M2C_UNK TWindowSubSymbolChatPartsSet__sub_80052EA0(void *, s32);
void *fn_8024FB80(s8);
s32 fn_8026CBB8(M2C_UNK);

extern const f32 lbl_805DCCC4;
extern const f32 lbl_805DCCC8;
extern const f32 lbl_805DCCCC;
extern const f32 lbl_805DCCD0;

void TWindowEffectParty__sub_8024F790(s32 arg0, s32 arg1, void *arg2) {
    void *temp_r3;
    (void)arg0;

    if (arg1 <= 0) {
        TWindowSubSymbolChatPartsSet__sub_80052EA0(arg2, fn_8026CBB8(0x1C));
        M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg2, f32 *, 0) + lbl_805DCCC4);
        M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg2, f32 *, 4) + lbl_805DCCC8);
        return;
    }
    temp_r3 = fn_8024FB80((s8) (arg1 - 1));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) (lbl_805DCCCC + M2C_FIELD(temp_r3, f32 *, 0x30));
        M2C_FIELD(arg2, f32 *, 4) = (f32) (lbl_805DCCD0 + M2C_FIELD(temp_r3, f32 *, 0x34));
    }
}

}
