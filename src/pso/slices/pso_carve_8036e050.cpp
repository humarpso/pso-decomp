#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_8007341C(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
M2C_UNK fn_8036E224(void *);
M2C_UNK fn_8036E26C(void *);
s32 fn_8036E624();
M2C_UNK fn_8036E858(void *, M2C_UNK);

void fn_8036E050(void *arg0) {
    s32 temp_r3;

    if (fn_8036E624() == 0) {
        if (M2C_FIELD(arg0, void **, 0x34) != 0) {
            if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, void **, 0x34)) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, void **, 0x34));
                switch (temp_r3) {
                case 0:
                    fn_8036E224(arg0);
                    fn_8036E26C(arg0);
                    fn_8036E858(arg0, 5);
                    return;
                case 1:
                    fn_8036E26C(arg0);
                    fn_8036E858(arg0, 3);
                    return;
                }
            }
        } else {
            fn_8036E858(arg0, 8);
        }
    }
}

}
