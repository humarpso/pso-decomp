#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_801F4C70 { s32 a; s32 b; };

extern "C" {
M2C_UNK *get_text_collection(s32);
extern s32 item_name_selection_index;
extern s32 item_name_selection_table;
extern M2C_UNK lbl_805DC4FC;
M2C_UNK *fn_801F4C98(void);
extern s32 item_name_selection_index;
extern s32 item_name_selection_table;
s32 get_selected_entry_value(void);
}

extern "C" {

s32 get_selected_entry_value(void) {
    if (item_name_selection_index >= 0) {
        return (*(E_801F4C70 * *)&item_name_selection_table)[item_name_selection_index].b;
    }
    return -1;
}

M2C_UNK *fn_801F4C98(void) {
    if ((s32) item_name_selection_index >= 0) {
        return get_text_collection(M2C_FIELD(item_name_selection_table, M2C_UNK *, (item_name_selection_index * 8)));
    }
    return &lbl_805DC4FC;
}

}
