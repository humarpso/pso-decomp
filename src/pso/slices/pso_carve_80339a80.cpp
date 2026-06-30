#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_802D29B8(void *);
void TWindowSubComCard__sub_80244A14(void *);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804EF5C8[];

void *TWindowSubTradeMessage__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF5C8;
        fn_802D29B8(arg0);
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
