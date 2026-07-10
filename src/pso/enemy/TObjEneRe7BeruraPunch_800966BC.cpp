#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__21TObjEneRe7BeruraPunchFPv(u8 *arg0);
M2C_UNK TObjEneRe7BeruraPunch__sub_800963B0(void *);
s32 fn_8007EB94(M2C_UNK);
s32 fn_800BC5EC(s32, s32);

extern const f32 lbl_805D9794;

struct EneBBase { char pad[0x14]; };
struct EneBVObj : EneBBase {
    virtual void m0();
    virtual void m1(M2C_UNK);
};
void init__21TObjEneRe7BeruraPunchFPv(u8 *arg0) {
    s32 var_r0;
    u32 var_a;

    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    var_a = fn_8007EB94(0x10);
    var_r0 = var_a;
    if (var_r0 != 0) {
        var_r0 = fn_800BC5EC(var_a, 9);
    }
    M2C_FIELD(arg0, s32 *, 0xD8) = var_r0;
    ((EneBVObj*)(arg0 + 0xF8))->m1(0);
    TObjEneRe7BeruraPunch__sub_800963B0(arg0);
}

}
