#include "types.h"

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

struct Model_8018807C {
    u32 flags0;
    u8 pad0[8 - 4];
    u8 pos8[0x14 - 8];
    u8 angles14[0x2C - 0x14];
    u8 *sub2c;
};

struct Computer_8018807C {
    u8 pad0[0x38];
    u8 pos38[0x60 - 0x38];
    s32 yaw60;
    u8 pad1[0x88 - 0x64];
    s32 kind88;
    u8 pad2[0xBC - 0x8C];
    Model_8018807C *model;
    f32 time_c0;
    u32 tick_c4;
};

struct Obj_80188768 { u8 pad0[0x1C]; u16 f1C; u8 pad1[0x62]; u32 f80; s32 f84; };

struct Pkt_80188768 { u16 a; u16 b; s32 c; s32 d; s32 e; };

struct Vec_8018860C { f32 x, y, z; };

struct ChipParam_8018860C {
    u32 x00;
    u32 x04;
    u32 x08;
    Vec_8018860C pos;
    u8 pad18[0x20];
    f32 y2;
    u32 pad3C;
    s32 res;
    s32 x44;
    u32 x48;
};

struct Obj_8018860C {
    u8 pad[0x38];
    Vec_8018860C pos;
    u8 pad44[0x326 - 0x44];
    s16 state;
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 set_flag8__6TLobbyFPv(void *);
void TObjContainerAbeEnemy__vt4(u8 *arg0, s16 *arg1, s32 arg2);
s32 set_global_param__8TObjFishFi(s32);
s32 push_matrix();
s32 post_translate_matrix(void *);
s32 rotate_matrix_y(s32, s32);
void draw_ginja_box_tree(void);
s32 pop_matrix();
extern void *container_breakup_model_archive;
extern s32 lbl_805D5B8C;
void TObjContainerAbeEnemy__vt79(Obj_80188884 *self);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
void TObjRoomId__sub_80141CF4(void *dst, void *src, f32 t);
extern char lbl_80444EF4[];
extern u8 lbl_804A7448[];
extern const f32 lbl_805DBCF8;
void TObjContainerAbeEnemy__vt80(Obj_80188814 *self);
s32 queue_destruction__7TObjectFv(void *);
s32 get_bml_model(void *, s32);
void reset_photon_effect__10TObjPlayerFPv(void *);
u32 init_collision_body_parts(void *, void *, s32);
void set_type__14TOKeyAncient01FPv(void *);
void *TObjMesBase__ct(void *, void *, void *);
extern s32 lbl_804B6254[];
extern s32 __vt__12TObjComputer[];
extern s32 lbl_805D32CC;
extern u32 TObjComputer__model_archive;
extern s16 TObjComputer__data_805DBCD8[2];
extern const f32 lbl_805DBCEC;
void *TObjComputer__ct(void *arg0, void *parent, void *row);
void *load_resource_from_descriptor(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 load_gvm_texture_file(char *);
s32 get_global_state__14TOKeyMachine01Fv();
extern char lbl_80444B60[];
extern char lbl_80444B78[];
extern s32 fe_obj_tanmatu02_resource_descriptor[];
extern s32 fs_obj_tanmatu02_resource_descriptor[];
extern u32 TObjComputer__model_archive;
extern u32 TObjComputer__texture_gvm_handle;
extern s16 computer_uv_scroll_phase;
void load_computer_resources(void);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 scroll_ginja_mesh_uvs(void *, s32, s32, u16, s32);
s32 PPCSync();
s32 rotate_matrix_y(s32, s32);
s32 rotate_matrix_by_node_angles(void *, u32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(s32);
s32 draw_ginja_object(void *);
extern u32 actor_frame_tick;
extern u32 TObjComputer__texture_gvm_handle;
extern s16 computer_uv_scroll_phase;
extern s16 TObjComputer__data_805DBCD8[2];
extern const f32 lbl_805DBCE4;
s32 draw_model__12TObjComputerFPv(void *arg0);
s32 get_current_floor();
void send_object_state_update(void *, void *);
s32 access_object_saved_state(void *, void *, int);
void byteswap_and_send__6TLobbyFi(void *);
void init_packet_67_04__6TLobbyFPv(void *);
extern s32 local_client_id;
extern const f32 lbl_805DBCF4;
f32 TObjContainerAbeEnemy__vt20(Obj_80188768 *arg0);
int spawn_particle_effect_with_flags(void *, int, int);
void *construct_debris__8TObjChipFPvPvPv(void *, void *, void *);
void play_container_break_sound(void *);
s32 dispatch_fish_event__6TLobbyFPv(void *a0);
void *__nw__7TObjectFUl(int);
extern ChipParam_8018860C lbl_80444E5C;
extern ChipParam_8018860C lbl_80444EA8;
extern s32 lbl_805D5B8C;
extern void *tl_05;
void TObjContainerAbeEnemy__vt77(const Obj_8018860C *self);
}

extern "C" {

void TObjComputer__vt12(void *arg0);
void TObjComputer__vt13(void *arg0);
void *__dt__12TObjComputerFv(void *arg0, s16 arg1);
void *create__12TObjComputerFPv(void *arg0);
void free_resources__12TObjComputerFv(void);
void render__12TObjComputerFv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 free_collision_body_parts(void *);
s32 TObjMesBase__vt12();
s32 unregister_object_by_id(s32 *);
s32 submit_cursor_candidate(void *, s32);
s32 __dl__7TObjectFPv(void *);
s32 __dt__11TObjMesBaseFv(void *, s32);
void *__nw__7TObjectFUl(int);
s32 clear_ref_if_destroyed__11TObjMesBaseFPv();
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern const f32 lbl_805DBCDC;
extern const f32 lbl_805DBCE0;

s32 draw_model__12TObjComputerFPv(void *arg0) {
    Computer_8018807C *self = (Computer_8018807C *)arg0;
    if (self->model == NULL) {
        return;
    }
    set_global_param__8TObjFishFi(TObjComputer__texture_gvm_handle);
    push_matrix();
    post_translate_matrix(self->pos38);
    rotate_matrix_y(0, self->yaw60);
    if (TObjComputer__data_805DBCD8[self->kind88] == 1) {
        u32 tick = actor_frame_tick;
        if (tick != self->tick_c4 && self->time_c0 >= lbl_805DBCE4) {
            self->tick_c4 = tick;
            scroll_ginja_mesh_uvs(*(void **)((s8 *)self->model->sub2c + 4), 0, (s32)self->time_c0, (*(u16 *)&computer_uv_scroll_phase), 1);
            PPCSync();
            f32 time = self->time_c0;
            self->time_c0 = time - (f32)(s32)time;
        }
        post_translate_matrix(self->model->pos8);
        rotate_matrix_by_node_angles(self->model->angles14, self->model->flags0 & 0x20);
        draw_ginja_object(self->model);
        if (self->model->sub2c != NULL) {
            begin_effect_render__13TParticleCtrlFv();
            draw_ginja_object(self->model->sub2c);
            end_effect_render__13TParticleCtrlFv();
        }
    } else {
        draw_ginja_object(self->model);
    }
    pop_matrix();
}

void render__12TObjComputerFv(u8 *arg0) {
    if (((V_TOC_801881D4 *)arg0)->m8(lbl_805DBCDC, lbl_805DBCE0) != 0) {
        draw_model__12TObjComputerFPv((void *)(arg0));
    }
}

extern f32 lbl_805DBCE8;

void TObjComputer__vt13(void *arg0) {
    clear_ref_if_destroyed__11TObjMesBaseFPv();
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) (*(f32 *)((s8 *)arg0 + 0xC0) + lbl_805DBCE8);
}

extern f32 lbl_805DBCE8;

void TObjComputer__vt12(void *arg0) {
    TObjMesBase__vt12();
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB4) != 0) {
        submit_cursor_candidate(arg0, -1);
    }
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) (*(f32 *)((s8 *)arg0 + 0xC0) + lbl_805DBCE8);
}

extern void *tl_05;

void *create__12TObjComputerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjComputer__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 TObjComputer__model_archive;
extern u32 TObjComputer__texture_gvm_handle;

void free_resources__12TObjComputerFv(void) {
    if ((u32) TObjComputer__texture_gvm_handle != 0U) {
        TLobby__sub_803DA16C((void*)TObjComputer__texture_gvm_handle);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjComputer__texture_gvm_handle);
        TObjComputer__texture_gvm_handle = 0U;
    }
    if ((u32) TObjComputer__model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)TObjComputer__model_archive, 1);
        TObjComputer__model_archive = 0U;
    }
}

extern s32 __vt__12TObjComputer[];

void load_computer_resources(void) {
    void *p;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 23: case 24: case 25: case 26: case 27: case 28: case 29:
    case 34: case 35:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, fs_obj_tanmatu02_resource_descriptor, 0, 0, 0);
        }
        TObjComputer__model_archive = (u32) p;
        TObjComputer__texture_gvm_handle = load_gvm_texture_file(lbl_80444B60);
        computer_uv_scroll_phase = 0;
        break;
    default:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, fe_obj_tanmatu02_resource_descriptor, 0, 0, 0);
        }
        TObjComputer__model_archive = (u32) p;
        TObjComputer__texture_gvm_handle = load_gvm_texture_file(lbl_80444B78);
        computer_uv_scroll_phase = 1;
        break;
    }
}

void *__dt__12TObjComputerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjComputer;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        __dt__11TObjMesBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjComputer__ct(void *arg0, void *parent, void *row) {
    Obj_801884A0 *self = (Obj_801884A0 *)arg0;
    TObjMesBase__ct(self, parent, row);
    self->vtbl = __vt__12TObjComputer;
    self->unk0 = lbl_805D32CC;
    if (self->selector < 0) {
        self->selector = 0;
    }
    if (self->selector > 1) {
        self->selector = 1;
    }
    if (TObjComputer__model_archive != 0U) {
        self->model = (void *)get_bml_model((void *)TObjComputer__model_archive, TObjComputer__data_805DBCD8[self->selector]);
    } else {
        queue_destruction__7TObjectFv(self);
        return self;
    }
    init_collision_body_parts(self, lbl_804B6254, 1);
    self->flags30 |= 0x40000000;
    reset_photon_effect__10TObjPlayerFPv(self);
    set_type__14TOKeyAncient01FPv(self->aux98);
    self->unkC0 = lbl_805DBCEC;
    self->unkC4 = 0;
    return self;
}

void TObjContainerAbeEnemy__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj_18 *)(arg0))->m77();
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            *(s16 *)((s8 *)arg0 + 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        *(s16 *)((s8 *)arg0 + 0x326) = 1;
    }
}

#pragma push
#pragma opt_propagation off
void TObjContainerAbeEnemy__vt77(const Obj_8018860C *self) {
    if (self->state != 1) {
        ChipParam_8018860C a = lbl_80444E5C;
        f32 za;
        f32 ya;
        f32 xa;
        xa = self->pos.x;
        ya = self->pos.y;
        za = self->pos.z;
        a.pos.x = xa;
        a.pos.y = ya;
        a.pos.z = za;
        a.y2 = ya;
        a.res = dispatch_fish_event__6TLobbyFPv((void *)0);
        a.x44 = lbl_805D5B8C;
        ChipParam_8018860C b = lbl_80444EA8;
        f32 zb;
        f32 yb;
        f32 xb;
        xb = self->pos.x;
        yb = self->pos.y;
        zb = self->pos.z;
        b.pos.x = xb;
        b.pos.y = yb;
        b.pos.z = zb;
        b.y2 = yb;
        b.res = dispatch_fish_event__6TLobbyFPv((void *)1);
        b.x44 = lbl_805D5B8C;
        spawn_particle_effect_with_flags((void *)&self->pos, 0x45, 0x40);
        spawn_particle_effect_with_flags((void *)&self->pos, 0x46, 0x40);
        void *o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &a);
        }
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            construct_debris__8TObjChipFPvPvPv(o, tl_05, &b);
        }
        play_container_break_sound((void *)self);
    }
}
#pragma pop

f32 TObjContainerAbeEnemy__vt20(Obj_80188768 *arg0) {
    s16 sp8;
    Pkt_80188768 pkt;
    if ((arg0->f1C >= 0x1000U) && (arg0->f80 != 0U) && (access_object_saved_state(arg0, &sp8, 1) != 0)) {
        sp8 = 1;
        access_object_saved_state(arg0, &sp8, 0);
        send_object_state_update(arg0, &sp8);
        init_packet_67_04__6TLobbyFPv(&pkt);
        pkt.b = arg0->f1C;
        pkt.c = get_current_floor();
        pkt.d = arg0->f84;
        pkt.e = local_client_id;
        byteswap_and_send__6TLobbyFi(&pkt);
    }
    return lbl_805DBCF4;
}

void TObjContainerAbeEnemy__vt80(Obj_80188814 *self) {
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130020, lbl_80444EF4, self->id);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
    TObjRoomId__sub_80141CF4(self->pos, lbl_804A7448, lbl_805DBCF8);
}

void TObjContainerAbeEnemy__vt79(Obj_80188884 *self) {
    if (container_breakup_model_archive != 0) {
        switch (self->state) {
        case 0:
            set_global_param__8TObjFishFi(lbl_805D5B8C);
            push_matrix();
            post_translate_matrix(self->pos);
            rotate_matrix_y(0, self->id);
            dispatch_fish_event__6TLobbyFPv((void *)2);
            draw_ginja_box_tree();
            pop_matrix();
            break;
        case 1:
            break;
        }
    }
}

}
