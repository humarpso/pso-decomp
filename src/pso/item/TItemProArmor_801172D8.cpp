#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProArmor__sub_801172D8(void *arg0);
s32 TItemProArmor__sub_8011724C(void *);
s32 TItemProArmor__sub_80117270(void *);
s32 TItemProArmor__sub_801172A4(void *);
u8 TItemProShield__sub_8010B734();
M2C_UNK TObjPlayer__sub_800112A4(s32, s32);

void TItemProArmor__sub_801172D8(void *arg0) {
    s32 var_r31;
    u8 temp_r3;

    var_r31 = 0;
    temp_r3 = TItemProShield__sub_8010B734();
    switch ((s32) temp_r3) {
    case 0:
        var_r31 = TItemProArmor__sub_801172A4(arg0);
        break;
    case 1:
        var_r31 = TItemProArmor__sub_80117270(arg0);
        break;
    case 2:
        var_r31 = TItemProArmor__sub_8011724C(arg0);
        break;
    }
    TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), var_r31);
}

}
