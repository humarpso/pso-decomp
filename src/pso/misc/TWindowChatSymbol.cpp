#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__17TWindowChatSymbolFv(void* p);
int update_fade__17TWindowSubComCardFPv(void*);
int initialize_subwindow__9TWindowDDFPv(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);

void run_task__17TWindowChatSymbolFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); TWindowSubStatusDisp__sub_80257C28(p, (char*)p + 0x24); }

}
#else
#if PSO_CLASS_PACKAGE == 0x802485A4
#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__17TWindowChatSymbolFv(u8 *arg0);
u8 *draw_default_entry__9TWindowDDFi();
M2C_UNK TWindowSubComCard__sub_80245808(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, void *, f32, f32, f32);

extern M2C_UNK lbl_8044EAB8;
extern const f32 lbl_805DCB7C;
extern const f32 lbl_805DCB94;
extern const f32 lbl_805DCB98;
extern const f32 lbl_805DCB9C;

void render__17TWindowChatSymbolFv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) < 0) {
        M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x5C) / lbl_805DCB9C);
        M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
    }
    TWindowSubComCard__sub_80245808(arg0, temp_r3);
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) ((lbl_805DCB7C * (M2C_FIELD(arg0, f32 *, 0x48) - lbl_805DCB94)) + M2C_FIELD(temp_r3, f32 *, 0x10));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x4C);
    temp_f1 = temp_f2 - lbl_805DCB98;
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) ((lbl_805DCB7C * temp_f1) + M2C_FIELD(temp_r3, f32 *, 0x14));
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3, temp_f1, temp_f2, lbl_805DCB7C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802486A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TWindowChatSymbolFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__17TWindowChatSymbol[];

void *__dt__17TWindowChatSymbolFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowChatSymbol;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248774
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowChatSymbol__sub_80248774(void);
void apply_symbol_from_card__17TWindowChatSymbolFPv(void *arg0);
s32 TWindowSubComCard__sub_80265BF8(s32);
s32 set_from_key__20TWindowSubSymbolChatFii(s32, s32);

void TWindowChatSymbol__sub_80248774(void) {  }
void apply_symbol_from_card__17TWindowChatSymbolFPv(void *arg0) {
    set_from_key__20TWindowSubSymbolChatFii(M2C_FIELD(arg0, s32 *, 0x20), TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x1C)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802487B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__17TWindowChatSymbolFPvs(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804CE7D0[];

void *destroy__17TWindowChatSymbolFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE7D0;
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x20)); M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0; }
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
