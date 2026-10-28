#include "types.h"
#include "pso/TObjItemOKWindow.h"
#include "pso/misc/TWindowMenu.h"

extern "C" s32 get_selected_menu_value(void *);

s32 TObjItemOKWindow::get_result() {
    void *menu = m_60;
    if (menu != NULL) {
        return get_selected_menu_value(menu);
    }
    return -1;
}

s32 TObjItemOKWindow::is_done() {
    void *menu = m_60;
    if (menu != NULL) {
        return ((TWindowMenu *)menu)->is_visible();
    }
    return 0;
}
