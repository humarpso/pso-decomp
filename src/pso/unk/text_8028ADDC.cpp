#include "types.h"

struct O_8028AE1C { u8 pad[0x1c]; s32 count; void **a; void **b; };

extern "C" {
extern s32 lbl_805D64D0;
extern void *lbl_805D64D4;
void TObjBoss5PillarDemo__sub_8028AD88(void);
void set_npc_enemy_param(void *fn);
void fn_8028ADDC(void *p);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
extern u8 lbl_80450CD0[];
void fn_8028AE1C(O_8028AE1C *arg0);
}

extern "C" {

void fn_8028ADDC(void *p) {
    if (p) {
        lbl_805D64D0 = 0;
        lbl_805D64D4 = p;
        set_npc_enemy_param((void *)TObjBoss5PillarDemo__sub_8028AD88);
    }
}
void fn_8028AE1C(O_8028AE1C *arg0) {
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        if (arg0->a[i] != 0) {
            copy_pos__11TNowLoadingFPvPv(arg0->a[i], lbl_80450CD0);
        }
        if (arg0->b[i] != 0) {
            copy_pos__11TNowLoadingFPvPv(arg0->b[i], lbl_80450CD0);
        }
    }
}

}
