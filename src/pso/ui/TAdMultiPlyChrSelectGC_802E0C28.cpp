#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_status_value__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
void * get_index__14TAdPlyStatusGCFv();
M2C_UNK TAdPlyStatusGC__sub_802E1170(void *, s32);

void set_status_value__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    void *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x110) = arg1;
    temp_r3 = get_index__14TAdPlyStatusGCFv();
    if (temp_r3 != 0U) {
        TAdPlyStatusGC__sub_802E1170(temp_r3, M2C_FIELD(arg0, s32 *, 0x110));
    }
}

}
