#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Obj054_80249DE4 { char pad[0x38]; u32 field38; };

void *TWindowComCard__sub_80249E80(void *arg0, s16 arg1);
void request_active_window_close(void);
void update_status_disp__14TWindowComCardFi(s32 arg0);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK set_flag1e_bit8__11TWindowCtrlFPv(void*);

void update_status_disp__14TWindowComCardFi(s32 arg0) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)draw_default_entry__9TWindowDDFi();
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, (s32)tmp);
}

extern M2C_UNK lbl_804CE964[];

void *TWindowComCard__sub_80249E80(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE964;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern struct Obj054_80249DE4 *TWindowCtrl__data_805D63F8;

void request_active_window_close(void) {
    if ((TWindowCtrl__data_805D63F8 != NULL) && (TWindowCtrl__data_805D63F8->field38 != 0U)) {
        set_flag1e_bit8__11TWindowCtrlFPv((void*)TWindowCtrl__data_805D63F8->field38);
    }
}

}
