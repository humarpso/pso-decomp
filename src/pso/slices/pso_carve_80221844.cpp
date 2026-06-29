#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80221844 { char pad[0x18]; };
struct VObj_80221844 : Base_80221844 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};

extern "C" {

void TShopKeepItemWindow__vt5(void *arg0) {
    struct VObj_80221844 *temp_r3;

    temp_r3 = (struct VObj_80221844 *)M2C_FIELD(arg0, void **, 0x380);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

}
