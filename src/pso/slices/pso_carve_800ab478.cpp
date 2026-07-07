#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);
extern s32 lbl_805D5094;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9B68;

void fn_800AB478(u8 *arg0) {
    fn_803DA798(lbl_805D5094);
    fn_803DA798(M2C_FIELD(arg0, s32 *, 0xD8));
    fn_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0xF0);
    fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0xC0));
    TOMonitorMachine01__sub_803D8B5C(0, lbl_805D9B68, lbl_805D9B68, lbl_805D9B68);
    some_id_805c6f74 &= 0xFFFFFBFF;
    fn_803E46BC(M2C_FIELD(arg0, s32 *, 0xC8));
    fn_803D9B78();
}

}
