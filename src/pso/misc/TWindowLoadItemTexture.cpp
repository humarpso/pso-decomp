#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__22TWindowLoadItemTextureFv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);

void run_task__22TWindowLoadItemTextureFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8026297C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__22TWindowLoadItemTextureFPvPv(void *arg0, void *arg1);
void *TWindowLoadItemTexture__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);
void fn_8025B078(f32, f32, f32, f32);
void get_array_entry__20TWindowSubStatusDispFPvi(void *, int);

extern M2C_UNK lbl_8044F280[];
extern const f32 lbl_805DD0EC;
extern const f32 lbl_805DD0F4;
extern const f32 lbl_805DD0F8;

void *create__22TWindowLoadItemTextureFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x74);
    if (o != NULL) {
        o = TWindowLoadItemTexture__ct(o, arg0, lbl_8044F280, arg1);
    }
    get_array_entry__20TWindowSubStatusDispFPvi(o, 0);
    fn_8025B078(lbl_805DD0EC, lbl_805DD0EC, lbl_805DD0F4, lbl_805DD0F8);
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802629F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__22TWindowLoadItemTextureFv(u8 *arg0);
u32 TItemTexLoad__sub_8011D164(s32);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, s32);
M2C_UNK fn_8026287C(void *);

void render__22TWindowLoadItemTextureFv(u8 *arg0) {
    s32 temp_r31;

    if ((s32) M2C_FIELD(arg0, u8 *, 0x60) == 1) {
        M2C_FIELD(arg0, u32 *, 0x70) = TItemTexLoad__sub_8011D164(M2C_FIELD(arg0, s32 *, 0x6C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
            fn_8026287C(arg0);
            M2C_FIELD(arg0, u8 *, 0x60) = 1U;
        }
    }
    temp_r31 = TWindowSubComCard__sub_80244C0C(arg0, arg0 + 0x64);
    if (M2C_FIELD(arg0, u8 *, 0x61) & 1) {
        TWindowSubComCard__sub_80245F98(arg0, temp_r31);
    }
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r31);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80262AC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TWindowLoadItemTextureFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__22TWindowLoadItemTexture[];

void *__dt__22TWindowLoadItemTextureFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowLoadItemTexture;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x6C));
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
