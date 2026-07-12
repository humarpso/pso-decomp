#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__22TWindowSubShortCutListFv(void *arg0);
s32 TLobby__sub_8013AD38(void *);
M2C_UNK fn_80268048();
s32 fn_8026C9DC(s32);
M2C_UNK fn_8027E278(void *);

void run_task__22TWindowSubShortCutListFv(void *arg0) {
    fn_80268048();
    if ((TLobby__sub_8013AD38(arg0) == 0) && (fn_8026C9DC(M2C_FIELD(arg0, s32 *, 0x88)) != 0)) {
        fn_8027E278(arg0);
    }
}

}
