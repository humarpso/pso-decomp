#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *initialize__21TItemProArmorParticleFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TItemTimerEvent__ct(void *);

extern M2C_UNK lbl_804A05C8[];

void *initialize__21TItemProArmorParticleFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    TItemTimerEvent__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A05C8;
    M2C_FIELD(arg0, void **, 0x2C) = arg4;
    return arg0;
}

}
