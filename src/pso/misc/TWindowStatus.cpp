#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 draw_default_entry__9TWindowDDFi(void *, f32, f32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK draw_right_aligned_number();
M2C_UNK draw_background__13TWindowStatusFv(void *, int);
extern const f32 lbl_805DD470;
extern const f32 lbl_805DD474;
void render__13TWindowStatusFv(u8 *arg0);
}

extern "C" {

void *TWindowStatus__ct(void *arg0);
void *__dt__13TWindowStatusFv(void *arg0, s16 arg1);
void run_task__13TWindowStatusFv(s32 arg0);
M2C_UNK TWindowComCard__sub_8026F9F4(s32, s32);
void TWindowSimpleStatus__ct(void *);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK update_window_entry_list(s32, s32);
M2C_UNK TWindowSubStatusDisp__sub_80270F14();
void __dl__7TObjectFPv(void *);
void __dt__19TWindowSimpleStatusFv(void *, int);
M2C_UNK fn_80270014(s32);
M2C_UNK initialize_subwindow__9TWindowDDFPv(s32);
M2C_UNK update_fade__17TWindowSubComCardFPv(s32);
M2C_UNK update_status_help_item(s32);

#pragma fp_contract on
void render__13TWindowStatusFv(u8 *arg0) {
  f32 temp_f1;
  u8 *new_var;
  s32 temp_r31;
  f32 new_var2;
  s32 temp_r3;
  temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
  draw_right_aligned_number();
  new_var2 = (f32) lbl_805DD474;
  new_var = arg0;
  temp_f1 = *((f32 *) (((s8 *) temp_r31) + 0x10));
  *((f32 *) (((s8 *) temp_r31) + 8)) = (f32) ((lbl_805DD474 * temp_f1) + lbl_805DD470);
  temp_r3 = draw_default_entry__9TWindowDDFi((void *) arg0, (f32) temp_f1, new_var2);
  draw_background__13TWindowStatusFv((void *) arg0, (int) temp_r3);
  TWindowSubStatusDisp__sub_80257BC0((void *) new_var, (void *) (arg0 + 0x24), (int) temp_r3);
}

void run_task__13TWindowStatusFv(s32 arg0) {
    TWindowSubStatusDisp__sub_80270F14();
    fn_80270014(arg0);
    update_status_help_item(arg0);
    TWindowComCard__sub_8026F9F4(arg0, get_window_layout_position(0x1D));
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    update_window_entry_list(arg0, arg0 + 0x24);
}

extern M2C_UNK __vt__13TWindowStatus[];

void *__dt__13TWindowStatusFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowStatus;
        __dt__19TWindowSimpleStatusFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__13TWindowStatus[];
extern void *lbl_805D39F8;

void *TWindowStatus__ct(void *arg0) {
    TWindowSimpleStatus__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowStatus;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D39F8;
    return arg0;
}

}
