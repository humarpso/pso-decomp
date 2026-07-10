#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowOptionCtrl__ct(void *arg0);
void init_selection_indices__17TWindowOptionCtrlFPv(void *);
void *__ct__15TAdPlayerLoadGCFv(void *, void *, int);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__17TWindowOptionCtrl[];
extern void *lbl_805D39A8;

void *TWindowOptionCtrl__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowOptionCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D39A8;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = __ct__15TAdPlayerLoadGCFv(o, arg0, 2);
    }
    M2C_FIELD(arg0, void **, 0x4C) = o;
    init_selection_indices__17TWindowOptionCtrlFPv(arg0);
    M2C_FIELD(arg0, u32 *, 0x24) = 4;
    M2C_FIELD(arg0, u8 *, 0x1D) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
