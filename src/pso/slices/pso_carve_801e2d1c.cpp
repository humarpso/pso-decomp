#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803764EC(M2C_UNK *, M2C_UNK *);
M2C_UNK PSMTXInverse(s32, M2C_UNK *);
M2C_UNK GXLoadPosMtxImm(s32, M2C_UNK);
M2C_UNK GXLoadNrmMtxImm(M2C_UNK *, M2C_UNK);
M2C_UNK fn_803D76B4(void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
extern void *lbl_805D4698;
extern M2C_UNK (*lbl_805D7710)(void *);
extern s32 lbl_805D7774;

void fn_801E2D1C(void *arg0) {
    M2C_UNK sp38[12];
    M2C_UNK sp8[12];
    void *var_r31;

    var_r31 = arg0;
    do {
        TObjPlayer__sub_803D9B2C();
        fn_803D76B4(var_r31);
        if (((M2C_UNK (*)(void *)) lbl_805D7710) != NULL) {
            lbl_805D7710(var_r31);
        }
        if (((u32) M2C_FIELD(var_r31, u32 *, 4) != 0U) && !(M2C_FIELD(var_r31, s32 *, 0) & 8)) {
            GXLoadPosMtxImm(lbl_805D7774, 0);
            PSMTXInverse(lbl_805D7774, sp8);
            fn_803764EC(sp8, sp38);
            GXLoadNrmMtxImm(sp38, 0);
            M2C_FIELD(lbl_805D4698, M2C_UNK (**)(u32, void *), 0xC)(M2C_FIELD(var_r31, u32 *, 4), lbl_805D4698);
        }
        if ((u32) M2C_FIELD(var_r31, u32 *, 0x2C) != 0U) {
            fn_801E2D1C(M2C_FIELD(var_r31, void **, 0x2C));
        }
        TObjPlayer__sub_803D9B78();
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    } while (var_r31 != NULL);
}

}
