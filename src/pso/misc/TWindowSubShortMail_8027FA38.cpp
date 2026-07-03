#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__19TWindowSubShortMail[];
extern void *lbl_805D3A98;

void *TWindowSubShortMail__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubShortMail;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A98;
    M2C_FIELD(arg0, void **, 0x34) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x54) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    M2C_FIELD(arg0, u32 *, 0x4C) = 0;
    M2C_FIELD(arg0, u32 *, 0x5C) = 0;
    M2C_FIELD(arg0, u32 *, 0x50) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    M2C_FIELD(arg0, u32 *, 0x28) = -1;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
