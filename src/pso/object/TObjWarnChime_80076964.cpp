#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_when_camera_active__13TObjWarnChimeFPv(void *arg0);
M2C_UNK fn_80076760(void *);
M2C_UNK fn_800767D8(void *);
s32 should_update__11TCameraCtrlFv();

void update_when_camera_active__13TObjWarnChimeFPv(void *arg0) {
    if (should_update__11TCameraCtrlFv() == 0) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        return;
    }
    fn_800767D8(arg0);
    fn_80076760(arg0);
}

}
