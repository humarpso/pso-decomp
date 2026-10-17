#include "types.h"
#include "pso/item/TItemData_8010EDA8.h"
#include "pso/unk/text_801F4C70.h"

struct E_801F4C70 { s32 a; s32 b; };

extern s32 item_name_selection_index;
extern s32 item_name_selection_table;
extern s32 lbl_805DC4FC;

s32 get_selected_entry_value(void) {
    if (item_name_selection_index >= 0) {
        return (*(E_801F4C70 * *)&item_name_selection_table)[item_name_selection_index].b;
    }
    return -1;
}

s32 *fn_801F4C98(void) {
    if ((s32) item_name_selection_index >= 0) {
        return (s32 *)get_text_collection(*(s32 *)((s8 *)item_name_selection_table + (item_name_selection_index * 8)));
    }
    return &lbl_805DC4FC;
}
