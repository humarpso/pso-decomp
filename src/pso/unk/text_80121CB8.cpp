#include "types.h"
struct Vec_80121CB8 { f32 x, y, z; };

struct Base_80121CB8 { u8 pad0[0x18]; };

struct Pl_80121CB8 : Base_80121CB8 {
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
    virtual s32 m49(void *, s32, s32, s32);
};

struct Self_80121CB8 : Pl_80121CB8 {
    u8 pad1C[0x1F0 - 0x1C];
    void *fn1f0;
    u8 pad1F4[4];
    s32 f1f8;
};

extern "C" {
void spawn_item_timer__13TItemAttackerFiii(void *, void *, s32);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
void TObjPlayer__sub_8011EDFC(void *, s32, s32, f32);
void draw_icon__10TObjPlayerFPvii(void *, s32, void *);
void fire_shoot_particle__10TObjPlayerFPviif();
void TObjPlayer__sub_80121E94();
void TObjPlayer__sub_80122014();
extern const f32 lbl_805DACD0;
void TObjPlayer__sub_80121CB8(Self_80121CB8 *self);
}

extern "C" {

void TObjPlayer__sub_80121CB8(Self_80121CB8 *self) {
    Vec_80121CB8 v;
    if (is_mode_two_and_ready__10TObjPlayerFPv(self) != 0) {
        self->fn1f0 = (void *)fire_shoot_particle__10TObjPlayerFPviif;
        self->f1f8 = 0;
        spawn_item_timer__13TItemAttackerFiii(self, (void *)TObjPlayer__sub_80122014, 0x1E);
        TObjPlayer__sub_8011EDFC(self, 0, 1, lbl_805DACD0);
    } else {
        self->fn1f0 = (void *)TObjPlayer__sub_80121E94;
        self->f1f8 = 0;
        spawn_item_timer__13TItemAttackerFiii(self, (void *)TObjPlayer__sub_80122014, 0x1E);
        draw_icon__10TObjPlayerFPvii(self, 1, &v);
        self->m49(&v, 0, 0, 1);
    }
}

}
