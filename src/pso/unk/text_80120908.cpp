#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_8010A770(void *);
s32 set_equip_flag__14TItemEquipBaseFPvUc(void *, void *);
s32 TObjPlayer__sub_80120908(void *);
void TObjPlayer__sub_80120BBC(s32 arg0, s8 arg1);
}

extern "C" {

void TObjPlayer__sub_80120BBC(s32 arg0, s8 arg1) {
    s8 temp_r31;
    temp_r31 = TObjPlayer__sub_8010A770((void *) (arg0));
    set_equip_flag__14TItemEquipBaseFPvUc((void *) (arg0), (void *) (arg1));
    TObjPlayer__sub_80120908((void *) (arg0));
    set_equip_flag__14TItemEquipBaseFPvUc((void *) (arg0), (void *) (temp_r31));
}

}
