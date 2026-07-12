#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8026D9D0(void *, int);
void TWindowSubStatusDisp__sub_80288070(void *, int);
void fn_802443F0(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804D0658[];

void *fn_80268F90(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D0658;
        fn_8026D9D0(M2C_FIELD(arg0, void **, 0x7C), 1);
        TWindowSubStatusDisp__sub_80288070(M2C_FIELD(arg0, void **, 0x78), 1);
        fn_802443F0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
