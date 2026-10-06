#include "types.h"
#include <stddef.h>
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/boss/TBoss4DarkFalz.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Color_802ABF44 { f32 a, b, c, d; };

extern "C" {
void *get_player_data__10TObjPlayerFi(s32 i);
s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0);
s16 obj_getField1c(void *);
u8 *get_player_by_client_id(s32);
s32 get_field_3e0__12TBoss3VoloptFPv(void *p);
u8 *VecCopy__FP3VecPC3Vec(void *, void *);
extern u8 lbl_8047059C[];
extern u32 TBoss6PlotFalz__data_805D66F0;
extern u32 TBoss6PlotFalz__data_805D66F4;
int queue_destruction__7TObjectFv(void *);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern s32 lbl_805D66F8;
extern s32 lbl_805D586C;
void set_chunk_material_override_pair(int, int, s32, s32);
void set_chunk_material_color(Color_802ABF44 *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 rand(void);
}

#define get_player_data__10TObjPlayerFi ((Player_802AAE78 *(*)(s32))get_player_data__10TObjPlayerFi)
#define is_state_1f__14TBoss6PlotFalzFUi ((s32 (*)())is_state_1f__14TBoss6PlotFalzFUi)

struct Player_802AAE78 { u8 pad[0x32C]; s16 f32c; };

struct VBase_18_a328de { char pad[0x18]; };

struct VObj_18_a328de : VBase_18_a328de {
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
    virtual M2C_UNK m73();
};

extern "C" {
extern u16 lbl_80540B28[];
u16 TBoss6PlotFalz__sub_802AAE48(s32 i);
s32 is_active__14TBoss6PlotFalzFPv(void *arg0);
s32 TBoss6PlotFalz__sub_802AAE78(void);
s32 obj_isState2_324(void *);
s16 obj_getS16_32C(void *);
M2C_UNK send_6x2F_change_player_hp(int, s32, s16);
M2C_UNK calc_photon_blast_charge__10TObjPlayerFv(void *, s32);
s32 TBoss6PlotFalz__sub_802AAD84(s32 arg0, u32 arg1);

struct TBoss6PlotFalz_802AACF4 { u8 pad[0x3D0]; s32 f3D0; s32 f3D4; s32 f3D8; };
void set_shake_preset__11TCameraCtrlFi(int);
}

extern "C" {

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void TBoss6PlotFalz__sub_802AACF4(TBoss6PlotFalz_802AACF4 *o) {
    if (o->f3D0 != 0) {
        s32 n = o->f3D4 - 1;
        o->f3D4 = n;
        if (n < 0) {
            set_shake_preset__11TCameraCtrlFi(o->f3D8);
            o->f3D4 = (s32)(60.0f * (3.0517578125e-05f * (f32)rand()) + 60.0f);
        }
    }
}
#pragma pop

s32 TBoss6PlotFalz__sub_802AAD84(s32 arg0, u32 arg1) {
    u32 v;
    u8 *p;
    s32 hp;
    u16 id;
    id = arg0;
    v = arg1;
    if (id == 0xFFFF || (p = get_player_by_client_id(id)) == NULL || is_active__14TBoss6PlotFalzFPv(p) == 0) {
        return 0;
    }
    hp = obj_getS16_32C(p);
    if ((u32)hp < v) {
        v = hp;
    }
    if (obj_isState2_324(p) != 0) {
        return v;
    }
    hp -= v;
    send_6x2F_change_player_hp(0xFFFF, arg0, hp);
    calc_photon_blast_charge__10TObjPlayerFv(p, v);
    ((VObj_18_a328de *)p)->m73();
    return v;
}

u16 TBoss6PlotFalz__sub_802AAE48(s32 i) {
    if (i < 0 || i >= 4) return 0xFFFF;
    return lbl_80540B28[i];
}

s32 TBoss6PlotFalz__sub_802AAE78(void) {
    s32 vals[4];
    s32 i;
    s32 j;
    s32 n;
    Player_802AAE78 *p;
    s32 t;
    s32 k;
    u16 s;
    for (i = 0; i < 4; i++) {
        lbl_80540B28[i] = 0xFFFF;
        vals[i] = -1;
    }
    n = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && is_active__14TBoss6PlotFalzFPv(p) != 0 && p->f32c != 0) {
            lbl_80540B28[n] = obj_getField1c(p);
            vals[n] = p->f32c;
            n++;
        }
    }
    for (i = 2; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            k = j + 1;
            if (vals[j] < vals[k]) {
                t = vals[j];
                vals[j] = vals[k];
                vals[k] = t;
                s = lbl_80540B28[j];
                lbl_80540B28[j] = lbl_80540B28[k];
                lbl_80540B28[k] = s;
            }
        }
    }
    return n;
}

u16 TBoss6PlotFalz__sub_802AAFCC(void) {
    u16 ids[4];
    s32 n;
    s32 i;
    Player_802AAE78 *p;

    n = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && is_active__14TBoss6PlotFalzFPv(p) != 0) {
            ids[n] = obj_getField1c(p);
            n++;
        }
    }
    if (n == 0) {
        return 0xFFFF;
    }
    return ids[(s32)(((f32)n - 0.1f) * (3.0517578125e-05f * (f32)rand()))];
}

s32 is_active__14TBoss6PlotFalzFPv(void *arg0) {
    if ((is_state_1f__14TBoss6PlotFalzFUi() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000800)) {
        return 1;
    }
    return 0;
}

}
#undef get_player_data__10TObjPlayerFi
#undef is_state_1f__14TBoss6PlotFalzFUi

#define TBoss6PlotFalz__sub_802AACF4 ((s32 (*)(void *))TBoss6PlotFalz__sub_802AACF4)
#define get_field_3e0__12TBoss3VoloptFPv ((s32 (*)())get_field_3e0__12TBoss3VoloptFPv)

struct Stack_802AB1C8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_802AB1C8 { s32 words[3]; void (TBoss6PlotFalz::*action)(); };

struct RecoveredGlobal_802AB1C8_TBoss6PlotFalz__data_804DE66C {
    M2C_UNK value;
    u8 remaining[0x1D0];
};

struct Stack_802AB14C {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_802AB14C { s32 words[3]; void (TBoss6PlotFalz::*action)(); };

struct RecoveredGlobal_802AB14C_TBoss6PlotFalz__data_804DE66C {
    M2C_UNK value;
    u8 remaining[0x1D0];
};

union MemberActionStorage_802AB2B8 { s32 words[3]; void (TBoss6PlotFalz::*action)(); };

extern "C" {
extern RecoveredGlobal_802AB1C8_TBoss6PlotFalz__data_804DE66C TBoss6PlotFalz__data_804DE66C;
void TBoss6PlotFalz__sub_802AB1C8(u8 *arg0);
void TBoss6PlotFalz__sub_802AB14C(u8 *arg0);
void TBoss6PlotFalz__sub_802AB2B8(u8 *arg0, s32 arg1);
}

extern "C" {

void activate_warp__14TBoss6PlotFalzFPv(void* p);
void free_child__14TBoss6PlotFalzFPv(void* p);
void reset_state__14TBoss6PlotFalzFPv(void* p);
void set_state_2__14TBoss6PlotFalzFPv(void* p);
int TBoss6EmptyWarp__sub_802B1004(void*);
int activate_warp__15TBoss6EmptyWarpFPv(void*);

s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0) {
    if ((arg0 == 0U) || (get_field_3e0__12TBoss3VoloptFPv() != 0x1F)) {
        return 0;
    }
    return 1;
}

typedef char MemberActionStorage_802AB1C8_size[sizeof(MemberActionStorage_802AB1C8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_802AB1C8_TBoss6PlotFalz__data_804DE66C_size[sizeof(RecoveredGlobal_802AB1C8_TBoss6PlotFalz__data_804DE66C) == 0x1D4 ? 1 : -1];

typedef char MemberActionStorage_802AB14C_size[sizeof(MemberActionStorage_802AB14C) == 12 ? 1 : -1];
typedef char RecoveredGlobal_802AB14C_TBoss6PlotFalz__data_804DE66C_size[sizeof(RecoveredGlobal_802AB14C_TBoss6PlotFalz__data_804DE66C) == 0x1D4 ? 1 : -1];
void TBoss6PlotFalz__sub_802AB14C(u8 *arg0) {
  MemberActionStorage_802AB14C member_action;
  Stack_802AB14C stack;
  u8 *temp_r6;
  temp_r6 = (u8 *) (&(*(RecoveredGlobal_802AB14C_TBoss6PlotFalz__data_804DE66C *)&TBoss6PlotFalz__data_804DE66C).value);
  temp_r6 = temp_r6 + ((*((s32 *) (((s8 *) arg0) + 0x378))) * 0x34);
  member_action.words[0] = *((s32 *) (((s8 *) temp_r6) + 0x28));
  member_action.words[1] = *((s32 *) (((s8 *) temp_r6) + 0x2C));
  member_action.words[2] = *((s32 *) (((s8 *) temp_r6) + 0x30));
  if (member_action.action != 0)
  {
    (((TBoss6PlotFalz *)((void *) arg0))->*( member_action.action))();
  }
  TBoss6PlotFalz__sub_802AACF4((void *) arg0);
}

void TBoss6PlotFalz__sub_802AB1C8(u8 *arg0) {
  MemberActionStorage_802AB1C8 member_action;
  Stack_802AB1C8 stack;
  u8 *temp_r6;
  if (1)
  {
    temp_r6 = (u8 *) (&TBoss6PlotFalz__data_804DE66C.value);
    temp_r6 = temp_r6 + ((*((s32 *) (((s8 *) arg0) + 0x378))) * 0x34);
    member_action.words[0] = *((s32 *) (((s8 *) temp_r6) + 0x1C));
  }
  member_action.words[1] = *((s32 *) (((s8 *) temp_r6) + 0x20));
  member_action.words[2] = *((s32 *) (((s8 *) temp_r6) + 0x24));
  if (member_action.action != 0)
  {
    (((TBoss6PlotFalz *)((void *) arg0))->*( member_action.action))();
  }
}

void set_state_2__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 2; }
void reset_state__14TBoss6PlotFalzFPv(void* p) { *(s32*)((char*)p + 0x3d4) = 0; *(s32*)((char*)p + 0x3d8) = 0; }
void activate_warp__14TBoss6PlotFalzFPv(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) activate_warp__15TBoss6EmptyWarpFPv(m); }
void free_child__14TBoss6PlotFalzFPv(void* p) { void* m = *(void**)((char*)p + 0x384); if (m) TBoss6EmptyWarp__sub_802B1004(m); }
void TBoss6PlotFalz__sub_802AB2B8(u8 *arg0, s32 arg1) {
    MemberActionStorage_802AB2B8 leave;
    MemberActionStorage_802AB2B8 enter;
    u8 *e;
    if (arg1 < 0 || arg1 >= 9) {
        return;
    }
    {
        if (*(s32 *)(arg0 + 0x378) != -1) {
            e = (u8 *)&TBoss6PlotFalz__data_804DE66C.value;
            e = e + *(s32 *)(arg0 + 0x378) * 0x34;
            leave.words[0] = *(s32 *)(e + 0x10);
            leave.words[1] = *(s32 *)(e + 0x14);
            leave.words[2] = *(s32 *)(e + 0x18);
            if (leave.action != 0) {
                (((TBoss6PlotFalz *)arg0)->*(leave.action))();
            }
        }
        *(s32 *)(arg0 + 0x378) = arg1;
        e = (u8 *)&TBoss6PlotFalz__data_804DE66C.value;
            e = e + *(s32 *)(arg0 + 0x378) * 0x34;
        enter.words[0] = *(s32 *)(e + 0x4);
        enter.words[1] = *(s32 *)(e + 0x8);
        enter.words[2] = *(s32 *)(e + 0xC);
        if (enter.action != 0) {
            (((TBoss6PlotFalz *)arg0)->*(enter.action))();
        }
    }
}

}
#undef TBoss6PlotFalz__sub_802AACF4
#undef get_field_3e0__12TBoss3VoloptFPv

#define get_player_data__10TObjPlayerFi ((Player_802AB3E0 *(*)(int))get_player_data__10TObjPlayerFi)
#define is_state_1f__14TBoss6PlotFalzFUi ((int (*)(Player_802AB3E0 *))is_state_1f__14TBoss6PlotFalzFUi)
#define get_player_by_client_id ((u8 *(*)(u16))get_player_by_client_id)
#define lbl_8047059C (*(RecoveredGlobal_802AB684_lbl_8047059C *)lbl_8047059C)

struct Stack_802AB684 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802AB684_lbl_8047059C { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802AB684_lbl_8047059C_size[sizeof(RecoveredGlobal_802AB684_lbl_8047059C) == 0xC ? 1 : -1];

struct Vec_802AB3E0 { f32 x, y, z; };

struct Player_802AB3E0 { u8 pad[0x38]; Vec_802AB3E0 pos; };

struct Vec_802AB6CC { f32 x, y, z; };

extern "C" {
void fn_803594B4(void *, s32, f32);
void TBoss6PlotFalz__sub_802AB568(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK vector_length(void *);
M2C_UNK subtract_vector(void *, void *);
void TBoss6PlotFalz__sub_802AB684(s32 arg0);
int spawn_particle_effect(void *, int);
int play_sound_effect(int, int, int, int);
int TBoss6Thanks__sub_8035D270();
void TBoss6PlotFalz__sub_802AB3E0(void);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TCameraCtrl__sub_80068958();
s32 angle_diff_s16(s32, s32);
M2C_UNK get_camera_no__11TCameraCtrlFv();
M2C_UNK vec3_add_to(void *, void *);
f32 vec3_dot(void *, void *);
M2C_UNK normalize_vector(void *);
extern const f64 lbl_804705E0[];
extern u8 *lbl_805D4DF0;
s32 TBoss6PlotFalz__sub_802AB6CC(void *arg0, f32 r);
}

extern "C" {

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0);

s32 TLobby__sub_800C6C10();

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0) {
    if (TLobby__sub_800C6C10() != 0) {
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 1;
}

void TBoss6PlotFalz__sub_802AB3E0(void) {
    Vec_802AB3E0 v;
    Player_802AB3E0 *p;
    s32 i;
    f32 k;
    if (TBoss6Thanks__sub_8035D270() != 0) {
        play_sound_effect(0x40033231, 0, 0, 0);
        k = 12.5f;
        for (i = 0; i < lbl_805D586C; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (is_state_1f__14TBoss6PlotFalzFUi(p) != 0) {
                VecCopy__FP3VecPC3Vec((void *)(&v), (void *)(&p->pos));
                v.y += k;
                spawn_particle_effect(&v, 0x29);
            }
        }
    }
}

}
struct VBase_802AB490 { char pad[0x18]; };
struct VObj_802AB490 : VBase_802AB490 {
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
    virtual void m77(void *);
};
struct V3_802AB490 { s32 x, y, z; };
struct Msg_802AB490 { s32 a, b, c; };
extern "C" {
s32 is_split_screen();
s32 TLobby__sub_8002AFD4(void *, void *, int);
void TLobby__sub_800F6510(void *, void *);
void distribute_experience(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
extern s32 lbl_805D53A0;

void TBoss6PlotFalz__sub_802AB490(u8 *arg0) {
    TBoss6PlotFalz__sub_802AB3E0();
    if (is_split_screen() != 0) {
        distribute_experience(arg0);
    } else {
        u8 *pl = ((u8 *(*)(s32))get_player_by_client_id)(lbl_805D53A0);
        if (pl != NULL) {
            V3_802AB490 saved = *(V3_802AB490 *)(arg0 + 0x2FC);
            VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, pl + 0x2FC);
            distribute_experience(arg0);
            VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, &saved);
        }
    }
    Msg_802AB490 m;
    m.a = 0x800;
    TLobby__sub_800F6510(arg0, &m);
    TLobby__sub_8002AFD4(arg0, &m, 0);
    ((VObj_802AB490 *)arg0)->m77(&m);
    send_entity_set_flags__6TLobbyFPv(arg0);
    queue_destruction__7TObjectFv(arg0);
}

void TBoss6PlotFalz__sub_802AB568(u8 *arg0, s32 arg1, f32 farg0) {
    f32 var_f1;
    u8 *temp_r3;
    var_f1 = farg0;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
    if ((temp_r3 != NULL) && !(var_f1 <= 0.0f)) {
        if (var_f1 > 1.0f) {
            var_f1 = 1.0f;
        }
        fn_803594B4(temp_r3, arg1, var_f1);
    }
}
f32 sin_table_lookup(s32);
#pragma push
#pragma fp_contract on
s32 TBoss6PlotFalz__sub_802AB5B4(s32 arg0, f32 farg0) {
    s32 v = (s32)((f32)arg0 * (farg0 * sin_table_lookup((s32)(65535.0f * (3.0517578125e-05f * (f32)rand())))) + (f32)arg0);
    if (v < 1) {
        v = 1;
    }
    return v;
}
#pragma pop
void TBoss6PlotFalz__sub_802AB684(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_802AB684, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802AB684, spC) == 0x4) ? 1 : -1];
    Stack_802AB684 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0));
    subtract_vector((void *) (&stack.sp8), (void *) (&lbl_8047059C.value));
    stack.spC = 0.0f;
    vector_length((void *) (&stack.sp8));
}
extern "C" {
__declspec(section ".sdata2") const f32 lbl_805DE0A4[1] = { 1e-05f };
}
#define lbl_805DE0A4 (lbl_805DE0A4[0])
#define VLEN(v) (((f32 (*)(void *))vector_length)(v))
s32 TBoss6PlotFalz__sub_802AB6CC(void *arg0, f32 r) {
    Vec_802AB6CC c;
    Vec_802AB6CC pl;
    Vec_802AB6CC p = *(Vec_802AB6CC *)arg0;
    Vec_802AB6CC d1;
    Vec_802AB6CC d2;
    Vec_802AB6CC d3;
    Vec_802AB6CC a;
    Vec_802AB6CC b;
    Vec_802AB6CC dir;
    u8 *player;
    f32 l2;
    f32 l3;
    s32 ang1;
    s32 ang2;
    s32 ang3;
    s32 s1;
    s32 s2;
    p.y = 0.0f;
    get_camera_no__11TCameraCtrlFv();
    player = get_player_by_client_id(TCameraCtrl__sub_80068958());
    if (player == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&pl, player + 0x38);
    VecCopy__FP3VecPC3Vec(&c, lbl_805D4DF0 + 0x178);
    VecCopy__FP3VecPC3Vec(&d1, &p);
    subtract_vector(&d1, &pl);
    d1.y = 0.0f;
    if (VLEN(&d1) < r) {
        return 1;
    }
    VecCopy__FP3VecPC3Vec(&d2, &p);
    subtract_vector(&d2, &c);
    d2.y = 0.0f;
    l2 = VLEN(&d2);
    if (l2 < r) {
        return 1;
    }
    if (l2 > 250.0f) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&d3, &pl);
    subtract_vector(&d3, &c);
    d3.y = 0.0f;
    l3 = VLEN(&d3);
    if (l3 <= lbl_805DE0A4 || l3 > 250.0f) {
        return 0;
    }
    if (l3 < l2 - r) {
        return 0;
    }
    if (vec3_dot(&d2, &d3) <= 0.0f) {
        return 0;
    }
    dir.x = -d2.z;
    dir.y = 0.0f;
    dir.z = d2.x;
    normalize_vector(&dir);
    dir.x *= r;
    dir.z *= r;
    VecCopy__FP3VecPC3Vec(&a, &p);
    vec3_add_to(&a, &dir);
    VecCopy__FP3VecPC3Vec(&b, &p);
    subtract_vector(&b, &dir);
    ang1 = (s32)(lbl_804705E0[0] * get_ad_end_text_start__10TObjPlayerFv(a.x - c.x, a.z - c.z));
    ang2 = (s32)(lbl_804705E0[0] * get_ad_end_text_start__10TObjPlayerFv(b.x - c.x, b.z - c.z));
    ang3 = (s32)(lbl_804705E0[0] * get_ad_end_text_start__10TObjPlayerFv(pl.x - c.x, pl.z - c.z));
    s1 = angle_diff_s16(ang1, ang3);
    s2 = angle_diff_s16(ang3, ang2);
    if ((s1 >= 0 && s2 >= 0) || (s1 <= 0 && s2 <= 0)) {
        if (l3 < l2 + r) {
            return 0;
        }
        return 1;
    }
    return 0;
}

}
#undef VLEN
#undef get_player_data__10TObjPlayerFi
#undef is_state_1f__14TBoss6PlotFalzFUi
#undef get_player_by_client_id
#undef lbl_8047059C

extern "C" {
f32 cos_table_lookup(s32);

f32 TBoss6PlotFalz__sub_802AB9F0(f32 t) {
    if (t < 0.0f) {
        return 0.0f;
    }
    if (t > 1.0f) {
        return 1.0f;
    }
    return 0.5f * (1.0f - cos_table_lookup((s32)(32768.0f * t)));
}
}

#define TBoss6PlotFalz__data_805D66F0 (*(void **)&TBoss6PlotFalz__data_805D66F0)
#define TBoss6PlotFalz__data_805D66F4 (*(u8 **)&TBoss6PlotFalz__data_805D66F4)

extern "C" {
s32 get_state__11TBoss6Type2FPv(void *);
s32 TBoss6PlotFalz__sub_802ABA9C(void);
s32 get_state__14TBoss6GravBallFPv(void *);
s32 TBoss6PlotFalz__sub_802ABADC(void);
}

extern "C" {

f32 get_value__14TBoss6PlotFalzFv(void);

f32 get_value__14TBoss6PlotFalzFv(void) {
    if ((TBoss6PlotFalz__sub_802ABADC() == 0) || ((void *) TBoss6PlotFalz__data_805D66F0 == NULL)) {
        return 0.0f;
    }
    return M2C_FIELD(TBoss6PlotFalz__data_805D66F0, f32 *, 0x3C);
}
s32 TBoss6PlotFalz__sub_802ABA9C(void) {
    if (((void *) TBoss6PlotFalz__data_805D66F4 == NULL) || (get_state__11TBoss6Type2FPv(TBoss6PlotFalz__data_805D66F4) == 0x23)) {
        return 0;
    }
    return 1;
}
s32 TBoss6PlotFalz__sub_802ABADC(void) {
    if (((void *) (*(u8 * *)&TBoss6PlotFalz__data_805D66F0) == NULL) || (get_state__14TBoss6GravBallFPv((*(u8 * *)&TBoss6PlotFalz__data_805D66F0)) == 0x28)) {
        return 0;
    }
    return 1;
}

}
#undef TBoss6PlotFalz__data_805D66F0
#undef TBoss6PlotFalz__data_805D66F4

extern "C" {

void destroy_static_instance__14TBoss6PlotFalzFv(void);
void queue_instance_destruction__14TBoss6PlotFalzFv(void);

void destroy_static_instance__14TBoss6PlotFalzFv(void) {
    if ((u32) TBoss6PlotFalz__data_805D66F4 != 0U) {
        queue_destruction__7TObjectFv((void*)TBoss6PlotFalz__data_805D66F4);
        TBoss6PlotFalz__data_805D66F4 = 0U;
    }
}

void queue_instance_destruction__14TBoss6PlotFalzFv(void) {
    if ((u32) TBoss6PlotFalz__data_805D66F0 != 0U) {
        queue_destruction__7TObjectFv((void*)TBoss6PlotFalz__data_805D66F0);
        TBoss6PlotFalz__data_805D66F0 = 0U;
    }
}

}

#define get_player_data__10TObjPlayerFi ((s32 (*)(s32))get_player_data__10TObjPlayerFi)
#define obj_getField1c ((s16 (*)(s32))obj_getField1c)

struct Stack_802ABCDC {
    s16 spC;
    u8 pad_E[0x4];
    s16 sp12;
    u8 pad_14[0x38];
    u8 sp4C;
};

struct Stack_802ABC64 {
    s16 spC;
    u8 pad_E[0x4];
    s16 sp12;
    s16 sp14;
    u8 pad_16[0x36];
    u8 sp4C;
};

struct RecoveredGlobal_802ABBC4_lbl_804705CC { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802ABBC4_lbl_804705CC_size[sizeof(RecoveredGlobal_802ABBC4_lbl_804705CC) == 0xC ? 1 : -1];

struct RecoveredGlobal_802ABC14_lbl_804705C0 { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802ABC14_lbl_804705C0_size[sizeof(RecoveredGlobal_802ABC14_lbl_804705C0) == 0xC ? 1 : -1];

extern "C" {
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
u32 create__11TBoss6Type1Fi(void *, int);
void TBoss6PlotFalz__sub_802ABCDC(u8 *arg0);
u32 create__11TBoss6Type2Fi(void *, int);
void TBoss6PlotFalz__sub_802ABC64(u8 *arg0);
f32 TBoss6Mine__sub_802ABD88(s32 *arg0);
extern RecoveredGlobal_802ABBC4_lbl_804705CC lbl_804705CC;
s32 TBoss6PlotFalz__sub_802ABBC4(M2C_UNK arg0, s32 arg1);
extern RecoveredGlobal_802ABC14_lbl_804705C0 lbl_804705C0;
s32 TBoss6PlotFalz__sub_802ABC14(M2C_UNK arg0, s32 arg1);
s32 TBoss6Type1__sub_802ABDEC(s32 seed);
s32 is_locally_controlled__10TObjPlayerFPv(s32);
s32 get_game_mode__6TLobbyFv(void);
void spawn_effect__11TBoss4Type3Fsss(s16, s16, s16);
f32 xyz_distance(void *, void *);
void TBoss6PlotFalz__sub_802ABE3C(void *pos, s16 amount, s16 kind, f32 range);
void TBoss6PlotFalz__sub_802ABF44(f32 f);
}

extern "C" {

void ensure_field384__14TBoss6PlotFalzFPv(void *arg0);
void release_object__14TBoss6PlotFalzFPv(void* p);
void reset_fish_globals__8TObjFishFv(void);
u32 create__10TBoss6TubeFPv();

void release_object__14TBoss6PlotFalzFPv(void* p) { if (*(unsigned int*)((char*)p + 0x384) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x384)); *(int*)((char*)p + 0x384) = 0; } }

s32 TBoss6PlotFalz__sub_802ABBC4(M2C_UNK arg0, s32 arg1) {
    if ((u32) TBoss6PlotFalz__data_805D66F4 == 0U) {
        VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (&lbl_804705CC.value));
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (TBoss6PlotFalz__data_805D66F4 + 0x38));
    return 1;
}

s32 TBoss6PlotFalz__sub_802ABC14(M2C_UNK arg0, s32 arg1) {
    if ((u32) TBoss6PlotFalz__data_805D66F0 == 0U) {
        VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (&lbl_804705C0.value));
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (TBoss6PlotFalz__data_805D66F0 + 0x38));
    return 1;
}

void TBoss6PlotFalz__sub_802ABC64(u8 *arg0) {
    Stack_802ABC64 stack;
    u8 *sp8;
    u16 temp_r4;
    if ((u32) TBoss6PlotFalz__data_805D66F4 == 0U) {
        sp8 = (u8 *)(arg0);
        stack.sp4C = M2C_FIELD(arg0, u8 *, 0x37C);
        TBoss4DarkFalz__sub_8004B4F0((void *) (&stack.spC), (void *) (arg0 + 0x388));
        stack.sp14 = 1;
        stack.spC = M2C_FIELD(arg0, s16 *, 0x2C) + 0x1FF;
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x1C);
        stack.sp12 = temp_r4 + 0x1FF;
        TBoss6PlotFalz__data_805D66F4 = create__11TBoss6Type2Fi((void *) (&sp8), (int) (temp_r4));
    }
}

void TBoss6PlotFalz__sub_802ABCDC(u8 *arg0) {
    Stack_802ABCDC stack;
    u8 *sp8;
    u16 temp_r4;
    if ((u32) TBoss6PlotFalz__data_805D66F0 == 0U) {
        sp8 = (u8 *)(arg0);
        stack.sp4C = M2C_FIELD(arg0, u8 *, 0x37C);
        TBoss4DarkFalz__sub_8004B4F0((void *) (&stack.spC), (void *) (arg0 + 0x388));
        stack.spC = M2C_FIELD(arg0, s16 *, 0x2C) + 0x200;
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x1C);
        stack.sp12 = temp_r4 + 0x200;
        TBoss6PlotFalz__data_805D66F0 = create__11TBoss6Type1Fi((void *) (&sp8), (int) (temp_r4));
    }
}

void ensure_field384__14TBoss6PlotFalzFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x384) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x384) = create__10TBoss6TubeFPv();
    }
}

f32 TBoss6Mine__sub_802ABD88(s32 *arg0) {
    *arg0 = TBoss6Type1__sub_802ABDEC((s32)((void *) (*arg0)));
    return (f32) (*arg0 & 0x7FFF) / 32767.0f;
}

s32 TBoss6Type1__sub_802ABDEC(s32 seed) {
    seed = seed * 0x41C64E6D + 12345;
    seed = seed / 65536;
    seed = seed % 32768;
    return seed & 0x7FFF;
}

void reset_fish_globals__8TObjFishFv(void) { lbl_805D7784 = lbl_805D5664; lbl_805D7780 = lbl_805D5668; some_id_805c6f74 = lbl_805D5660; }
void TBoss6PlotFalz__sub_802ABE3C(void *pos, s16 amount, s16 kind, f32 range) {
    s32 n;
    s32 i;
    s32 p;
    f32 d;
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (is_state_1f__14TBoss6PlotFalzFUi(p) != 0 && is_locally_controlled__10TObjPlayerFPv(p) != 0) {
            d = xyz_distance((void *)(p + 0x38), pos);
            if (!(d >= range)) {
                spawn_effect__11TBoss4Type3Fsss((s16)((f32)amount * (1.0f - d / range)), kind, (s16)((s32 (*)(s32))obj_getField1c)(p));
            }
        }
    }
}
extern "C" {
__declspec(section ".sdata2") const s32 lbl_805DE0B8[1] = { 0x8829 };
}
#define lbl_805DE0B8 (lbl_805DE0B8[0])
void TBoss6PlotFalz__sub_802ABF44(f32 f) {
    Color_802ABF44 c;
    s32 old = (*(s32 *)&some_id_805c6f74);
    (*(s32 *)&some_id_805c6f74) = old & ~0x10;
    (*(s32 *)&lbl_805D5660) = old;
    (*(s32 *)&lbl_805D5664) = (*(s32 *)&lbl_805D7784);
    (*(s32 *)&lbl_805D5668) = (*(s32 *)&lbl_805D7780);
    (*(s32 *)&some_id_805c6f74) |= lbl_805DE0B8;
    set_chunk_material_override_pair(0xFF00, 0x800, (*(s32 *)&lbl_805D7780), (*(s32 *)&lbl_805D7784));
    c.a = -1.0f + f;
    c.b = c.c = c.d = 0.0f;
    set_chunk_material_color(&c);
}

}
#undef get_player_data__10TObjPlayerFi
#undef obj_getField1c

#define set_chunk_material_override_pair ((M2C_UNK (*)(int, int, int, void *, void *, int))set_chunk_material_override_pair)
#define set_chunk_material_color ((M2C_UNK (*)(void *, f32, f32, f32, f32))set_chunk_material_color)

struct Stack_802AC040 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
void TBoss6PlotFalz__sub_802AC008(f32 farg0, f32 farg1);
M2C_UNK set_chunk_blend(int);
extern f32 TBoss6PlotFalz__data_805D3E54;
void TBoss6PlotFalz__sub_802AC040(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
extern s32 lbl_805D5550;
bool TBoss6PlotFalz__sub_802AC17C(void);
}

extern "C" {

void update_camera_target__14TBoss6PlotFalzFv(void);

void update_camera_target__14TBoss6PlotFalzFv(void) {
    if (TBoss6PlotFalz__data_805D3E54 > 0.0f) {
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        some_id_805c6f74 = lbl_805D5660;
    }
    TBoss6PlotFalz__data_805D3E54 = (-1.0f);
}
#pragma push
#pragma fp_contract on
void TBoss6PlotFalz__sub_802AC008(f32 farg0, f32 farg1) {
    f32 temp_f3;
    temp_f3 = 0.25f * farg1;
    TBoss6PlotFalz__sub_802AC040(farg0, ((-0.75f) * farg1) + 1.0f, temp_f3, temp_f3);
}
#pragma pop

extern "C" {
__declspec(section ".sdata2") const s32 lbl_805DE0C8[1] = { 0x8810 };
}
#define lbl_805DE0C8 (lbl_805DE0C8[0])
#pragma push
#pragma opt_common_subs off
#pragma opt_dead_assignments off
#pragma fp_contract on
void TBoss6PlotFalz__sub_802AC040(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    typedef char sp8_offset[(offsetof(Stack_802AC040, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802AC040, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802AC040, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802AC040, sp14) == 0xC) ? 1 : -1];
    Stack_802AC040 stack;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f1;
    s32 temp_r5;
    s32 temp_r8;
    var_f1 = farg0;
    if (((-1.0f) != TBoss6PlotFalz__data_805D3E54) || (var_f1 < 0.0f) || (var_f1 > 1.0f) || (farg1 < 0.0f) || (farg1 > 1.0f) || (farg2 < 0.0f) || (farg2 > 1.0f) || (farg3 < 0.0f) || (farg3 > 1.0f)) {
        var_f1 = 0.0f;
    }
    TBoss6PlotFalz__data_805D3E54 = var_f1;
    if (0.0f != var_f1) {
        temp_r8 = some_id_805c6f74;
        temp_r5 = temp_r8 & 0xFFFFFFDF;
        some_id_805c6f74 = temp_r5;
        lbl_805D5660 = temp_r8;
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        some_id_805c6f74 = temp_r5 | lbl_805DE0C8;
        set_chunk_material_override_pair((int) (0), (int) (0x800), (int) (temp_r5), (void *) (lbl_805D7780), (void *) (lbl_805D7784), (int) (temp_r8));
        set_chunk_blend((int) (0x2500));
        stack.sp8 = 1.0f;
        temp_f2 = -((TBoss6PlotFalz__data_805D3E54 * (1.0f - farg1)) - 1.0f);
        temp_f1 = -((TBoss6PlotFalz__data_805D3E54 * (1.0f - farg2)) - 1.0f);
        stack.spC = temp_f2;
        stack.sp10 = temp_f1;
        stack.sp14 = -((TBoss6PlotFalz__data_805D3E54 * (1.0f - farg3)) - 1.0f);
        set_chunk_material_color((void *) (&stack.sp8), (f32) (temp_f1), (f32) (temp_f2), (f32) (1.0f), (f32) (TBoss6PlotFalz__data_805D3E54));
    }
}
#pragma pop

bool TBoss6PlotFalz__sub_802AC17C(void) {
    return lbl_805D5550 == 0;
}

}
#undef set_chunk_material_override_pair
#undef set_chunk_material_color

extern "C" {

int get_phase__14TBoss6PlotFalzFv(void);

int get_phase__14TBoss6PlotFalzFv(void) {  return lbl_805D66F8; }

}

struct Obj_8004AA04 { s32 count; u8 pad[0xC]; void **items; };

struct Stack_8004B084 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B084 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108 {
    M2C_UNK value;
    u8 remaining[0x33C];
};

struct Stack_8004B0F8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8004B0F8 { s32 words[3]; void (TBoss4DarkFalz::*action)(); };

struct RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108 {
    M2C_UNK value;
    u8 remaining[0x33C];
};

struct Obj_8004B16C { u8 pad[0x1C]; u16 id; };

struct Msg_8004B16C { u8 code; u8 size; u16 id; s16 a; u8 pad6[2]; s32 b; u8 padc[4]; };

struct Obj_8004B1BC { u8 pad[0x1C]; u16 id; };

struct Msg_8004B1BC { u8 code; u8 size; u16 id; s16 a; u8 pad6[2]; s32 b; u8 padc[4]; };

struct Obj_802AC1D8 { s32 count; s32 pad4; s32 x; s32 y; u32 *list; };

typedef struct Rec_8004AA80 {
    s32 a;
    s32 b;
    s32 c;
} Rec_8004AA80;

typedef struct Obj_8004AA80 {
    s32 count;
    u8 pad4[0x8 - 0x4];
    s32 f8;
    s32 fc;
    s32 *items;
} Obj_8004AA80;

struct Vec_802AC3E8 { f32 x, y, z; };

struct Sub_802AC3E8 { u8 pad[0x18]; s32 flags; };

struct Obj_802AC3E8 { u8 pad[0x38]; Vec_802AC3E8 pos; u8 pad2[0xA4 - 0x44]; Sub_802AC3E8 *sub; };

extern "C" {
void destroy_buffer_pair(void *p, s32 flag);
int free__11TOBoss4RockFUi(void *p);
void TBoss6PlotFalz__sub_802AC25C(Obj_8004AA04 *self);
void refresh_equipment_slot__10TObjPlayerFv(void *p);
void TBoss6PlotFalz__sub_802AC4D8(void *self);
void scroll_strip_uvs(u32, s16, s16);
void TBoss6PlotFalz__sub_802AC1D8(Obj_802AC1D8 *o, s32 dx, s32 dy);
s32 get_bml_model(s32, s32);
int get_fish_count__8TObjFishFv(void);
s32 alloc_tables__6TLobbyFPvii(s32, s32, s32);
s32 collect_and_count__12TBoss3VoloptFUii(u32 arg0, s32 arg1);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
void TBoss6PlotFalz__sub_802AC2D8(Obj_8004AA80 *arg0, Rec_8004AA80 *arg1, s32 arg2);
M2C_UNK refresh_collision_body_centers(void *);
extern u8 lbl_804705B4[];
extern s32 lbl_805D5868;
extern s32 lbl_805D5870;
void TBoss6PlotFalz__sub_802AC3E8(void);
}

extern "C" {

void update_active_flag__14TBoss6PlotFalzFv(void);
s32 get_main_phase();
s32 is_split_screen();

void update_active_flag__14TBoss6PlotFalzFv(void) {
    lbl_805D66F8 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        lbl_805D66F8 = 1;
    }
}

void TBoss6PlotFalz__sub_802AC1D8(Obj_802AC1D8 *o, s32 dx, s32 dy) {
    s32 j;
    s32 i;
    i = 0;
    j = 0;
    o->x += dx;
    o->y += dy;
    for (; i < o->count; i++, j += 4) {
        u32 e = *(u32 *)((u8 *)o->list + j);
        if (e != 0) {
            scroll_strip_uvs(e, o->x, o->y);
        }
    }
}

void TBoss6PlotFalz__sub_802AC25C(Obj_8004AA04 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        if (self->items[i] != 0) {
            destroy_buffer_pair(self->items[i], 1);
            self->items[i] = 0;
        }
    }
    free__11TOBoss4RockFUi(self->items);
    self->items = 0;
}
typedef char MemberActionStorage_8004B084_size[sizeof(MemberActionStorage_8004B084) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108_size[sizeof(RecoveredGlobal_8004B084_TBoss4DarkFalz__data_80485108) == 0x340 ? 1 : -1];
typedef char MemberActionStorage_8004B0F8_size[sizeof(MemberActionStorage_8004B0F8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108_size[sizeof(RecoveredGlobal_8004B0F8_TBoss4DarkFalz__data_80485108) == 0x340 ? 1 : -1];

void TBoss6PlotFalz__sub_802AC2D8(Obj_8004AA80 *arg0, Rec_8004AA80 *arg1, s32 arg2) {
    s32 h;
    s32 i;
    Rec_8004AA80 *r;
    s32 t;
    s32 p;
    s32 j;
    h = get_fish_count__8TObjFishFv();
    if (h == 0 || arg1 == NULL || arg2 < 1) {
        return;
    }
    arg0->count = arg2;
    arg0->items = NULL;
    arg0->items = alloc_buffer__11TOBoss4RockFPv(arg0->count * 4);
    arg0->f8 = 0;
    arg0->fc = 0;
    for (j = 0; j < arg0->count; j++) {
        arg0->items[j] = 0;
    }
    for (i = 0; i < arg0->count; i++) {
        r = &arg1[i];
        t = collect_and_count__12TBoss3VoloptFUii(get_bml_model(h, r->a), r->b);
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x14);
        if (p != 0) {
            p = alloc_tables__6TLobbyFPvii(p, t, r->c);
        }
        arg0->items[i] = p;
    }
}

void TBoss6PlotFalz__sub_802AC3E8(void) {
    Vec_802AC3E8 v;
    s32 i;
    Obj_802AC3E8 *p;
    for (i = lbl_805D586C + lbl_805D5870; i < lbl_805D5868; i++) {
        p = (Obj_802AC3E8 *)get_player_data__10TObjPlayerFi(i);
        if (p != NULL && p->sub != NULL && (p->sub->flags & 0x20000)
            && !(xyz_distance(lbl_804705B4, &p->pos) > 150.0f)
            && !(xyz_distance(lbl_8047059C, &p->pos) <= 300.0f)) {
            VecCopy__FP3VecPC3Vec(&v, &p->pos);
            subtract_vector(&v, lbl_804705B4);
            vec3_add_to(&v, lbl_8047059C);
            v.y = 7.5f;
            VecCopy__FP3VecPC3Vec(&p->pos, &v);
            refresh_collision_body_centers(p);
        }
    }
}

void TBoss6PlotFalz__sub_802AC4D8(void *self) {
    s32 i;
    void *p;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            if (get_field_3e0__12TBoss3VoloptFPv(p) == 0x1f) {
                refresh_equipment_slot__10TObjPlayerFv(p);
            }
        }
    }
}

}

struct V_802AC538 { f32 x, y, z; };
extern "C" {
u8 *get_hit_data__14TBoss4DarkFalzFPv(void *);
void save_position__14TBoss4DarkFalzFi(void *);
void TBoss4DarkFalz__sub_8004C220();
void reset_cameras_to_actor(void *, s32);
extern const V_802AC538 lbl_804705A8;

#pragma push
#pragma fp_contract on
void fn_802AC538(void) {
    s32 step;
    s32 ang = 0;
    s32 i;
    if (lbl_805D586C <= 2) {
        step = 0x2000;
    } else {
        step = 0x2000 / (lbl_805D586C - 1);
    }
    for (i = 0; i < lbl_805D586C; i++) {
        void *p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && get_field_3e0__12TBoss3VoloptFPv(p) == 0x1F) {
            V_802AC538 pos = lbl_804705A8;
            pos.x += 350.0f * sin_table_lookup(ang);
            pos.z += 350.0f * cos_table_lookup(ang);
            ((void (*)(void *, void *))TBoss4DarkFalz__sub_8004C220)(p, &pos);
            save_position__14TBoss4DarkFalzFi(p);
            *(s32 *)(get_hit_data__14TBoss4DarkFalzFPv(p) + 4) = ang + 0x8000;
            refresh_equipment_slot__10TObjPlayerFv(p);
            if (is_locally_controlled__10TObjPlayerFPv((s32)p) != 0) {
                reset_cameras_to_actor(p, 0);
            }
            ang += step;
        }
    }
}
#pragma pop
}

#define TBoss6PlotFalz__sub_802AC3E8 ((int (*)(void))TBoss6PlotFalz__sub_802AC3E8)

extern "C" {

void init_warp__15TBoss6EmptyWarpFv(void);

void fn_802AC538(void);

void init_warp__15TBoss6EmptyWarpFv(void) { fn_802AC538(); TBoss6PlotFalz__sub_802AC3E8(); }

}
#undef TBoss6PlotFalz__sub_802AC3E8

extern "C" {
s32 init_all_slots2__11TWindowCtrlFv();
s32 end_camera_pan__10TObjPlayerFPv(void *p);
s32 release_all_players_control_lock();
void TBoss6PlotFalz__sub_802AC678(void *self);
void start_freeze__10TObjPlayerFPv();
void init_all_slots__11TWindowCtrlFv();
void TBoss6PlotFalz__sub_802AC6D0(void);
void TBoss4DarkFalz__sub_8004C220();
void save_position__14TBoss4DarkFalzFi(void *);
void set_indexed_flags(void *, int, int);
void TBoss6PlotFalz__sub_802AC724(u8 *arg0, u32 arg1);
}

extern "C" {

void render__14TBoss6PlotFalzFv(void);
void TBoss6PlotFalz__vt61(void);

void TBoss6PlotFalz__sub_802AC678(void *self) {
    s32 i;
    void *p;
    init_all_slots2__11TWindowCtrlFv();
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != 0) {
            end_camera_pan__10TObjPlayerFPv(p);
        }
    }
    release_all_players_control_lock();
}

void TBoss6PlotFalz__sub_802AC6D0(void) {
    s32 i;
    init_all_slots__11TWindowCtrlFv();
    for (i = 0; i < lbl_805D586C; i++) {
        if (get_player_data__10TObjPlayerFi(i) != 0) {
            start_freeze__10TObjPlayerFPv();
        }
    }
}
void TBoss6PlotFalz__sub_802AC724(u8 *arg0, u32 arg1) {
    if (arg0 == NULL || arg1 == 0U) {
        return;
    }
    TBoss4DarkFalz__sub_8004C220();
    save_position__14TBoss4DarkFalzFi(arg0);
    set_indexed_flags(arg0, 0, 0x900000);
    *(u32 *)(arg0 + 0x30) &= 0xFFFFFFDF;
}

}

#define TBoss6PlotFalz__sub_802AB14C ((M2C_UNK (*)(void *))TBoss6PlotFalz__sub_802AB14C)
#define TBoss6PlotFalz__sub_802AB1C8 ((M2C_UNK (*)(void *))TBoss6PlotFalz__sub_802AB1C8)
#define set_visible_flag__14TBoss6PlotFalzFPv ((M2C_UNK (*)(void *))set_visible_flag__14TBoss6PlotFalzFPv)
#define alloc__23TAdSinglePlyChrSelectGCFPv ((int (*)(void *))alloc__23TAdSinglePlyChrSelectGCFPv)
#define queue_destruction__7TObjectFv ((s32 (*)(int))queue_destruction__7TObjectFv)
#define destroy_static_instance__14TBoss6PlotFalzFv ((s32 (*)(void *))destroy_static_instance__14TBoss6PlotFalzFv)
#define queue_instance_destruction__14TBoss6PlotFalzFv ((s32 (*)(void *))queue_instance_destruction__14TBoss6PlotFalzFv)
#define TBoss6PlotFalz__sub_802AC4D8 ((s32 (*)())TBoss6PlotFalz__sub_802AC4D8)
#define TBoss6PlotFalz__sub_802AC678 ((s32 (*)())TBoss6PlotFalz__sub_802AC678)
#define ensure_field384__14TBoss6PlotFalzFPv ((M2C_UNK (*)(void *))ensure_field384__14TBoss6PlotFalzFPv)
#define update_active_flag__14TBoss6PlotFalzFv ((M2C_UNK (*)())update_active_flag__14TBoss6PlotFalzFv)
#define TBoss6PlotFalz__data_805D66F0 (*(s32 *)&TBoss6PlotFalz__data_805D66F0)
#define TBoss6PlotFalz__data_805D66F4 (*(s32 *)&TBoss6PlotFalz__data_805D66F4)

struct VBase_18_aa4667 { char pad[0x18]; };
struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual M2C_UNK m79(s32);
};

typedef struct Loc_802AC9EC {
    s32 a;
    s16 b;
    s16 c;
    s32 d;
    s32 e;
} Loc_802AC9EC;

struct RecoveredGlobal_802ACBE4_lbl_804DE200 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802ACBE4_lbl_804DE200_size[sizeof(RecoveredGlobal_802ACBE4_lbl_804DE200) == 0x10 ? 1 : -1];

struct RecoveredGlobal_802AC904_lbl_804705E8
{
  M2C_UNK value;
  u8 remaining[0x5];
};

struct RecoveredGlobal_802AC904___vt__14TBoss6PlotFalz
{
  M2C_UNK value;
  u8 remaining[0x14C];
};

struct RecoveredFields_802AC904_arg0
{
  u8 unknown_0[0x18];
  M2C_UNK *field_18;
  u8 unknown_1C[0x35C];
  s32 field_378;
  u8 unknown_37C[0x4];
  u32 field_380;
};

struct Msg_802AC7E4 { u8 pad[2]; u16 id; s8 phase; s8 mode; };

struct Boss_802AC7E4 { u8 pad[0x37C]; u8 mode; };

extern "C" {
s32 query_teammate_state__9TObjEneDDFPv();
void run_task__14TBoss6PlotFalzFv(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
M2C_UNK TBoss6Tube__sub_802B1760();
M2C_UNK fn_802E52AC();
M2C_UNK TBoss6Rock__sub_80354B18();
M2C_UNK TItemEffOrgaFlowShot__sub_80357210();
M2C_UNK TLobby__sub_8036DDE8();
extern RecoveredGlobal_802ACBE4_lbl_804DE200 lbl_804DE200;
extern int lbl_805D66E8;
void TBoss6PlotFalz__sub_802ACBE4(void);
s32 restore_player_cameras();
void __dt__9TObjEnemyFv(void *, int);
s32 send_entity_set_flags__6TLobbyFPv(void *);
s32 TLobby__sub_8022743C();
s32 play_area_music(void *);
volatile int __dl__7TObjectFPv(void *);
s32 is_ending_or_split_screen__14TBoss6PlotFalzFv(void *);
extern RecoveredGlobal_802AC904_lbl_804705E8 lbl_804705E8;
extern RecoveredGlobal_802AC904___vt__14TBoss6PlotFalz __vt__14TBoss6PlotFalz;
extern s32 TBoss6PlotFalz__data_805D66EC;
u8 *__dt__14TBoss6PlotFalzFv(u8 *arg0, s16 arg1);
Boss_802AC7E4 *get_enemy_entity(u16);
s32 get_phase__8TObjFishFPv(void* p);
void fn_802ACD40();
void handle_6xA3_olga_flow_boss_actions(Msg_802AC7E4 *m);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
s32 TLobby__sub_8002AFD4(void *, void *, int);
M2C_UNK bind_enemy_combat_stats(void *, int, int, int);
M2C_UNK initialize__9TObjEnemyFPv();
M2C_UNK register_entity_by_id(void *);
M2C_UNK TBoss6PlotFalz__sub_802AAC98(void *);
s32 fn_8035966C();
extern s32 lbl_805D3E50;
}

extern "C" {

void TBoss6PlotFalz__vt61(void);
s32 create__14TBoss6PlotFalzFi(s32 arg0);
void free_all__14TBoss6PlotFalzFv(void);
void render__14TBoss6PlotFalzFv(void);
s32 TBoss6PlotFalz__ct(s32, s32, s32);
int TItemEffOrgaFlowShot__sub_80357204(void);
int TLobby__sub_8001FE7C(void*, void*);
s32 TObjControl__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
int free_data__10TBoss6RockFv(void);
int free_global_instance__14TBoss4DarkFalzFv(void);
int free_resources__10TBoss6TubeFv(void);

void render__14TBoss6PlotFalzFv(void) {  }

void run_task__14TBoss6PlotFalzFv(u8 *arg0) {
    if (query_teammate_state__9TObjEneDDFPv() == 0) {
        set_visible_flag__14TBoss6PlotFalzFPv((void *) (arg0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 0) {
            TBoss6PlotFalz__sub_802AB1C8((void *) (arg0));
        }
        TBoss6PlotFalz__sub_802AB14C((void *) (arg0));
    }
}

void TBoss6PlotFalz__vt61(void) {  }

typedef struct RecoveredFields_802AC904_arg0 RecoveredFields_802AC904_arg0;
typedef struct RecoveredGlobal_802AC904___vt__14TBoss6PlotFalz RecoveredGlobal_802AC904___vt__14TBoss6PlotFalz;
typedef struct RecoveredGlobal_802AC904_lbl_804705E8 RecoveredGlobal_802AC904_lbl_804705E8;

void handle_6xA3_olga_flow_boss_actions(Msg_802AC7E4 *m) {
    Boss_802AC7E4 *b;
    s8 ph;
    s8 mode;
    fn_802ACD40();
    b = get_enemy_entity(m->id);
    if (b != NULL && b == (Boss_802AC7E4 *)TBoss6PlotFalz__data_805D66EC) {
        ph = m->phase;
        if (ph >= 0 && ph < 9 && ph != get_phase__8TObjFishFPv(b)) {
            TBoss6PlotFalz__sub_802AB2B8((u8 *)b, ph);
        }
        mode = m->mode;
        if (mode >= 0) {
            b->mode = mode;
        }
    }
}

struct Msg_802AC86C { u16 h; u16 a; s8 b; s8 c; u8 pad[0x12]; };
struct Boss_802AC86C { u8 pad[0x1C]; u16 f1C; u8 pad2[0x374 - 0x1E]; s32 f374; };
void fn_802ACD60(void *);
void build_6xA3_olga_flow_boss_actions(void *);

void TBoss6PlotFalz__sub_802AC86C(Boss_802AC86C *o, s8 v) {
    Msg_802AC86C m;
    if (o->f374 == 0) {
        build_6xA3_olga_flow_boss_actions(&m);
        m.a = o->f1C;
        m.b = v;
        m.c = (s8)(127.0f * (3.0517578125e-05f * (f32)rand()));
        fn_802ACD60(&m);
    }
}

u8 *__dt__14TBoss6PlotFalzFv(u8 *arg0, s16 arg1) {
  s32 *new_var;
  s32 temp_r0;
  if (arg0 != 0)
  {
    u32 temp_r3;
    ((RecoveredFields_802AC904_arg0 *) arg0)->field_18 = &__vt__14TBoss6PlotFalz.value;
    temp_r0 = ((RecoveredFields_802AC904_arg0 *) arg0)->field_378;
    new_var = &((RecoveredFields_802AC904_arg0 *) arg0)->field_378;
    if (temp_r0 < 9)
    {
      if (temp_r0 < 7)
      {
        if (1)
        {
          if (((!temp_r0) && (!temp_r0)) && (!temp_r0))
          {
          }
        }
      }
      else
      {
        send_entity_set_flags__6TLobbyFPv((void *) arg0);
      }
    }
    if (is_ending_or_split_screen__14TBoss6PlotFalzFv((void *) arg0) == 0)
    {
      TLobby__sub_8022743C();
      if (((s32) (*new_var)) == 7)
      {
        play_area_music((void *) (&lbl_804705E8.value));
      }
    }
    temp_r3 = ((RecoveredFields_802AC904_arg0 *) arg0)->field_380;
    if (temp_r3 != 0U)
    {
      queue_destruction__7TObjectFv((int) temp_r3);
      ((RecoveredFields_802AC904_arg0 *) arg0)->field_380 = 0U;
    }
    TBoss6PlotFalz__sub_802AC678();
    TBoss6PlotFalz__sub_802AC4D8();
    restore_player_cameras();
    queue_instance_destruction__14TBoss6PlotFalzFv((void *) arg0);
    destroy_static_instance__14TBoss6PlotFalzFv((void *) arg0);
    TBoss6PlotFalz__data_805D66EC = 0;
    TBoss6PlotFalz__data_805D3E54 = (-1.0f);
    __dt__9TObjEnemyFv((void *) arg0, (int) 0);
    if (arg1 > 0)
    {
      __dl__7TObjectFPv((void *) arg0);
    }
  }
  return arg0;
}

#define arg0 ((u8 *)self)
#pragma push
#pragma opt_common_subs off
s32 TBoss6PlotFalz__ct(s32 self, s32 arg1, s32 arg2) {
    Loc_802AC9EC sp8;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r6;

    initialize__9TObjEnemyFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TBoss6PlotFalz.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E50;
    TBoss6PlotFalz__sub_802AAC98((void *) (arg0));
    TBoss6PlotFalz__data_805D66EC = self;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    TBoss4DarkFalz__sub_8004B4F0((void *) (arg0 + 0x388), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x38A) = 0;
    if (TLobby__sub_8002AFD4((void *) (arg0), (void *) (&sp8), (int) (1)) != 0) {
        sp8.a = 0;
        sp8.c = 0;
        TLobby__sub_8002AFD4((void *) (arg0), (void *) (&sp8), (int) (0));
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, VecCopy__FP3VecPC3Vec(arg0 + 0x50, VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x38)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) 0.0f;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) 0.0f;
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) 0.0f;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    temp_r30 = register_boss__6TLobbyFPv((int) (0x2C));
    temp_r29 = dispatch_shared_handler_b__6TLobbyFPv((int) (0x2C));
    temp_r6 = register_object__6TLobbyFPv((int) (0x2C));
    bind_enemy_combat_stats((void *) (arg0), (int) (temp_r30), (int) (temp_r29), (int) (temp_r6));
    register_entity_by_id((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    set_visible_flag__14TBoss6PlotFalzFPv((void *) (arg0));
    update_active_flag__14TBoss6PlotFalzFv();
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x380) = fn_8035966C();
    M2C_FIELD(arg0, s32 *, 0x384) = 0;
    ensure_field384__14TBoss6PlotFalzFPv((void *) (arg0));
    TBoss6PlotFalz__data_805D66F0 = 0;
    TBoss6PlotFalz__data_805D66F4 = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = 0;
    TBoss6PlotFalz__data_805D3E54 = (-1.0f);
    M2C_FIELD(arg0, s8 *, 0x37C) = 0;
    M2C_FIELD(arg0, s32 *, 0x378) = -1;
    TBoss6PlotFalz__sub_802AB2B8(arg0, 0);
    return self;
}
#pragma pop
#undef arg0

void free_all__14TBoss6PlotFalzFv(void) { free_global_instance__14TBoss4DarkFalzFv(); free_resources__10TBoss6TubeFv(); free_data__10TBoss6RockFv(); TItemEffOrgaFlowShot__sub_80357204(); TLobby__sub_8001FE7C((void*)(lbl_805D66E8), (void*)1); lbl_805D66E8 = 0; }

extern s32 tl_04;

void TBoss6PlotFalz__sub_802ACBE4(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804DE200.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D66E8) = (unsigned char *) ((void *) var_r0);
    if ((u32) var_r0 != 0U) {
        TLobby__sub_8036DDE8();
        TItemEffOrgaFlowShot__sub_80357210();
        TBoss6Rock__sub_80354B18();
        TBoss6Tube__sub_802B1760();
        fn_802E52AC();
    }
}

s32 create__14TBoss6PlotFalzFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;

    var_r31 = __nw__7TObjectFUl(0x3E0);
    if (var_r31 != 0) {
        var_r4 = __nw__7TObjectFUl(0x20);
        if (var_r4 != 0) {
            var_r4 = TObjControl__ct(var_r4, tl_04);
        }
        var_r31 = TBoss6PlotFalz__ct(var_r31, var_r4, arg0);
    }
    return var_r31;
}

s32 get_phase__8TObjFishFPv(void* p) { return *(s32*)((char*)p + 0x378); }

int get_fish_count__8TObjFishFv(void) {  return lbl_805D66E8; }

}
