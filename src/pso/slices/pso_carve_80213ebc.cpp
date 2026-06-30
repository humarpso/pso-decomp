#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80073DC4(void *, M2C_UNK);

struct Base_80213EBC { char pad[0x18]; };
struct VObj_80213EBC : Base_80213EBC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80213EBC *lbl_805D61B8;

void fn_80213EBC(void) {
    if (lbl_805D61B8 != NULL) {
        lbl_805D61B8->m7(0xC, 1);
        fn_80073DC4(lbl_805D61B8, 0xA);
        M2C_FIELD(lbl_805D61B8, s32 *, 0x34) = 2;
    }
}

}
