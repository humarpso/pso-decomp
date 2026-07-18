#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open_default__23TShopJudgmentItemWindowFi(s32 a);
M2C_UNK TShopJudgmentItemWindow__sub_8026DF00(s32, s32, s32);

extern s32 lbl_805D53A0;

void open_default__23TShopJudgmentItemWindowFi(s32 a) {
    TShopJudgmentItemWindow__sub_8026DF00(a, 0x40, lbl_805D53A0);
}

}
