#include "types.h"
#include "pso/item/TItemMag.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLobby.h"

extern "C" {

u8 fn_80100CC8(void);
s32 item_model_is_shown(void *arg0);
void fn_80100D68(void *arg0);
void fn_80100D9C(void* p, u8 v);
s32 get_flag_40__8TItemMagFv();
s32 get_main_phase();
void copy_to_item_data__5TItemFPv(void *, void *);
void TItemData__sub_8010C738(void *);

u8 fn_80100CC8(void) {
    int var_r31;

    var_r31 = 0;
    if ((get_main_phase() != 0xE) || (TCameraCtrl::get_camera_no() == 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
int TObjPlayer::is_flag_400() { return *(u16*)((char*)this + 0x4) & 0x400; }
s32 item_model_is_shown(void *arg0) {
    if ((get_flag_40__8TItemMagFv() == 0) && ((u32) *(u32 *)((s8 *)arg0 + 0xF4) != 0U)) {
        return 1;
    }
    return 0;
}
void fn_80100D68(void *arg0) {
    s32 sp8[4];

    copy_to_item_data__5TItemFPv(arg0, &sp8);
    TItemData__sub_8010C738(&sp8);
}
void TItemMag::set_field_EE(u8 v) { this->m_ee = v; }
void fn_80100D9C(void* p, u8 v) { *(u8*)((char*)p + 0xed) = v; }
void TWindowSubStatusDisp::lookup_item_data() {
    s32 sp8[4];

    copy_to_item_data__5TItemFPv(this, &sp8);
    TLobby::get_item_data((u32)(&sp8));
}

}
