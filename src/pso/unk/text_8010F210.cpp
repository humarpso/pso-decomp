#include "types.h"
typedef struct Slot_8010F210 { u32 a; u32 b; } Slot_8010F210;

extern "C" {
s32 alloc__23TAdSinglePlyChrSelectGCFv(int);
s32 TItemDrop__sub_8010F1B8(s32, void *, int);
s32 fn_8010F210(Slot_8010F210 *arg0);
}

extern "C" {

s32 fn_8010F210(Slot_8010F210 *arg0) {
    s32 found;
    s32 i;
    s32 r;
    if (arg0 != 0) {
        found = 0;
        i = 0;
        while (found == 0) {
            u32 a = arg0[i].a; u32 b = arg0[i].b;
            if (a == 0 && b == 0) {
                found = i;
            }
            i++;
        }
        if (found != 0) {
            r = alloc__23TAdSinglePlyChrSelectGCFv(0x10);
            if (r != 0) {
                r = TItemDrop__sub_8010F1B8(r, arg0, found);
            }
            return r;
        }
    }
    return 0;
}

}
