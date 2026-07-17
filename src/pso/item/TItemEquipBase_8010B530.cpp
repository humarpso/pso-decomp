#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemLoad__sub_801103F4(s16);
s32 get_field_ed__10TObjPlayerFPv();
void TItemEquipBase__sub_8010B620(void);

void release__14TItemEquipBaseFPv(void *arg0) {
    s16 temp = M2C_FIELD(arg0, s16 *, 0x172);
    if (temp != -1) {
        TItemLoad__sub_801103F4(temp);
        M2C_FIELD(arg0, s16 *, 0x172) = -1;
        M2C_FIELD(arg0, s32 *, 0xF4) = 0;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x188) = 0;
        M2C_FIELD(arg0, s32 *, 0x17C) = 0;
        M2C_FIELD(arg0, s32 *, 0x180) = 0;
        M2C_FIELD(arg0, s32 *, 0x184) = 0;
    }
}

}
