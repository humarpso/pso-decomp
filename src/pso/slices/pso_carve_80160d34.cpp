#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801582C4(void *, f32);
M2C_UNK TODoorAncient09__sub_80160BA8(void *);
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803DC894(s32, s32, f32);
extern const f32 lbl_805DB480;
extern const f32 lbl_805DB484;

struct TODoor9Base { char pad[0x14]; void **vtbl; };
struct TODoor9VObj : TODoor9Base {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
#define VCALL_m8(obj) (((TODoor9VObj*)(obj))->m8(M2C_FIELD(obj, f32 *, 0xC0), M2C_FIELD(obj, f32 *, 0xC4)))

void render__15TODoorAncient09Fv(u8 *arg0) {
    s32 temp_r0;

    if ((VCALL_m8(arg0) != 0) && (fn_801582C4(arg0, lbl_805DB480) != 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 1:
        case 3:
            fn_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
            fn_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB0));
            fn_803D9B78();
            return;
        case 2:
            fn_803D9B2C();
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
            fn_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4) - lbl_805DB484);
            fn_803D9B78();
            return;
        case 0:
            TODoorAncient09__sub_80160BA8(arg0);
            break;
        }
    }
}

}
