#include "types.h"

extern "C" {

int fn_8007EBB4(s32);
int fn_803DA16C();

void fn_801E483C(s32 arg0) {
    if (arg0 != 0) {
        fn_803DA16C();
        fn_8007EBB4(arg0);
    }
}

}
