#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132988(s32);
M2C_UNK fn_80244D2C(u32, f32);
M2C_UNK fn_80263AB0(u32, s32);
M2C_UNK fn_80269C6C(u32, s32, M2C_UNK);
u32 fn_80269CC0(u32, M2C_UNK *, M2C_UNK, s32);
u32 fn_8026CBB8(M2C_UNK);
extern M2C_UNK lbl_8044F2E0[];
extern const f32 lbl_805DD13C;

void fn_8026404C(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) {
            u32 tmp = fn_8026CBB8(0x1B);
            M2C_FIELD(arg0, u32 *, 0x24) = fn_80269CC0(tmp, lbl_8044F2E0, 1, M2C_FIELD(arg0, s32 *, 0x54));
            fn_80244D2C(M2C_FIELD(arg0, u32 *, 0x24), lbl_805DD13C);
            fn_80263AB0(M2C_FIELD(arg0, u32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x54));
        }
        fn_80269C6C(M2C_FIELD(arg0, u32 *, 0x24), fn_80132988(arg1), 0x80);
    }
}

}
