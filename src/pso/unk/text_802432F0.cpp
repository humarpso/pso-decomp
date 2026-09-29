#include "types.h"
extern "C" {
s32 TAdPlayerLoadGC__sub_801E2048(s32, void *);
extern s32 lbl_804CDC88[];
s32 fn_802432F0(void *arg0);
}

extern "C" {

s32 fn_802432F0(void *arg0) {
    s32 *p = lbl_804CDC88;
    s32 i;
    for (i = 0; i < 2; i++, p++) {
        switch (TAdPlayerLoadGC__sub_801E2048(*p, arg0)) {
        case 0:
            return *p;
        case -1:
            return -2;
        }
    }
    return -1;
}

}
