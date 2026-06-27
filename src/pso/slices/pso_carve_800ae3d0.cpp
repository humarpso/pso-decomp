#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_800AE3D0(void *arg0) {
    void *temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        M2C_FIELD(arg0, s16 *, 0x326) = 3;
        switch ((s32) M2C_FIELD(arg0, s32 *, 0x388)) {
        case 1:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            break;
        default:
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 2;
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x384) = -1;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xF9FBFFFF);
        temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) | 1);
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
    }
}

}
