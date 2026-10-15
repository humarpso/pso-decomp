#include "types.h"

extern "C" {

void *TObjPlayer__sub_801BFAD4(void *arg0, s16 arg1);
s32 __dl__FPv(void *);

extern s32 lbl_804C3E38[];

void *TObjPlayer__sub_801BFAD4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 4) = lbl_804C3E38;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
