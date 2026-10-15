#include "types.h"

extern "C" {
s32 get_shared_text_buffer();
s32 *TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 append_text_space();
s32 append_padded_number(void *, int);
s32 text_builder_append(void *);
s32 text_builder_reset();
s32 set_entry_display_value__20TWindowSubStatusDispFPvi(void *, int);
extern s32 TWindowSubStatusDisp__count_ratio_value;
extern s32 lbl_805DCAB8;
void set_count_ratio_text__20TWindowSubStatusDispFiii(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *construct_with_parent__15TWindowAdditionFPvPv(void *arg0, void *arg1);
void *destroy_window__15TWindowAdditionFPvs(void *arg0, s16 arg1);
void TWindowAddition__ct(void *, void *);
void construct_base__9TWindowDDFPvPvsPv(void *);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern s32 lbl_804CDFE8[];

void *destroy_window__15TWindowAdditionFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CDFE8;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804CDFE8[];

void *construct_with_parent__15TWindowAdditionFPvPv(void *arg0, void *arg1) {
    construct_base__9TWindowDDFPvPvsPv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CDFE8;
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
    TWindowSubStatusDisp__count_ratio_value = arg1;
}

}
