#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_owner_data__8TItemMagFPv(u8 *arg0);
int TObjPlayer__sub_8001972C();
M2C_UNK TItemMag__sub_80111140(void *, void *, void *);
u8 *TObjPlayer__sub_8011CC58(u8);

void copy_owner_data__8TItemMagFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = TObjPlayer__sub_8011CC58(TObjPlayer__sub_8001972C());
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1B8) = (s32) M2C_FIELD(temp_r3, s16 *, 8);
        M2C_FIELD(arg0, u8 *, 0x1BC) = (u8) M2C_FIELD(temp_r3, u8 *, 0xB);
        TItemMag__sub_80111140(arg0, temp_r3 + 0xC, temp_r3 + 0x10);
    }
}

}
