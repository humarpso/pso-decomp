#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 fn_80080750();
M2C_UNK fn_80087350(void *, M2C_UNK);
M2C_UNK fn_8017D444(void *);
M2C_UNK fn_8017D448(void *);
M2C_UNK fn_8020C5E0(void *);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
u8 TODoorAncient08__sub_80229220(u16);

void fn_8017D5A4(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (fn_80080750() == 1) {
        fn_8017D444(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    default:
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    case 0:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xB8);
        if ((temp_r0_2 >= 0) && (temp_r0_2 < 0x100) && (TODoorAncient08__sub_80229220((u16) temp_r0_2) == 1)) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 1;
            fn_8022675C(0x43C11, arg0 + 0x38, 0, 0);
            fn_80087350(arg0 + 0x38, 0x45);
            fn_80087350(arg0 + 0x38, 0x46);
            fn_8017D448(arg0);
        }
        return;
    case 1:
        fn_8020C5E0(arg0);
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
