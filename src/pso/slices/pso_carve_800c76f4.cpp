#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80080750();
M2C_UNK TObjEneRe7Berura__sub_80143098(void *);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA084;
extern const f32 lbl_805DA088;

struct Base { char pad[0x18]; };
struct VObj : Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

void fn_800C76F4(u8 *arg0) {
    if (((VObj *)arg0)->m8(lbl_805DA084, lbl_805DA088) != 0) {
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        some_id_805c6f74 &= 0xFFFFFBFF;
        if (fn_80080750() == 1) {
            fn_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            TObjEneRe7Berura__sub_80143098(arg0);
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800)) {
            some_id_805c6f74 |= 0x400;
        }
        fn_803D9B78();
    }
}

}
