#include "types.h"

extern "C" {

void *TAttackTrace__sub_800D7950(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TAttackTraceFv(void *, int);

extern s32 lbl_80494968[];

void *TAttackTrace__sub_800D7950(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_80494968;
        __dt__12TAttackTraceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
