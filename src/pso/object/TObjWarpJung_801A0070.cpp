#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase { char pad[0x18]; };
struct VObj : VObjBase {
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

extern "C" {

void render__12TObjWarpJungFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_801A0354();
M2C_UNK fn_801A0378(M2C_UNK, s32);
M2C_UNK fn_801A03D8(M2C_UNK);
M2C_UNK fn_801A0404(M2C_UNK);
s32 fn_801A04C0();
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();

M2C_UNK PPCSync();
extern const f32 lbl_805DC040;
extern const f32 lbl_805DC044;

void render__12TObjWarpJungFv(u8 *arg0) {
    s32 temp_r0;

    if (((VObj*)arg0)->m8(lbl_805DC040, lbl_805DC044) != 0) {
        if (fn_801A04C0() != 0) {
            PPCSync();
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
        switch (temp_r0) {
        case 0:
            fn_801A0404(0);
            break;
        case 1:
            fn_801A0404(1);
            break;
        }
        fn_801A0354();
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        fn_801A03D8(0);
        fn_801E2EFC();
        fn_801A0378(1, (s32) M2C_FIELD(arg0, f32 *, 0xC4));
        fn_801E2F20();
        fn_803D9B78();
    }
}

}
