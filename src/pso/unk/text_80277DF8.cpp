#include "types.h"
#include "pso/misc/TWindowSubEquip.h"
#include "pso/misc/TWindowShortListCtrl.h"

extern "C" {
s32 select_cursor_entry__22TWindowSubShortCutListFv(int);
}

extern "C" {

void TWindowSubEquip::apply_slot_selection() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r31;
    temp_r31 = select_cursor_entry__22TWindowSubShortCutListFv((int) (*(s32 *)&this->m_34));
    TWindowShortListCtrl::assign_shortcut((int) (temp_r31), (int) (select_cursor_entry__22TWindowSubShortCutListFv((int) (*(s32 *)&this->m_38))), (int) (*(s32 *)&this->m_28));
}

}
