#include "types.h"

extern "C" {

void TObjNpcFemaleTall__sub_8014AA60(void);
void *destroy__17TObjNpcFemaleTallFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);

    extern int lbl_805D5798;
    extern int lbl_805D5D78;
void TObjNpcFemaleTall__sub_8014AA60(void) { lbl_805D5798 = lbl_805D5D78; }

extern s32 npc_female_tall_dispatch_table[];

void *destroy__17TObjNpcFemaleTallFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = npc_female_tall_dispatch_table;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
