#include "types.h"
#include "pso/TObjControl.h"
#include "pso/enemy/TObjEnemy.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ply_800F7118 {
    u8 pad0[0x28];
    s16 f28;
    u8 pad2A[0x30 - 0x2A];
    s32 f30;
    u8 pad34[0x334 - 0x34];
    s32 f334;
    u8 pad338[0x340 - 0x338];
    Ply_800F7118 *f340;
    Ply_800F7118 *f344;
    Ply_800F7118 *next;
    Ply_800F7118 *prev;
    u8 pad350[0x36C - 0x350];
    s32 f36C;
};

extern "C" {
u8 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
void link_into_group_chain__10TObjPlayerFPv(Ply_800F7118 *self);
}

extern "C" {

struct EnemyControlDispatchBase { char pad[0x18]; };

struct EnemyControlDispatch : EnemyControlDispatchBase {
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
    virtual M2C_UNK m26();
    virtual s32 m27();
    virtual s32 m28();
    virtual s32 m29();
    virtual s32 m30();
    virtual s32 m31();
    virtual s32 m32();
    virtual void m33();
    virtual s32 m34();
    virtual void m35();
    virtual M2C_UNK m36();
    virtual s32 m37();
    virtual s32 m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
    virtual s32 m41();
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
    virtual M2C_UNK m56();
    virtual M2C_UNK m57();
    virtual M2C_UNK m58();
    virtual M2C_UNK m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
};

struct Msg_800F641C { u8 code; u8 size; u16 id; s32 arg; };

struct Obj_800F641C { u8 pad[0x1c]; u16 id; };

struct Hdr_800F6464 { u32 w; u16 x; s16 y; u32 z; };

struct Base_800F6464 { u8 pad[0x18]; };

struct Ene_800F6464 : Base_800F6464 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void m78(void *);
};

struct Msg_800F6464 { u8 pad0[2]; u16 f2; u16 f4; s16 f6; u32 f8; };

struct Msg_800F62E0 { u8 pad0[2]; u16 id; s32 flags; };

struct VBase_800F62E0 { char pad[0x18]; };

struct Ene_800F62E0 : VBase_800F62E0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46(s32);
    virtual void m47();
};

struct Pkt_800F65D0 {
    s32 id;
    s16 pad4;
    s16 diff;
    s8 a;
    s8 av;
    s8 b;
    s8 bv;
};

struct Pair_800F673C { s32 a; f32 b; };

struct VBase_800F673C { char pad[0x18]; };

struct VObj_800F673C : VBase_800F673C {
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
    virtual void m46(s32);
    virtual void m47();
    virtual void m48();
    virtual void m49(Pair_800F673C);
    virtual void m50(Pair_800F673C);
    u8 pad1c[0x2B8 - 0x1C];
    s16 f2B8;
    u8 pad2ba[0x32C - 0x2BA];
    s16 f32C;
};

struct Msg_800F673C { u32 flags; u8 pad4[2]; s16 f6; u8 b8; u8 b9; u8 bA; u8 bB; };

struct Base_800F6960 { char pad[0x18]; };

struct VObj_800F6960 : Base_800F6960 {
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
};

typedef struct TObjPlayer_800F6B68 {
    u8 pad[0x2D6];
    u16 attacker_id;
} TObjPlayer_800F6B68;

struct Vec_800F698C { f32 x, y, z; };

struct A_800F698C {
    u8 pad0[0x1C]; u16 f1C; u8 pad1E[0x28 - 0x1E]; s16 f28; s16 f2A; s16 f2C;
    u8 pad2E[0x38 - 0x2E]; Vec_800F698C v38; u8 pad44[0x50 - 0x44]; Vec_800F698C v50; Vec_800F698C v5C;
    u8 pad68[0x160 - 0x68]; u8 f160[0x354 - 0x160]; f32 f354[5]; s32 f368; s32 f36C;
};

struct B_800F698C {
    s16 f0; u8 pad2[4]; u16 f6; s16 f8; s16 fA; u8 padC[4]; Vec_800F698C v10; Vec_800F698C v1C; f32 f28[5]; s16 f3C; s16 f3E;
};

struct Node_800F6E2C {
    u8 pad0[0x340];
    Node_800F6E2C *f340;
    Node_800F6E2C *f344;
    Node_800F6E2C *f348;
    Node_800F6E2C *f34C;
};

struct VBase_800F6BF0 { u8 pad[0x18]; };

struct Plr_800F6BF0 : VBase_800F6BF0 {
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
    virtual void m12(s32);
};

s32 TObjPlayer__sub_800111A8(void *, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void add_to_field_2ce__10TObjPlayerFPvi(void *, int);
s16 get_atp__10TObjPlayerFPv(void *);
void add_to_field_2ca__10TObjPlayerFPvi(void *, int);
s16 get_field_2c2__10TObjPlayerFPv(void *);
void add_to_field_2c8__10TObjPlayerFPvi(void *, int);
s16 get_field_2c0__10TObjPlayerFPv(void *);
f32 TObjPlayer__sub_800192C4(s32, s32);
u16 obj_getArrU16_FC(void *, int);
s32 obj_testFlag_2E4(void *, u32);
s16 get_id__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_8001943C(void *, int);
s16 TObjPlayer__sub_800194E8(void *);
s16 get_level__10TObjPlayerFPv(void *);
s32 obj_testFlags30(void *, s32);
u16 obj_getField1c(void *);
void obj_setFlags30(void *, s32);
s32 is_split_screen();
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 exchange_object_state__6TLobbyFPvis(void *, void *, int);
void copy_header__6TLobbyFPvPv(void *, void *);
M2C_UNK set_flag_3__7TObjectFv(int);
s32 is_quest_active();
s32 is_flag_set__6TLobbyFv();
void subtractive_rng_seed(void *, s32);
s32 check_demo_mode__10TObjPlayerFv();
Ene_800F62E0 * find_active_entity_by_id(u16);
void * TObjControl__ct(void *arg0);
void handle_6x9C_set_enemy_low_game_flags_ultimate(Msg_800F62E0 *arg0);
void TLobby__sub_800F641C(Obj_800F641C *self, s32 arg);
void handle_6x0A_update_enemy_state(Msg_800F6464 *arg0);
M2C_UNK TLobby__sub_800F6510(void *, void *);
s32 TObjPlayer__sub_800F65D0(u8 *self, s32 kind);
void TObjPlayer__sub_800F673C(VObj_800F673C *arg0, Msg_800F673C *arg1);
void call_vt78__10TObjPlayerFPv(void *arg0);
void apply_set_data__9TObjEnemyFPvPv(A_800F698C *arg0, B_800F698C *arg1);
Ene_800F6464 * get_enemy_entity(u16);
void refresh_lobby_state__10TObjPlayerFPv(void* p);
int query_lobby_state__10TObjPlayerFPv(void* p);
void distribute_experience(TObjPlayer_800F6B68 *self);
void award_enemy_experience(u8 *arg0, s32 arg1);
void update_prev_position__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_800F6E2C(void *arg0, Node_800F6E2C *arg1, Node_800F6E2C *arg2);
void unlink_enemy_group_relations(u8 *arg0);
s32 is_action_available__10TObjPlayerFv(TObjEnemy* _w0);
void apply_by_index__9TObjEnemyFs(s16, void *);
M2C_UNK clear_flag_3__7TObjectFv(int);
void bswap_field__6TLobbyFPv(void *);
void broadcast_state__6TLobbyFPv(void* p);
void TLobby__sub_800F79C4(u8 *arg0);
void bswap_enemy_state__6TLobbyFPv(void *);
s32 get_attack_credit_slot_count(void *);
f32 TLobby__sub_800F7A6C();
f32 TLobby__sub_800F7A7C();
M2C_UNK create_font_small_task(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32, u16);
int send_6x60_standard_drop_item_request(void*);
M2C_UNK fn_801B0480(void *, void *, M2C_UNK);
M2C_UNK draw_player_status(void *, void *, M2C_UNK *);
M2C_UNK submit_cursor_candidate(int, int);
Plr_800F6BF0 * get_player_by_client_id(u16);
u8 get_rule_field_0__6TLobbyFPv(void *);
M2C_UNK minimap_render_dot(void *, int, int, int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void __ct__7TObjectFP7TObject(void *);
s32 is_challenge_mode_active();

extern Hdr_800F6464 *TLobby__data_805D6144;
extern M2C_UNK __vt__11TObjControl[];
extern u8 lbl_8050EA40[];
extern void *lbl_805D2B04;
extern s32 lbl_805D5328;
extern s32 lbl_805D5550;
extern const f32 lbl_805DA8C0;
extern const f32 lbl_805DA8C4;
extern const f32 lbl_805DA8C8;
extern M2C_UNK lbl_805DA8CC;
extern M2C_UNK lbl_805DA8D0;
extern const f32 lbl_805DA8D4;
extern M2C_UNK lbl_805DA8D8;
extern const f32 lbl_805DA8DC;

}
void TObjControl::run_task() {
    s16 mode;
    u8 *enemy;
    u8 *control_record;

    enemy = (u8 *)m_down;
    if (enemy == NULL) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        if (((EnemyControlDispatch *)(enemy))->m31() != 0) {
            clear_flag_3__7TObjectFv((int) (enemy));
            ((EnemyControlDispatch *)(enemy))->m61();
            return;
        }
        ((EnemyControlDispatch *)(enemy))->m39();
        ((EnemyControlDispatch *)(enemy))->m40();
        if (((EnemyControlDispatch *)(enemy))->m41() == 0) {
            ((EnemyControlDispatch *)(enemy))->m36();
            if ((((EnemyControlDispatch *)(enemy))->m34() != 0) || (((EnemyControlDispatch *)(enemy))->m38() != 0) || (((EnemyControlDispatch *)(enemy))->m37() != 0)) {
                submit_cursor_candidate((int) (enemy), (int) (-1));
                minimap_render_dot((void *) (enemy + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
                ((EnemyControlDispatch *)(enemy))->m26();
                set_flag_3__7TObjectFv((int) (enemy));
                return;
            }
            clear_flag_3__7TObjectFv((int) (enemy));
        }
        if (((EnemyControlDispatch *)(enemy))->m30() != 0) {
            ((EnemyControlDispatch *)(enemy))->m60();
            return;
        }
        if (((EnemyControlDispatch *)(enemy))->m29() != 0) {
            ((EnemyControlDispatch *)(enemy))->m59();
            return;
        }
        if (!(M2C_FIELD(enemy, s32 *, 0x30) & 0x600000)) {
            if ((void *) M2C_FIELD(enemy, u8 **, 0x314) != NULL) {
                m_decision_mode = 0;
            } else {
                m_decision_mode = 2;
            }
            mode = m_decision_mode;
            switch (mode) {
            case 0:
                control_record = (u8 *)(M2C_FIELD(enemy, u8 **, 0x314));
                if (M2C_FIELD(control_record, s32 *, 8) & 4) {
                    ((EnemyControlDispatch *)(enemy))->m58();
                    return;
                }
                if (M2C_FIELD(control_record, f32 *, 0x24) > lbl_805DA8C0) {
                    ((EnemyControlDispatch *)(enemy))->m57();
                    return;
                }
                ((EnemyControlDispatch *)(enemy))->m56();
                break;
            case 1:
            case 2:
                ((EnemyControlDispatch *)(enemy))->m26();
                if (((EnemyControlDispatch *)(enemy))->m27() != 0) {
                    ((EnemyControlDispatch *)(enemy))->m56();
                    return;
                }
                if (((EnemyControlDispatch *)(enemy))->m32() != 0) {
                    ((EnemyControlDispatch *)(enemy))->m57();
                    return;
                }
                if (((EnemyControlDispatch *)(enemy))->m28() != 0) {
                    ((EnemyControlDispatch *)(enemy))->m58();
                    return;
                }
                ((EnemyControlDispatch *)(enemy))->m57();
                break;

            }
        }
    }
}

TObjControl::~TObjControl() {}

extern "C" {
void *TObjControl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjControl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B04;
    M2C_FIELD(arg0, u16 *, 0x1C) = 2;
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    return arg0;
}

void handle_6x9C_set_enemy_low_game_flags_ultimate(Msg_800F62E0 *arg0) {
    Ene_800F62E0 *e;
    s32 flags;
    if (arg0 == NULL) {
        return;
    }
    if (lbl_805D5550 != 3) {
        return;
    }
    bswap_field__6TLobbyFPv(arg0);
    if (arg0->id < 0x1000) {
        return;
    }
    if (arg0->id >= 0x4000) {
        return;
    }
    e = find_active_entity_by_id(arg0->id);
    if (e == NULL) {
        return;
    }
    if (all_parents_unqueued_for_destruction__7TObjectFv(e) == 0) {
        return;
    }
    if (obj_testFlags30(e, 0x800) != 0) {
        return;
    }
    flags = arg0->flags;
    if (obj_testFlags30(e, flags) != 0) {
        return;
    }
    obj_setFlags30(e, flags);
    switch (flags) {
    case 2:
        e->m43();
        break;
    case 3:
        break;
    case 4:
        e->m47();
        break;
    case 16:
        e->m45();
        break;
    case 32:
        e->m46(0);
        break;
    }
}

void TLobby__sub_800F641C(Obj_800F641C *self, s32 arg) {
    Msg_800F641C msg;
    TLobby__sub_800F79C4((u8 *)&msg);
    msg.id = self->id;
    msg.arg = arg;
    broadcast_state__6TLobbyFPv(&msg);
}

void handle_6x0A_update_enemy_state(Msg_800F6464 *arg0) {
    Hdr_800F6464 sp;
    u16 idx;
    Ene_800F6464 *e;
    bswap_enemy_state__6TLobbyFPv(arg0);
    idx = arg0->f4;
    copy_header__6TLobbyFPvPv(&sp, &TLobby__data_805D6144[idx]);
    sp.y = arg0->f6;
    if (lbl_805D5550 == 3) {
        sp.w &= 0x3F;
        sp.w = (arg0->f8 & ~0x3F) | sp.w;
    } else {
        sp.w = arg0->f8;
    }
    apply_by_index__9TObjEnemyFs(idx, &sp);
    e = get_enemy_entity(arg0->f2);
    if (e != NULL) {
        e->m78(&sp);
    }
}

s32 TObjPlayer__sub_800F65D0(u8 *self, s32 kind) {
    Pkt_800F65D0 pkt;
    s32 ret;
    ret = 0;
    if (*(u16 *)(self + 0x1C) >= 0x1000 && *(u16 *)(self + 0x1C) < 0x4000) {
        exchange_object_state__6TLobbyFPvis(self, &pkt, 1);
        pkt.diff = *(s16 *)(self + 0x2B8) - *(s16 *)(self + 0x32C);
        pkt.id = *(s32 *)(self + 0x30);
        switch (kind) {
        case 9:
        case 11:
            pkt.a = kind;
            pkt.av = lbl_805DA8C0 * ((f32)TObjPlayer__sub_8001943C(self, 2) / lbl_805DA8C4 - lbl_805DA8C8);
            break;
        case 10:
        case 12:
            pkt.b = kind;
            pkt.bv = lbl_805DA8C0 * ((f32)TObjPlayer__sub_8001943C(self, 3) / lbl_805DA8C4 - lbl_805DA8C8);
            break;
        }
        ret = exchange_object_state__6TLobbyFPvis(self, &pkt, 0);
        if (ret != 0) {
            TLobby__sub_800F6510(self, &pkt);
        }
    }
    return ret;
}

void TObjPlayer__sub_800F673C(VObj_800F673C *arg0, Msg_800F673C *arg1) {
    s32 flags;
    Pair_800F673C p;
    arg0->f32C = arg0->f2B8 - arg1->f6;
    if (lbl_805D5550 == 3) {
        flags = arg1->flags & ~0x3F;
    } else {
        flags = arg1->flags;
        if ((flags & 2) && obj_testFlags30(arg0, 2) == 0) {
            arg0->m43();
        }
        if ((flags & 4) && obj_testFlags30(arg0, 4) == 0) {
            arg0->m47();
        }
        if ((flags & 0x10) && obj_testFlags30(arg0, 0x10) == 0) {
            arg0->m45();
        }
        if ((flags & 0x20) && obj_testFlags30(arg0, 0x20) == 0) {
            arg0->m46(0);
        }
    }
    obj_setFlags30(arg0, flags);
    p.a = arg1->b8;
    p.b = arg1->b9;
    arg1->b8 = 0;
    arg1->b9 = 0;
    switch (p.a) {
    case 9:
    case 11:
        arg0->m49(p);
        break;
    }
    p.a = arg1->bA;
    p.b = arg1->bB;
    arg1->bA = 0;
    arg1->bB = 0;
    switch (p.a) {
    case 10:
    case 12:
        arg0->m50(p);
        break;
    }
}

void call_vt78__10TObjPlayerFPv(void *arg0) {
    struct VObj_800F6960 *o = (struct VObj_800F6960 *)arg0;
    o->m78();
}

void apply_set_data__9TObjEnemyFPvPv(A_800F698C *arg0, B_800F698C *arg1) {
    s32 i;
    arg0->f1C = arg1->f6;
    VecCopy__FP3VecPC3Vec(&arg0->v50, &arg1->v10);
    VecCopy__FP3VecPC3Vec(&arg0->v38, &arg0->v50);
    copy_xyz__10TObjPlayerFPvPv(&arg0->v5C, &arg1->v1C);
    for (i = 0; i < 5; i++) {
        arg0->f354[i] = arg1->f28[i];
    }
    arg0->f368 = arg1->f3C;
    arg0->f36C = arg1->f3E;
    arg0->f28 = arg1->f8;
    arg0->f2A = arg1->fA;
    arg0->f2C = arg1->f0;
    subtractive_rng_seed(arg0->f160, arg0->f1C + lbl_805D5328);
}

void refresh_lobby_state__10TObjPlayerFPv(void* p) { distribute_experience((TObjPlayer_800F6B68 *)((void*)(p))); query_lobby_state__10TObjPlayerFPv((void*)(p)); }

int query_lobby_state__10TObjPlayerFPv(void* p) { return send_6x60_standard_drop_item_request(p); }

void distribute_experience(TObjPlayer_800F6B68 *self) {
    s32 count;
    s32 i;
    u16 id;
    if (is_split_screen() == 0) {
        ((void (*)(void *, u16))award_enemy_experience)(self, self->attacker_id);
    } else {
        count = get_attack_credit_slot_count(self);
        for (i = 0; i < count; i++) {
            id = obj_getArrU16_FC(self, i);
            if (id == 0xFFFF) {
                break;
            }
            ((void (*)(void *, u16))award_enemy_experience)(self, id);
        }
    }
}

void award_enemy_experience(u8 *arg0, s32 arg1) {
    s32 val;
    Plr_800F6BF0 *p;

    if ((u16)arg1 >= 0x1000 || (p = get_player_by_client_id(arg1)) == NULL ||
        ((s32 (*)(void *, int))obj_testFlags30)(p, 0x800) != 0 || get_field_3e4__10TObjPlayerFPv(p) != get_current_floor()) {
        return;
    }
    val = M2C_FIELD(M2C_FIELD(arg0, void **, 0x2B0), s32 *, 0x1C);
    if ((u16)arg1 == M2C_FIELD(arg0, u16 *, 0x2D4)) {
        if (get_rule_field_0__6TLobbyFPv(lbl_8050EA40) == 1) {
            fn_801B0480(p, arg0, 1);
            draw_player_status(p, p, &lbl_805DA8CC);
            draw_player_status(p, arg0, &lbl_805DA8D0);
        }
        TObjPlayer__sub_800111A8(p, 1);
    } else {
        val = (s32)((f32)val * lbl_805DA8D4);
    }
    if (is_quest_active() == 1) {
        if (is_flag_set__6TLobbyFv() != 0) {
            val = (s32)((f32)val * TLobby__sub_800F7A7C());
        } else if (is_challenge_mode_active() != 0) {
            val = (s32)((f32)val * TLobby__sub_800F7A6C());
        }
    }
    p->m12(val);
    create_font_small_task(arg0 + 0x2FC, 0xFFFF00FF, 0x14, 0x14, &lbl_805DA8D8, val, obj_getField1c(p));
}

#pragma push
#pragma fp_contract on
void update_prev_position__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x2B0));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) ((lbl_805DA8DC * M2C_FIELD(temp_r3, f32 *, 0x10)) + M2C_FIELD(arg0, f32 *, 0x300));
    }
}
extern int fold_flush_0;
#pragma pop

void TObjPlayer__sub_800F6E2C(void *arg0, Node_800F6E2C *arg1, Node_800F6E2C *arg2) {
    Node_800F6E2C *p = arg1->f34C;
    Node_800F6E2C *q = arg2->f34C;
    if (p != NULL) {
        while (p->f348 != NULL) {
            p = p->f348;
        }
        if (q == NULL) {
            if (p->f344 != NULL) {
                p->f344->f348 = NULL;
                p->f344 = NULL;
            }
            p->f340 = arg2;
            arg2->f34C = p;
            return;
        }
        while (q->f348 != NULL) {
            q = q->f348;
        }
        if (p->f344 != NULL) {
            p->f344->f348 = NULL;
        }
        p->f344 = q;
        q->f348 = p;
    }
}

void unlink_enemy_group_relations(u8 *arg0) {
    u8 *temp_r0;
    u8 *temp_r0_2;
    u8 *temp_r0_3;
    u8 *temp_r0_4;
    u8 *temp_r0_5;
    u8 *temp_r0_6;
    u8 *temp_r0_7;
    u8 *temp_r0_8;
    u8 *temp_r0_9;
    u8 *temp_r4;
    u8 *temp_r4_2;
    u8 *temp_r4_3;
    u8 *temp_r4_4;
    u8 *temp_r4_5;
    u8 *temp_r5;
    u8 *temp_r5_2;
    u8 *temp_r5_3;
    u8 *temp_r5_4;
    u8 *temp_r5_5;
    u8 *var_r5;
    u8 *var_r6;
    u8 *var_r6_2;
    u8 *var_r6_3;
    temp_r5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x340));
    if (temp_r5 != NULL) {
        temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x348));
        if (temp_r4 != NULL) {
            temp_r5_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34C));
            if (temp_r5_2 != NULL) {
                temp_r0 = (u8 *)(M2C_FIELD(temp_r4, u8 **, 0x34C));
                if (temp_r0 != NULL) {
                    var_r6 = (u8 *)(temp_r0);
while (M2C_FIELD(var_r6, u8 **, 0x348) != NULL) {
    var_r6 = M2C_FIELD(var_r6, u8 **, 0x348);
}
                    M2C_FIELD(var_r6, u8 **, 0x348) = temp_r5_2;
                    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x340) = NULL;
                    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x344) = var_r6;
                } else {
                    M2C_FIELD(temp_r4, u8 **, 0x34C) = temp_r5_2;
                    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x340) = (void *) M2C_FIELD(arg0, u8 **, 0x348);
                }
            }
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x340), void **, 0x34C) = (void *) M2C_FIELD(arg0, u8 **, 0x348);
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x348), void **, 0x340) = (void *) M2C_FIELD(arg0, u8 **, 0x340);
            M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x348), void **, 0x344) = NULL;
        } else {
            temp_r0_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34C));
            if (temp_r0_3 != NULL) {
                M2C_FIELD(temp_r5, u8 **, 0x34C) = temp_r0_3;
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x340) = (void *) M2C_FIELD(arg0, u8 **, 0x340);
            } else {
                M2C_FIELD(temp_r5, u8 **, 0x34C) = NULL;
            }
        }
    } else {
        temp_r5_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x344));
        if (temp_r5_3 != NULL) {
            temp_r4_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x348));
            if (temp_r4_2 != NULL) {
                temp_r5_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34C));
                if (temp_r5_4 != NULL) {
                    temp_r0_4 = (u8 *)(M2C_FIELD(temp_r4_2, u8 **, 0x34C));
                    if (temp_r0_4 != NULL) {
                        var_r6_2 = (u8 *)(temp_r0_4);
while (M2C_FIELD(var_r6_2, u8 **, 0x348) != NULL) {
    var_r6_2 = M2C_FIELD(var_r6_2, u8 **, 0x348);
}
                        M2C_FIELD(var_r6_2, u8 **, 0x348) = temp_r5_4;
                        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x340) = NULL;
                        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x344) = var_r6_2;
                    } else {
                        M2C_FIELD(temp_r4_2, u8 **, 0x34C) = temp_r5_4;
                        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x340) = (void *) M2C_FIELD(arg0, u8 **, 0x348);
                    }
                }
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x344), void **, 0x348) = (void *) M2C_FIELD(arg0, u8 **, 0x348);
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x348), void **, 0x344) = (void *) M2C_FIELD(arg0, u8 **, 0x344);
            } else {
                temp_r4_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34C));
                if (temp_r4_3 != NULL) {
                    temp_r0_6 = (u8 *)(M2C_FIELD(temp_r5_3, u8 **, 0x34C));
                    if (temp_r0_6 != NULL) {
                        var_r5 = (u8 *)(temp_r0_6);
while (M2C_FIELD(var_r5, u8 **, 0x348) != NULL) {
    var_r5 = M2C_FIELD(var_r5, u8 **, 0x348);
}
                        M2C_FIELD(var_r5, u8 **, 0x348) = temp_r4_3;
                        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x340) = NULL;
                        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x344) = var_r5;
                    } else {
                        M2C_FIELD(temp_r5_3, u8 **, 0x34C) = temp_r4_3;
                        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x340) = (void *) M2C_FIELD(arg0, u8 **, 0x344);
                    }
                }
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x344), void **, 0x348) = NULL;
            }
        } else {
            temp_r4_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x348));
            if (temp_r4_4 != NULL) {
                temp_r5_5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34C));
                if (temp_r5_5 != NULL) {
                    temp_r0_8 = (u8 *)(M2C_FIELD(temp_r4_4, u8 **, 0x34C));
                    if (temp_r0_8 != NULL) {
                        var_r6_3 = (u8 *)(temp_r0_8);
while (M2C_FIELD(var_r6_3, u8 **, 0x348) != NULL) {
    var_r6_3 = M2C_FIELD(var_r6_3, u8 **, 0x348);
}
                        M2C_FIELD(var_r6_3, u8 **, 0x348) = temp_r5_5;
                        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x340) = NULL;
                        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x344) = var_r6_3;
                    } else {
                        M2C_FIELD(temp_r4_4, u8 **, 0x34C) = temp_r5_5;
                        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34C), void **, 0x340) = (void *) M2C_FIELD(arg0, u8 **, 0x348);
                    }
                }
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x348), void **, 0x344) = NULL;
            } else {
                temp_r4_5 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34C));
                if (temp_r4_5 != NULL) {
                    M2C_FIELD(temp_r4_5, u8 **, 0x340) = NULL;
                }
            }
        }
    }
    M2C_FIELD(arg0, u8 **, 0x340) = NULL;
    M2C_FIELD(arg0, u8 **, 0x344) = NULL;
    M2C_FIELD(arg0, u8 **, 0x348) = NULL;
    M2C_FIELD(arg0, u8 **, 0x34C) = NULL;
}

}

extern "C" {

#define FIND_TAIL_800F7118(q) \
    if (self->next == NULL && tail == NULL) { \
        while (q->next != NULL) { \
            q = q->next; \
        } \
        tail = q; \
    }
void link_into_group_chain__10TObjPlayerFPv(Ply_800F7118 *self) {
    Ply_800F7118 *p;
    Ply_800F7118 *head;
    Ply_800F7118 *tail;
    s32 i;
    Ply_800F7118 *q;
    Ply_800F7118 *r;
    u16 id;
    if (self->f36C > 0 && self->f340 == NULL && self->f344 == NULL) {
        head = NULL;
        tail = NULL;
        for (i = lbl_805D586C; i < lbl_805D586C + lbl_805D5870; i++) {
            p = (Ply_800F7118 *)get_player_data__10TObjPlayerFi(i);
            if (p == NULL || p == self) {
                continue;
            }
            id = obj_getField1c(p);
            if (id < 0x1000 || id >= 0x4000) {
                continue;
            }
            if (p->f30 & 0x800) {
                continue;
            }
            if (p->f36C != self->f36C || p->f28 != self->f28) {
                continue;
            }
            switch (self->f334) {
            case 2:
                switch (p->f334) {
                case 2:
                    FIND_TAIL_800F7118(p);
                    break;
                }
                break;
            case 1:
                switch (p->f334) {
                case 2:
                    if (head == NULL) {
                        q = p->prev;
                        if (q == NULL) {
                            head = p;
                        } else FIND_TAIL_800F7118(q);
                    }
                    break;
                case 1:
                    FIND_TAIL_800F7118(p);
                    break;
                }
                break;
            case 0:
                switch (p->f334) {
                case 2:
                    if (head == NULL) {
                        q = p->prev;
                        if (q == NULL) {
                            head = p;
                        } else {
                            r = q->prev;
                            if (r == NULL) {
                                head = q;
                            } else FIND_TAIL_800F7118(r);
                        }
                    }
                    break;
                case 1:
                    q = p->prev;
                    if (q == NULL) {
                        head = p;
                    } else FIND_TAIL_800F7118(q);
                    break;
                default:
                    FIND_TAIL_800F7118(p);
                    break;
                }
                break;
            }
        }
        if (head != NULL) {
            self->f340 = head;
            head->prev = self;
        } else if (tail != NULL) {
            self->f344 = tail;
            tail->next = self;
        }
    }
}

}
s32 TObjEnemy::countChildren() {
    TObjEnemy* child = children;
    s32 count = 0;
    if (child) {
        TObjEnemy* cur = child;
        while ((child = cur->next) != NULL) {
            cur = child;
            ++count;
        }
        ++count;
    }
    return count;
}

extern "C" {
s32 is_action_available__10TObjPlayerFv(TObjEnemy* _w0) {
    return ((s32)_w0->groupRoot()) ? 1 : 0;
}

}
TObjEnemy* TObjEnemy::groupRoot() {
    TObjEnemy* current=this;
    while(current->previous) current=current->previous;
    TObjEnemy* group=current->group;
    if(group) return group;
    return 0;
}

extern "C" {
s32 bind_enemy_combat_stats(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    f32 temp_f31;
    f32 temp_f31_2;
    f32 temp_f31_3;
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r0_3;
    s16 temp_r0_4;
    s16 temp_r30;
    u8 *temp_r4;
    u8 *temp_r6;

    if (arg1 != NULL) {
        M2C_FIELD(arg0, u8 **, 0x2B0) = arg1;
        temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2B0));
        M2C_FIELD(arg0, s16 *, 0x2B8) = (s16) (M2C_FIELD(temp_r6, s16 *, 6) + M2C_FIELD(temp_r6, s32 *, 0x18));
        M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
        if (obj_testFlag_2E4(arg0, 4U) != 0) {
            M2C_FIELD(arg0, s16 *, 0x2BA) = 0;
            M2C_FIELD(arg0, s16 *, 0x32E) = 0;
        } else {
            temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2B0));
            M2C_FIELD(arg0, s16 *, 0x2BA) = (s16) (M2C_FIELD(temp_r4, s16 *, 2) + M2C_FIELD(temp_r4, s32 *, 0x18));
            M2C_FIELD(arg0, s16 *, 0x32E) = (s16) M2C_FIELD(arg0, s16 *, 0x2BA);
        }
        goto block_6;
    }
    if ((void *) M2C_FIELD(arg0, u8 **, 0x2B0) == NULL) {
        return 0;
    }
block_6:
    if (arg2 != NULL) {
        M2C_FIELD(arg0, u8 **, 0x318) = arg2;
        goto block_10;
    }
    if ((void *) M2C_FIELD(arg0, u8 **, 0x318) == NULL) {
        return 0;
    }
block_10:
    if (arg3 != NULL) {
        M2C_FIELD(arg0, u8 **, 0x31C) = arg3;
        goto block_14;
    }
    if ((void *) M2C_FIELD(arg0, u8 **, 0x31C) == NULL) {
        return 0;
    }
block_14:
    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x2C8) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x2C0) = temp_r0;
    temp_r30 = get_level__10TObjPlayerFPv(M2C_FIELD(arg0, u8 **, 0x318));
    temp_r0_2 = temp_r30 - get_id__10TObjPlayerFPv(M2C_FIELD(arg0, u8 **, 0x318));
    M2C_FIELD(arg0, s16 *, 0x2CA) = temp_r0_2;
    M2C_FIELD(arg0, s16 *, 0x2C2) = temp_r0_2;
    temp_r0_3 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), s16 *, 4) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x31C), s16 *, 0);
    M2C_FIELD(arg0, s16 *, 0x2CC) = temp_r0_3;
    M2C_FIELD(arg0, s16 *, 0x2C4) = temp_r0_3;
    temp_r0_4 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), s16 *, 8) + M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x31C), s32 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x2CE) = temp_r0_4;
    M2C_FIELD(arg0, s16 *, 0x2C6) = temp_r0_4;
    M2C_FIELD(arg0, s16 *, 0x2D0) = (s16) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), s16 *, 0xA) + TObjPlayer__sub_800194E8(M2C_FIELD(arg0, u8 **, 0x318)));
    M2C_FIELD(arg0, s16 *, 0x2D2) = (s16) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), s16 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0x2F2) = (s16) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x31C), s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0x2F4) = (s16) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x31C), s16 *, 6);
    M2C_FIELD(arg0, s16 *, 0x2F6) = (s16) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x31C), s16 *, 4);
    M2C_FIELD(arg0, s16 *, 0x2F8) = (s16) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x31C), s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0x2FA) = (s16) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x31C), s16 *, 8);
    add_to_field_2c8__10TObjPlayerFPvi(arg0, (s32)((f32)get_field_2c0__10TObjPlayerFPv(arg0) * TObjPlayer__sub_800192C4((s32)arg0, 2)));
    add_to_field_2ca__10TObjPlayerFPvi(arg0, (s32)((f32)get_field_2c2__10TObjPlayerFPv(arg0) * TObjPlayer__sub_800192C4((s32)arg0, 2)));
    add_to_field_2ce__10TObjPlayerFPvi(arg0, (s32)((f32)get_atp__10TObjPlayerFPv(arg0) * TObjPlayer__sub_800192C4((s32)arg0, 3)));
    return 1;
}

}
