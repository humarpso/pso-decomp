#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1);
void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
int TWindowHelpItem__sub_80255440(void*);
int update_cursor_selection__15TWindowHelpItemFPv(void*);

void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1) {
    M2C_UNK var_r5;

    var_r5 = -0x100;
    if (arg1 == 0U) {
        var_r5 = -1;
    }
    set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)(arg0), (void*)(arg1), (void*)(var_r5));
}

void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa4) = a2; *(void**)((char*)p + 0x70) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }

}
