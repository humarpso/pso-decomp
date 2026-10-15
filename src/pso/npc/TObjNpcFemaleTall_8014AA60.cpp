#include "types.h"
#include "pso/npc/TObjNpcFemaleTall.h"

extern "C" {

void TObjNpcFemaleTall__sub_8014AA60(void);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);

    extern int lbl_805D5798;
    extern int lbl_805D5D78;
void TObjNpcFemaleTall__sub_8014AA60(void) { lbl_805D5798 = lbl_805D5D78; }

extern s32 npc_female_tall_dispatch_table[];

void *TObjNpcFemaleTall::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = npc_female_tall_dispatch_table;
        __dt__11TObjNpcBaseFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

}
