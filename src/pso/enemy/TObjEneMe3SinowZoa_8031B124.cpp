#include "types.h"

extern "C" {

void *TObjEneMe3SinowZoa__ct(void *arg0);
void init_object__9TObjEneDDFv(void *);
void init_common__18TObjEneMe3SinowZoaFv(void *);

extern s32 __vt__18TObjEneMe3SinowZoa[];
extern void *lbl_805D4120;

void *TObjEneMe3SinowZoa__ct(void *arg0) {
    init_object__9TObjEneDDFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjEneMe3SinowZoa;
    init_common__18TObjEneMe3SinowZoaFv((void *)((char *)arg0 + 1044));
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D4120;
    return arg0;
}

}
