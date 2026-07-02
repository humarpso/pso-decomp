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
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual s32 m31();
};

extern "C" {

s32 fn_80099EF8();
void *fn_80101AB0(s32);
M2C_UNK fn_801B7F4C(s32, s32);
M2C_UNK fn_801B9EDC(s32, s32);
M2C_UNK fn_801BA0F0(s32, s32, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
u32 fn_801C675C(s32, s8);

void TWindowSubItem__sub_802798F4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    void *temp_r3_2;
    s32 t;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x24));
    if ((temp_r3 != 0) && (temp_r3_2 = fn_80101AB0(arg1), ((temp_r3_2 == NULL) == 0))) {
        switch (arg2) {
        case 3:
            break;
        case 0:
            fn_801B7F4C(temp_r3, arg1);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            break;
        case 1:
            if (fn_801C675C(temp_r3 + 0xD04, (s8) ((V_A *) temp_r3_2)->m31()) != 0U) {
                t = fn_80099EF8();
                fn_801B9EDC(temp_r3, t);
            }
            fn_801BA0F0(temp_r3, arg1, 0);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            break;
        case 2:
            fn_801B9EDC(temp_r3, arg1);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            break;
        }
    }
}

}
