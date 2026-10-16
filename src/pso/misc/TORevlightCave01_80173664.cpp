#include "types.h"
#include "pso/misc/TOKey.h"

extern "C" {

void *__dt__16TORevlightCave01Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);

extern s32 __vt__16TORevlightCave01[];

void *__dt__16TORevlightCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TORevlightCave01;
        ((TOKey *)arg0)->destroy_key_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
