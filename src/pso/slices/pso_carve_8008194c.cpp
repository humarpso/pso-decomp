#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Base_8008194C { char pad[0x50]; };
struct VObj_8008194C : Base_8008194C {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void fn_8008194C(void *arg0) {
    struct VObj_8008194C *o = (struct VObj_8008194C *)M2C_FIELD(arg0, void **, 0x1C);
    o->m1();
}

}
