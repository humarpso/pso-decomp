#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8029c054 { char pad[0x14]; };
struct VObj_8029c054 : Base_8029c054 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

extern "C" {

void TAdRayGC__sub_8029C054(u8 *arg0);
M2C_UNK set_cull_none__8TObjFishFv();

void TAdRayGC__sub_8029C054(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) != 0) {
        ((VObj_8029c054*)(arg0 + 0xB4))->m7();
    }
    set_cull_none__8TObjFishFv();
}

}
