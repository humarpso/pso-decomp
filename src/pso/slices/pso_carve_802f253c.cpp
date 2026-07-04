#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_802F25AC(void *);
M2C_UNK fn_802F2664(void *, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK fn_802F2714();
extern M2C_UNK lbl_804E49A0[];
extern s32 lbl_805D6968;

void fn_802F253C(void *arg0) {
    fn_802F2714();
    fn_802F2664(arg0, lbl_804E49A0, 0x1F, 0);
    if (lbl_805D6968 & 0x200) {
        lbl_805D6968 &= 0xFFFFFDFF;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
    }
    fn_802F25AC(arg0);
}

}
