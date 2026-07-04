#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8006EF6C(M2C_UNK);
M2C_UNK TWindow__close(void *);
M2C_UNK fn_80269C6C(u32, s32, M2C_UNK);
u32 fn_80269D24(M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK fn_8026CBB8(M2C_UNK);
extern M2C_UNK lbl_804DBE9C[];

void fn_80299EC4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x30) = fn_80269D24(fn_8026CBB8(0x39), lbl_804DBE9C, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        fn_80269C6C(M2C_FIELD(arg0, u32 *, 0x30), fn_8006EF6C(0x5E), 1);
    }
}

}
