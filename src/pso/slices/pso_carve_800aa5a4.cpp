#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, M2C_UNK);
s32 fn_80080750();
M2C_UNK fn_800A8B8C(void *);
M2C_UNK fn_800AA10C(void *);
M2C_UNK fn_800AA330(void *);
M2C_UNK fn_800AA528(void *);
M2C_UNK fn_800AB068(void *);
M2C_UNK fn_800C6A18(void *);
s32 fn_800D87EC(u16);
M2C_UNK fn_800F6DD8(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);

void fn_800AA5A4(u8 *arg0) {
    if (fn_80080750() == 1) {
        fn_800AA330(arg0);
        return;
    }
    fn_800A8B8C(arg0);
    M2C_FIELD(arg0, s32 *, 0x2A8) = fn_800D87EC(M2C_FIELD(arg0, u16 *, 0x338));
    fn_800C6A18(arg0);
    fn_800AA10C(arg0);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            fn_800AA528(arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
        M2C_FIELD(arg0, s32 *, 0x37C) = 0;
    }
    fn_800AA528(arg0);
    fn_800AB068(arg0);
    fn_800F6DD8(arg0);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
    if (obj_testFlags30(arg0, 0x04000000) == 0) {
        TObjPlayer__sub_801B4A18(arg0, -1);
    }
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

}
