#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80073DC4(void *, M2C_UNK);
M2C_UNK fn_801F8FD4(void *);

struct Base_80337980 { char pad[0x18]; };
struct VObj_80337980 : Base_80337980 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4(int a, int b);
};

void TShopDeleteItemWindow__sub_80337980(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        fn_801F8FD4(M2C_FIELD(arg0, void **, 0x30));
    }
    fn_80073DC4(arg0, 1);
    ((VObj_80337980 *)arg0)->m4(0x4C, 1);
}

}
