#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TAdMultiPlyChrSelectGC__sub_802B1850(s32, M2C_UNK, M2C_UNK *);
M2C_UNK fn_802E005C(s32, M2C_UNK);
M2C_UNK fn_802E0C68(s32, M2C_UNK);
M2C_UNK TAdGameStartGC__sub_802E6380(s32);
s32 fn_8030E2E4(void *, M2C_UNK);
s32 fn_803100A4(void *);
extern M2C_UNK lbl_805DE898;

void TAdMultiPlyChrSelectGC__sub_802DE094(void *arg0) {
    TAdGameStartGC__sub_802E6380(M2C_FIELD(arg0, s32 *, 0x78));
    fn_802E005C(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    fn_802E0C68(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x68) = fn_8030E2E4(arg0, 2);
    M2C_FIELD(arg0, s32 *, 0x6C) = fn_803100A4(arg0);
    TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x64), 0, &lbl_805DE898);
    TAdMultiPlyChrSelectGC__sub_802B1850(M2C_FIELD(arg0, s32 *, 0x64), 1, &lbl_805DE898);
    M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
}

}
