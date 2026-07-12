#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TLockOnCursorFv(s32 arg0);

s32 TMainCursor__sub_8013DF08(s32);
M2C_UNK TLockOnCursor__sub_8013EB80(s32);
M2C_UNK TLockOnCursor__sub_8013EB8C(s32);

void run_task__13TLockOnCursorFv(s32 arg0) {
    if (TMainCursor__sub_8013DF08(arg0 + 0x520) != 0) {
        TLockOnCursor__sub_8013EB8C(arg0 + 0x520);
        return;
    }
    TLockOnCursor__sub_8013EB80(arg0 + 0x520);
}

}
