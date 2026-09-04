#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__15TObjNewFloorWinFv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__15TObjNewFloorWin[];
extern void *lbl_805D2870;

void *__ct__15TObjNewFloorWinFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjNewFloorWin;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2870;
    M2C_FIELD(arg0, void **, 0x4C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 450;
    M2C_FIELD(arg0, u32 *, 0x28) = 150;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8007410C
#include "types.h"

extern "C" {

int TObjNewFloorWin__sub_8007410C(void);

    extern int lbl_805D5FD8;
int TObjNewFloorWin__sub_8007410C(void) {  return lbl_805D5FD8; }

}
#endif
#endif
