#include "types.h"
extern "C" {
extern u8 lbl_804F5A00[];
void fn_803D9FF0(u8 *arg0);
}

extern "C" {

void fn_803D9FF0(u8 *arg0) {
    u8 *p = arg0;
    u8 t;
    s32 v;
    while ((s8)(t = *p) != 0) {
        if ((s8)t == -1) {
            v = -1;
        } else {
            v = lbl_804F5A00[(u8)(s8)t];
        }
        *(s8 *)p = v;
        p++;
    }
}

}
