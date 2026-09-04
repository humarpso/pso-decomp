#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowDD__sub_80340F70(void);
void draw_and_scroll_entry__9TWindowDDFi(s32 arg0);
void draw_entry_if_visible__9TWindowDDFPvPv(void *arg0, void *arg1);
void *dt__9TWindowDDFPvs(void *arg0, s16 arg1);
void init_window__9TWindowDDFPv(void* p);
void *TWindowDD__sub_80340F00(void *);
M2C_UNK TWindowDD__sub_80348AFC(s32, void *);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(s32, s32, void *, f32);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK draw__9TWindowDDFPviif(void *, void *, s32, f32);
void *draw_default_entry__9TWindowDDFi();
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

extern M2C_UNK lbl_804EFBE4[];

void *dt__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFBE4;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TWindowDD__sub_80340F70(void) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = TWindowDD__sub_80340F00(o);
    }
    return o;
}

extern f32 lbl_805DFC90;

void draw_and_scroll_entry__9TWindowDDFi(s32 arg0) {
    f32 temp_f1;
    void *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowDD__sub_80348AFC(arg0, temp_r3);
    draw_entry_if_visible__9TWindowDDFPvPv((void *)(arg0), (void *)(temp_r3));
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x14);
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) (temp_f1 + lbl_805DFC90);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3, temp_f1);
}

extern f32 lbl_805DFC94;

void draw_entry_if_visible__9TWindowDDFPvPv(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0) {
        draw__9TWindowDDFPviif(arg0, arg1,
                               M2C_FIELD(arg0, s32 *, 0x60), lbl_805DFC94);
    }
}

void init_window__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
