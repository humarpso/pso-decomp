#include "types.h"
#include "pso/TObjControl.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

typedef s32 M2C_UNK;
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

extern "C" {
void TLobby__sub_800F79C4(u8 *arg0);
void broadcast_state__6TLobbyFPv(void* p);
void TLobby__sub_800F641C(Obj_800F641C *self, s32 arg);
void bswap_enemy_state__6TLobbyFPv(void *);
void copy_header__6TLobbyFPvPv(void *, void *);
extern Hdr_800F6464 *TLobby__data_805D6144;
extern s32 lbl_805D5550;
void apply_by_index__9TObjEnemyFs(s16, void *);
Ene_800F6464 *get_enemy_entity(u16);
void handle_6x0A_update_enemy_state(Msg_800F6464 *arg0);
s32 obj_testFlags30(void *, s32);
void obj_setFlags30(void *, s32);
Ene_800F62E0 *find_active_entity_by_id(u16);
void bswap_field__6TLobbyFPv(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern s32 lbl_805D5550;
void handle_6x9C_set_enemy_low_game_flags_ultimate(Msg_800F62E0 *arg0);
s32 TObjPlayer__sub_8001943C(void *, int);
s32 TLobby__sub_8002AFD4(void *, void *, int);
M2C_UNK TLobby__sub_800F6510(void *, void *);
extern const f32 lbl_805DA8C0;
extern const f32 lbl_805DA8C4;
extern const f32 lbl_805DA8C8;
s32 TObjPlayer__sub_800F65D0(u8 *self, s32 kind);
s32 obj_testFlags30(void *, s32);
void obj_setFlags30(void *, s32);
extern s32 lbl_805D5550;
void TObjPlayer__sub_800F673C(VObj_800F673C *arg0, Msg_800F673C *arg1);
}

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag_3__7TObjectFv(int);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK clear_flag_3__7TObjectFv(int);
M2C_UNK submit_cursor_candidate(int, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
extern const f32 lbl_805DA8C0;

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

void *TObjControl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__11TObjControl[];
extern void *lbl_805D2B04;

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
        TLobby__sub_8002AFD4(self, &pkt, 1);
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
        ret = TLobby__sub_8002AFD4(self, &pkt, 0);
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

}
