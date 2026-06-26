#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80141F1C();
M2C_UNK fn_80143098();
M2C_UNK fn_80143118();
M2C_UNK fn_803DB470(s32);
M2C_UNK fn_803E46BC(s32);
M2C_UNK fn_803E4BC4(void *);
M2C_UNK fn_803E4BD0();

void TObjNpcEnemy__sub_802D76B0(void *arg0) {
    void *sp4;
    u16 temp_r0;

    sp4 = M2C_FIELD(arg0, void **, 0x3B8);
    temp_r0 = M2C_FIELD(sp4, u16 *, 2);
    switch ((s32) temp_r0) {
    case 0:
        fn_803E4BC4(arg0);
        fn_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        fn_80141F1C();
        fn_803E4BD0();
        return;
    case 1:
        fn_80143098();
        return;
    case 2:
        fn_803E4BC4(arg0);
        fn_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        fn_80141F1C();
        fn_803E4BD0();
        return;
    case 3:
        fn_80143118();
    case 4:
        return;
    }
}

}
