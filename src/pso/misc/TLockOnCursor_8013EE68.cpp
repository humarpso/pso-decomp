#include "types.h"

extern "C" {

void TLockOnCursor__sub_8013EEC0(void* p, s16 v);
void *destroy__13TLockOnCursorFPvs(void *arg0, s16 arg1);
s32 __dl__FPv(void *);
s32 free_if_valid__14TPlyDispConfigFis(void *, s16);

extern s32 lbl_804A7248[];

void *destroy__13TLockOnCursorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 8) = lbl_804A7248;
        free_if_valid__14TPlyDispConfigFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void TLockOnCursor__sub_8013EEC0(void* p, s16 v) { *(s16*)((char*)p + 0x20) = v; }

}
