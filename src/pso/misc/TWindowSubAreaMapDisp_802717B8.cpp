#include "types.h"
#include "pso/misc/TWindowSubAreaMapDisp.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

s32 sub_80246948__13TUnk_804CE018Fv();

extern f32 lbl_805DD480;

void TWindowSubAreaMapDisp::update_visibility() {
    if ((s32) *(s32 *)&this->m_6c != 0) {
        if (sub_80246948__13TUnk_804CE018Fv() != 0) {
            *(s32 *)&this->m_6c = 0;
            TWindowCtrl::clear_active_flag();
            TRaderMapCore::clear();
        }
    } else if (!(this->m_2c & 2) && (sub_80246948__13TUnk_804CE018Fv() == 0)) {
        *(s32 *)&this->m_6c = 1;
        TRaderMapCore::open_free_map_view();
        TRaderMapCore::show_radar();
        TWindowCtrl::set_flag_bit0();
        {
            f32 c = lbl_805DD480;
            *(f32 *)&this->unk_60 = c;
            this->m_64 = c;
            *(f32 *)&this->unk_68 = c;
        }
    }
}

}
