#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Fn801838D4Base { char pad[0x18]; };
struct Fn801838D4VObj : Fn801838D4Base {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

M2C_UNK fn_800F5BC0(s32, s16, M2C_UNK);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803E46BC(s32);
extern u32 lbl_805D5B38;
extern s32 lbl_805D5B3C;
extern s32 lbl_805D5B40;
extern s32 lbl_805D5B44;
extern s32 lbl_805D5B48;
extern const f32 lbl_805DBC44;
extern const f32 lbl_805DBC48;

void fn_801838D4(u8 *arg0) {
    if (((u32) lbl_805D5B38 != 0U) && (((Fn801838D4VObj*)arg0)->m8(lbl_805DBC44, lbl_805DBC48) != 0)) {
        fn_803DA798(lbl_805D5B44);
        fn_800F5BC0(lbl_805D5B48, (s16) M2C_FIELD(arg0, s32 *, 0x90), 0);
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        fn_803E46BC(lbl_805D5B3C);
        fn_803E46BC(lbl_805D5B40);
        fn_803D9B78();
    }
}

}
