#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 fn_8026CBB8(M2C_UNK);
M2C_UNK fn_802A571C(s32);
M2C_UNK TWindowSubComCard__sub_802A5768(s32, M2C_UNK);
M2C_UNK fn_802A58AC(s32, s32, s32, s32, f32);
s32 TWindowMessageYesNo__sub_802A59D8(void *, s32, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DD520;

s32 TWindowSubComCard__sub_80273054(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    fn_802A58AC(temp_r29, TWindowSubStatusDisp__sub_80077760(0x20), TWindowSubStatusDisp__sub_80077760(0x100), fn_8026CBB8(0x97), lbl_805DD520);
    TWindowSubComCard__sub_802A5768(temp_r29, 1);
    fn_802A571C(temp_r29);
    return temp_r29;
}

}
