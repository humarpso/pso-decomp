#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void * get_index__14TAdPlyStatusGCFv();
M2C_UNK close_window__14TAdPlyStatusGCFPvi(u32, s32);
M2C_UNK fn_802E0CB0(void *, s32);
void set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
}

extern "C" {

void set_status_value__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1);
void * get_index__14TAdPlyStatusGCFv();
M2C_UNK set_status_index__14TAdPlyStatusGCFii(void *, s32);

void set_status_value__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    void *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x110) = arg1;
    temp_r3 = get_index__14TAdPlyStatusGCFv();
    if (temp_r3 != 0U) {
        set_status_index__14TAdPlyStatusGCFii(temp_r3, M2C_FIELD(arg0, s32 *, 0x110));
    }
}
void set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x104) = arg1;
    fn_802E0CB0(arg0, M2C_FIELD(arg0, s32 *, 0x104));
    u32 temp_r3 = ((u32)get_index__14TAdPlyStatusGCFv());
    if (temp_r3 != 0U) {
        close_window__14TAdPlyStatusGCFPvi(temp_r3, arg1);
    }
}

}
