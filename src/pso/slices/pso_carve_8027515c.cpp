#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void __ct__7TObjectFP7TObject(void *);
extern M2C_UNK __vt__17TWindowSubComCard[];
extern void *lbl_805D3A10;
void fn_80077980(void *);

void *TWindowSubComCard__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSubComCard;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A10;
    M2C_FIELD(arg0, void **, 0x5C) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x60) = 0;
    M2C_FIELD(arg0, u32 *, 0x64) = 0;
    M2C_FIELD(arg0, u32 *, 0x74) = 0;
    M2C_FIELD(arg0, u32 *, 0x78) = 0;
    M2C_FIELD(arg0, u32 *, 0x68) = 0;
    M2C_FIELD(arg0, u32 *, 0x6C) = 0;
    M2C_FIELD(arg0, u32 *, 0x70) = 0;
    M2C_FIELD(arg0, u32 *, 0x80) = 0;
    M2C_FIELD(arg0, u32 *, 0x84) = 0;
    M2C_FIELD(arg0, u32 *, 0x7C) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u8 *, 0x1D) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    fn_80077980((void *)((char *)arg0 + 48));
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
