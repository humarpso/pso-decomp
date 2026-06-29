#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);

void TQuestListVM__sub_8021874C(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23C0);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

}
