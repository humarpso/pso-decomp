#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8022C03C_8022BEAC { char pad[0x18]; };
struct VObj_8022C03C_8022BEAC : Base_8022C03C_8022BEAC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};

extern "C" {

void *destroy_technique_base__9TTecLukerFPvs(void *arg0, s16 arg1);
void dispatch_state__9TTecLukerFPv(void *arg0);
void free_collision_body_parts(void *);
M2C_UNK TTecLuker__sub_8022BF8C(void *);
M2C_UNK TTecLuker__sub_8022C008();
void __dl__7TObjectFPv(void *);
void __dt__7TEffectFv(void *, int);

void dispatch_state__9TTecLukerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6C);
    switch (temp_r0) {
    case 0:
        TTecLuker__sub_8022C008();
        TTecLuker__sub_8022BF8C(arg0);
        return;
    case 1:
        ((VObj_8022C03C_8022BEAC *)arg0)->m5();
        return;
    }
}

extern M2C_UNK lbl_804CC148[];

void *destroy_technique_base__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC148;
        if (M2C_FIELD(arg0, void **, 0xE8) != NULL) { free_collision_body_parts(M2C_FIELD(arg0, void **, 0xE8)); }
        __dt__7TEffectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
