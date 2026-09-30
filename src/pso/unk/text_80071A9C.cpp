#include "types.h"
extern "C" {
s32 get_layout_id__20TWindowSubStatusDispFv(s32);
s32 *TWindowSubStatusDisp__sub_8006F0D8(s32, s32);
s32 TWindowSubStatusDisp__sub_8006F190(s32);
s32 TLobby__sub_8006F994(s32);
s32 fn_80071A9C(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

s32 fn_80071A9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 n;
    s32 i;
    s32 *p;
    arg2 = TWindowSubStatusDisp__sub_8006F190(arg2);
    p = TWindowSubStatusDisp__sub_8006F0D8(arg1, arg2);
    n = get_layout_id__20TWindowSubStatusDispFv(arg2);
    for (i = 0; i < n; i++, p++) {
        s32 r = TLobby__sub_8006F994(*p);
        if (*p == 0 || r == 0) {
            break;
        }
    }
    return i;
}

}
