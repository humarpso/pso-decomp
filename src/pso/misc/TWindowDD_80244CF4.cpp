#include "types.h"

extern "C" {

void TWindowDD__sub_80244CF4(s32 arg0);
int fn_80244C0C(s32, s32);
s32 fn_8026CB68();

void TWindowDD__sub_80244CF4(s32 arg0) {
    fn_80244C0C(arg0, fn_8026CB68());
}

}
