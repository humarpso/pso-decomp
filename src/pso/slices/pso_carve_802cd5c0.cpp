#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_802CD5C0 { char pad[0xC]; };
struct VObj_802CD5C0 : Base_802CD5C0 {
    virtual void m0(int);
};

extern "C" {

M2C_UNK fn_8001FE7C(M2C_UNK, M2C_UNK);
M2C_UNK fn_802CE4E8();
M2C_UNK TObjEneMe1GiGueBarrier__sub_80325CC0();
extern u32 lbl_805D6838;
extern void *lbl_805D683C;

void fn_802CD5C0(void) {
    TObjEneMe1GiGueBarrier__sub_80325CC0();
    fn_802CE4E8();
    if (lbl_805D683C != NULL) {
        if (lbl_805D683C != NULL) {
            ((VObj_802CD5C0*)lbl_805D683C)->m0(1);
        }
        lbl_805D683C = NULL;
    }
    if (lbl_805D6838 != 0U) {
        fn_8001FE7C(lbl_805D6838, 1);
        lbl_805D6838 = 0U;
    }
}

}
