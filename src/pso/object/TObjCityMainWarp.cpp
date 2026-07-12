#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjCityMainWarp__vt14(s32 arg0);

s32 TCameraCtrl__sub_8006B368();
s32 TObjAreaWarp__sub_8019CCF0(s32);
s32 TLobby__sub_8030A7B0();

s32 TObjCityMainWarp__vt14(s32 arg0) {
    if ((TLobby__sub_8030A7B0() == 1) && (TCameraCtrl__sub_8006B368() == 0)) {
        return 0;
    }
    return TObjAreaWarp__sub_8019CCF0(arg0);
}

}
