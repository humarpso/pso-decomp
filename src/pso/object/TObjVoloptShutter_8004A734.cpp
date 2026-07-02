#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__17TObjVoloptShutterFv(void *arg0);
M2C_UNK fn_800D8A2C();
M2C_UNK fn_801E2F20();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E4684(s32);

extern s32 lbl_805D4D48;
extern s32 lbl_805D4D4C;
extern s32 lbl_805D4D50;
extern s32 some_id_805c6f74;
extern f32 lbl_805D88F4;

void render__17TObjVoloptShutterFv(void *arg0) {
    fn_800D8A2C();
    fn_803DA798(lbl_805D4D50);
    fn_803D9B2C();
    some_id_805c6f74 &= 0xFFFFFBFF;
    fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x30));
    fn_803D9B2C();
    fn_803D9624(0, lbl_805D88F4, lbl_805D88F4, M2C_FIELD(arg0, f32 *, 0x2C));
    fn_803E4684(lbl_805D4D4C);
    fn_803D9624(0, lbl_805D88F4, M2C_FIELD(arg0, f32 *, 0x28), lbl_805D88F4);
    fn_803E4684(lbl_805D4D48);
    fn_803D9B78();
    fn_803D9B78();
    fn_801E2F20();
}

}
