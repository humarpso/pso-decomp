#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubShortCut__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__18TWindowSubShortCut[];
extern void *lbl_805D3A88;

void *TWindowSubShortCut__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowSubShortCut;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A88;
    M2C_FIELD(arg0, void **, 0x28) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
