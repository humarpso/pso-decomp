#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80052374();
M2C_UNK fn_80052390(f32);
M2C_UNK fn_800E2FD8(s32);
M2C_UNK fn_800E3074(s32);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E4AF4(s32, s32, f32);
M2C_UNK fn_803E4BC4();
M2C_UNK fn_803E4BD0();
extern const f32 lbl_805D8A08;

void fn_8004FA98(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) >= 0xB4) {
        fn_80052390(lbl_805D8A08);
        fn_803D9B2C();
        fn_803E4BC4();
        TOHangerMachine01__sub_803D9C00(arg0 + 0xD4);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0xE0));
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0xCC));
        fn_800E3074(M2C_FIELD(arg0, s32 *, 0x108));
        fn_803E4AF4(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xE8));
        fn_800E2FD8(M2C_FIELD(arg0, s32 *, 0x108));
        fn_803E4BD0();
        fn_803D9B78();
        fn_80052374();
    }
}

}
