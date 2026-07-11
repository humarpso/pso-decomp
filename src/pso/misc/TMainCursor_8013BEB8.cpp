#include "types.h"

extern "C" {

s32 fn_8013DF08();
int TMainCursor__sub_8013BE98(void* p);
int fn_8013DF5C(void*, void* a1 = 0, void* a2 = 0);

s32 try_move__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (fn_8013DF08() != 0) {
        return fn_8013DF5C((void*)(arg0), (void*)(arg1), (void*)(arg2));
    }
    return 0;
}

}
