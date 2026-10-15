#include "types.h"

extern "C" {

void *TObjPlayer__sub_80125550(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);

extern s32 lbl_804A2548[];

void *TObjPlayer__sub_80125550(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A2548;
        destroy_attack_collision__14TItemAttackColFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
