#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int fn_8022ACB4(void);
s32 get_flag_9__7TObjectFv(void *arg0);
int TTecAnti__sub_8022AD74(void* p);
void TTecAnti__sub_8022AD94(void);
int fn_80236EE8(void*);
int queue_destruction__7TObjectFv(void*);
int queue_destruction__8TTecAntiFPv(void* p);

s32 get_flag_9__7TObjectFv(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 4) & 0x200;
}

int fn_8022ACB4(void) { return 0; }

}
