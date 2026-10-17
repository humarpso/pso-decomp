#include "types.h"
#include "pso/unk/text_8013157C.h"
#include "pso/unk/text_80156BBC.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TUnk_804B6C24.h"
#include "pso/item/TObjContainerBase.h"
#include "pso/player/TObjPlayer.h"

struct Base_8018A0B4 { char pad[0x18]; };
struct VObj_8018A0B4 : Base_8018A0B4 {
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
    virtual void m20(s32, f32);
};

struct SubBase_80189F24 { u8 pad[0x14]; };

struct Sub_80189F24 : SubBase_80189F24 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    u8 pad[0x24 - 0x18];
};

struct VBase_80189F24 { u8 pad[0x18]; };

struct Obj_80189F24 : VBase_80189F24 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
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
    u8 pad1c[0x38 - 0x1C];
    f32 pos[3];
    u8 pad44[0x334 - 0x44];
    f32 x334;
    f32 x338;
    u8 pad33c[0x340 - 0x33C];
    Sub_80189F24 sub;
    s32 x364;
};

extern "C" {
s32 step_laser_fence_fade(void *);
extern f32 lbl_805DBCF4;
s32 fn_80156BBC(void *, void *);
extern f32 lbl_805DBCF0;

void TUnk_804B6C24::render() {
    Obj_80189F24 *self = (Obj_80189F24 *)this;
    if (self->m8(self->x334, self->x338) != 1) {
        return;
    }
    self->x364 = 1;
    if (fn_80156BBC(&self->sub, self->pos) != 1) {
        return;
    }
    if (fn_80156C38((f32 *)&self->sub) == 1) {
        self->sub.m6();
        self->m79();
        self->sub.m7();
    } else {
        self->m79();
    }
}

void TUnk_804B6C24::run_task() {
    u8 *arg0 = (u8 *)this;
    step_laser_fence_fade((void *) (arg0 + 0x340));
    this->vfunc_80();
    this->m_364 = 0;
}

f32 TUnk_804B6C24::receive_physical_attack(void *, f32) {
    u8 *arg0 = (u8 *)this;
    s16 sp8;
    if (((u16) this->m_1c >= 0x1000U) && ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) && (((TUnk_804AF8A0 *)arg0)->access_object_saved_state((void *) (&sp8), 1) != 0)) {
        sp8 = 1;
        ((TUnk_804AF8A0 *)arg0)->access_object_saved_state((void *) (&sp8), 0);
        ((TUnk_804AF8A0 *)arg0)->send_object_state_update((void *) (&sp8));
    }
    return (*(const f32 *)&lbl_805DBCF4);
}

f32 TUnk_804B6C24::receive_direct_attack(void *arg1, void *arg2_arg, void *, s32, s32) {
    s32 *arg2 = (s32 *)arg2_arg;
    s32 temp_r4;
    struct VObj_8018A0B4 *o = (struct VObj_8018A0B4 *)this;

    temp_r4 = *arg2;
    if ((temp_r4 == 0) || ((u32) (temp_r4 - 1) <= 3U) || (temp_r4 == 0x13)) {
        o->m20(0, lbl_805DBCF0);
    }
    return lbl_805DBCF4;
}
s32 TObjPlayer::is_within_range(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    return xyz_distance_squared((u8 *)(arg1 + 0x38), ((u8 *)&this->position)) < *(f32 *)((s8 *)arg0 + 0x33C);
}

}
