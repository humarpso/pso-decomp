#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0);
s32 is_active__20TWindowSubSymbolChatFPv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

void handle_cancel__28TWindowSubSymbolChatPartsSetFPv(void *arg0) {
    if (is_active__20TWindowSubSymbolChatFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x68) = (u8) (M2C_FIELD(arg0, u8 *, 0x68) | 2);
    }
}

void handle_decide__28TWindowSubSymbolChatPartsSetFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x68) = (u8) (M2C_FIELD(arg0, u8 *, 0x68) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x88), 2);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80247EFC
#include "types.h"

extern "C" {

int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0);

    extern int lbl_8044EA74[];
int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0) {  return lbl_8044EA74[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248064
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);

void get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, arg1 + 0xD);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802482DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);

void get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, arg1 + 9);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80248300
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_parts_entry__28TWindowSubSymbolChatPartsSetFii(s32 arg0, s32 arg1);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(s32, s32);

void get_parts_entry__28TWindowSubSymbolChatPartsSetFii(s32 arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, arg1 + 5);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025B0C4
#include "types.h"

extern "C" {

void TWindowSubSymbolChatPartsSet__sub_8025B0C4(void* p, f32 a, f32 b);

void TWindowSubSymbolChatPartsSet__sub_8025B0C4(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x10) = a; *(f32*)((char*)p + 0x14) = b; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80286708
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__28TWindowSubSymbolChatPartsSetFv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80245808(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int, f32);
M2C_UNK TWindowSubSymbolChatPartsSet__sub_80286120(void *, int);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
u8 *draw_default_entry__9TWindowDDFi();
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);

extern M2C_UNK lbl_8044FC38;
extern const f32 lbl_805DD820;

struct Vec2_80286708 { f32 x; f32 y; };

void render__28TWindowSubSymbolChatPartsSetFv(u8 *arg0) {
    struct Vec2_80286708 sp10;
    struct Vec2_80286708 sp8;
    f32 temp_f1;
    u8 *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&sp10), (void *) (temp_r3 + 0x10));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&sp8), (void *) (temp_r3 + 0x28));
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) < 0) {
        M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x5C) / lbl_805DD820);
        M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
    }
    TWindowSubComCard__sub_80245808((void *) (arg0), (int) (temp_r3));
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x10) + M2C_FIELD(arg0, f32 *, 0x8C));
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0x90));
    M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) (M2C_FIELD(temp_r3, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x94));
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 0x2C);
    M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) (temp_f1 * M2C_FIELD(arg0, f32 *, 0x94));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3), (f32) (temp_f1));
    TWindowSubSymbolChatPartsSet__sub_80286120((void *) (arg0), (int) (temp_r3));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (temp_r3 + 0x10), (void *) (&sp10));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (temp_r3 + 0x28), (void *) (&sp8));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x88)), (int) (temp_r3));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80286954
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__28TWindowSubSymbolChatPartsSetFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__17TWindowChatSymbolFv(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);

extern M2C_UNK __vt__28TWindowSubSymbolChatPartsSet[];

void *__dt__28TWindowSubSymbolChatPartsSetFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__28TWindowSubSymbolChatPartsSet;
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x88), 1);
        __dt__17TWindowChatSymbolFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
