#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80051B98(u32);
M2C_UNK fn_80052374();
M2C_UNK fn_80052390(f32);
M2C_UNK TCharaMaking__sub_8028DD18(u32, s32, M2C_UNK, f32);
M2C_UNK TCharaMaking__sub_8028E25C();
M2C_UNK TCharaMaking__sub_8028E288();
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(u32);
extern M2C_UNK lbl_804FF228[];
extern M2C_UNK lbl_804FF234[];
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;

void fn_80051D5C(s32 arg0, s32 arg1, s32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6, s32 arg7, f32 farg0) {
    if (lbl_805D8A30 != farg0) {
        fn_80051B98(arg3);
        if (farg0 < lbl_805D8A34) {
            fn_80052390(farg0);
        }
        fn_803DA798(arg0);
        fn_803E46BC(arg3);
        if (arg6 != 0U) {
            fn_803D9B2C();
            TOHangerMachine01__sub_803D9C00(lbl_804FF234);
            fn_803DA798(arg2);
            fn_803E46BC(arg6);
            fn_803D9B78();
        }
        if (arg4 != 0U) {
            TCharaMaking__sub_8028E288();
            fn_803D9B2C();
            TOHangerMachine01__sub_803D9C00(lbl_804FF228);
            fn_803DA798(arg1);
            fn_803E46BC(arg4);
            fn_803D9B78();
            TCharaMaking__sub_8028E25C();
        }
        if (farg0 < lbl_805D8A34) {
            fn_80052374();
        }
        if (arg5 != 0U) {
            TCharaMaking__sub_8028E288();
            fn_803D9B2C();
            TOHangerMachine01__sub_803D9C00(lbl_804FF228);
            fn_803DA798(arg1);
            TCharaMaking__sub_8028DD18(arg5, arg7, 0, farg0);
            fn_803D9B78();
            TCharaMaking__sub_8028E25C();
        }
    }
}

}
