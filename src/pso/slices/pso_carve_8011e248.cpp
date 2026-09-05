#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
s32 TObjPlayer__sub_8011E248(u8 *arg0);
}

extern "C" {

void set_state_flags__10TObjPlayerFPvUi(void* p, u32 v);
u8 TObjPlayer__sub_8011E29C(void* p);
void TObjPlayer__sub_8011E2A4(void* p, u8 v);

s32 TObjPlayer__sub_8011E248(u8 *arg0) {
    if ((test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x400020U) != 0U) || ((u8) M2C_FIELD(arg0, u8 *, 0x1D2) != 0)) {
        return 1;
    }
    return 0;
}

}
