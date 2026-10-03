#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct VB_802ED62C { u8 pad[0x18]; };

struct V_802ED62C : VB_802ED62C {
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
    virtual void m85(s32, int);
};

struct PktA_802ED62C { u8 hdr[2]; u16 a; s16 b; s16 c; s32 d; };

struct PktB_802ED62C { u8 hdr[2]; u16 a; s16 b; s16 c; };

struct Elem_802ED73C { u8 pad0[0x18]; s32 flags; u8 pad1C[0x2C - 0x1C]; };

extern "C" {
void update_and_send_60__11TBoss7JointFPv(void *);
void TBoss7Joint__sub_802EE7B8(void *);
void broadcast_state__11TBoss7JointFPv(void *);
void TBoss7Joint__sub_802EE800(void *);
void TObjFish__sub_802ED62C(u8 *arg0, s32 arg1);
s32 register_object__6TLobbyFPv(M2C_UNK);
s32 dispatch_shared_handler_b__6TLobbyFPv(M2C_UNK);
s32 register_boss__6TLobbyFPv(M2C_UNK);
M2C_UNK reload_stats_keep_hp_tp__9TObjEneDDFPv(void *, s32, s32, s32);
void TBoss7PhotonBullet__sub_802ED5A0(void *arg0, int arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_local_colliders_from_world(void *, void *);
extern const f32 lbl_805DEA1C;
extern const f32 lbl_805DEA5C;
extern const f32 lbl_805DEAF4;
extern const f32 lbl_805DEBA0;
void TObjFish__sub_802ED73C(u8 *arg0);
}

extern "C" {

void emit_hit_effect__18TBoss7PhotonBulletFPvPv(void *arg0, void *arg1);
void flee_if_disturbed__8TObjFishFPv(u8 *arg0);
f32 get_target_pos_y__18TBoss7PhotonBulletFv(void);
M2C_UNK add_radar_scaled_marker(void *, int, int, int, f32);
void *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
void emit_effect__9TObjEneDDFPvii(void *, void *, void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);

f32 get_target_pos_y__18TBoss7PhotonBulletFv(void) {
    return M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0xF), f32 *, 4);
}

extern M2C_UNK lbl_80472D7C[];

void emit_hit_effect__18TBoss7PhotonBulletFPvPv(void *arg0, void *arg1) {
    TBoss7PhotonBullet__sub_802ED5A0((void *)(arg0), (int)(2));
    emit_effect__9TObjEneDDFPvii(arg0, arg1, lbl_80472D7C);
    ((void (*)(void *, void *))TBoss7PhotonBullet__sub_802ED5A0)(arg0, M2C_FIELD(arg0, void **, 0x62C));
}

extern const f32 lbl_805DEA44;

void TBoss7PhotonBullet__sub_802ED5A0(void *arg0, int arg1) {
    s32 v;
    switch (arg1) {
    case 0:
    default:
        v = 0xF;
        break;
    case 1:
        v = 0x10;
        break;
    case 2:
        v = 0x11;
        break;
    }
    reload_stats_keep_hp_tp__9TObjEneDDFPv(arg0, register_boss__6TLobbyFPv(0xF), dispatch_shared_handler_b__6TLobbyFPv(v), register_object__6TLobbyFPv(0xF));
}

void TObjFish__sub_802ED62C(u8 *arg0, s32 arg1) {
    PktA_802ED62C pa;
    PktB_802ED62C pb;
    ((V_802ED62C *)arg0)->m85(arg1, 6);
    if (((u32)(arg1 - 0x13) <= 1U) || ((u32)(arg1 - 0x40) <= 1U) || (arg1 == 0x44) || (arg1 == 0x18)) {
        TBoss7Joint__sub_802EE800(&pa);
        pa.a = M2C_FIELD(arg0, u16 *, 0x1C);
        pa.b = arg1;
        pa.c = (s16)M2C_FIELD(arg0, s32 *, 0x6B4);
        pa.d = M2C_FIELD(arg0, u16 *, 0x38C);
        broadcast_state__11TBoss7JointFPv(&pa);
        return;
    }
    TBoss7Joint__sub_802EE7B8(&pb);
    pb.a = M2C_FIELD(arg0, u16 *, 0x1C);
    pb.b = arg1;
    pb.c = (s16)M2C_FIELD(arg0, s32 *, 0x6B4);
    update_and_send_60__11TBoss7JointFPv(&pb);
}

void flee_if_disturbed__8TObjFishFPv(u8 *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 1) {
        set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
        add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DEA44));
    }
}
void TObjFish__sub_802ED73C(u8 *arg0) {
    u8 sp8[0xC];
    f32 f;
    s32 set;
    s32 clr;
    s32 i;
    VecCopy__FP3VecPC3Vec(sp8, arg0 + 0x434);
    update_local_colliders_from_world(arg0, sp8);
    f = M2C_FIELD(arg0, f32 *, 0x3C);
    if (f < lbl_805DEA1C) {
        set = 0;
        clr = 7;
    } else if (f >= lbl_805DEA5C) {
        set = 5;
        clr = 2;
    } else {
        set = 3;
        clr = 4;
    }
    f = M2C_FIELD(arg0, f32 *, 0x40);
    if (f < lbl_805DEBA0 && lbl_805DEAF4 < f) {
        set = 0;
        clr = 7;
    }
    for (i = 0; i != M2C_FIELD(arg0, s32 *, 0xA8); i++) {
        M2C_FIELD(arg0, Elem_802ED73C **, 0xA4)[i].flags |= set;
        M2C_FIELD(arg0, Elem_802ED73C **, 0xA4)[i].flags &= ~clr;
    }
}

}
