#include "types.h"

extern "C" {

void *TOWreckAncient05__create(void *arg0);
void *__dt__16TOWreckAncient05Fv(void *arg0, s16 arg1);
void *TOWreckAncient05__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__14TOWreckAncientFv(void *, int);
void *__nw__7TObjectFUl(int);

void *TOWreckAncient05__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TOWreckAncient05__ct(o, arg0);
    }
    return o;
}

extern s32 __vt__16TOWreckAncient05[];

void *__dt__16TOWreckAncient05Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TOWreckAncient05;
        __dt__14TOWreckAncientFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
