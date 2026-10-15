#include "types.h"
#include "pso/ui/TAdMultiPlyChrSelectGC.h"

extern "C" {

int TAdMultiPlyChrSelectGC__sub_802C6FA8(void);
s32 TLobby__sub_8001E998(f32, f32, f32, f32);
s32 TLobby__sub_8001EA5C(s32, f32, f32, f32, f32);

s32 TAdMultiPlyChrSelectGC::get_field_20() { return *(s32*)((char*)this + 0x20); }

    extern int TAdMultiPlyChrSelectGC__instance;
int TAdMultiPlyChrSelectGC::get_state() {  return TAdMultiPlyChrSelectGC__instance; }

    extern int plyplt_anim_ctrl_instance;
int TAdMultiPlyChrSelectGC::get_selected_slot() {  return plyplt_anim_ctrl_instance; }

    extern int menu_selection_cursor_texture_list;
int TAdMultiPlyChrSelectGC::get_global_6700() {  return menu_selection_cursor_texture_list; }

    extern int lbl_805D6668;
int TAdMultiPlyChrSelectGC__sub_802C6FA8(void) {  return lbl_805D6668; }

extern u32 lbl_805D67E8;

void TAdMultiPlyChrSelectGC::update_transition_anim_if_active() {
    if ((u32) lbl_805D67E8 != 0U) {
        ((TAdMultiPlyChrSelectGC *)lbl_805D67E8)->update_transition_anim();
    }
}

extern s32 lbl_80471D08;
extern const f32 lbl_805DE5A8;
extern const f32 lbl_805DE5AC;
extern const f32 lbl_805DE5B0;

void TAdMultiPlyChrSelectGC::update_transition_anim() {
    f32 var_f31;
    f32 var_f4;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r3;

    temp_r3 = *(s32 *)((s8 *)this + 0x40);
    if (temp_r3 <= 0x96) {
        var_r3 = temp_r3 ^ 0x80000000;
        var_f4 = lbl_805DE5A8;
        var_f31 = (lbl_805DE5AC - (f32) temp_r3) / lbl_805DE5AC;
    } else {
        temp_r3_2 = temp_r3 - 0x96;
        var_r3 = temp_r3_2 ^ 0x80000000;
        var_f31 = lbl_805DE5A8;
        var_f4 = (lbl_805DE5AC - (f32) temp_r3_2) / lbl_805DE5AC;
    }
    TLobby__sub_8001EA5C(var_r3, *(f32 *)((s8 *)this + 0x1C), *(f32 *)((s8 *)this + 0x20), lbl_805DE5B0, var_f4);
    TLobby__sub_8001E998(*(f32 *)((s8 *)this + 0x2C), *(f32 *)((s8 *)this + 0x30), lbl_805DE5B0, var_f31);
}

}
