#include "types.h"

extern "C" {

s32 fn_802A7994(s32, s32, s32, s32);
s32 fn_80329600();
s32 fn_80329628();
s32 fn_80329650();
s32 fn_80329678();
int fn_803291C8(void);

int fn_803291C8(void) { return 1; }
s32 fn_803291D0(s32 arg0) {
    if (fn_80329678() == 0) {
        fn_80329650();
        fn_802A7994(arg0, 0, 0, 0);
    }
    if (fn_80329628() == 0) {
        fn_80329600();
        fn_802A7994(arg0, 1, 1, 0);
    }
    return 1;
}

}
