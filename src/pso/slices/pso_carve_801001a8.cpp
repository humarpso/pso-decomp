#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80110240(u8, u32 *, s32 *);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);
M2C_UNK fn_80141F1C();
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_8023E480(s32);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(u32);

void fn_801001A8(u8 *arg0) {
    u32 spC;
    s32 sp8;

    fn_80110240(M2C_FIELD(arg0, u8 *, 0xEF), &spC, &sp8);
    if (spC != 0U) {
        set_depth_buffer_settings_id__FUl(3);
        fn_801E2EFC();
        fn_8023E480(sp8);
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjBoss2Tunnel__sub_803DB470(spC);
        fn_803D9B78();
        fn_801E2F20();
        fn_80141F1C();
        func_80141618__Fv();
    }
}

}
