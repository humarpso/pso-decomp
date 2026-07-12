#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__25TObjCityMainWarpChallengeFPv(void *arg0);

M2C_UNK TObjCityMainWarp__sub_80186DA0();
M2C_UNK update_challenge_warp_window();
M2C_UNK update_state__16TObjCityMainWarpFPv();
M2C_UNK TObjCityMainWarp__sub_8018709C();
M2C_UNK TObjCityMainWarp__sub_801871D0();

void update_state__25TObjCityMainWarpChallengeFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xDE);
    switch (temp_r0) {
    case 0:
        TObjCityMainWarp__sub_801871D0();
        return;
    case 1:
        TObjCityMainWarp__sub_8018709C();
        return;
    case 2:
        update_state__16TObjCityMainWarpFPv();
        return;
    case 3:
        update_challenge_warp_window();
        return;
    case 4:
        TObjCityMainWarp__sub_80186DA0();
        return;
    }
}

}
