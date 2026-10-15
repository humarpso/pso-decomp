#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdMultiPlyChrSelectGC__sub_802C6FA8(void);
s32 get_field_20__22TAdMultiPlyChrSelectGCFPv(void* p);
int get_global_6700__22TAdMultiPlyChrSelectGCFv(void);
int get_selected_slot__22TAdMultiPlyChrSelectGCFv(void);
int get_state__22TAdMultiPlyChrSelectGCFv(void);
void update_transition_anim__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_transition_anim_if_active__22TAdMultiPlyChrSelectGCFv(void);
M2C_UNK TLobby__sub_8001E998(f32, f32, f32, f32);
M2C_UNK TLobby__sub_8001EA5C(s32, f32, f32, f32, f32);

s32 get_field_20__22TAdMultiPlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x20); }

    extern int TAdMultiPlyChrSelectGC__instance;
int get_state__22TAdMultiPlyChrSelectGCFv(void) {  return TAdMultiPlyChrSelectGC__instance; }

    extern int plyplt_anim_ctrl_instance;
int get_selected_slot__22TAdMultiPlyChrSelectGCFv(void) {  return plyplt_anim_ctrl_instance; }

    extern int menu_selection_cursor_texture_list;
int get_global_6700__22TAdMultiPlyChrSelectGCFv(void) {  return menu_selection_cursor_texture_list; }

    extern int lbl_805D6668;
int TAdMultiPlyChrSelectGC__sub_802C6FA8(void) {  return lbl_805D6668; }

extern u32 lbl_805D67E8;

void update_transition_anim_if_active__22TAdMultiPlyChrSelectGCFv(void) {
    if ((u32) lbl_805D67E8 != 0U) {
        update_transition_anim__22TAdMultiPlyChrSelectGCFPv((void *)((void *)((void*)lbl_805D67E8)));
    }
}

extern M2C_UNK lbl_80471D08;
extern const f32 lbl_805DE5A8;
extern const f32 lbl_805DE5AC;
extern const f32 lbl_805DE5B0;

void update_transition_anim__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    f32 var_f31;
    f32 var_f4;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x40);
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
    TLobby__sub_8001EA5C(var_r3, M2C_FIELD(arg0, f32 *, 0x1C), M2C_FIELD(arg0, f32 *, 0x20), lbl_805DE5B0, var_f4);
    TLobby__sub_8001E998(M2C_FIELD(arg0, f32 *, 0x2C), M2C_FIELD(arg0, f32 *, 0x30), lbl_805DE5B0, var_f31);
}

}
