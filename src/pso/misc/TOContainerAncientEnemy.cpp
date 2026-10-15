#include "types.h"

struct Base_8015B8E8 { char pad[0x18]; };
struct VObj_8015B8E8 : Base_8015B8E8 {
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
};

struct RecoveredGlobal_8015BD68_lbl_804B00C8 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015BD68___vt__23TOContainerAncientEnemy {
    s32 value;
    u8 remaining[0x148];
};

struct Obj_8015BCC0 { u8 pad[0x326]; s16 a326; u8 pad2[0x364 - 0x328]; s32 a364; };

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_TOC_801881D4 { char pad[0x18]; };

struct V_TOC_801881D4 : Base_TOC_801881D4 {
    PADV4
    PADV4
    virtual s32 m8(f32, f32);
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual s32 m77();
};

struct Obj_80188884 { u8 pad0[0x38]; u8 pos[0x28]; s32 id; u8 pad1[0x326 - 0x64]; s16 state; };

struct Obj_80188814 { u8 pad0[0x38]; u8 pos[0x4c]; s32 id; };

struct Obj_801884A0 {
    s32 unk0;
    u8 pad4[0x18 - 0x4];
    void *vtbl;
    u8 pad1C[0x30 - 0x1C];
    u32 flags30;
    u8 pad34[0x88 - 0x34];
    s32 selector;
    u8 pad8C[0x98 - 0x8C];
    u8 aux98[0xBC - 0x98];
    void *model;
    f32 unkC0;
    s32 unkC4;
};

struct Spawn_8015B94C {
    u8 pad0[0xC];
    f32 x, y, z;
    u8 pad18[0x38 - 0x18];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};
struct Obj_8015B94C { u8 pad[0x38]; f32 x, y, z; u8 pad44[0x326 - 0x44]; s16 f326; };
struct Ref_8015B94C { u8 pad[4]; s32 a; s32 b; };

struct O_8015BAE0 { u8 pad[0x1C]; u16 id; u8 pad1e[0x80 - 0x1E]; u32 f80; s32 f84; };

struct Pk_8015BAE0 { u8 pad[2]; u16 id; s32 a; s32 b; s32 c; };

extern "C" {
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 draw_ginja_model(int);
void draw_model__23TOContainerAncientEnemyFPv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_container_base(void *, int, void *);
extern RecoveredGlobal_8015BD68_lbl_804B00C8 TOContainerAncientEnemy__collision_body_params;
extern s32 __vt__23TOContainerAncientEnemy[];
extern s32 lbl_805D2F08;
extern s32 tl_05;
u8 *TOContainerAncientEnemy__ct(u8 *arg0, s32 arg1);
void submit_cursor_candidate(Obj_8015BCC0 *self, s32 x);
void submit_cursor_candidate_if_idle__23TOContainerAncientEnemyFPv(Obj_8015BCC0 *self);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
void TObjRoomId__sub_80141CF4(void *dst, void *src, f32 t);
extern char lbl_80440830[];
extern u8 lbl_804A7448[];
extern const f32 lbl_805DB3A0;
void draw_debug_event_no__23TOContainerAncientEnemyFPv(Obj_80188814 *self);
s32 get_current_floor();
void send_object_state_update(void *, void *);
s32 access_object_saved_state(void *, void *, int);
void byteswap_and_send__6TLobbyFi(void *, int);
void init_packet_67_04__6TLobbyFPv(void *);
extern s32 local_client_id;
extern const f32 lbl_805DB39C;
f32 open_and_send__23TOContainerAncientEnemyFPv(O_8015BAE0 *arg0);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
s32 spawn_particle_effect(void *, int);
s32 construct_debris__8TObjChipFPvPvPv(void *, s32, void *);
s32 play_container_break_sound(void *);
void *__nw__7TObjectFUl(int);
extern Spawn_8015B94C lbl_80440798;
extern Spawn_8015B94C lbl_804407E4;
extern s32 lbl_805D2F10;
extern Ref_8015B94C *ancient_container_fragment_texture_lists;
}

extern "C" {

void *__dt__23TOContainerAncientEnemyFv(void *arg0, s16 arg1);
void check_and_destroy__23TOContainerAncientEnemyFPvPvi(void *arg0, s16 *arg1, s32 arg2);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
s32 destroy_container_object__10TObjPlayerFPvs(void *, s32);
s32 queue_destruction__7TObjectFv(void *);
s32 set_flag8__6TLobbyFPv(void *);

void check_and_destroy__23TOContainerAncientEnemyFPvPvi(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 1) {
        if (arg2 != 0) {
            ((VObj_8015B8E8 *)arg0)->m77();
        }
        *(s16 *)((s8 *)arg0 + 0x326) = 1;
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern s32 __vt__23TOContainerAncientEnemy[];

void spawn_break_debris__23TOContainerAncientEnemyFPv(Obj_8015B94C *self) {
    extern const u32 ancient_container_resource_bundle;
    void *o;
    if (self->f326 != 1) {
        Spawn_8015B94C a = lbl_80440798;
        a.x = self->x;
        a.y = self->y;
        a.z = self->z;
        a.f38 = self->y;
        a.f40 = get_bml_model((void *)ancient_container_resource_bundle, 1);
        a.f44 = TObjFish__sub_8001EDB0((void *)ancient_container_resource_bundle, 1);
        Spawn_8015B94C b = lbl_804407E4;
        b.x = self->x;
        b.y = self->y;
        b.z = self->z;
        b.f38 = self->y;
        b.f40 = get_bml_model((void *)ancient_container_resource_bundle, 2);
        b.f44 = TObjFish__sub_8001EDB0((void *)ancient_container_resource_bundle, 2);
        if (check_value_equals__13TQuestColCtrlFPvi(self, lbl_805D2F10) != 0) {
            a.f44 = ancient_container_fragment_texture_lists->a;
            b.f44 = ancient_container_fragment_texture_lists->b;
        }
        spawn_particle_effect(&self->x, 0x45);
        spawn_particle_effect(&self->x, 0x46);
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &a);
        }
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &b);
        }
        play_container_break_sound(self);
    }
}

f32 open_and_send__23TOContainerAncientEnemyFPv(O_8015BAE0 *arg0) {
    s16 sp8;
    s32 r4;
    Pk_8015BAE0 pk;
    if (arg0->id >= 0x1000U && arg0->f80 != 0U && access_object_saved_state(arg0, &sp8, 1) != 0) {
        sp8 = 1;
        access_object_saved_state(arg0, &sp8, 0);
        send_object_state_update(arg0, &sp8);
        init_packet_67_04__6TLobbyFPv(&pk);
        pk.id = arg0->id;
        pk.a = get_current_floor();
        r4 = arg0->f84;
        pk.b = r4;
        pk.c = local_client_id;
        byteswap_and_send__6TLobbyFi(&pk, r4);
    }
    return lbl_805DB39C;
}

void draw_debug_event_no__23TOContainerAncientEnemyFPv(Obj_80188814 *self) {
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130020, lbl_80440830, self->id);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
    TObjRoomId__sub_80141CF4(self->pos, lbl_804A7448, lbl_805DB3A0);
}

void draw_model__23TOContainerAncientEnemyFPv(u8 *arg0) {
    extern u32 ancient_container_resource_bundle;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    if ((u32) ancient_container_resource_bundle != 0U) {
        switch (*(s16 *)((s8 *)arg0 + 0x326)) {
        case 0:
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
            set_global_param__8TObjFishFi((int) (*(s32 *)((s8 *)arg0 + 0x24)));
            temp_r31 = (unsigned char *) (*(void **)((s8 *)arg0 + 0x34));
            push_matrix();
            post_translate_matrix((void *) (temp_r31 + 8));
            draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
            temp_r31_2 = (unsigned char *) (*(void **)((s8 *)temp_r31 + 0x2C));
            push_matrix();
            post_translate_matrix((void *) (temp_r31_2 + 8));
            draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_2 + 4)));
            pop_matrix();
            temp_r31_3 = (unsigned char *) (*(void **)((s8 *)temp_r31_2 + 0x30));
            push_matrix();
            post_translate_matrix((void *) (temp_r31_3 + 8));
            begin_effect_render__13TParticleCtrlFv();
            draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_3 + 4)));
            end_effect_render__13TParticleCtrlFv();
            pop_matrix();
            pop_matrix();
            pop_matrix();
            break;
        }
    }
}

void submit_cursor_candidate_if_idle__23TOContainerAncientEnemyFPv(Obj_8015BCC0 *self) {
    switch (self->a326) {
    case 0:
        if (self->a364 != 0) {
            submit_cursor_candidate(self, -1);
        }
        break;
    }
}

void *__dt__23TOContainerAncientEnemyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__23TOContainerAncientEnemy;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8015BD68_lbl_804B00C8_size[sizeof(RecoveredGlobal_8015BD68_lbl_804B00C8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015BD68___vt__23TOContainerAncientEnemy_size[sizeof(RecoveredGlobal_8015BD68___vt__23TOContainerAncientEnemy) == 0x14C ? 1 : -1];
u8 *TOContainerAncientEnemy__ct(u8 *arg0, s32 arg1) {
    extern u32 ancient_container_resource_bundle;
    init_container_base((void *) (arg0), (int) (tl_05), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8015BD68___vt__23TOContainerAncientEnemy *)&__vt__23TOContainerAncientEnemy).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2F08;
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x60000000);
    init_collision_body_parts((void *) (arg0), (void *) (&TOContainerAncientEnemy__collision_body_params.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    *(f32 *)((s8 *)arg0 + 0x78) = (f32) (*(f32 *)((s8 *)arg0 + 0x78) + *(f32 *)((s8 *)(&TOContainerAncientEnemy__collision_body_params.value) + 4));
    *(s32 *)((s8 *)arg0 + 0x34) = get_bml_model((void *) ((*(s32 *)&ancient_container_resource_bundle)), (int) (0));
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0((void *) ((*(s32 *)&ancient_container_resource_bundle)), (int) (0));
    return arg0;
}

}
