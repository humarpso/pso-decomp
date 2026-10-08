#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_shared_text_buffer();
M2C_UNK *TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 append_text_space();
s32 append_padded_number(void *, int);
s32 text_builder_append(void *);
s32 text_builder_reset();
s32 set_entry_display_value__20TWindowSubStatusDispFPvi(void *, int);
extern s32 lbl_805D63E8;
extern M2C_UNK lbl_805DCAB8;
void set_count_ratio_text__20TWindowSubStatusDispFiii(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *construct_with_parent__15TWindowAdditionFPvPv(void *arg0, void *arg1);
void *destroy_window__15TWindowAdditionFPvs(void *arg0, s16 arg1);
void TWindowAddition__ct(void *, void *);
void construct_base__9TWindowDDFPvPvsPv(void *);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804CDFE8[];

void *destroy_window__15TWindowAdditionFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CDFE8;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804CDFE8[];

void *construct_with_parent__15TWindowAdditionFPvPv(void *arg0, void *arg1) {
    construct_base__9TWindowDDFPvPvsPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CDFE8;
    TWindowAddition__ct(arg0, arg1);
    return arg0;
}
void set_count_ratio_text__20TWindowSubStatusDispFiii(s32 arg0, s32 arg1, s32 arg2) {
    text_builder_reset();
    text_builder_append((void *) (TQuestVmDownLoadServer__sub_8006EF6C(0x67)));
    append_text_space();
    append_padded_number((void *) (arg1), (int) (2U));
    text_builder_append((void *) (&lbl_805DCAB8));
    append_padded_number((void *) (arg2), (int) (2U));
    set_entry_display_value__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (get_shared_text_buffer()));
    lbl_805D63E8 = arg1;
}

}
