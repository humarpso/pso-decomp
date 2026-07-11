#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void spawn_effect__10TOMineTrapFi(s32 arg0);
void attach_to_keymachine__10TOMineTrapFi(s32 arg0);
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK fn_8022675C(s32, s32, M2C_UNK, M2C_UNK);

extern s8 lbl_804420A8[];

void spawn_effect__10TOMineTrapFi(s32 arg0) {
    s32 idx = TOKeyMachine01__sub_802034A8();
    s32 elem = *(s32 *)(lbl_804420A8 + idx * 4);
    if (elem != -1) {
        fn_8022675C(elem, arg0 + 0x38, 0, 0);
    }
}

extern s8 lbl_80442018[];

void attach_to_keymachine__10TOMineTrapFi(s32 arg0) {
    s32 idx = TOKeyMachine01__sub_802034A8();
    s32 elem = *(s32 *)(lbl_80442018 + idx * 4);
    if (elem != -1) {
        fn_8022675C(elem, arg0 + 0x38, 0, 0);
    }
}

}
