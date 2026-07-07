#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
M2C_UNK fn_801A2640();
extern void *__vt__14TPhotonRainbow[];
extern s32 lbl_805D3520;
extern u8 *lbl_805D5D28;

u8 *TPhotonRainbow__ct(u8 *arg0, s32 arg1_unused, s32 arg2) {
    fn_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)&__vt__14TPhotonRainbow;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3520;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) == 1) {
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, void **, 0x42C), s32 *, 0x6C);
        M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, void **, 0x42C), s32 *, 0x8C);
        M2C_FIELD(arg0, s32 *, 0x98) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, void **, 0x42C), s32 *, 0x68);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, void **, 0x42C), s32 *, 0x88);
    } else {
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, void **, 0x42C), s32 *, 0x5C);
        M2C_FIELD(arg0, s32 *, 0x94) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, void **, 0x42C), s32 *, 0x7C);
        M2C_FIELD(arg0, s32 *, 0x98) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, void **, 0x42C), s32 *, 0x58);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5D28, void **, 0x42C), s32 *, 0x78);
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg2);
    return arg0;
}

}
