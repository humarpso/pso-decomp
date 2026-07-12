#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual M2C_UNK m7();
};

extern "C" {

void *TItemEffArmorParticle__ct(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
u32 fn_8008741C(M2C_UNK, s32, s32);
M2C_UNK TObjPlayer__sub_80087638(u32, u16);
s32 TObjPlayer__sub_80102AA8();

extern void* __vt__21TItemEffArmorParticle[];
extern s32 lbl_805D447C;

void *TItemEffArmorParticle__ct(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r3;
    u32 p;

    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__21TItemEffArmorParticle;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D447C;
    disallow_rendering__7TObjectFv(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x24) = (s16) arg3;
    M2C_FIELD(arg0, s32 *, 0x28) = TObjPlayer__sub_80102AA8();
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg3);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u32 *, 0x20) = fn_8008741C(((V_A *) temp_r3)->m7(), arg4, 0x10);
        p = M2C_FIELD(arg0, u32 *, 0x20);
        if (p != 0U) {
            TObjPlayer__sub_80087638(p, M2C_FIELD(arg0, u16 *, 0x24));
        }
    } else {
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    }
    return arg0;
}

}
