#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__11TMainCursorFi(s32 arg0);
u8 is_position_moved__11TMainCursorFPv(s32);
void *TPhotonMylla__sub_80154CB4();
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
M2C_UNK TMainCursor__sub_8013E308(s32);

void update_position__11TMainCursorFi(s32 arg0) {
    void *temp_r3;

    TMainCursor__sub_8013E308(arg0 + 0x60);
    temp_r3 = TPhotonMylla__sub_80154CB4();
    if (temp_r3 != NULL) {
        s32 base = M2C_FIELD(temp_r3, s32 *, 0xA4) + is_position_moved__11TMainCursorFPv(arg0) * 0x2C;
        VecCopy__FP3VecPC3Vec(arg0 + 0x40, base + 0x1C);
    }
}

}
