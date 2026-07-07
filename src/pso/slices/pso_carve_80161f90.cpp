#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801582C4(void *, f32);
M2C_UNK TODoorCave02__sub_80161EE0(void *, void *);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803DC894(void *, s32, f32);
extern u8 *lbl_805D5964;
extern const f32 lbl_805DB4C4;

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

void render__12TODoorCave02Fv(u8 *arg0) {
    if ((((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) && (fn_801582C4(arg0, lbl_805DB4C4) != 0)) {
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) == 0) {
            fn_803DA798(*(s32 *)(lbl_805D5964 + ((M2C_FIELD(arg0, s32 *, 0xD0) * 4) & 4)));
            TODoorCave02__sub_80161EE0(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C));
            TODoorCave02__sub_80161EE0(arg0, M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), void **, 0x30));
        } else {
            fn_803DA798(M2C_FIELD(lbl_805D5964, s32 *, 4));
            fn_803DC894(M2C_FIELD(arg0, void **, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
        }
        fn_803D9B78();
    }
}

}
