#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TRaderMapCore__sub_8002F588(void *, void *);
void set_flags64__8TItemMagFPvUi(void* p, u32 v);

void TItemMag__sub_80113CB8(u8 *arg0, s32 arg1, u32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x70) = arg1;
    if (arg2 != 0U) {
        TRaderMapCore__sub_8002F588((void *) (arg0 + 0xB8), (void *) (arg2));
    }
}

}

}
