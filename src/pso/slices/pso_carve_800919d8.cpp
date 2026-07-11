#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80156720(void *);
void __dt__14TObjEneBalClawFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_8048F148[];

void *TObjEneBalClawClaw__sub_800919D8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048F148;
        fn_80156720(arg0);
        __dt__14TObjEneBalClawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
