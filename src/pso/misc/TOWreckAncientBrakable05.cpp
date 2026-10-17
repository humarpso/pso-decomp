#include "types.h"

extern "C" {

void *TOWreckAncientBrakable05__create(void *arg0);
void *__dt__24TOWreckAncientBrakable05Fv(void *arg0, s16 arg1);
void *TOWreckAncientBrakable05__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void *__dt__22TOWreckAncientBrakableFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);

void *TOWreckAncientBrakable05__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TOWreckAncientBrakable05__ct(o, arg0);
    }
    return o;
}

extern s32 __vt__24TOWreckAncientBrakable05[];

void *__dt__24TOWreckAncientBrakable05Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__24TOWreckAncientBrakable05;
        __dt__22TOWreckAncientBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
