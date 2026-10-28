#include "types.h"
#include "pso/TObjItemNameSelect.h"
#include "pso/misc/TWindowMenu.h"

extern "C" s32 get_selected_menu_value(u32);

s32 TObjItemNameSelect::get_result() {
    if (m_1c != NULL) {
        if (((TWindowMenu *)m_1c)->is_visible() != 0) {
            return get_selected_menu_value((u32)m_1c);
        }
    }
    return -1;
}
