#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 GetTRKConnected();
u8 TRKCloseFile(int, void *);
s32 __close_console(s32 arg0);
}

extern "C" {

s32 __close_console(s32 arg0) {
    u8 temp_r3;
    if (GetTRKConnected() == 0) {
        return 1;
    }
    temp_r3 = TRKCloseFile((int) (0xD3), (void *) (arg0));
    switch ((s32) temp_r3) {
    case 0:
        return 0;
    case 2:
        return 2;
    case 1:
    default:
        return 1;
    }
}

}
