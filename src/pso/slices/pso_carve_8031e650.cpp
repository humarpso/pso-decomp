#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8031E650 { char pad[0xC]; };
struct VObj_8031E650 : Base_8031E650 {
    virtual void m0(int);
};

extern "C" {

M2C_UNK fn_8031BC38();
extern struct VObj_8031E650 *lbl_805D6B04;

void TObjEneRecon__sub_8031E650(void) {
    fn_8031BC38();
    if (lbl_805D6B04 != 0) {
        if (lbl_805D6B04 != 0) {
            lbl_805D6B04->m0(1);
        }
        lbl_805D6B04 = 0;
    }
}

}
