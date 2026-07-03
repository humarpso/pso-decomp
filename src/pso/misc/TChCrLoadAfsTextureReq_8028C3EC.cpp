#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TChCrLoadAfsTextureReq__sub_8028C3EC(void *arg0, void *arg1, void *arg2);
void TChCrLoadAfsTextureReq__sub_8028C310(void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__22TChCrLoadAfsTextureReq[];
extern void *lbl_805D3B50;

void *TChCrLoadAfsTextureReq__sub_8028C3EC(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TChCrLoadAfsTextureReq;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B50;
    M2C_FIELD(arg0, void **, 0x30) = M2C_FIELD(arg2, void **, 0x0);
    M2C_FIELD(arg0, void **, 0x6C) = M2C_FIELD(arg2, void **, 0x4);
    M2C_FIELD(arg0, void **, 0x34) = M2C_FIELD(arg2, void **, 0x8);
    M2C_FIELD(arg0, void **, 0x70) = M2C_FIELD(arg2, void **, 0xC);
    TChCrLoadAfsTextureReq__sub_8028C310(arg0);
    return arg0;
}

}
