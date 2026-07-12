#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TObjEneGibbles__sub_80156780(void *, void *, void *);
void TObjPlayer__sub_801569F4(void *);

extern M2C_UNK lbl_804928CC[];

void *init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    TObjPlayer__sub_801569F4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804928CC;
    TObjEneGibbles__sub_80156780(arg0, arg3, arg4);
    M2C_FIELD(arg0, void **, 0xAC) = arg2;
    return arg0;
}

}
