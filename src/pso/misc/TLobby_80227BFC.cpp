#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_camera_state_active__6TLobbyFv(void);
void set_mode__6TLobbyFi(s32 arg0);
u16 TCameraCtrl__sub_8006A5DC();
M2C_UNK set_mode__6TLobbyFPvi(M2C_UNK *, s32);
M2C_UNK on_set_mode__6TLobbyFv(M2C_UNK);

s32 is_camera_state_active__6TLobbyFv(void) {
    if ((TCameraCtrl__sub_8006A5DC() == 5) || (TCameraCtrl__sub_8006A5DC() == 9)) {
        return 1;
    }
    return 0;
}

extern M2C_UNK lbl_80514F64[];

void set_mode__6TLobbyFi(s32 arg0) {
    switch (arg0) {
    case 0:
        on_set_mode__6TLobbyFv(1);
        break;
    case 1:
        on_set_mode__6TLobbyFv(0);
        break;
    case 2:
        on_set_mode__6TLobbyFv(0);
        break;
    }
    set_mode__6TLobbyFPvi(lbl_80514F64, arg0);
}

}
