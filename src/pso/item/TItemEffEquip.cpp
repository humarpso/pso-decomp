#include "pso/TItemEffEquip.h"

extern "C" int  all_parents_unqueued_for_destruction__7TObjectFv(TObject*);
extern "C" void request_destroy__11TBoss4Type2FUi(void*);
extern "C" void queue_destruction__7TObjectFv(TObject*);

struct Equip_Self { u8 pad0[0x18]; void *vt; void *m_1c; void *m_20; };
extern "C" {
extern void *__vt__13TItemEffEquip[];
void __dt__7TObjectFv(void *, s16);
s32 __dl__7TObjectFPv(void *);
void run_task__13TItemEffEquipFv(Equip_Self *self) {
    if (all_parents_unqueued_for_destruction__7TObjectFv((TObject*)self->m_1c) == 0) {
        self->m_1c = NULL;
        queue_destruction__7TObjectFv((TObject*)self);
    }
}

void *__dt__13TItemEffEquipFv(Equip_Self *self, s16 arg1) {
    if (self != NULL) {
        self->vt = __vt__13TItemEffEquip;
        request_destroy__11TBoss4Type2FUi(self->m_20);
        __dt__7TObjectFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}
}
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__13TItemEffFlameFPvs(void *arg0, s16 arg1);
void notify_hit__13TItemEffFlameFPv(u8 *arg0);
u8 *notify_hit_and_get_pos__13TItemEffFlameFPv(u8 *arg0);
M2C_UNK set_item_count__6TLobbyFPvs(void *, M2C_UNK);
M2C_UNK TLobby__sub_80103B04();
M2C_UNK unregister_object_by_id(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
u8 *get_player_by_client_id(u16);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK clear_obj_links(void *);
M2C_UNK obj_getField1c(void *);
struct Obj_80108C90 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1C[0xAC - 0x1C];
    s16 f_AC;
    u8 padAE[2];
    s32 f_B0;
    u8 sub[0x10];
};
void disallow_rendering__7TObjectFv(void *);
void fn_8002B630(void *, void *);
s32 TLobby__sub_80103AD4();
void reset_photon_effect__10TObjPlayerFPv(void *);
void initialize_linked_object_reference(void *, void *);
void TObjPlayer__sub_801569F4(void *, void *);
extern u8 lbl_8043E1A0[];

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__13TItemEffEquipFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void play_effect__13TItemEffFlameFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void *TItemEffEquip__ct(void *, void *, void *, void *, void *, void *);
M2C_UNK spawn_particle_effect(s32, M2C_UNK);
void *__nw__7TObjectFUl(int);
struct Equip_80108A20 { s32 x0; u8 pad4[0x18 - 4]; void *vt; void *src; s32 x20; void *x24; };
void spawn_item_timer__13TItemAttackerFiii(void *, void *, s32);
M2C_UNK fn_80108860(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK TItemEffEquip__sub_801088D0[];
extern M2C_UNK TItemEffEquip__sub_801088F8[];
extern s32 lbl_805D2BA0;
Obj_80108C90 *TItemEffFlame__sub_80108C90(Obj_80108C90 *self, void *parent, s16 a, s32 b);

#define self ((Equip_80108A20 *)arg0)
void *TItemEffEquip__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    void *mem;

    __ct__7TObjectFP7TObject(arg0, arg1);
    self->vt = __vt__13TItemEffEquip;
    self->x0 = lbl_805D2BA0;
    disallow_rendering__7TObjectFv(arg0);
    mem = __nw__7TObjectFUl(0xE0);
    if (mem != NULL) {
        mem = ((void *(*)(void *, void *, void *, void *))TItemEffFlame__sub_80108C90)(mem, arg0, arg2, arg3);
    }
    self->src = mem;
    self->x20 = 0;
    self->x24 = arg5;
    if (self->src != NULL) {
        fn_80108860(arg0, arg4);
        spawn_item_timer__13TItemAttackerFiii(arg0, TItemEffEquip__sub_801088F8, 0xA);
        spawn_item_timer__13TItemAttackerFiii(arg0, TItemEffEquip__sub_801088D0, 0x14);
    } else {
        queue_destruction__7TObjectFv((TObject *)arg0);
    }
    return arg0;
}
#undef self

void create__13TItemEffEquipFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        TItemEffEquip__ct(o, arg0, arg1, arg2, arg3, arg4);
    }
}
struct VBase0x18_80108b5c { char pad[0x18]; };
struct VObj80108B5C_80108b5c : VBase0x18_80108b5c {
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
    virtual void m63(s32, void *);
};

u8 *notify_hit_and_get_pos__13TItemEffFlameFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0xAC));
    if (temp_r3 != NULL) {
        ((VObj80108B5C_80108b5c *)temp_r3)->m63(M2C_FIELD(arg0, s32 *, 0xB0), arg0 + 0x38);
    }
    return arg0 + 0x38;
}

struct VBase0x18_2_80108bb0 { char pad[0x18]; };
struct VObj80108BB0_80108bb0 : VBase0x18_2_80108bb0 {
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
    virtual void m63(s32, void *);
};

void notify_hit__13TItemEffFlameFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0xAC));
    if (temp_r3 != NULL) {
        ((VObj80108BB0_80108bb0 *)temp_r3)->m63(M2C_FIELD(arg0, s32 *, 0xB0), arg0 + 0x38);
    }
}

extern void *lbl_8049F038[];

void *destroy__13TItemEffFlameFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)lbl_8049F038;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xA4) != 0U) {
            unregister_object_by_id(arg0);
            clear_obj_links(arg0);
            obj_getField1c(arg0);
            TLobby__sub_80103B04();
            set_item_count__6TLobbyFPvs(arg0, 0xFFFF);
        }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_80108C90 *TItemEffFlame__sub_80108C90(Obj_80108C90 *self, void *parent, s16 a, s32 b) {
    TObjPlayer__sub_801569F4(self, parent);
    self->vt = lbl_8049F038;
    self->f_AC = a;
    self->f_B0 = b;
    fn_8002B630(self->sub, lbl_8043E1A0);
    if ((u16)obj_getField1c(self) == 0xFFFF) {
        set_item_count__6TLobbyFPvs(self, TLobby__sub_80103AD4());
    }
    initialize_linked_object_reference(self, self->sub);
    reset_photon_effect__10TObjPlayerFPv(self);
    disallow_rendering__7TObjectFv(self);
    return self;
}

}

void play_effect__13TItemEffFlameFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    spawn_particle_effect(arg3, 0x45);
    play_sound_effect(0x4001C112, 0, 0, 0);
}

}

extern "C" {
void render__7TObjectFv(void);
void render_shadows__7TObjectFv(void);
void TLobby__sub_801A1FD8(void);
void apply_object_set_data(void);
void release_member_90__10TObjPlayerFPv(void *);
void update_object_view_visibility(void);
void classify_actor_view_detail(void);
void TObjRoomId__sub_801A1E2C(void);
void TObjPlayer__sub_80019568(void);

void *__vt__13TItemEffEquip[6] = {
    0, 0, (void *)__dt__13TItemEffEquipFv, (void *)run_task__13TItemEffEquipFv,
    (void *)render__7TObjectFv, (void *)render_shadows__7TObjectFv,
};
void *lbl_8049F038[14] = {
    0, 0, (void *)destroy__13TItemEffFlameFPvs, (void *)notify_hit__13TItemEffFlameFPv,
    (void *)render__7TObjectFv, (void *)render_shadows__7TObjectFv,
    (void *)TLobby__sub_801A1FD8, (void *)apply_object_set_data,
    (void *)release_member_90__10TObjPlayerFPv, (void *)notify_hit_and_get_pos__13TItemEffFlameFPv,
    (void *)update_object_view_visibility, (void *)classify_actor_view_detail,
    (void *)TObjRoomId__sub_801A1E2C, (void *)TObjPlayer__sub_80019568,
};
}
