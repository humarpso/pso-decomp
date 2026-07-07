#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__20TODoorFourLightRuinsFv(u8 *arg0);
M2C_UNK TODoorFourLightRuins__sub_8028A28C(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 fn_801582C4(void *, f32);
M2C_UNK fn_8028A8F8();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798();
M2C_UNK fn_803DC894(s32, s32, f32);

extern const f32 lbl_805DD8F0;

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

void render__20TODoorFourLightRuinsFv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) == 1) && (fn_801582C4(arg0, lbl_805DD8F0) == 1)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            fn_803D9B2C();
            fn_8028A8F8();
            fn_803DA798();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            fn_803DC894(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
            fn_803D9B78();
            return;
        case 2:
            fn_803D9B2C();
            fn_8028A8F8();
            fn_803DA798();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            fn_803DC894(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
            fn_803D9B78();
            return;
        case 0:
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xCC);
            if ((temp_r0_2 == 2) || (temp_r0_2 == 3)) {
                TODoorFourLightRuins__sub_8028A28C(arg0);
                return;
            }
            fn_803D9B2C();
            fn_8028A8F8();
            fn_803DA798();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0xD4));
            fn_803D9B78();
            break;
        }
    }
}

}
