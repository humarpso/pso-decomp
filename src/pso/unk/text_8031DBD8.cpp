#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

struct VBase_18_67c185 { char pad[0x18]; };

struct VObj_18_67c185 : VBase_18_67c185 {
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
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual s32 m95();
    virtual s32 m96();
};

struct Vec_8031DBD8 { f32 x, y, z; };

extern "C" {
s32 project_actor_to_ground(void *, void *, int);
extern const f32 lbl_805DF3C8;
}

extern "C" {

void TObjEneRecon::vfunc_88() {
    u8 *arg0 = (u8 *)this;
    f32 d;
    u8 *t = *(u8 **)((s8 *)arg0 + 0x390);
    if (t != NULL && *(s16 *)((s8 *)arg0 + 0x326) == 2) {
        *(f32 *)((s8 *)arg0 + 0x3C) = *(f32 *)((s8 *)t + 0x3C);
    } else {
        Vec_8031DBD8 v = *(Vec_8031DBD8 *)(arg0 + 0x38);
        v.y += *(f32 *)((s8 *)arg0 + 0x448);
        if (project_actor_to_ground(arg0, &v, (int)(arg0 + 0x248)) != 0) {
            *(f32 *)((s8 *)arg0 + 0x3C) = v.y;
        }
    }
    d = *(f32 *)((s8 *)arg0 + 0x448) - *(f32 *)((s8 *)arg0 + 0x3C);
    if (d >= lbl_805DF3C8) {
        ((VObj_18_67c185 *)(arg0))->m95();
    } else {
        ((VObj_18_67c185 *)(arg0))->m96();
    }
    *(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 4) = d;
}

}
