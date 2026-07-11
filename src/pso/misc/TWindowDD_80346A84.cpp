#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowDD__sub_80346A84(s32 arg0);

extern s32 lbl_805D6E08;
extern s32 lbl_805D6E1C;
extern s32 lbl_805D6E2C;
extern s32 lbl_805D6E38;

s32 TWindowDD__sub_80346A84(s32 arg0) {
    if (arg0 == -1) {
        return 0;
    }
    if (arg0 == -0x32) {
        switch ((s32) lbl_805D6E08) {
        case 0:
            return lbl_805D6E2C + 0x8C0;
        default:
            return lbl_805D6E2C + 0x920;
        case 4:
            return lbl_805D6E2C + 0x920;
        case 2:
            return lbl_805D6E2C + 0x920;
        case 3:
            return lbl_805D6E2C + 0x928;
        }
    } else {
        if ((arg0 >= 0) && (arg0 < (s32) lbl_805D6E38)) {
            return lbl_805D6E2C + (arg0 * 8);
        }
        switch (arg0) {
        default:
            return 0;
        case -60:
            return lbl_805D6E1C + 0x10;
        case -70:
            return lbl_805D6E1C + 0x18;
        case -40:
            return lbl_805D6E1C;
        case -45:
            return lbl_805D6E1C + 8;
        case -80:
            return lbl_805D6E1C + 0x20;
        case -90:
            return lbl_805D6E1C + 0x28;
        }
    }
}

}
