#include "types.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneMe3SinowZoa.h"

extern "C" {

void *TObjEneMe3SinowZoa__ct(void *arg0);

extern s32 __vt__18TObjEneMe3SinowZoa[];
extern void *lbl_805D4120;

void *TObjEneMe3SinowZoa__ct(void *arg0) {
    ((TObjEneDD *)arg0)->init_object();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjEneMe3SinowZoa;
    ((TObjEneMe3SinowZoa *)((char *)arg0 + 1044))->init_common();
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D4120;
    return arg0;
}

}
