#include "types.h"
extern "C" {
extern s32 lbl_805D64D0;
extern void *lbl_805D64D4;
void TObjBoss5PillarDemo__sub_8028AD88(void);
void set_npc_enemy_param(void *fn);
void fn_8028ADDC(void *p);
}

extern "C" {

void fn_8028ADDC(void *p) {
    if (p) {
        lbl_805D64D0 = 0;
        lbl_805D64D4 = p;
        set_npc_enemy_param((void *)TObjBoss5PillarDemo__sub_8028AD88);
    }
}

}
