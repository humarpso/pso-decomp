#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8016E9F4 { char pad[0x18]; };
struct VObj_8016E9F4 : Base_8016E9F4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__16TOLightMachine01Fv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(s32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798(s32);

extern s32 lbl_805D5A44;
extern s32 lbl_805D5A48;
extern const f32 lbl_805DB828;

void render__16TOLightMachine01Fv(u8 *arg0) {
    if (((VObj_8016E9F4 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0x90), M2C_FIELD(arg0, f32 *, 0x94)) != 0) {
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TOSignCave03__sub_803DB510(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4));
        fn_803D9B2C();
        fn_803D9624(0, lbl_805DB828, M2C_FIELD(arg0, f32 *, 0x9C), lbl_805DB828);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0xAC));
        TOSignCave03__sub_803DB510(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), s32 *, 4));
        fn_801E2EFC();
        fn_803DA798(lbl_805D5A48);
        TObjBoss2Tunnel__sub_803DB470(lbl_805D5A44);
        fn_801E2F20();
        fn_803D9B78();
        fn_803D9B78();
    }
}

}
