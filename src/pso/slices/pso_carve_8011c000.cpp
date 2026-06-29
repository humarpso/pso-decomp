#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void *item_pmt_tbl;

s32 fn_8011C000(u8 arg0) {
    void *temp_r5;

    temp_r5 = M2C_FIELD(item_pmt_tbl, void **, 0x50);
    if ((s32) M2C_FIELD(temp_r5, s32 *, 0) > (s32) arg0) {
        return M2C_FIELD(temp_r5, s32 *, 4) + ((arg0 * 8) & 0x7F8);
    }
    return 0;
}

}
