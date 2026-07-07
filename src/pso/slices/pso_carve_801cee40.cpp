#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_80019704();
M2C_UNK fn_8001BED8(s32, s32);
s32 fn_8001BEF8(s32, s32);
M2C_UNK fn_80124C78(void *);
s32 fn_80124C88(void *);
s32 objInBand__FP7GameObjf(void *);
s16 fn_801AFCCC(void *);
M2C_UNK fn_801CEA08(void *);
M2C_UNK fn_801D2620(void *);
M2C_UNK TObjPlayer__sub_801D2CEC(void *);
M2C_UNK TObjPlayer__sub_801D2D94(void *);
M2C_UNK fn_801D3150(void *, void *);
M2C_UNK fn_801D9078(void *);

void fn_801CEE40(u8 *arg0) {
    TObjPlayer__sub_80019704();
    if (fn_801AFCCC(arg0) != 8) {
        fn_801D9078(arg0);
        if (objInBand__FP7GameObjf(arg0) != 0) {
            fn_801CEA08(arg0);
            TObjPlayer__sub_801D2D94(arg0 + 0x7CC);
            fn_801D3150(arg0 + 0x7CC, arg0);
        }
    } else {
        if (fn_8001BEF8(TObjPlayer__sub_801D2CEC(arg0 + 0x7CC), 8) == 0) {
            fn_801D9078(arg0);
            if (objInBand__FP7GameObjf(arg0) != 0) {
                fn_801CEA08(arg0);
                fn_80124C78(arg0 + 0x7CC);
                if (fn_80124C88(arg0 + 0x7CC) >= 3) {
                    fn_8001BED8(TObjPlayer__sub_801D2CEC(arg0 + 0x7CC), 8);
                    fn_801D3150(arg0 + 0x7CC, arg0);
                    fn_801D2620(arg0);
                    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x10);
                }
            }
        }
    }
}

}
