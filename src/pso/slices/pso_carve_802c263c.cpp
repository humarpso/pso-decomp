#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001A430();
s32 fn_80080750();
M2C_UNK fn_802C2FBC(void *, s32, s32, f32);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E4AF4(s32, s32, f32);
extern s32 lbl_805D67A4;
extern const f32 lbl_805DE4FC;

void fn_802C263C(u8 *arg0) {
    if ((fn_80080750() == 1) && (fn_8001A430() == 0)) {
        fn_802C2FBC(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    fn_803DA798(lbl_805D67A4);
    fn_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
    TOHangerMachine01__sub_803D9C00(arg0 + 0xAC);
    fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0xB8));
    TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0xC0));
    fn_803E4AF4(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    fn_803D9B78();
}

}
