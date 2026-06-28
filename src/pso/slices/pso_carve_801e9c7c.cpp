#include "types.h"

extern "C" {

s32 TAdStorySelectGC__sub_80207D64(s32);
int fn_801E9CD0(void* p);
int fn_801EA5FC(void*);

void fn_801E9C7C(s32 arg0) {
    switch (arg0) {
    case 0:
        TAdStorySelectGC__sub_80207D64(0);
        return;
    case 1:
        TAdStorySelectGC__sub_80207D64(1);
        return;
    default:
        TAdStorySelectGC__sub_80207D64(0);
        return;
    }
}
int fn_801E9CD0(void* p) { return fn_801EA5FC(p); }

}
