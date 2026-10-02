#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    virtual M2C_UNK m77();
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

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);
void TObjContainerAbeEnemy__vt4(u8 *arg0, s16 *arg1, s32 arg2);
s32 set_global_param__8TObjFishFi(s32);
s32 TObjPlayer__sub_803D9B2C();
s32 TOHangerMachine01__sub_803D9C00(void *);
s32 rotate_matrix_y(s32, s32);
void dispatch_fish_event__6TLobbyFPv(void *a0);
void fn_801FBA6C(void);
s32 pop_matrix();
extern void *lbl_805D5B88;
extern s32 lbl_805D5B8C;
void TObjContainerAbeEnemy__vt79(Obj_80188884 *self);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void TObjEneBm5GibonU__sub_803D853C(s32 id, const char *fmt, ...);
void TObjRoomId__sub_80141CF4(void *dst, void *src, f32 t);
extern char lbl_80444EF4[];
extern u8 lbl_804A7448[];
extern const f32 lbl_805DBCF8;
void TObjContainerAbeEnemy__vt80(Obj_80188814 *self);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_bml_model(void *, s32);
void reset_photon_effect__10TObjPlayerFPv(void *);
u32 init_collision_body_parts(void *, void *, s32);
void set_type__14TOKeyAncient01FPv(void *);
void *TObjMesBase__ct(void *, void *, void *);
extern M2C_UNK lbl_804B6254[];
extern M2C_UNK __vt__12TObjComputer[];
extern s32 lbl_805D32CC;
extern u32 TObjComputer__data_805D5B68;
extern s16 TObjComputer__data_805DBCD8[2];
extern const f32 lbl_805DBCEC;
void *TObjComputer__ct(void *arg0, void *parent, void *row);
void *TLobby__sub_80020004(void *, int, void *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 TLanguage__sub_801E4874(char *);
s32 get_global_state__14TOKeyMachine01Fv();
extern char lbl_80444B60[];
extern char lbl_80444B78[];
extern M2C_UNK lbl_804B6204[];
extern M2C_UNK lbl_804B6244[];
extern u32 TObjComputer__data_805D5B68;
extern u32 lbl_805D5B6C;
extern s16 lbl_805D5B70;
void TObjComputer__sub_80188358(void);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK scroll_ginja_mesh_uvs(void *, s32, s32, u16, s32);
M2C_UNK PPCSync();
s32 rotate_matrix_y(s32, s32);
M2C_UNK TObjPlayer__sub_803D99F8(void *, u32);
s32 TObjPlayer__sub_803D9B2C();
s32 pop_matrix();
s32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(s32);
M2C_UNK draw_ginja_object(void *);
extern u32 lbl_805D53A4;
extern u32 lbl_805D5B6C;
extern s16 lbl_805D5B70;
extern s16 TObjComputer__data_805DBCD8[2];
extern const f32 lbl_805DBCE4;
M2C_UNK TObjComputer__sub_8018807C(void *arg0);
s32 get_current_floor();
void TObjPlayer__sub_80154954(void *, void *);
s32 TLobby__sub_80156A80(void *, void *, int);
void byteswap_and_send__6TLobbyFi(void *);
void init_packet_67_04__6TLobbyFPv(void *);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DBCF4;
f32 TObjContainerAbeEnemy__vt20(Obj_80188768 *arg0);
}

extern "C" {

void TObjComputer__vt12(void *arg0);
void TObjComputer__vt13(void *arg0);
void *__dt__12TObjComputerFv(void *arg0, s16 arg1);
void *create__12TObjComputerFPv(void *arg0);
void free_resources__12TObjComputerFv(void);
void render__12TObjComputerFv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjMesBase__vt12();
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__11TObjMesBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_ref_if_destroyed__11TObjMesBaseFPv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern const f32 lbl_805DBCDC;
extern const f32 lbl_805DBCE0;

M2C_UNK TObjComputer__sub_8018807C(void *arg0) {
    Computer_8018807C *self = (Computer_8018807C *)arg0;
    if (self->model == NULL) {
        return;
    }
    set_global_param__8TObjFishFi(lbl_805D5B6C);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(self->pos38);
    rotate_matrix_y(0, self->yaw60);
    if (TObjComputer__data_805DBCD8[self->kind88] == 1) {
        u32 tick = lbl_805D53A4;
        if (tick != self->tick_c4 && self->time_c0 >= lbl_805DBCE4) {
            self->tick_c4 = tick;
            scroll_ginja_mesh_uvs(M2C_FIELD(self->model->sub2c, void **, 4), 0, (s32)self->time_c0, (*(u16 *)&lbl_805D5B70), 1);
            PPCSync();
            f32 time = self->time_c0;
            self->time_c0 = time - (f32)(s32)time;
        }
        TOHangerMachine01__sub_803D9C00(self->model->pos8);
        TObjPlayer__sub_803D99F8(self->model->angles14, self->model->flags0 & 0x20);
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
        TObjComputer__sub_8018807C((void *)(arg0));
    }
}

extern f32 lbl_805DBCE8;

void TObjComputer__vt13(void *arg0) {
    clear_ref_if_destroyed__11TObjMesBaseFPv();
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + lbl_805DBCE8);
}

extern f32 lbl_805DBCE8;

void TObjComputer__vt12(void *arg0) {
    TObjMesBase__vt12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        submit_cursor_candidate(arg0, -1);
    }
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + lbl_805DBCE8);
}

extern void *tl_05;

void *create__12TObjComputerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjComputer__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 TObjComputer__data_805D5B68;
extern u32 lbl_805D5B6C;

void free_resources__12TObjComputerFv(void) {
    if ((u32) lbl_805D5B6C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B6C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B6C);
        lbl_805D5B6C = 0U;
    }
    if ((u32) TObjComputer__data_805D5B68 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjComputer__data_805D5B68, 1);
        TObjComputer__data_805D5B68 = 0U;
    }
}

extern M2C_UNK __vt__12TObjComputer[];

void TObjComputer__sub_80188358(void) {
    void *p;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 23: case 24: case 25: case 26: case 27: case 28: case 29:
    case 34: case 35:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 5, lbl_804B6244, 0, 0, 0);
        }
        TObjComputer__data_805D5B68 = (u32) p;
        lbl_805D5B6C = TLanguage__sub_801E4874(lbl_80444B60);
        lbl_805D5B70 = 0;
        break;
    default:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 5, lbl_804B6204, 0, 0, 0);
        }
        TObjComputer__data_805D5B68 = (u32) p;
        lbl_805D5B6C = TLanguage__sub_801E4874(lbl_80444B78);
        lbl_805D5B70 = 1;
        break;
    }
}

void *__dt__12TObjComputerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjComputer;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
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
    if (TObjComputer__data_805D5B68 != 0U) {
        self->model = (void *)get_bml_model((void *)TObjComputer__data_805D5B68, TObjComputer__data_805DBCD8[self->selector]);
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
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
    }
}

f32 TObjContainerAbeEnemy__vt20(Obj_80188768 *arg0) {
    s16 sp8;
    Pkt_80188768 pkt;
    if ((arg0->f1C >= 0x1000U) && (arg0->f80 != 0U) && (TLobby__sub_80156A80(arg0, &sp8, 1) != 0)) {
        sp8 = 1;
        TLobby__sub_80156A80(arg0, &sp8, 0);
        TObjPlayer__sub_80154954(arg0, &sp8);
        init_packet_67_04__6TLobbyFPv(&pkt);
        pkt.b = arg0->f1C;
        pkt.c = get_current_floor();
        pkt.d = arg0->f84;
        pkt.e = lbl_805D53A0;
        byteswap_and_send__6TLobbyFi(&pkt);
    }
    return lbl_805DBCF4;
}

void TObjContainerAbeEnemy__vt80(Obj_80188814 *self) {
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_80444EF4, self->id);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
    TObjRoomId__sub_80141CF4(self->pos, lbl_804A7448, lbl_805DBCF8);
}

void TObjContainerAbeEnemy__vt79(Obj_80188884 *self) {
    if (lbl_805D5B88 != 0) {
        switch (self->state) {
        case 0:
            set_global_param__8TObjFishFi(lbl_805D5B8C);
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00(self->pos);
            rotate_matrix_y(0, self->id);
            dispatch_fish_event__6TLobbyFPv((void *)2);
            fn_801FBA6C();
            pop_matrix();
            break;
        case 1:
            break;
        }
    }
}

}
