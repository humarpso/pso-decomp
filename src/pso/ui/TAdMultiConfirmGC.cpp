#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__17TAdMultiConfirmGCFv(void);

void render__17TAdMultiConfirmGCFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x802E03D0
#include "types.h"

extern "C" {

void TAdMultiConfirmGC__sub_802E03D0(void* p);
int set_cursor_index_2__17TAdMultiConfirmGCFPv(void* p);
int set_cursor_index_1__17TAdMultiConfirmGCFPv(void* p);
int reset_cursor__17TAdMultiConfirmGCFPv(void* p);
void TAdMultiConfirmGC__sub_802E0448(void* p);
int set_cursor_index__17TAdMultiConfirmGCFPvi(void*, int);

void TAdMultiConfirmGC__sub_802E03D0(void* p) { *(s32*)((char*)p + 0x118) = 0; }
int set_cursor_index_2__17TAdMultiConfirmGCFPv(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 2); }
int set_cursor_index_1__17TAdMultiConfirmGCFPv(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 1); }
int reset_cursor__17TAdMultiConfirmGCFPv(void* p) { return set_cursor_index__17TAdMultiConfirmGCFPvi(p, 0); }
void TAdMultiConfirmGC__sub_802E0448(void* p) { *(s32*)((char*)p + 0x11c) = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802E072C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_cursor_index__17TAdMultiConfirmGCFPvi(void *arg0, s32 arg1);

void set_cursor_index__17TAdMultiConfirmGCFPvi(void *arg0, s32 arg1) {
    s16 temp_r4;

    M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (arg1 * 3);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0xB8);
    if ((temp_r4 < 0) || (temp_r4 > 8)) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x154) & 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
        if ((s32) M2C_FIELD(arg0, u8 *, 0x151) == 6) {
            M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802FF9DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TAdMultiConfirmGCFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void fn_802FF760(void *);

extern M2C_UNK __vt__17TAdMultiConfirmGC[];

void *__dt__17TAdMultiConfirmGCFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TAdMultiConfirmGC;
        fn_802FF760(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80306ABC
#include "types.h"

extern "C" {

int TAdMultiConfirmGC__sub_80306ABC(void* p);

int TAdMultiConfirmGC__sub_80306ABC(void* p) { return *(u32*)((char*)p + 0x980) & 0x1; }

}
#endif
#endif
