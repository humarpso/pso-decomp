#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 fn_80100474(void *);
M2C_UNK fn_8010047C(void *, u16);
u32 fn_80102BE0(void *, M2C_UNK);
M2C_UNK fn_80102BFC(void *, M2C_UNK);
s16 fn_8012D6B4(s32);

void fn_8012D4C0(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1F8) < fn_8012D6B4(M2C_FIELD(arg0, s32 *, 0xF0))) {
        fn_8010047C(arg0, (u16) (fn_80100474(arg0) + 1));
        M2C_FIELD(arg0, s16 *, 0x1F8) = fn_8012D6B4(M2C_FIELD(arg0, s32 *, 0xF0));
    }
    if ((fn_80100474(arg0) >= 0x59D8U) && (fn_80102BE0(arg0, 0x200) == 0U)) {
        fn_80102BFC(arg0, 0x200);
    }
}

}
