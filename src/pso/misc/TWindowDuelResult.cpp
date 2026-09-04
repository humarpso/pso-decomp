#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TWindowDuelResult__vt3(void);

void TWindowDuelResult__vt3(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x801C2528
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__17TWindowDuelResultFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);
void set_and_notify__6TLobbyFi(void *);

extern M2C_UNK lbl_804C3E60[];

void *init__17TWindowDuelResultFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3E60;
    M2C_FIELD(arg0, void **, 0x1C) = arg3;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    set_and_notify__6TLobbyFi(arg2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024F090
#include "types.h"

extern "C" {

void TWindowDuelResult__vt2(void);

void TWindowDuelResult__vt2(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024F4D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__17TWindowDuelResultFPv(u8 *arg0);
M2C_UNK TWindowDuelResult__sub_8024F330(void *);
M2C_UNK TWindowDuelResult__sub_8024F3CC(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);

void update__17TWindowDuelResultFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x68)) != 0) {
        TWindowDuelResult__sub_8024F3CC(arg0);
    }
    TWindowDuelResult__sub_8024F330(arg0);
    initialize_subwindow__9TWindowDDFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024F548
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__17TWindowDuelResultFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void delete_if_allocated(void *, int);

extern M2C_UNK lbl_804CF020[];

void *destroy__17TWindowDuelResultFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CF020;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x68), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025AD38
#include "types.h"

extern "C" {

int set_default_status__17TWindowDuelResultFPvi(void* p, int a1);
int TWindowSubStatusDisp__sub_8025AC50(void*, int, int);

int set_default_status__17TWindowDuelResultFPvi(void* p, int a1) { return TWindowSubStatusDisp__sub_8025AC50(p, a1, 0); }

}
#endif
#endif
