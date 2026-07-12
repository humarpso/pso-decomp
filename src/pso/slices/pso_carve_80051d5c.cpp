#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjDFTenchuFuru__sub_80051B98(u32);
M2C_UNK TObjPlayer__sub_80052374();
M2C_UNK TObjPlayer__sub_80052390(f32);
M2C_UNK TCharaMaking__sub_8028DD18(u32, s32, M2C_UNK, f32);
M2C_UNK clear_flag_bit0__12TCharaMakingFv();
M2C_UNK enable_making__12TCharaMakingFv();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjFish__sub_803E46BC(u32);
extern M2C_UNK lbl_804FF228[];
extern M2C_UNK lbl_804FF234[];
extern const f32 lbl_805D8A30;
extern const f32 lbl_805D8A34;

void boss6type2_draw_models(s32 arg0, s32 arg1, s32 arg2, u32 arg3, u32 arg4, u32 arg5, u32 arg6, s32 arg7, f32 farg0) {
    if (lbl_805D8A30 != farg0) {
        TObjDFTenchuFuru__sub_80051B98(arg3);
        if (farg0 < lbl_805D8A34) {
            TObjPlayer__sub_80052390(farg0);
        }
        TObjFish__sub_803DA798(arg0);
        TObjFish__sub_803E46BC(arg3);
        if (arg6 != 0U) {
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(lbl_804FF234);
            TObjFish__sub_803DA798(arg2);
            TObjFish__sub_803E46BC(arg6);
            TObjPlayer__sub_803D9B78();
        }
        if (arg4 != 0U) {
            enable_making__12TCharaMakingFv();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(lbl_804FF228);
            TObjFish__sub_803DA798(arg1);
            TObjFish__sub_803E46BC(arg4);
            TObjPlayer__sub_803D9B78();
            clear_flag_bit0__12TCharaMakingFv();
        }
        if (farg0 < lbl_805D8A34) {
            TObjPlayer__sub_80052374();
        }
        if (arg5 != 0U) {
            enable_making__12TCharaMakingFv();
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(lbl_804FF228);
            TObjFish__sub_803DA798(arg1);
            TCharaMaking__sub_8028DD18(arg5, arg7, 0, farg0);
            TObjPlayer__sub_803D9B78();
            clear_flag_bit0__12TCharaMakingFv();
        }
    }
}

}
