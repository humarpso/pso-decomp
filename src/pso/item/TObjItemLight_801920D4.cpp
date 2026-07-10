#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjItemLight__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 TObjParticle__sub_800870BC(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_801A2640();

extern M2C_UNK __vt__13TObjItemLight[];
extern s32 lbl_805D3390;
extern const f32 lbl_805DBE40;
extern const f32 lbl_805DBE44;

struct VObjItemLight {
    char pad[0x18];
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(s32);
};

u8 *TObjItemLight__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    fn_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjItemLight;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3390;
    ((VObjItemLight *)arg0)->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    if (M2C_FIELD(arg0, f32 *, 0x90) < lbl_805DBE40) {
        M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DBE44;
    }
    M2C_FIELD(arg0, s32 *, 0x94) = TObjParticle__sub_800870BC(arg0 + 0x38, arg0 + 0x5C, 0x1CA, 0x40);
    return arg0;
}

}
