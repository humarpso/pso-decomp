#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80177C80___vt__14TOSwitchAttack {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct Pkt_80177CF4 { u8 code, words; u16 object, zero, reserved, switchId; u8 area, flags; };

struct Self_80177CF4 { u8 pad[0xC8]; s32 switchId; u8 padcc[0xEC - 0xCC]; s32 on; };

typedef s32 M2C_UNK;
struct Vec_801778A8 { f32 x, y, z; };

struct Dmg_801778A8 { f32 v; };

struct Atk_801778A8 {
    s32 a;
    f32 v;
};

struct Rec_801778A8 { u8 pad[0x1C]; Vec_801778A8 pos; u8 pad28[4]; };

struct Mylla_801778A8 { u8 pad[0xA4]; Rec_801778A8 *recs; s32 count; };

struct VBase_801778A8 { char pad[0x18]; };

struct VObj_801778A8 : VBase_801778A8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual void m21(void *, Atk_801778A8, s32, s32, s32);
};

struct Sw_801778A8 {
    u8 pad0[0x14];
    u32 f14;
    u8 pad18[0x38 - 0x18];
    Vec_801778A8 pos;
    u8 pad44[0x90 - 0x44];
    f32 f90;
    f32 f94;
    f32 f98;
    s32 f9C;
    u16 fA0;
    u16 fA2;
    u16 fA4;
    u8 fA6;
    u8 fA7;
    s32 fA8;
};

extern "C" {
s32 init_params__14TOSwitchAttackFPv(void *);
s32 construct_world_actor_base(void *);
extern M2C_UNK __vt__14TOSwitchAttack[];
extern s32 lbl_805D3178;
u8 *TOSwitchAttack__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void init_6x05_switch_changed__6TLobbyFPv(void *);
void finalize_and_send_60__6TLobbyFPv(void *);
s32 get_current_floor();
u16 obj_getField1c(void *);
void TOSwitchItem__vt19(Self_80177CF4 *self);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 get_game_mode__6TLobbyFv(void);
void set_shake_preset__11TCameraCtrlFi(s32);
void spawn_particle_effect_with_flags(void *, s32, s32);
s32 get_enemy_count__9TObjEneDDFv(void);
f32 horizontal_distance_squared(void *, void *);
VObj_801778A8 *resolve_hittable_target(u16, s16);
Mylla_801778A8 *find_entity_by_id(u16);
void create_sub__14TOSwitchAttackFiiiif(void *, s32, s32, s32, f32);
void play_sound_effect(s32, void *, s32, s32);
u8 is_current_floor_switch_set(u16);
extern const f32 lbl_805DBA08;
void run_task__14TOSwitchAttackFv(Sw_801778A8 *o);
}

extern "C" {

void TOSwitchAttack__sub_80177C20(void);
void TOSwitchAttack__sub_80177C24(void);
void *__dt__14TOSwitchAttackFv(void *arg0, s16 arg1);
void *create__14TOSwitchAttackFPv(void *arg0);
void render__14TOSwitchAttackFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void render__14TOSwitchAttackFv(void) {  }

extern void *tl_05;

#pragma push
#pragma opt_lifetimes off
void run_task__14TOSwitchAttackFv(Sw_801778A8 *o) {
    u8 busy;
    s32 ok;
    u8 r;
    Mylla_801778A8 *q;
    s32 n;
    s32 i;
    VObj_801778A8 *p;
    s32 end;
    Rec_801778A8 *rec;
    if (o->fA8 > 0) {
        o->fA8--;
    }
    busy = 0;
    if (o->fA4 == 0 && o->f9C == 1) {
        busy = 1;
    }
    if (busy) {
        return;
    }
    ok = 1;
    if (o->fA2 <= 0x100 && is_current_floor_switch_set(o->fA2) == 1) {
        ok = 0;
        o->fA6 = 0;
    }
    if (ok != 1) {
        return;
    }
    if (o->fA0 > 0x100) {
        return;
    }
    r = is_current_floor_switch_set(o->fA0);
    if (r == 1 && o->fA6 == 0) {
        n = get_game_mode__6TLobbyFv();
        for (i = 0; i != n; i++) {
            p = resolve_hittable_target(i, 0);
            if (p != NULL) {
                if (get_field_3e4__10TObjPlayerFPv(p) == get_current_floor() &&
                    horizontal_distance_squared((u8 *)p + 0x38, &o->pos) < o->f94) {
                    Atk_801778A8 b;
                    b.a = 0;
                    b.v = o->f98;
                    p->m21(o, b, 0, -1, -1);
                }
            }
        }
        end = n + get_enemy_count__9TObjEneDDFv();
        for (i = n; i != end; i++) {
            q = find_entity_by_id(i);
            if (q != NULL) {
                s32 k;
                rec = q->recs;
                for (k = 0; k != q->count; k++, rec++) {
                    if (horizontal_distance_squared(&rec->pos, &o->pos) < o->f94) {
                        VObj_801778A8 *p2 = resolve_hittable_target(i, k);
                        if (p2 != NULL) {
                            Atk_801778A8 b;
                            b.a = 0;
                            b.v = o->f98;
                            p2->m21(o, b, 0, -1, -1);
                        }
                    }
                }
            }
        }
        switch (o->fA7) {
        case 0:
            spawn_particle_effect_with_flags(&o->pos, 0x45, 0x40);
            spawn_particle_effect_with_flags(&o->pos, 0x189, 0x40);
            set_shake_preset__11TCameraCtrlFi(2);
            play_sound_effect(0x4001C112, &o->pos, 0, 0);
            break;
        case 1:
            set_shake_preset__11TCameraCtrlFi(2);
            break;
        case 2:
            if (o->fA8 == 0) {
                Vec_801778A8 v = o->pos;
                v.y += lbl_805DBA08;
                spawn_particle_effect_with_flags(&v, 0x1A6, 0x40);
                spawn_particle_effect_with_flags(&v, 0x1A7, 0x40);
                o->fA8 = 0x3C;
            }
            break;
        case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        case 11: case 12: case 13: case 14: case 15: case 16: case 17:
        case 18: case 19: case 20:
            if (o->f14 == 0) {
                create_sub__14TOSwitchAttackFiiiif(o, o->fA2, o->fA0, o->fA7 - 3, o->f90);
            }
            break;
        }
        o->f9C = 1;
    }
    o->fA6 = r;
}
#pragma pop

void *create__14TOSwitchAttackFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xAC);
    if (o != NULL) {
        o = TOSwitchAttack__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

void TOSwitchAttack__sub_80177C20(void) {  }
void TOSwitchAttack__sub_80177C24(void) {  }

extern M2C_UNK __vt__14TOSwitchAttack[];

void *__dt__14TOSwitchAttackFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOSwitchAttack;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80177C80___vt__14TOSwitchAttack_size[sizeof(RecoveredGlobal_80177C80___vt__14TOSwitchAttack) == 0x38 ? 1 : -1];
u8 *TOSwitchAttack__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    construct_world_actor_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80177C80___vt__14TOSwitchAttack *)&__vt__14TOSwitchAttack).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3178;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_params__14TOSwitchAttackFPv((void *) (arg0));
    M2C_FIELD(arg0, s8 *, 0xA6) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    return arg0;
}
void TOSwitchItem__vt19(Self_80177CF4 *self) {
    Pkt_80177CF4 pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.object = obj_getField1c(self);
    pkt.zero = 0;
    pkt.switchId = self->switchId;
    pkt.area = get_current_floor();
    pkt.flags = self->on != 0;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

}
