#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Sub_80269244 { u8 pad0[8]; f32 x8; };

struct Meseta_80269244 {
    s32 name;
    u8 pad4[0x18 - 0x4];
    M2C_UNK *vt;
    u8 pad1c[0x38 - 0x1C];
    f32 x38;
    u8 pad3c[0x48 - 0x3C];
    f32 x48;
    u8 pad4c[0x60 - 0x4C];
    f32 x60;
    s32 x64;
    s32 meseta;
    f32 x6c;
    f32 x70;
};

extern "C" {
s32 get_camera_id__11TCameraCtrlFv();
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void save_position__17TWindowSubComCardFPv(void *);
void construct_base__9TWindowDDFPvPvsPv(void *, M2C_UNK *, s16, s32);
void set_all_values__20TWindowSubStatusDispFPvi(void *, s32);
void set_text_entry_string(void *, s32, s32);
s32 get_meseta_value__13TWindowMesetaFPv();
f32 TWindowSubStatusDisp__sub_802877A4(f32);
extern M2C_UNK TWindowMeseta__window_descriptor[];
extern M2C_UNK __vt__13TWindowMeseta[];
extern s32 TWindowMeseta__class_name;
extern const f32 lbl_805DD204;
extern const f32 lbl_805DD208;
extern const f32 lbl_805DD20C;
extern const f32 lbl_805DD210;
void *TWindowMeseta__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *__dt__13TWindowMesetaFv(void *arg0, s16 arg1);
void run_task__13TWindowMesetaFv(u8 *arg0);
M2C_UNK update_window_entry_list(void *, void *);
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
    update_window_entry_list(arg0, arg0 + 0x24);
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
#define self ((Meseta_80269244 *)arg0)
void *TWindowMeseta__ct(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    Sub_80269244 *a;
    Sub_80269244 *b;
    construct_base__9TWindowDDFPvPvsPv(arg0, TWindowMeseta__window_descriptor, arg2, arg1);
    self->vt = __vt__13TWindowMeseta;
    self->name = TWindowMeseta__class_name;
    self->x64 = arg2;
    self->meseta = ((s32 (*)(void *))get_meseta_value__13TWindowMesetaFPv)(arg0);
    a = (Sub_80269244 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    b = (Sub_80269244 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    set_text_entry_string(a, arg3, 0);
    set_all_values__20TWindowSubStatusDispFPvi(b, self->meseta);
    self->x38 = lbl_805DD204 + b->x8;
    save_position__17TWindowSubComCardFPv(arg0);
    self->x60 = TWindowSubStatusDisp__sub_802877A4(self->x48 - lbl_805DD208);
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        self->x6c = lbl_805DD20C;
        self->x70 = lbl_805DD20C;
    } else {
        self->x6c = lbl_805DD210;
        self->x70 = lbl_805DD210;
    }
    return arg0;
}
#undef self

}
