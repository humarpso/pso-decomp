#include "types.h"
typedef s32 M2C_UNK;
typedef struct St_803F3EA0 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
} St_803F3EA0;

extern "C" {
s32 TLobby__sub_803F4AB4();
M2C_UNK TLobby__sub_803F4AD8(int);
extern St_803F3EA0 lbl_805A82C0;
s32 fn_803F3EA0(s32 *arg0, s32 *arg1);
}

extern "C" {

#pragma push
#pragma scheduling off
s32 fn_803F3EA0(s32 *arg0, s32 *arg1) {
    s32 r;
    s32 t;
    if (TLobby__sub_803F4AB4() == 0) {
        return -1;
    }
    if (lbl_805A82C0.f4 == 2) {
        *arg0 = lbl_805A82C0.f1C;
        *arg1 = lbl_805A82C0.f20;
        t = lbl_805A82C0.f14;
        r = t;
        if (t != 200) {
            if (t == 0) {
                TLobby__sub_803F4AD8(2);
            }
            lbl_805A82C0.f4 = 0;
            lbl_805A82C0.f8 = 0;
            lbl_805A82C0.f14 = 0;
        }
    } else {
        *arg0 = 0;
        *arg1 = 0;
        r = -4;
    }
    return r;
}
#pragma pop

}
