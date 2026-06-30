#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801F3274();
M2C_UNK fn_801F32A0(void);
M2C_UNK fn_8032C854(s32);
M2C_UNK fn_8032CD7C(s32, s32);
struct Glob_80512220 { s32 field0; char pad[0x100]; };
extern struct Glob_80512220 lbl_80512220;
extern s32 lbl_805D6CC0;
extern s32 lbl_805D6CC8;

void fn_801E7758(void) {
    s32 temp_r31;

    temp_r31 = lbl_80512220.field0;
    fn_801F32A0();
    fn_8032C854(temp_r31);
    fn_8032CD7C(lbl_805D6CC0, lbl_805D6CC8);
    fn_801F3274();
}

}
