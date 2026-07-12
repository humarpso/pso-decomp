#include "types.h"

extern "C" {

int __dl__FPv();

s32 free_if_positive__13TBoss2DeRolLeFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

int TBoss2DeRolLe__sub_800361E8();

s32 TBoss2DeRolLe__sub_80036250(s32 arg0) {
    TBoss2DeRolLe__sub_800361E8();
    return arg0;
}

}
