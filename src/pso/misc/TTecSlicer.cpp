#include "types.h"

extern "C" {

s32 dt__10TTecSlicerFis(s32 arg0, s16 arg1);
s32 get_field_110__10TTecSlicerFPv(void* p);
s16 get_remain_count__10TTecSlicerFPv(void* p);
void destroy_if_set__10TTecSlicerFUi(u32 arg0);
int __dl__FPv();
int queue_destruction__7TObjectFv();

s32 get_field_110__10TTecSlicerFPv(void* p) { return *(s32*)((char*)p + 0x110); }
s16 get_remain_count__10TTecSlicerFPv(void* p) { return *(s16*)((char*)p + 0x11e); }
void destroy_if_set__10TTecSlicerFUi(u32 arg0) {
    if (arg0 != 0U) {
        queue_destruction__7TObjectFv();
    }
}
s32 dt__10TTecSlicerFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
