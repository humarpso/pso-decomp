#include "types.h"
#include "pso/misc/TLockOnCursor.h"

extern "C" {

void TLockOnCursor__sub_8013EEC0(void* p, s16 v);
s32 __dl__FPv(void *);
s32 free_if_valid__14TPlyDispConfigFis(void *, s16);

extern s32 lbl_804A7248[];

void *TLockOnCursor::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 * *)&this->m_prev = lbl_804A7248;
        free_if_valid__14TPlyDispConfigFis(this, 0);
        if (arg1 > 0) {
            __dl__FPv(this);
        }
    }
    return this;
}

void TLockOnCursor__sub_8013EEC0(void* p, s16 v) { *(s16*)((char*)p + 0x20) = v; }

}
