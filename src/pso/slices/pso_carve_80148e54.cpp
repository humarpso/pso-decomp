#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80011080(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK TObjEneRe7Berura__sub_80143098(void *);
M2C_UNK fn_803D8C7C(M2C_UNK, void *);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D97F0(M2C_UNK);
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);
M2C_UNK fn_803E4BC4();
M2C_UNK fn_803E4BD0();
extern s32 some_id_805c6f74;

}

struct Base1 { char pad[0x18]; };
struct VObj1 : Base1 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void fn_80148E54(u8 *arg0) {
    VObj1 *self = (VObj1 *)arg0;
    if ((self->m8(M2C_FIELD(arg0, f32 *, 0x398), M2C_FIELD(arg0, f32 *, 0x39C)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x390) == 1)) {
        TObjLight__sub_80134194(arg0);
        some_id_805c6f74 |= 1;
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        fn_803D97F0(0);
        fn_803D8C7C(0, arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        fn_803E4BC4();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x394) != 0) {
            fn_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            TObjEneRe7Berura__sub_80143098(arg0);
        }
        fn_803E4BD0();
        fn_803D9B78();
        some_id_805c6f74 &= 0xFFFFFFFE;
        TObjLight__sub_80134098();
        fn_80011080(arg0, 0, 0);
    }
}

}
