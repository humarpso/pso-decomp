#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TScene__sub_80206F20(s32 arg0);
s32 *TItemDrop__sub_800F94BC(M2C_UNK *, u32);
s32 TOKeyMachine01__sub_802034A8();
u32 TObjMapCsn__sub_8007A728();
M2C_UNK fn_8007A6A0();
u32 fn_8007EBFC(s32);
s32 fn_800F9D80(M2C_UNK *);
M2C_UNK fn_80131794(M2C_UNK *, ...);
M2C_UNK fn_801317E4(M2C_UNK *, s32, M2C_UNK *);
M2C_UNK fn_80140F18(u32, s32);

extern M2C_UNK lbl_8044A950[];
extern M2C_UNK lbl_8044A958[];
extern s32 *lbl_805D4E68;
extern u32 lbl_805D6000;
extern s32 lbl_805D6014;

struct Sp8Buf20 {
    s32 f0; s32 f4; s32 f8; s32 fc;
    s32 f10; s32 f14; s32 f18; s32 f1c;
};

void TScene__sub_80206F20(s32 arg0) {
    struct Sp8Buf20 sp8;
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    fn_8007A6A0();
    lbl_805D4E68 = NULL;
    lbl_805D6000 = 0U;
    lbl_805D6014 = 0;
    fn_801317E4((M2C_UNK *)&sp8, arg0, lbl_8044A950);
    temp_r31 = fn_800F9D80((M2C_UNK *)&sp8);
    if (TOKeyMachine01__sub_802034A8() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x10000U)) {
            temp_r3 = fn_8007EBFC(0x10000);
            lbl_805D6000 = temp_r3;
            if (temp_r3 != 0U) {
                lbl_805D4E68 = TItemDrop__sub_800F94BC((M2C_UNK *)&sp8, temp_r3);
                lbl_805D6014 = 0x10000;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = fn_8007EBFC(temp_r31);
        lbl_805D6000 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            lbl_805D4E68 = TItemDrop__sub_800F94BC((M2C_UNK *)&sp8, temp_r3_2);
            lbl_805D6014 = temp_r31;
        }
    }
    if (((s32 *) lbl_805D4E68 != NULL) && (TObjMapCsn__sub_8007A728() != 0U)) {
        u32 temp_csn = TObjMapCsn__sub_8007A728();
        fn_80140F18(temp_csn, *lbl_805D4E68);
        return;
    }
    fn_80131794(lbl_8044A958);
}

}
