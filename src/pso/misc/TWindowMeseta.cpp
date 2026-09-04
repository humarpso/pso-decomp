#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__13TWindowMesetaFv(void *arg0, s16 arg1);
void run_task__13TWindowMesetaFv(u8 *arg0);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s32 get_meseta_value__13TWindowMesetaFPv();
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK set_animated_target__20TWindowSubStatusDispFPvif(M2C_UNK, s32, f32);

extern const f32 lbl_805DD200;

void run_task__13TWindowMesetaFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_meseta_value__13TWindowMesetaFPv();
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x68)) {
        M2C_FIELD(arg0, s32 *, 0x68) = temp_r3;
        set_animated_target__20TWindowSubStatusDispFPvif(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), M2C_FIELD(arg0, s32 *, 0x68), lbl_805DD200);
    }
    initialize_subwindow__9TWindowDDFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
}

extern M2C_UNK __vt__13TWindowMeseta[];

void *__dt__13TWindowMesetaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowMeseta;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
