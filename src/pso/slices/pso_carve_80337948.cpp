#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

struct Base_80337948 { char pad[0x18]; };
struct VObj_80337948 : Base_80337948 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

extern "C" {

void TShopDeleteItemWindow__vt4(void *arg0) {
    struct VObj_80337948 *o = (struct VObj_80337948 *)M2C_FIELD(arg0, void **, 0x64);
    if (o != NULL) {
        o->m4();
    }
}

}
