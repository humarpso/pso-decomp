#include "types.h"

extern "C" {

int fn_8024E6D8(s32, s32);
s32 fn_8024E8E8();

s32 fn_8024EA00(s32 arg0, s32 arg1) {
    if (fn_8024E8E8() == 0) {
        return 0;
    }
    fn_8024E6D8(arg0, arg1);
    return 1;
}

}
