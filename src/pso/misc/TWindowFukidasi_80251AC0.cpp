#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open__15TWindowFukidasiFPvPvi(u8 *arg0, u32 *arg1, s32 arg2);
M2C_UNK init_flags__15TWindowFukidasiFPvi(void *, s32);
M2C_UNK fn_800773BC(s32);
f32 fn_801A5228(s16);
M2C_UNK fn_80248404(void *, u32 *);
M2C_UNK fn_80248494(void *, s16);
M2C_UNK fn_80252CA0(void *);
M2C_UNK fn_80257CB8(void *);

extern const f32 TWindowFukidasi__data_805DCD30;

void open__15TWindowFukidasiFPvPvi(u8 *arg0, u32 *arg1, s32 arg2) {
    s32 var_r31;
    u8 temp_r0;

    var_r31 = 0;
    init_flags__15TWindowFukidasiFPvi(arg0, arg2);
    if ((u8) M2C_FIELD(arg0, u8 *, 0x72) != 1) {
        M2C_FIELD(arg0, u8 *, 0x72) = 1U;
        fn_80257CB8(arg0 + 0x24);
        fn_80248494(arg0 + 0x24, M2C_FIELD(arg0, s16 *, 0x20));
        if ((u8) M2C_FIELD(arg0, u8 *, 0x70) != 0) {
            var_r31 = 1;
        }
    } else {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x70);
        if ((temp_r0 != 0) && (temp_r0 != 4)) {
            var_r31 = 1;
        }
    }
    if (var_r31 != 0) {
        M2C_FIELD(arg0, u8 *, 0x70) = 5U;
        fn_80252CA0(arg0);
        if (fn_801A5228(M2C_FIELD(arg0, s16 *, 0x20)) > TWindowFukidasi__data_805DCD30) {
            M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        }
    }
    fn_80248404(arg0 + 0x24, arg1);
    fn_800773BC(((u32) *arg1 >> 5U) & 0xF);
    M2C_FIELD(arg0, s16 *, 0x74) = 0x5A;
}

}
