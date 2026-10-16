#include "types.h"
#include "pso/misc/TTecSifta.h"
#include "pso/misc/TTecAnti.h"
#include "pso/misc/TTecLuker.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8023B17C___vt__9TTecSifta {
    s32 value;
    u8 remaining[0x1C];
};

struct Obj_8023ACA8 { u8 pad[0xA6]; s16 state; };

struct VBase_18_b27ba1 { char pad[0x18]; };

struct HitInfo_8023AE8C { s32 type; f32 power; };

struct VObj_18_b27ba1 : VBase_18_b27ba1 {
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
    virtual void m21(void *, HitInfo_8023AE8C *, void *, s32, s32);
};

struct Obj_8023AE8C { u8 pad[0x1C]; u8 *source; u8 pad20[0x74 - 0x20]; f32 power; };

struct VBase_8023AF94 { u8 pad[0x18]; };

struct VObj_8023AF94 : VBase_8023AF94 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(u32 target);
};

struct Target_8023AF94 { u16 id; u8 pad[6]; };

struct Sifta_8023AF94 {
    u8 pad0[0x1C];
    u32 source;
    u8 pad1[0xA4 - 0x20];
    s16 level;
    u8 pad2[0xA8 - 0xA6];
    u16 source_id;
    u8 pad3[0xE0 - 0xAA];
    s32 count;
    Target_8023AF94 targets[11];
    s32 captured;
};

extern "C" {
s32 obj_getField1c(int);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
int TTecSifta__sub_8023AC88(void* p);
extern s32 __vt__9TTecSifta[];
extern s32 lbl_805D3820;
extern const f32 lbl_805DC940;
u8 *TTecSifta__sub_8023B17C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 update_technique_slot__10TTecRaFoieFl(s32, s32, s32);
s32 play_sound_effect(int, void *, int, int);
void play_sifta_cast_sound__9TTecSiftaFv(Obj_8023ACA8 *arg0);
s32 obj_getField1c(int);
s32 is_split_screen();
s32 is_script_controlled__10TObjPlayerFv(void *);
void vfunc_7__9TTecSiftaFPv(Obj_8023AE8C *arg0, VObj_18_b27ba1 *arg1);
s32 queue_destruction__7TObjectFv();
u32 find_entity_by_id(int);
void deliver_technique_to_party_targets(void *);
void run_task__9TTecSiftaFv(Sifta_8023AF94 *self);
s32 obj_getField1c(int);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
int TTecSifta__sub_8023AC88(void* p);
void play_sifta_cast_sound__9TTecSiftaFv(Obj_8023ACA8 *arg0);
void copy_technique_target_list(void *, void *);
extern s32 __vt__9TTecSifta[];
extern s32 lbl_805D3820;
extern const f32 lbl_805DC940;
void *TTecSifta__ct(void *arg0_, void *arg1, void *arg2, void *arg3, void *arg4);
}

extern "C" {

int TTecSifta__sub_8023AC88(void* p);
void *__dt__9TTecSiftaFv(void *arg0, s16 arg1);
void TObjPlayer__sub_8023AC84(void);
s32 calc_technique_parameters(s32, s16, s32);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
void *__nw__7TObjectFUl(int);
int spawn_support_tec_range_effect(void*);

int TTecSifta__sub_8023AC88(void* p) { return spawn_support_tec_range_effect(p); }

extern const f64 lbl_8044DC18;

void TTecSifta::play_sifta_cast_sound() {
    Obj_8023ACA8 *arg0 = (Obj_8023ACA8 *)this;
    s32 r;
    switch (arg0->state) {
    case 0:
    case 1:
        r = play_sound_effect(0x4002AD14, (u8 *)arg0 + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFl(r, 0x100, 0);
        }
        break;
    case 2:
    case 3:
        play_sound_effect(0x4002AD14, (u8 *)arg0 + 0x20, 0, 0);
        break;
    case 4:
    case 5:
        r = play_sound_effect(0x4002AD14, (u8 *)arg0 + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFl(r, -0x100, 0);
        }
        break;
    }
}

void TTecSifta::update_effect_params() {
    u8 *arg0 = (u8 *)this;
    s32 res;
    res = calc_technique_parameters(0xD, this->m_a4, 0xFFFF);
    ((TTecAnti *)(arg0 + 0x74))->copy_params((u8 *)res);
    this->m_74 = (f32) (this->m_98 * this->m_a4);
}

void TTecSifta::create_instance(void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecSifta__ct((void *)(o), (void *)(this), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

void TTecSifta::create(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecSifta__sub_8023B17C((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2));
    }
}

extern s32 __vt__9TTecSifta[];

void TTecSifta::vfunc_7(void *arg1_arg) {
    Obj_8023AE8C *arg0 = (Obj_8023AE8C *)this;
    VObj_18_b27ba1 *arg1 = (VObj_18_b27ba1 *)arg1_arg;
    HitInfo_8023AE8C h;
    if (is_script_controlled__10TObjPlayerFv(arg1) == 0) {
        h.type = 9;
        h.power = arg0->power;
        if (is_split_screen() == 0) {
            TWindowCtrl::show_party_effect((void*)(obj_getField1c((int)arg0->source)), (void*)(obj_getField1c((int)arg1)), (void*)9);
        }
        HitInfo_8023AE8C c = h;
        arg1->m21(arg0->source, &c, 0, 0xD, -1);
    }
}

void *__dt__9TTecSiftaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TTecSifta;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8023B17C___vt__9TTecSifta_size[sizeof(RecoveredGlobal_8023B17C___vt__9TTecSifta) == 0x20 ? 1 : -1];

void run_task__9TTecSiftaFv(Sifta_8023AF94 *self) {
    u32 target;
    s32 i;
    self->source = find_entity_by_id(self->source_id);
    if (self->source == 0) {
        ((void (*)(void *))queue_destruction__7TObjectFv)(self);
        return;
    }
    if (self->captured != 0) {
        if (self->level <= 1) {
            ((VObj_8023AF94 *)self)->m5(self->source);
        } else {
            ((VObj_8023AF94 *)self)->m5(self->source);
            if (self->count != 0) {
                for (i = 0; i < self->count; i++) {
                    target = find_entity_by_id(self->targets[i].id);
                    if (TTecLuker::is_parents_unqueued(target) != 0) {
                        ((VObj_8023AF94 *)self)->m5(target);
                    }
                }
            }
        }
    } else if (self->level <= 1) {
        ((VObj_8023AF94 *)self)->m5(self->source);
    } else {
        deliver_technique_to_party_targets(self);
    }
    ((void (*)(void *))queue_destruction__7TObjectFv)(self);
}

#pragma push
#pragma opt_common_subs off
struct Obj_8023ACA8;
#define arg0 ((u8 *)arg0_)
void *TTecSifta__ct(void *arg0_, void *arg1, void *arg2, void *arg3, void *arg4) {
    u8 *temp_r3;
    u32 t;
    TTecPlayerInfluence__ct(arg0, arg1, arg2, arg4);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TTecSifta;
    ((TObjPlayer *)(arg0 + 0xE0))->construct_target_cursor_records();
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3820;
    *(s32 *)((s8 *)arg0 + 0x13C) = 1;
    copy_technique_target_list(arg0 + 0xE0, arg3);
    ((TTecSifta *)arg0)->update_effect_params();
    temp_r3 = *(u8 **)((s8 *)arg0 + 0xDC);
    if (temp_r3 != NULL) {
        *(f32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0xA4)) + 0xC) = lbl_805DC940 + *(f32 *)((s8 *)arg0 + 0x7C);
    }
    t = *(u32 *)((s8 *)arg0 + 0x1C);
    if (t != 0U) {
        *(s16 *)((s8 *)arg0 + 0xA8) = obj_getField1c((int)t);
    }
    if (*(s32 *)((s8 *)arg0 + 0xAC) != 0) {
        TTecSifta__sub_8023AC88((void*)(arg0));
        play_sifta_cast_sound__9TTecSiftaFv((Obj_8023ACA8 *)arg0);
    }
    return arg0_;
}
#undef arg0
#pragma pop

u8 *TTecSifta__sub_8023B17C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r3_2;
    u8 *temp_r3;
    TTecPlayerInfluence__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg3));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8023B17C___vt__9TTecSifta *)&__vt__9TTecSifta).value;
    ((TObjPlayer *)(arg0 + 0xE0))->construct_target_cursor_records();
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3820;
    *(s32 *)((s8 *)arg0 + 0x13C) = 0;
    ((TTecSifta *)arg0)->update_effect_params();
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xDC));
    if (temp_r3 != NULL) {
        *(f32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0xA4)) + 0xC) = (f32) (lbl_805DC940 + *(f32 *)((s8 *)arg0 + 0x7C));
    }
    temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x1C);
    if (temp_r3_2 != 0U) {
        *(s16 *)((s8 *)arg0 + 0xA8) = obj_getField1c((int) (temp_r3_2));
    }
    TTecSifta__sub_8023AC88((void*)((void *) (arg0)));
    play_sifta_cast_sound__9TTecSiftaFv((Obj_8023ACA8 *)((void *)((void *) (arg0))));
    return arg0;
}

void TTecSifta::render() {  }

}
