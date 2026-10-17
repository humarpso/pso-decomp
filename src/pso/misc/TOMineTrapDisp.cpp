#include "types.h"

extern "C" {

void *__dt__14TOMineTrapDispFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void *__dt__10TOMineDispFv(void *arg0, s16 arg1);

extern s32 __vt__14TOMineTrapDisp[];

void *__dt__14TOMineTrapDispFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TOMineTrapDisp;
        __dt__10TOMineDispFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
