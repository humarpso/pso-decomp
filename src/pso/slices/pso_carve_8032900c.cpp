#include "types.h"

extern "C" {

int fn_80328FCC(s32, s32);
s32 fn_801C0044();

void fn_8032900C(s32 arg0) {
    fn_80328FCC(arg0, fn_801C0044());
}

}
