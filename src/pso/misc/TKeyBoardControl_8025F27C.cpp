#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_8025F27C(void *arg0);
u8 fn_80132404(M2C_UNK *);

extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 TKeyBoardControl__sub_8025F27C(void *arg0) {
    u8 temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x60) & 0x40) {
        return 3;
    }
    temp_r3 = fn_80132404(TKeyBoardControl__data_80506270);
    switch ((s32) temp_r3) {
    case 4:
        return 1;
    case 2:
        return 0;
    case 3:
        return 2;
    default:
        return 3;
    }
}

}
