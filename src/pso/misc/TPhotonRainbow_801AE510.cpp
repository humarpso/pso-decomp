#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TPhotonRainbowFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);

extern u8 *lbl_805D4DF0;

void render__14TPhotonRainbowFv(u8 *arg0) {
    if ((void *) lbl_805D4DF0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(lbl_805D4DF0, f32 *, 0x178);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(lbl_805D4DF0, f32 *, 0x180);
    }
    fn_801E2EFC();
    fn_803D9B2C();
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x90);
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    fn_803D9214(0, (s32) M2C_FIELD(arg0, s32 *, 0x60) / 2);
    fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
    fn_803E46BC(M2C_FIELD(arg0, s32 *, 0x98));
    fn_803D9B78();
    fn_803D9B2C();
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x94);
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    fn_803D9214(0, 0x10000 - M2C_FIELD(arg0, s32 *, 0x60));
    fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
    fn_803E46BC(M2C_FIELD(arg0, s32 *, 0x9C));
    fn_803D9B78();
    fn_801E2F20();
}

}
