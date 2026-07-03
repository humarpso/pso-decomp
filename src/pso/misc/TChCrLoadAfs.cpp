#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TChCrLoadAfs__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__12TChCrLoadAfs[];
extern void *lbl_805D3B48;

void *TChCrLoadAfs__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrLoadAfs;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B48;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 900;
    return arg0;
}

}
