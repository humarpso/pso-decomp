#include "types.h"

extern "C" {

void *delete_instance__7TObjectFPvs(void *arg0, s16 arg1);
s32 __dl__7TObjectFPv(void *);
s32 __dt__7TObjectFv(void *, s32);

extern s32 lbl_804F0D1C[];
extern void *lbl_805D6EA8;

void *delete_instance__7TObjectFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0D1C;
        if (lbl_805D6EA8 == arg0) {
            lbl_805D6EA8 = NULL;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
