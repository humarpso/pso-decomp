#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TWindowCtrlMain__sub_8024CD80(void *, int);
void fn_800489E0(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804999A0[];

void *fn_800F85C0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999A0;
        TWindowCtrlMain__sub_8024CD80(M2C_FIELD(arg0, void **, 0x24), 0);
        fn_800489E0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
