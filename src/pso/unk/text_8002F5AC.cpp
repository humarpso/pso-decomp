#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8002F5AC_lbl_804FE30C {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_8002F5AC_lbl_804FE30C lbl_804FE30C;
extern s32 lbl_805D4BA8;
extern s32 lbl_805D4BAC;
extern s32 lbl_805D4BB0;
extern u8 *lbl_805D4BB4;
extern u8 *lbl_805D4BB8;
extern s32 lbl_805D4BBC;
extern s32 lbl_805D4BC0;
void fn_8002F5AC(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8002F5AC_lbl_804FE30C_size[sizeof(RecoveredGlobal_8002F5AC_lbl_804FE30C) == 0x10 ? 1 : -1];
void fn_8002F5AC(u8 *arg0) {
    lbl_805D4BA8 = 0;
    copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_804FE30C.value), (void *) (arg0 + 0x608));
    lbl_805D4BB0 = M2C_FIELD(arg0, s32 *, 0x3C0);
    lbl_805D4BAC = 0;
    lbl_805D4BB4 = arg0 + 0x3F8;
    lbl_805D4BBC = M2C_FIELD(arg0, s32 *, 0x61C);
    lbl_805D4BC0 = M2C_FIELD(arg0, s32 *, 0x618);
    lbl_805D4BB8 = arg0 + 0x4E8;
}

}
