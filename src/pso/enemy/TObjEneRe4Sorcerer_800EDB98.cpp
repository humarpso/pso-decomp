#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe4Sorcerer__vt104(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneDD__sub_800B9D74(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
M2C_UNK fn_800BB858();
M2C_UNK fn_800D8A2C();
M2C_UNK fn_800F5BC0(s32, s16, M2C_UNK);
M2C_UNK fn_801E2F20();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);

extern s32 TObjEneRe4Sorcerer__data_805D52F4;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DA788;
extern const f32 TObjEneRe4Sorcerer__data_805DA78C;
extern const f32 TObjEneRe4Sorcerer__data_805DA790;
extern const f32 TObjEneRe4Sorcerer__data_805DA794;
extern const f32 lbl_805DA798;

struct Base { u8 pad[0x18]; };
struct VObj : Base {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual s32 m8(f32, f32) = 0;
};

void TObjEneRe4Sorcerer__vt104(u8 *arg0) {
    fn_800BB858();
    if (((VObj *)arg0)->m8(lbl_805DA788, TObjEneRe4Sorcerer__data_805DA78C) != 0) {
        TObjEneDD__sub_800B9D74(arg0, 0, 0);
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9624(0, TObjEneRe4Sorcerer__data_805DA790, TObjEneRe4Sorcerer__data_805DA794, TObjEneRe4Sorcerer__data_805DA790);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s16 *, 0x3C0) = (s16) (M2C_FIELD(arg0, s16 *, 0x3C0) + 5);
        fn_800F5BC0(TObjEneRe4Sorcerer__data_805D52F4, M2C_FIELD(arg0, s16 *, 0x3C0), 0);
        M2C_FIELD(arg0, f32 *, 0x3C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C4) + lbl_805DA798);
        some_id_805c6f74 |= 0x20000;
        TObjEneRe4Sorcerer__sub_801E3F1C(TObjEneRe4Sorcerer__data_805DA790, M2C_FIELD(arg0, f32 *, 0x3C4));
        fn_800D8A2C();
        fn_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        fn_801E2F20();
        some_id_805c6f74 &= 0xFFFDFFFF;
        fn_803D9B78();
    }
}

}
