#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase { char pad[0x18]; };

struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77();
};

struct RecoveredGlobal_8018925C_lbl_804B63BC {
    M2C_UNK value;
    u8 remaining[0x158];
};

struct RecoveredGlobal_8018925C___vt__19TObjContainerNoItem {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct Obj_801895A4 { u8 pad0[0x38]; u8 pos[0x4c]; s32 id; };

struct Obj_801894F8 { u8 pad0[0x1C]; u16 f1C; u8 pad1[0x62]; u32 f80; s32 f84; };

struct Pkt_801894F8 { u16 a; u16 b; s32 c; s32 d; s32 e; };

typedef s32 M2C_UNK;
struct Base18 { char pad[0x18]; };

struct VObj18 : Base18 {
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

struct RecoveredGlobal_801897A4_lbl_804B63BC {
    M2C_UNK value;
    u8 remaining[0x158];
};

struct RecoveredGlobal_801897A4___vt__18TObjContainerEnemy {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct Box_80189A50 {
    u8 pad00[0x34];
    s32 model;
    u8 pos[0x28];
    s32 rot;
    u8 pad64[0x326 - 0x64];
    s16 state;
};

struct Spawn_8018990C {
    u8 pad0[0xC];
    u8 pos[0xC];
    u8 pad18[0x38 - 0x18];
    f32 f38;
    u8 pad3c[4];
    s32 f40;
    s32 f44;
    u8 pad48[4];
};

struct Obj_8018990C { u8 pad[0x38]; f32 x, y, z; u8 pad44[0x326 - 0x44]; s16 f326; };

struct CE_80189614 { u8 pad[0x34]; s32 f34; u8 f38[0x28]; s32 f60; u8 pad2[0x326 - 0x64]; s16 mode; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
M2C_UNK set_flag8__6TLobbyFPv(void *);
void TObjContainerEnemy__vt4(u8 *arg0, s16 *arg1, s32 arg2);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 fn_8018A150(void *, void *, void *);
s32 get_container_param(int);
extern RecoveredGlobal_8018925C_lbl_804B63BC lbl_804B63BC;
extern M2C_UNK __vt__19TObjContainerNoItem[];
extern s32 lbl_805D32F4;
u8 *TObjContainerNoItem__ct(u8 *arg0, s32 arg1, s32 arg2);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void TObjEneBm5GibonU__sub_803D853C(s32 id, const char *fmt, ...);
void TObjRoomId__sub_80141CF4(void *dst, void *src, f32 t);
extern char lbl_80444EF4[];
extern u8 lbl_804A7448[];
extern const f32 lbl_805DBCF8;
void TObjContainerEnemy__vt80(Obj_801895A4 *self);
s32 get_current_floor();
void TObjPlayer__sub_80154954(void *, void *);
s32 TLobby__sub_80156A80(void *, void *, int);
void byteswap_and_send__6TLobbyFi(void *);
void init_packet_67_04__6TLobbyFPv(void *);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DBCF4;
f32 TObjContainerEnemy__vt20(Obj_801894F8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_container_param(int);
extern s32 lbl_805D5B7C;
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
M2C_UNK TObjChip__sub_80180BD4(void *, void *, void *);
M2C_UNK play_container_break_sound(void *);
void *__nw__7TObjectFUl(int);
extern Spawn_8018990C *const lbl_805D5B80;
extern Spawn_8018990C *const lbl_805D5B84;
extern void *tl_05;
void TObjContainerEnemy__vt77(Obj_8018990C *self);
void draw_ginja_box_tree(s32);
void scale_matrix(s32, f32, f32, f32);
void rotate_matrix_y(s32, s32);
void TObjPlayer__sub_803D9B2C(void);
void pop_matrix(void);
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(s32);
extern u32 lbl_805D5B78;
extern s32 lbl_805D5B7C;
extern const f32 lbl_805DBCFC;
void TObjContainerEnemy__vt79(CE_80189614 *self);
}

extern "C" {

void TObjContainerNoItem__vt78(void *arg0);
void *__dt__19TObjContainerNoItemFv(void *arg0, s16 arg1);
void *create__19TObjContainerNoItemFPv(void *arg0);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);

void TObjContainerNoItem__vt78(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x364) != 0) {
            submit_cursor_candidate(arg0, -1);
        }
    case 1:
        return;
    }
}

extern void *tl_05;

void *create__19TObjContainerNoItemFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TObjContainerNoItem__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__19TObjContainerNoItem[];

void *__dt__19TObjContainerNoItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjContainerNoItem;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8018925C_lbl_804B63BC_size[sizeof(RecoveredGlobal_8018925C_lbl_804B63BC) == 0x15C ? 1 : -1];
typedef char RecoveredGlobal_8018925C___vt__19TObjContainerNoItem_size[sizeof(RecoveredGlobal_8018925C___vt__19TObjContainerNoItem) == 0x14C ? 1 : -1];
u8 *TObjContainerNoItem__ct(u8 *arg0, s32 arg1, s32 arg2) {
    fn_8018A150((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018925C___vt__19TObjContainerNoItem *)&__vt__19TObjContainerNoItem).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D32F4;
    M2C_FIELD(arg0, s32 *, 0x34) = get_container_param((int) (1));
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60000000);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B63BC.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) (M2C_FIELD(arg0, f32 *, 0x78) + M2C_FIELD(&lbl_804B63BC.value, f32 *, 4));
    return arg0;
}

void TObjContainerEnemy__vt4(u8 *arg0, s16 *arg1, s32 arg2) {
    if (arg2 != 0) {
        if ((s16) *arg1 == 1) {
            ((VObj*)arg0)->m77();
            clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (1));
            set_flag8__6TLobbyFPv((void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
            M2C_FIELD(arg0, s16 *, 0x326) = 1;
        }
    } else if ((s16) *arg1 == 1) {
        clear_player_status_flag__10TObjPlayerFPviUi((void *) (arg0), (int) (0), (int) (1));
        set_flag8__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
    }
}

typedef char RecoveredGlobal_801897A4_lbl_804B63BC_size[sizeof(RecoveredGlobal_801897A4_lbl_804B63BC) == 0x15C ? 1 : -1];
typedef char RecoveredGlobal_801897A4___vt__18TObjContainerEnemy_size[sizeof(RecoveredGlobal_801897A4___vt__18TObjContainerEnemy) == 0x14C ? 1 : -1];
void TObjContainerEnemy__vt77(Obj_8018990C *self) {
    void *o;
    if (self->f326 != 1) {
        Spawn_8018990C a = *lbl_805D5B80;
        Spawn_8018990C b = *lbl_805D5B84;
        VecCopy__FP3VecPC3Vec(a.pos, &self->x);
        a.f38 = self->y;
        a.f40 = get_container_param(2);
        a.f44 = lbl_805D5B7C;
        VecCopy__FP3VecPC3Vec(b.pos, &self->x);
        b.f38 = self->y;
        b.f40 = get_container_param(0);
        b.f44 = lbl_805D5B7C;
        spawn_particle_effect_with_flags(&self->x, 0x45, 0x40);
        spawn_particle_effect_with_flags(&self->x, 0x46, 0x40);
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            TObjChip__sub_80180BD4(o, tl_05, &a);
        }
        o = __nw__7TObjectFUl(0x234);
        if (o != NULL) {
            TObjChip__sub_80180BD4(o, tl_05, &b);
        }
        play_container_break_sound(self);
    }
}

f32 TObjContainerEnemy__vt20(Obj_801894F8 *arg0) {
    s16 sp8;
    Pkt_801894F8 pkt;
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

void TObjContainerEnemy__vt80(Obj_801895A4 *self) {
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_80444EF4, self->id);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
    TObjRoomId__sub_80141CF4(self->pos, lbl_804A7448, lbl_805DBCF8);
}
void TObjContainerEnemy__vt79(CE_80189614 *self) {
    if (lbl_805D5B78 == 0) {
        return;
    }
    switch (self->mode) {
    case 0:
        set_global_param__8TObjFishFi(lbl_805D5B7C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(self->f38);
        rotate_matrix_y(0, self->f60);
        scale_matrix(0, lbl_805DBCFC, lbl_805DBCFC, lbl_805DBCFC);
        draw_ginja_box_tree(self->f34);
        pop_matrix();
        break;
    case 1:
        break;
    }
}

}
