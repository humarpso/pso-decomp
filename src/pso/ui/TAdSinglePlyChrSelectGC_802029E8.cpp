#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32 arg0);
s32 get_char_table_entry__23TAdSinglePlyChrSelectGCFi(u32);

s32 is_split_screen();
extern s32 lbl_805D5F60;

s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32 arg0) {
    if (is_split_screen() != 0) {
        if (arg0 == 0xFFFF) {
            return get_char_table_entry__23TAdSinglePlyChrSelectGCFi(0U);
        }
        return get_char_table_entry__23TAdSinglePlyChrSelectGCFi(arg0);
    }
    return lbl_805D5F60;
}

}
