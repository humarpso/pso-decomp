#include "types.h"

extern "C" {

int __dl__FPv(s32 *);
int TOBoss4Rock__sub_80147A80(s32);

s32 *TBoss4Type3__sub_800D9A68(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        TOBoss4Rock__sub_80147A80(*arg0);
        *arg0 = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
