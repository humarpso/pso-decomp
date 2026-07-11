#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001EEF4();
s32 fn_8001EEFC(M2C_UNK *);
M2C_UNK fn_80073DC4(void *, s32);
extern M2C_UNK TQuestListVM__data_8044BF20[];

void quest_vm_load(void *arg0) {
    if (fn_8001EEF4() != 0) {
        M2C_FIELD(arg0, s32 *, 0x2384) = fn_8001EEFC(TQuestListVM__data_8044BF20);
        fn_80073DC4(arg0, M2C_FIELD(arg0, s32 *, 0x2370));
    }
}

}
