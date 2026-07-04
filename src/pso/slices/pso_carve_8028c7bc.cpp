#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK __vt__16TChCrLoadGmNjReq[];
extern void *lbl_805D3B58;
void strncpy(void *, void *, int);
struct VOff_8028C7BC_arg0 { char pad_0[0x30]; char f_30[1]; };

void *TChCrLoadGmNjReq__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_8028C7BC_arg0 *self = (struct VOff_8028C7BC_arg0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TChCrLoadGmNjReq;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3B58;
    M2C_FIELD(arg0, void **, 0x24) = M2C_FIELD(arg2, void **, 0x8);
    M2C_FIELD(arg0, void **, 0x28) = M2C_FIELD(arg2, void **, 0x10);
    M2C_FIELD(arg0, void **, 0x1C) = M2C_FIELD(arg2, void **, 0x4);
    M2C_FIELD(arg0, void **, 0x20) = M2C_FIELD(arg2, void **, 0xC);
    strncpy(self->f_30, M2C_FIELD(arg2, void **, 0x0), 48);
    M2C_FIELD(arg0, void **, 0x60) = self->f_30;
    M2C_FIELD(arg0, u32 *, 0x64) = 0;
    M2C_FIELD(arg0, u32 *, 0x68) = 0;
    M2C_FIELD(arg0, u32 *, 0x6C) = 0;
    M2C_FIELD(arg0, u32 *, 0x70) = 5370;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    return arg0;
}

}
