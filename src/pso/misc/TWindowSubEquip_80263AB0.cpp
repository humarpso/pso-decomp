#include "types.h"
#include "pso/misc/TWindowSubEquip.h"

extern "C" {
f32 TWindowSubEquip__sub_80263AF8(u8 *arg0, u32 arg1);
}

extern "C" {

void TWindowSubEquip__sub_80263AF4(void);
void call_if_split_screen(u32 arg0);
s32 create_submenu__15TWindowMainMenuFPvUi(s32, s16);
s32 destroy_submenu__15TWindowMainMenuFPv();
s32 fn_802449E0(u32);
s32 is_split_screen();

void call_if_split_screen(u32 arg0) {
    if ((is_split_screen() != 0) && (arg0 != 0U)) {
        fn_802449E0(arg0);
    }
}
void TWindowSubEquip__sub_80263AF4(void) {  }

    extern const float lbl_805DD138;

f32 TWindowSubEquip__sub_80263AF8(u8 *arg0, u32 arg1) {
    return *(f32 *)((s8 *)arg0 + 0x58) - (f32) arg1;
}

void TWindowSubEquip::set_scale_f() { *(float*)((char*)this + 0x58) = lbl_805DD138; }

void TWindowSubEquip::open_submenu(s32 arg0, s32 arg1) {
    destroy_submenu__15TWindowMainMenuFPv();
    create_submenu__15TWindowMainMenuFPvUi(arg0, (s16) arg1);
}

}
