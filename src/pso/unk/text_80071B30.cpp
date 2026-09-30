#include "types.h"
extern "C" {
s32 get_layout_id__20TWindowSubStatusDispFv(s32);
s32 *TWindowSubStatusDisp__sub_8006F0D8(void *);
extern u8 lbl_8048C9D8[];
s32 TLobby__sub_80071B30(s32 arg0, s32 arg1);
}

extern "C" {

s32 TLobby__sub_80071B30(s32 arg0, s32 arg1) {
    s32 *list;
    s32 n;
    s32 i;
    s32 *q = (s32 *)(lbl_8048C9D8 + arg0 * 0x104 + 0x270);
    if (q[0] == 0) {
        return 0;
    }
    list = TWindowSubStatusDisp__sub_8006F0D8(q + 1);
    n = get_layout_id__20TWindowSubStatusDispFv(arg1);
    for (i = 0; i < n; i++) {
        if (list[i] == 0) {
            break;
        }
    }
    return i;
}

}
