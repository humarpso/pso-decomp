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

void render__9TKomorebiFv(u8 *arg0);
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(void *);
f32 fn_8013157C(void *, s32);
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_803D8AE4(M2C_UNK, s32, s32, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798(s32);

extern s32 lbl_805D4DF0;
extern s32 lbl_805D53A4;
extern s32 lbl_805D5C24;
extern const f32 lbl_805DBE48;
extern const f32 lbl_805DBE4C;
extern const f32 lbl_805DBE50;

void render__9TKomorebiFv(u8 *arg0) {
    f32 temp_f1;

    if ((((VObj*)arg0)->m8(lbl_805DBE48, lbl_805DBE4C) != 0) && !(fn_8013157C(arg0 + 0x38, lbl_805D4DF0 + 0x178) < lbl_805DBE50)) {
        fn_801E2EFC();
        if ((s32) lbl_805D53A4 != (s32) lbl_805D5C24) {
            TOComputerMachine01__sub_8023DDC8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4), 0, (s32) M2C_FIELD(arg0, f32 *, 0x68), 0, 1);
            lbl_805D5C24 = lbl_805D53A4;
        }
        fn_803D9B2C();
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D8AE4(0, M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s32 *, 0x60), M2C_FIELD(arg0, s32 *, 0x64));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x70);
        TOMonitorMachine01__sub_803D8B5C(0, temp_f1, M2C_FIELD(arg0, f32 *, 0x6C), temp_f1);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, void **, 0x34));
        fn_803D9B78();
        fn_801E2F20();
    }
}

}
