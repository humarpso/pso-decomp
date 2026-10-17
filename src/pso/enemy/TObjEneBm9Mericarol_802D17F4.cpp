#include "types.h"
#include "pso/unk/text_800BC4C8.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/system/vector.h"
#include "pso/player/TUnk_804928CC.h"
#include "pso/enemy/TObjEneBm9Mericarol_Bomb.h"
#include "pso/enemy/TObjEneBm9Mericarol_EffCurse3.h"

#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEneBm9Mericarol.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TNowLoading.h"

struct VBase_18_477421
{
  char pad[0x18];
};

struct VObj_18_477421 : VBase_18_477421 {
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
    virtual s32 m81();
    virtual s32 m82();
    virtual s32 m83();
    virtual s32 m84();
    virtual s32 m85();
    virtual s32 m86();
    virtual s32 m87();
    virtual s32 m88();
    virtual s32 m89();
    virtual s32 m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual s32 m99();
};

typedef struct Vec_800C4A5C {
    f32 x, y, z;
} Vec_800C4A5C;

typedef struct Coll_800C4A5C {
    u8 pad0[0xC];
    f32 radius;
} Coll_800C4A5C;

typedef struct Obj_800C4A5C {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vptr;
    u8 pad1C[0x38 - 0x1C];
    Vec_800C4A5C pos;
    u8 pad44[0xA4 - 0x44];
    Coll_800C4A5C *coll;
    u8 padA8[0xB0 - 0xA8];
    u16 ownerId;
    u8 padB2[0xB4 - 0xB2];
    Vec_800C4A5C start;
    Vec_800C4A5C velA;
    Vec_800C4A5C velB;
    Vec_800C4A5C accel;
    f32 fE4;
    s32 fE8;
    s32 angle;
    f32 fF0;
    s32 fF4;
    s32 fF8;
    s32 fFC;
    s32 f100;
} Obj_800C4A5C;

typedef struct Vec_800C4B78 {
    f32 x, y, z;
} Vec_800C4B78;

typedef struct Ent_800C4B78 {
    u8 pad0[0x38];
    Vec_800C4B78 pos;
} Ent_800C4B78;

typedef struct Obj_800C4B78 {
    u8 pad0[0x1C];
    s32 timer;
    Ent_800C4B78 *target;
    s32 effect;
} Obj_800C4B78;

typedef struct Obj_800C55E0 {
    u8 pad0[0xB8];
    s16 fB8;
    u8 padBA[0x326 - 0xBA];
    s16 state;
    s16 f328;
    u8 pad32A[0x34C - 0x32A];
    void *f34C;
} Obj_800C55E0;

struct Vec_802D1880 { f32 x, y, z; };

extern "C" {
s32 subtract_vector(void *, void *);
s32 is_alive__9TObjEneDDFv(s32);
extern u8 *camera_ctrl_instance;
extern const f32 lbl_805DE778;
extern const f32 lbl_805DE77C;
s16 obj_getField1c(void *);
f32 vector_length(Vec_802D1880 *);
s32 normalize_vector(Vec_802D1880 *);
extern s32 lbl_804E18A8[];
extern s32 lbl_805D3F30;
extern const f32 lbl_805DE764;
extern const f32 lbl_805DE76C;
extern const f32 lbl_805DE770;
extern const f32 lbl_805DE774;
u8 *TObjEneBm9Mericarol__sub_802D1880(u8 *arg0, u8 *arg1, Vec_802D1880 *arg2, Vec_802D1880 *arg3, s32 arg4, f32 farg0, f32 farg1);
void *spawn_continuous_particle_effect_with_flags(void *parent, s32 idx, s32 flags);
s32 __ct__7TObjectFP7TObject();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void *TObjEneBm9Mericarol_Bomb::dt(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804E18A8;
        if (this->m_110 != NULL) { queue_destruction__7TObjectFv(this->m_110); *(s32 *)&this->m_110 = 0; }
        if (*(void * *)&this->unk_114 != NULL) { queue_destruction__7TObjectFv(*(void * *)&this->unk_114); *(s32 *)&this->unk_114 = 0; }
        destroy_enemy_object(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

extern s32 lbl_804E1908[];

#pragma push
#pragma fp_contract on

u8 *TObjEneBm9Mericarol__sub_802D1880(u8 *arg0, u8 *arg1, Vec_802D1880 *arg2, Vec_802D1880 *arg3, s32 arg4, f32 farg0, f32 farg1) {
    Vec_802D1880 d;
    f32 k;
    construct_collision_body((u8 *)arg0, (s32)arg1, (u32)arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E18A8;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3F30;
    if (TObjEneDD::check_v2_mode() != 0) {
        *(s32 *)((s8 *)arg0 + 0xF0) = 5;
    } else {
        switch (((TObjEneBm9Mericarol *)arg1)->get_phase()) {
        case 1:
            *(s32 *)((s8 *)arg0 + 0xF0) = 2;
            break;
        case 2:
            *(s32 *)((s8 *)arg0 + 0xF0) = 3;
            break;
        case 0:
        default:
            ((TObjEneBm9Mericarol_Bomb *)arg0)->m_108 = arg4;
            *(s32 *)((s8 *)arg0 + 0xF0) = 0;
            break;
        }
    }
    ((TObjEneBm9Mericarol_Bomb *)arg0)->m_f4 = farg0;
    switch (((TObjEneBm9Mericarol *)arg1)->get_phase()) {
    case 1:
        *(s32 *)((s8 *)arg0 + 0x104) = 0x20A;
        break;
    case 2:
        *(s32 *)((s8 *)arg0 + 0x104) = 0x209;
        break;
    case 0:
    default:
        *(s32 *)((s8 *)arg0 + 0x104) = 0x208;
        break;
    }
    *(f32 *)((s8 *)(*(u8 * *)&((TObjEneBm9Mericarol_Bomb *)arg0)->m_a4) + 0xC) = lbl_805DE76C;
    *(s16 *)((s8 *)arg0 + 0xB0) = obj_getField1c(arg1);
    VecCopy((Vec *)(arg0 + 0xB4), (const Vec *)arg2);
    VecCopy((Vec *)(arg0 + 0x38), (const Vec *)(arg0 + 0xB4));
    *(f32 *)((s8 *)arg0 + 0xD8) = lbl_805DE770;
    ((TObjEneBm9Mericarol_Bomb *)arg0)->m_dc = lbl_805DE770;
    *(f32 *)((s8 *)arg0 + 0xE0) = lbl_805DE770;
    d.x = arg3->x - arg2->x;
    d.y = lbl_805DE774 + (arg3->y - arg2->y);
    d.z = arg3->z - arg2->z;
    if (lbl_805DE770 != vector_length(&d)) {
        normalize_vector(&d);
    }
    *(f32 *)((s8 *)arg0 + 0xC0) = d.x * farg1;
    k = lbl_805DE764 + farg1;
    ((TObjEneBm9Mericarol_Bomb *)arg0)->m_c4 = d.y * farg1;
    *(f32 *)((s8 *)arg0 + 0xC8) = d.z * farg1;
    ((TObjEneBm9Mericarol_Bomb *)arg0)->m_cc = d.x * k;
    *(f32 *)((s8 *)arg0 + 0xD0) = d.y * k;
    ((TObjEneBm9Mericarol_Bomb *)arg0)->m_d4 = d.z * k;
    ((TObjEneBm9Mericarol_Bomb *)arg0)->m_e4 = lbl_805DE770;
    *(s32 *)((s8 *)arg0 + 0xE8) = 1;
    ((TObjEneBm9Mericarol_Bomb *)arg0)->m_f8 = lbl_805DE770;
    *(s32 *)((s8 *)arg0 + 0xFC) = 0;
    ((TObjEneBm9Mericarol_Bomb *)arg0)->m_100 = 0;
    *(s32 *)((s8 *)arg0 + 0x110) = 0;
    *(s32 *)((s8 *)arg0 + 0x114) = 0;
    *(s32 *)((s8 *)arg0 + 0x10C) = 1;
    return arg0;
}

void TObjEneBm9Mericarol_EffCurse3::run_task() {
    Obj_800C4B78 *o = (Obj_800C4B78 *)this;
    Vec_800C4B78 a;
    Vec_800C4B78 b;
    o->timer++;
    if (o->timer > 0xa) {
        queue_destruction__7TObjectFv((void *)((void*)(o)));
        return;
    }
    if (is_alive__9TObjEneDDFv((s32)o->target) != 0) {
        VecCopy((Vec *)&a, (const Vec *)&o->target->pos);
        a.y += lbl_805DE778;
        VecCopy((Vec *)&b, (const Vec *)(camera_ctrl_instance + 0x178));
        subtract_vector(&b, &a);
        ((TObjBoss2Tunnel *)(&b))->update_scale();
        a.x = lbl_805DE77C * b.x + a.x;
        a.y = lbl_805DE77C * b.y + a.y;
        a.z = lbl_805DE77C * b.z + a.z;
        ((TNowLoading *)(o->effect))->copy_pos(&a);
    }
}
#define PSO_VCALL_VObj_18_477421_m99(_self) (((VObj_18_477421 *)(_self))->m99())
#define PSO_VCALL_VObj_18_477421_m81(_self) (((VObj_18_477421 *)(_self))->m81())
#define PSO_VCALL_VObj_18_477421_m82(_self) (((VObj_18_477421 *)(_self))->m82())
#define PSO_VCALL_VObj_18_477421_m83(_self) (((VObj_18_477421 *)(_self))->m83())
#define PSO_VCALL_VObj_18_477421_m84(_self) (((VObj_18_477421 *)(_self))->m84())
#define PSO_VCALL_VObj_18_477421_m85(_self) (((VObj_18_477421 *)(_self))->m85())
#define PSO_VCALL_VObj_18_477421_m86(_self) (((VObj_18_477421 *)(_self))->m86())
#define PSO_VCALL_VObj_18_477421_m87(_self) (((VObj_18_477421 *)(_self))->m87())
#define PSO_VCALL_VObj_18_477421_m88(_self) (((VObj_18_477421 *)(_self))->m88())
#define PSO_VCALL_VObj_18_477421_m89(_self) (((VObj_18_477421 *)(_self))->m89())
#define PSO_VCALL_VObj_18_477421_m90(_self) (((VObj_18_477421 *)(_self))->m90())
typedef struct VBase_18_477421 VBase_18_477421;
typedef struct VObj_18_477421 VObj_18_477421;
#define PSO_VCALL_VObj_18_477421_m99(_self) (((VObj_18_477421 *)(_self))->m99())
#define PSO_VCALL_VObj_18_477421_m81(_self) (((VObj_18_477421 *)(_self))->m81())
#define PSO_VCALL_VObj_18_477421_m82(_self) (((VObj_18_477421 *)(_self))->m82())
#define PSO_VCALL_VObj_18_477421_m83(_self) (((VObj_18_477421 *)(_self))->m83())
#define PSO_VCALL_VObj_18_477421_m84(_self) (((VObj_18_477421 *)(_self))->m84())
#define PSO_VCALL_VObj_18_477421_m85(_self) (((VObj_18_477421 *)(_self))->m85())
#define PSO_VCALL_VObj_18_477421_m86(_self) (((VObj_18_477421 *)(_self))->m86())
#define PSO_VCALL_VObj_18_477421_m87(_self) (((VObj_18_477421 *)(_self))->m87())
#define PSO_VCALL_VObj_18_477421_m88(_self) (((VObj_18_477421 *)(_self))->m88())
#define PSO_VCALL_VObj_18_477421_m89(_self) (((VObj_18_477421 *)(_self))->m89())
#define PSO_VCALL_VObj_18_477421_m90(_self) (((VObj_18_477421 *)(_self))->m90())
#pragma pop

void *TObjEneBm9Mericarol_EffCurse3::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804E1908;
        if (*(void * *)&this->unk_24 != NULL) { queue_destruction__7TObjectFv(*(void * *)&this->unk_24); *(s32 *)&this->unk_24 = 0; }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

extern s32 lbl_805D3F38;

void *TObjEneBm9Mericarol_EffCurse3::construct(s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    *(s32 **)((s8 *)this + 0x18) = lbl_804E1908;
    *(s32 *)&this->m_name = (s32) lbl_805D3F38;
    *(s32 *)((s8 *)this + 0x1C) = 0;
    this->m_20 = arg2;
    if (is_alive__9TObjEneDDFv(this->m_20) != 0) {
        *(s32 *)&this->unk_24 = (s32)spawn_continuous_particle_effect_with_flags((void *)(this->m_20 + 0x38), 0x20D, 0x40);
    }
    return this;
}

}
