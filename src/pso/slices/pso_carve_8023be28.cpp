#include "types.h"

extern "C" {

s32 TTecSlicer__sub_8023BE60(s32 arg0, s16 arg1);
int __dl__FPv();
void fn_8023BE38(u32 arg0);
int queue_destruction__7TObjectFv();
s32 fn_8023BE28(void* p);
s16 fn_8023BE30(void* p);

s32 fn_8023BE28(void* p) { return *(s32*)((char*)p + 0x110); }
s16 fn_8023BE30(void* p) { return *(s16*)((char*)p + 0x11e); }
void fn_8023BE38(u32 arg0) {
    if (arg0 != 0U) {
        queue_destruction__7TObjectFv();
    }
}
s32 TTecSlicer__sub_8023BE60(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
