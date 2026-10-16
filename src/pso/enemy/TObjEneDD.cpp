#include "types.h"
#include "pso/enemy/TObjEneDD.h"

struct Base_800BA0D8_800B9FE8 { char pad[0x18]; };
struct VObj_800BA0D8_800B9FE8 : Base_800BA0D8_800B9FE8 {
    virtual void m0();    virtual void m1();    virtual void m2();    virtual void m3();
    virtual void m4();    virtual void m5();    virtual void m6();    virtual void m7();
    virtual void m8();    virtual void m9();    virtual void m10();    virtual void m11();
    virtual void m12();    virtual void m13();    virtual void m14();    virtual void m15();
    virtual void m16();    virtual void m17();    virtual void m18();    virtual void m19();
    virtual void m20();    virtual void m21();    virtual void m22();    virtual void m23();
    virtual void m24();    virtual void m25();    virtual void m26();    virtual void m27();
    virtual void m28();    virtual void m29();    virtual void m30();    virtual void m31();
    virtual void m32();    virtual void m33();    virtual void m34();    virtual void m35();
    virtual void m36();    virtual void m37();    virtual void m38();    virtual void m39();
    virtual void m40();    virtual void m41();    virtual void m42();    virtual void m43();
    virtual void m44();    virtual void m45();    virtual void m46();    virtual void m47();
    virtual void m48();    virtual void m49();    virtual void m50();    virtual void m51();
    virtual void m52();    virtual void m53();    virtual void m54();    virtual void m55();
    virtual void m56();    virtual void m57();    virtual void m58();    virtual void m59();
    virtual void m60();    virtual void m61();    virtual void m62();    virtual void m63();
    virtual void m64();    virtual void m65();    virtual void m66();    virtual void m67();
    virtual void m68();    virtual void m69();    virtual void m70();    virtual void m71();
    virtual void m72();    virtual void m73();    virtual void m74();    virtual void m75();
    virtual void m76();    virtual void m77();    virtual void m78();    virtual void m79();
    virtual void m80();    virtual void m81();    virtual void m82();    virtual void m83();
    virtual void m84();    virtual void m85();    virtual void m86();    virtual void m87();
    virtual void m88();    virtual void m89();
    virtual void m90();
    virtual void m91();
};

struct Part_800BA030 { u8 pad[0x2c]; };

struct Obj_800BA030 { u8 pad[0xa4]; Part_800BA030 *parts; s32 count; };

struct Part_800BA084 { u8 pad[0x2c]; };

struct Obj_800BA084 { u8 pad[0xa4]; Part_800BA084 *parts; s32 count; };

extern "C" {
void set_collider_contact_low(Part_800BA030 *);
void set_collider_contact_high(Part_800BA084 *);
}

extern "C" {

f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 lbl_805D9E98;
extern f32 lbl_805D9E9C;

f32 TObjEneDD::calc_elapsed_scaled() {
    return lbl_805D9E98 * (calc_boss4_scale__10TObjPlayerFi() - lbl_805D9E9C);
}

u8 TObjEneDD::vfunc_99() {
    return (u8) (((*(s32 *)((s8 *)this + 0x30) & 0x10) - 0x10) == 0);
}

void TObjEneDD::vfunc_98() {
    Obj_800BA030 *self = (Obj_800BA030 *)this;
    s32 i;
    for (i = 0; i < self->count; i++) {
        set_collider_contact_low(&self->parts[i]);
    }
}

void TObjEneDD::vfunc_97() {
    Obj_800BA084 *self = (Obj_800BA084 *)this;
    s32 i;
    for (i = 0; i < self->count; i++) {
        set_collider_contact_high(&self->parts[i]);
    }
}

void TObjEneDD::vfunc_96() {
    ((VObj_800BA0D8_800B9FE8*)this)->m90();
    ((VObj_800BA0D8_800B9FE8*)this)->m91();
    *(s32 *)((s8 *)this + 0x30) = (s32) (*(s32 *)((s8 *)this + 0x30) & 0xFBFBFFFF);
}

}
