#include "types.h"

extern "C" {

void TObjNpcLappy__sub_8014B840(void);
void *destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjNpcBaseFv(void *, int);

    extern int lbl_805D57D0;
    extern int lbl_805D5D78;
void TObjNpcLappy__sub_8014B840(void) { lbl_805D57D0 = lbl_805D5D78; }

extern s32 lbl_804A9F50[];

void *destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A9F50;
        __dt__11TObjNpcBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
