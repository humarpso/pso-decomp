#include "types.h"

struct Base_803309D8 { char pad[0x18]; };
struct VObj_803309D8 : Base_803309D8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

extern "C" {

s32 create_mag__11TBoss6Type2Fi(s32 arg0);
void fn_80330A40(u8 *arg0);
s32 TBoss6Mag__ct(s32, s32, s32);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(s32);

extern s32 tl_04;

s32 create_mag__11TBoss6Type2Fi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x45C);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6Mag__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

void fn_80330A40(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x2C));
    ((VObj_803309D8 *) temp_r3)->m7();
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x22;
}

}
