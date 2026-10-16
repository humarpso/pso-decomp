#include "types.h"
#include "pso/misc/TLobby.h"
extern "C" {
s32 get_layout_id__20TWindowSubStatusDispFv(s32);
s32 *TWindowSubStatusDisp__sub_8006F0D8(s32, s32);
s32 resolve_player_slot__20TWindowSubStatusDispFl(s32);
s32 fn_80071A9C(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

s32 fn_80071A9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 n;
    s32 i;
    s32 *p;
    arg2 = resolve_player_slot__20TWindowSubStatusDispFl(arg2);
    p = TWindowSubStatusDisp__sub_8006F0D8(arg1, arg2);
    n = get_layout_id__20TWindowSubStatusDispFv(arg2);
    for (i = 0; i < n; i++, p++) {
        s32 r = TLobby::get_valid_slot(*p);
        if (*p == 0 || r == 0) {
            break;
        }
    }
    return i;
}

}
