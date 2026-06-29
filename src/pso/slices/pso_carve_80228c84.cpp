#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80228C84 { char pad[0x18]; };
struct VObj_80228C84 : Base_80228C84 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
};

extern "C" {

void *TPlayerBattleCtrl4P__sub_801BA74C();
M2C_UNK fn_80229080();

void fn_80228C84(void) {
    struct VObj_80228C84 *o = (struct VObj_80228C84 *)TPlayerBattleCtrl4P__sub_801BA74C();
    if (o != NULL) {
        o->m10();
        fn_80229080();
    }
}

}
