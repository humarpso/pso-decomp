#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(int, int);
void TWindowDuelResult__sub_8024F478(u8 *arg0);
}

extern "C" {

void TWindowDuelResult__vt2(void);
void TWindowDuelResult__vt3(void);
void *destroy__17TWindowDuelResultFPvs(void *arg0, s16 arg1);
void update__17TWindowDuelResultFPv(u8 *arg0);
M2C_UNK TWindowDuelResult__sub_8024F330(void *);
M2C_UNK TWindowDuelResult__sub_8024F3CC(void *);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
void __dl__7TObjectFPv(void *);
void delete_if_allocated(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);

void TWindowDuelResult__vt3(void) {  }

void TWindowDuelResult__vt2(void) {  }

void TWindowDuelResult__sub_8024F478(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubComCard__sub_80244C0C(arg0, (void *) (arg0 + 0x60));
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    TWindowSubStatusDisp__sub_8026C800((int) (M2C_FIELD(arg0, s32 *, 0x68)), (int) (temp_r3));
}

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
