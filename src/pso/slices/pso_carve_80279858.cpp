#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801B7B10();
u32 fn_801BA74C(s32);
M2C_UNK fn_80244A14(void *);

void TWindowSubItem__sub_80279858(void *arg0, s32 arg1) {
    if (fn_801BA74C(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
        switch (arg1) {
        case 0:
            fn_801B7B10();
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            return;
        case 1:
            if (M2C_FIELD(arg0, void **, 0x38) != NULL) {
                fn_80244A14(M2C_FIELD(arg0, void **, 0x38));
                M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            }
            if (M2C_FIELD(arg0, void **, 0x34) != NULL) {
                fn_80244A14(M2C_FIELD(arg0, void **, 0x34));
                M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            }
            M2C_FIELD(arg0, s8 *, 0x1C) = 0xA;
            break;
        }
    }
}

}
