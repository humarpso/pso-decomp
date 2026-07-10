#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TObjLobbyMainFv(void *arg0);
M2C_UNK TObjLobbyMain__sub_803520D8(void *);
M2C_UNK TObjLobbyMain__sub_8035255C(void *);
M2C_UNK TObjLobbyMain__sub_803525F0(void *);
M2C_UNK TObjLobbyMain__sub_80352690(void *);
s32 fn_80080750();
M2C_UNK update_particles__13TObjLobbyMainFPv(void *);
M2C_UNK TObjLobbyMain__sub_803524F8(void *);
M2C_UNK TObjLobbyMain__sub_80352624(void *);

void run_task__13TObjLobbyMainFv(void *arg0) {
    s32 temp_r0;

    if (fn_80080750() == 1) {
        TObjLobbyMain__sub_803520D8(arg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 0:
        TObjLobbyMain__sub_80352624(arg0);
        break;
    case 1:
        TObjLobbyMain__sub_803525F0(arg0);
        break;
    default:
    case 2:
        TObjLobbyMain__sub_80352690(arg0);
        break;
    }
    TObjLobbyMain__sub_803524F8(arg0);
    TObjLobbyMain__sub_8035255C(arg0);
    update_particles__13TObjLobbyMainFPv(arg0);
}

}
