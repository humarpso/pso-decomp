#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Fn80040464Base { char pad[0x18]; };
struct Fn80040464VObj : Fn80040464Base {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

s32 fn_80080750();
M2C_UNK TObjEneRe7Berura__sub_80143098(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);
extern s32 some_id_805c6f74;
extern const f32 lbl_805D86B0;
extern const f32 lbl_805D86E8;
extern const f32 lbl_805D86EC;
extern const f32 lbl_805D86F0;

void fn_80040464(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((Fn80040464VObj*)arg0)->m8(lbl_805D86E8, lbl_805D86EC) != 0)) {
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        fn_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
        if (M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) {
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x398));
            TOMonitorMachine01__sub_803D8B5C(0, lbl_805D86B0, lbl_805D86B0, lbl_805D86F0);
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60) - M2C_FIELD(arg0, s32 *, 0x398));
        } else {
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        }
        if (fn_80080750() == 1) {
            fn_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            TObjEneRe7Berura__sub_80143098(arg0);
        }
        fn_803D9B78();
    }
}

}
