#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *heaven_punisher_ct(void *arg0);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
void TObjPlayer__sub_8012AF00(void *);

extern M2C_UNK heaven_punisher_weapon_vtable[];

void *heaven_punisher_ct(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = heaven_punisher_weapon_vtable;
    TObjPlayer__sub_8012AF00((void *)((char *)arg0 + 504));
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
