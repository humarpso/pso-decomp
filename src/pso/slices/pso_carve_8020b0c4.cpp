#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800F8A0C();
M2C_UNK copy_name(M2C_UNK *);
s32 fn_8039DABC(M2C_UNK, M2C_UNK *, M2C_UNK);
extern s32 lbl_805D60E0;
extern s32 lbl_805D60E4;
extern s32 lbl_805D60E8;
extern s32 lbl_805D60EC;
extern s32 lbl_805D60F4;
extern M2C_UNK lbl_805DC620;
extern M2C_UNK lbl_805DC624;

void clear_map_set_data(void) {
    lbl_805D60E0 = 0;
    lbl_805D60E4 = 0;
    lbl_805D60E8 = 0;
    lbl_805D60EC = 0;
    lbl_805D60F4 = 0;
    M2C_UNK temp_r3 = fn_800F8A0C();
    if (fn_8039DABC(temp_r3, &lbl_805DC620, 0x10) == 0) {
        copy_name(&lbl_805DC624);
    }
}

}
