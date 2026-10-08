#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8023B17C___vt__9TTecSifta {
    M2C_UNK value;
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

typedef s32 M2C_UNK;
extern "C" {
s32 obj_getField1c(int);
s32 construct_target_cursor_records__10TObjPlayerFi(void *);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
int TTecSifta__sub_8023AC88(void* p);
void update_effect_params__9TTecSiftaFPv(u8 *arg0);
extern M2C_UNK __vt__9TTecSifta[];
extern s32 lbl_805D3820;
extern const f32 lbl_805DC940;
u8 *TTecSifta__sub_8023B17C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 play_sound_effect(int, void *, int, int);
void play_sifta_cast_sound(Obj_8023ACA8 *arg0);
s32 obj_getField1c(int);
s32 is_split_screen();
s32 is_script_controlled__10TObjPlayerFPv(void *);
void show_party_effect__11TWindowCtrlFPvPvPv(s32, s32, s32);
void TTecSifta__vt5(Obj_8023AE8C *arg0, VObj_18_b27ba1 *arg1);
s32 queue_destruction__7TObjectFv();
u32 find_entity_by_id(int);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
void deliver_technique_to_party_targets(void *);
void run_task__9TTecSiftaFv(Sifta_8023AF94 *self);
s32 obj_getField1c(int);
s32 construct_target_cursor_records__10TObjPlayerFi(void *);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
int TTecSifta__sub_8023AC88(void* p);
void play_sifta_cast_sound(Obj_8023ACA8 *arg0);
void update_effect_params__9TTecSiftaFPv(u8 *arg0);
void copy_technique_target_list(void *, void *);
extern M2C_UNK __vt__9TTecSifta[];
extern s32 lbl_805D3820;
extern const f32 lbl_805DC940;
void *TTecSifta__ct(void *arg0_, void *arg1, void *arg2, void *arg3, void *arg4);
}

extern "C" {

int TTecSifta__sub_8023AC88(void* p);
void *__dt__9TTecSiftaFv(void *arg0, s16 arg1);
void create__9TTecSiftaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create_instance__9TTecSiftaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__9TTecSiftaFv(void);
void update_effect_params__9TTecSiftaFPv(u8 *arg0);
void TObjPlayer__sub_8023AC84(void);
M2C_UNK copy_params__8TTecAntiFPvPv(void *, s32);
s32 calc_technique_parameters(M2C_UNK, s16, M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
void *__nw__7TObjectFUl(int);
int spawn_support_tec_range_effect(void*);

int TTecSifta__sub_8023AC88(void* p) { return spawn_support_tec_range_effect(p); }

extern const f64 lbl_8044DC18;

void play_sifta_cast_sound(Obj_8023ACA8 *arg0) {
    s32 r;
    switch (arg0->state) {
    case 0:
    case 1:
        r = play_sound_effect(0x4002AD14, (u8 *)arg0 + 0x20, 0, 0);
        if (r >= 0) {
            update_technique_slot__10TTecRaFoieFi(r, 0x100, 0);
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
            update_technique_slot__10TTecRaFoieFi(r, -0x100, 0);
        }
        break;
    }
}

void update_effect_params__9TTecSiftaFPv(u8 *arg0) {
    s32 res;
    res = calc_technique_parameters(0xD, M2C_FIELD(arg0, s16 *, 0xA4), 0xFFFF);
    copy_params__8TTecAntiFPvPv(arg0 + 0x74, res);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, s16 *, 0x98) * M2C_FIELD(arg0, s16 *, 0xA4));
}

void create_instance__9TTecSiftaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecSifta__ct((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

void create__9TTecSiftaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecSifta__sub_8023B17C((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2));
    }
}

extern M2C_UNK __vt__9TTecSifta[];

void TTecSifta__vt5(Obj_8023AE8C *arg0, VObj_18_b27ba1 *arg1) {
    HitInfo_8023AE8C h;
    if (is_script_controlled__10TObjPlayerFPv(arg1) == 0) {
        h.type = 9;
        h.power = arg0->power;
        if (is_split_screen() == 0) {
            show_party_effect__11TWindowCtrlFPvPvPv(obj_getField1c((int)arg0->source), obj_getField1c((int)arg1), 9);
        }
        HitInfo_8023AE8C c = h;
        arg1->m21(arg0->source, &c, 0, 0xD, -1);
    }
}

void *__dt__9TTecSiftaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecSifta;
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
                    if (is_parents_unqueued__9TTecLukerFUi(target) != 0) {
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecSifta;
    construct_target_cursor_records__10TObjPlayerFi(arg0 + 0xE0);
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3820;
    M2C_FIELD(arg0, s32 *, 0x13C) = 1;
    copy_technique_target_list(arg0 + 0xE0, arg3);
    update_effect_params__9TTecSiftaFPv(arg0);
    temp_r3 = M2C_FIELD(arg0, u8 **, 0xDC);
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = lbl_805DC940 + M2C_FIELD(arg0, f32 *, 0x7C);
    }
    t = M2C_FIELD(arg0, u32 *, 0x1C);
    if (t != 0U) {
        M2C_FIELD(arg0, s16 *, 0xA8) = obj_getField1c((int)t);
    }
    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        TTecSifta__sub_8023AC88((void*)(arg0));
        play_sifta_cast_sound((Obj_8023ACA8 *)arg0);
    }
    return arg0_;
}
#undef arg0
#pragma pop

u8 *TTecSifta__sub_8023B17C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r3_2;
    u8 *temp_r3;
    TTecPlayerInfluence__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8023B17C___vt__9TTecSifta *)&__vt__9TTecSifta).value;
    construct_target_cursor_records__10TObjPlayerFi((void *) (arg0 + 0xE0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3820;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    update_effect_params__9TTecSiftaFPv((u8 *)((void *) (arg0)));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xDC));
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = (f32) (lbl_805DC940 + M2C_FIELD(arg0, f32 *, 0x7C));
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3_2 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xA8) = obj_getField1c((int) (temp_r3_2));
    }
    TTecSifta__sub_8023AC88((void*)((void *) (arg0)));
    play_sifta_cast_sound((Obj_8023ACA8 *)((void *)((void *) (arg0))));
    return arg0;
}

void render__9TTecSiftaFv(void) {  }

}
