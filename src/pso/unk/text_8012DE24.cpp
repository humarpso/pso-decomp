#include "types.h"
struct VBase_8012DE24 { char pad[0x18]; };

struct VObj_8012DE24 : VBase_8012DE24 {
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
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual s32 m49(s32 *, s32, s32, s32);
};

struct Self_8012DE24 {
    u8 pad[0x1F8];
    s32 icons[5];
};

extern "C" {
s32 TObjEneDellBiter__sub_80087350(void *, int);
s32 draw_icon__10TObjPlayerFPvii(void *, int, void *);
extern s32 lbl_8043E9A0[];
void TObjPlayer__sub_8012DE24(u8 *self);
}

extern "C" {

void TObjPlayer__sub_8012DE24(u8 *self) {
    s32 sp8[3];
    s32 i;
    for (i = 0; (u32)i != 5U; i++) {
        draw_icon__10TObjPlayerFPvii(self, ((struct Self_8012DE24 *)self)->icons[i], sp8);
        ((VObj_8012DE24 *)self)->m49(sp8, i, lbl_8043E9A0[i], 1);
        if (i == 0) {
            TObjEneDellBiter__sub_80087350(sp8, 9);
        }
    }
}

}
