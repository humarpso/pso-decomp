#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__6TOBindFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_803D9214(M2C_UNK, s32);
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803DC894(s32, s32, f32);

struct BindBase { char pad[0x18]; };
struct BindObj : BindBase {
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

void render__6TOBindFv(u8 *arg0) {
    if (((BindObj*)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xD4)) != 0) {
        fn_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        fn_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        fn_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) != 1) {
            fn_803DA798(M2C_FIELD(arg0, s32 *, 0xC8));
            fn_801E2EFC();
            fn_803DC894(M2C_FIELD(arg0, s32 *, 0xC4), M2C_FIELD(arg0, s32 *, 0xCC), M2C_FIELD(arg0, f32 *, 0xB8));
            fn_801E2F20();
        }
        fn_803D9B78();
    }
}

}
