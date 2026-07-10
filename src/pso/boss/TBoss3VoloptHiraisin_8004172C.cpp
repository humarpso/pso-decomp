#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8004172C { char pad[0xC]; };
struct VObj_8004172C : Base_8004172C {
    virtual void m0(int);
};

extern "C" {

void destroy__20TBoss3VoloptHiraisinFv(void);

extern void *lbl_805D4C88;

void destroy__20TBoss3VoloptHiraisinFv(void) {
    struct VObj_8004172C *o = (struct VObj_8004172C *)lbl_805D4C88;
    if (o != NULL) {
        o->m0(1);
    }
    lbl_805D4C88 = NULL;
}

}
