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
M2C_UNK reset_state__13TObjLobbyMainFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_particles__13TObjLobbyMainFPv(void *);
M2C_UNK update_computer_machines__13TObjLobbyMainFv(void *);
M2C_UNK TObjLobbyMain__sub_80352624(void *);

void run_task__13TObjLobbyMainFv(void *arg0) {
    s32 temp_r0;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
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
        reset_state__13TObjLobbyMainFPv(arg0);
        break;
    }
    update_computer_machines__13TObjLobbyMainFv(arg0);
    TObjLobbyMain__sub_8035255C(arg0);
    update_particles__13TObjLobbyMainFPv(arg0);
}

}
