#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_80148DCC { char pad[0x18]; };
struct VObj_80148DCC : Base_80148DCC {
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
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual s32  m17(s32);
};

extern "C" {

u16 fn_800115C4(void *, M2C_UNK, f32 *, f32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);

void fn_80148DCC(void *arg0) {
    f32 *temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        if (((VObj_80148DCC *)arg0)->m17(30) != 0) {
            temp_r5 = M2C_FIELD(arg0, f32 **, 0x350);
            M2C_FIELD(arg0, u16 *, 0x338) = fn_800115C4(arg0, 0, temp_r5, *temp_r5);
            {
                u32 tmp338 = (u32) M2C_FIELD(arg0, u16 *, 0x338);
                if (tmp338 != 0xFFFF) {
                    M2C_FIELD(arg0, s32 *, 0x2A8) = TPlayerBattleCtrl4P__sub_801BA74C(tmp338);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
                }
            }
        }
    }
}

}
