#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801A2514(u16);
M2C_UNK fn_801A2528(u16);
M2C_UNK fn_801F3A24();
M2C_UNK fn_801F3C24();
M2C_UNK fn_801F429C();
M2C_UNK fn_801F42D4();
M2C_UNK fn_801F4398();
M2C_UNK fn_801F43A0();
M2C_UNK fn_801F43A8();
M2C_UNK fn_8020B2DC();
M2C_UNK fn_8020B308(s32);
extern s32 lbl_805D5EDC;
extern s32 lbl_805D60E0;
extern s32 lbl_805D60E4;
extern s32 lbl_805D60E8;
extern s32 lbl_805D60EC;
extern s32 lbl_805D6148;
extern s32 lbl_805D614C;

void fn_801F41D4(void) {
    lbl_805D60E0 = 0;
    lbl_805D60E4 = 0;
    lbl_805D60E8 = 0;
    lbl_805D60EC = 0;
    switch ((s32) lbl_805D5EDC) {
    case 1:
        fn_801F43A8();
        fn_801F42D4();
        break;
    case 2:
        fn_801F43A0();
        fn_801F429C();
        break;
    case 3:
        fn_801F4398();
        fn_801F429C();
        break;
    case 4:
        fn_801F43A0();
        fn_801F3C24();
        break;
    case 5:
        fn_801F43A8();
        fn_801F3A24();
        break;
    }
    fn_801A2528((u16) lbl_805D60E8);
    fn_801A2514((u16) lbl_805D60EC);
    lbl_805D6148 = lbl_805D60E0;
    lbl_805D614C = lbl_805D60E4;
    fn_8020B308(lbl_805D60E0);
    fn_8020B2DC();
}

}
