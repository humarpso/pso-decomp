#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
extern M2C_UNK __vt__14TWindowMessage[];
void render__14TWindowComCardFv(s32 arg0);
extern u8 *lbl_805D553C;
s32 TWindowComCard__sub_80249C28(s32 arg0);
}

extern "C" {

void TWindowComCard__sub_80249920(s32 arg0, s32 arg1, s32 arg2);
u8 TWindowComCard__sub_80249C18(void* p);
u8 TWindowComCard__sub_80249C20(void* p);
void *__dt__14TWindowComCardFv(void *arg0, s16 arg1);
void * create__14TWindowComCardFPvPv(void *arg0, void *arg1);
void* get_kbd_ptr__14TWindowComCardFPv(void* p);
void run_task__14TWindowComCardFv(void* p);
void set_display_value__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2);
void *TWindowComCard__ct(void *, void *, void *);
void *TWindowSubComCard__sub_8007A8F8(void *);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK fn_802497A8(s32, s32);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

void TWindowComCard__sub_80249920(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = arg2 + (arg1 * 0x90);
    if (temp != 0) {
        fn_802497A8(arg0 + 0x24, temp);
    }
}

void set_display_value__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = arg2 + (arg1 << 8);
    if (temp != 0) {
        fn_802497A8(arg0 + 0x24, temp);
    }
}

void * create__14TWindowComCardFPvPv(void *arg0, void *arg1) {
    void *x0;
    void *o;
    x0 = TWindowSubComCard__sub_8007A8F8(arg1);
    if (x0 == NULL) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x60);
    if (o != NULL) {
        o = TWindowComCard__ct(o, arg0, x0);
    }
    return o;
}

}
extern "C" {
void render__14TWindowComCardFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__14TWindowComCardFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

extern M2C_UNK __vt__14TWindowComCard[];

void *__dt__14TWindowComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowComCard;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void* get_kbd_ptr__14TWindowComCardFPv(void* p) { return (char*)p + 0x20; }
u8 TWindowComCard__sub_80249C18(void* p) { return *(u8*)((char*)p + 0x8e); }
u8 TWindowComCard__sub_80249C20(void* p) { return *(u8*)((char*)p + 0x8d); }
s32 TWindowComCard__sub_80249C28(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(lbl_805D553C, s32 *, 0x1C), M2C_UNK *, (arg0 * 4));
}

}
