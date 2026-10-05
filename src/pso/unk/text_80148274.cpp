#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_80148274 { char pad[0x18]; };

struct VObj_80148274 : VBase_80148274 {
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
    virtual void m85(s32, s32);
};

struct Hdr_80148274 { u8 model[0x24]; };

struct Res_80148274 { struct Hdr_80148274 hdr; u8 anim[0x1C]; u8 tex[0x10]; };

struct Obj_80148274 { u8 pad0[0x350]; void *anim; };

extern "C" {
void TObjPlayer__sub_8001882C(void *, void *);
void copy_position__20TBoss3VoloptHiraisinFi(void *);
void update_prev_position__10TObjPlayerFPv(void *);
void reset_photon_effect__10TObjPlayerFPv(void *);
u32 init_collision_body_parts(void *, void *, s32);
void setup_common__11TObjNpcBaseFv(Obj_80148274 *self);
}

extern "C" {

void *lbl_804A7CB8[9] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x41a00000, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0,
};
void *lbl_804A7CDC[7] = {
    (void *)0x42c80000, (void *)0x3f000000, (void *)0x400, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804A7CF8[11] = {
    (void *)0x0, (void *)0x41200000, (void *)0x0, (void *)0x40a00000,
    (void *)0x0, (void *)0x0, (void *)0x30203, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void setup_common__11TObjNpcBaseFv(Obj_80148274 *self) {
    TObjPlayer__sub_8001882C(self, lbl_804A7CB8);
    self->anim = lbl_804A7CDC;
    init_collision_body_parts(self, lbl_804A7CF8, 1);
    reset_photon_effect__10TObjPlayerFPv(self);
    update_prev_position__10TObjPlayerFPv(self);
    copy_position__20TBoss3VoloptHiraisinFi(self);
    ((VObj_80148274 *)self)->m85(0, 1);
}

}
