#include "types.h"
#include "pso/collision/ActorBodyContact.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Elt_801542CC { char pad[0x18]; s32 f18; char pad2[0x2C - 0x1C]; };

struct M2CCopy_C { u8 bytes[0xc]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_60 { u8 bytes[0x60]; };

#include <stddef.h>
struct Stack_80155050 {
    M2C_UNK sp8;
    f32 spC;
    u8 pad_10[0x4];
    f32 sp14;
};

struct Vec_801550DC { f32 x, y, z; };

struct CollisionVector_80155FBC { f32 x,y,z; };

struct CollisionBody_80155FBC { void* colliders; s32 count; CollisionVector_80155FBC position; s32 facing; };

struct E_801547E0 { u8 pad[0xc]; f32 f; u8 pad2[0x2c - 0x10]; };

struct Obj_801547E0 { u8 pad[0xa4]; E_801547E0 *arr; };

struct Part_80156780 { u8 pad[0x2c]; };

struct Obj_80156780 { u8 pad[0x9c]; void *f9c; u8 pad2[4]; Part_80156780 *parts; s32 count; };

struct Ent_80154CB4 { u8 pad[0x1c]; u16 id; };

struct State_80154954 { s16 a; s16 b; };

struct Pkt_80154954 { s16 hdr; u16 id; s32 state; s32 kind; };

struct Obj_80154954 { u8 pad[4]; s16 kind; };

struct Player_80154954 { u8 pad[0x1C]; u16 id; u8 pad1e[0x80 - 0x1E]; Obj_80154954 *obj; };

struct Coll_801564A0 { u8 pad[0x18]; s32 flags; };

struct Player_801564A0 { u8 pad[0x1C]; u16 id; u8 pad1e[0x28 - 0x1E]; s16 room; u8 pad2a[0xA4 - 0x2A]; Coll_801564A0 *coll; };

extern "C" {
void TObjPlayer__sub_801550B8(u8 *arg0, u8 *arg1);
u8 * TObjPlayer__sub_80155028(s32 arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_8015434C(s32, s32, s32);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern s32 TObjPlayer__data_805D5874;
void TObjPlayer__sub_8015431C(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void TObjPlayer__sub_801550B8(u8 *arg0, u8 *arg1);
extern const f32 TObjPlayer__data_805DB270;
s32 TObjPlayer__sub_80155050(M2C_UNK arg0, u8 *arg1, u32 arg2);
extern int lbl_8050DA90[];
int TObjPlayer__sub_80154E28(int a0, int a1);
s32 get_player_data__10TObjPlayerFi(s32);
s32 TObjPlayer__sub_801557BC(void *, s32, void *);
s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1);
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 TObjPlayer__data_805DB298;
void update_enemy_collision_flags__10TObjPlayerFPv(void *arg0);
s32 get_player_data__10TObjPlayerFi(s32);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
s32 TObjPlayer__sub_801557BC(void *, s32, void *);
s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1);
extern s32 lbl_805D586C;
extern const f32 TObjPlayer__data_805DB298;
void check_object_collisions__10TObjPlayerFPv(void *arg0);
void check_object_collisions__10TObjPlayerFPv(void *arg0);
void update_collisions__10TObjPlayerFPv(void* p);
void clear_obj_links(void* p);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
void* initialize_linked_object_reference(void* p, void* a1);
int TObjEneGibbles__sub_80156720(void);
int TObjPlayer__sub_80019828(void*);
void release_member_90__10TObjPlayerFPv(void* p);
void init_all_slots__10TObjPlayerFv(void);
void TObjPlayer__sub_80156934(void);
void init_all_slots__10TObjPlayerFv(void);
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern s32 TObjPlayer__data_805D5874;
void reset__10TObjPlayerFv(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
extern M2C_UNK lbl_804AF8A0[];
void *destroy_particle_controller__10TObjPlayerFPvs(void *arg0, s16 arg1);
void TObjPlayer__sub_80156A68(void* p);
void TObjPlayer__sub_80156A74(void* p);
M2C_UNK copy_short_fields__6TLobbyFPvPv(void *, void *);
extern s32 TLobby__data_805D6140;
s32 TLobby__sub_80156A80(u8 *arg0, s32 arg1, s16 arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TObjPlayer__sub_80141CF8(void *, void *);
s32 TBoss4Type2__sub_80141FA8(s32, s32);
s32 TObjPlayer__sub_80156844(void *, void *, int);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
M2C_UNK TObjPlayer__sub_803D97F0(void *);
M2C_UNK TObjPlayer__sub_803D9990(void *, void *);
M2C_UNK TObjPlayer__sub_803D9B78();
extern const f64 lbl_804400F0;
extern f32 lbl_8058D490[12];
extern const f32 TObjPlayer__data_805DB270;
extern const f32 lbl_805DB27C;
extern const f32 lbl_805DB280;
extern const f32 lbl_805DB284;
s32 resolve_actor_sphere_contact(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 TObjPlayer__sub_80141CF8(void *, void *);
s32 find_or_alloc_slot__10TObjPlayerFUi(u32 arg0);
void* TObjPlayer__sub_80155C54(CollisionBody_80155FBC, CollisionBody_80155FBC);
void* find_actor_body_contact(u8* arg0, u8* arg1, f32 limit);
extern const f32 TObjPlayer__data_805DB270;
f32 TObjPlayer__sub_801547E0(Obj_801547E0 *self, s32 i);
extern s32 TObjPlayer__data_8050D460[];
extern s32 lbl_805D5868;
void TObjPlayer__sub_801549D0(void);
void *alloc_buffer__11TOBoss4RockFPv(s32);
void fn_8002B630(Part_80156780 *, Part_80156780 *);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
void init_forward__10TObjPlayerFPv(void *);
void *TCheckRoomSequence__sub_80396920(void *, void (*)(void *), void *, s32, s32);
Part_80156780 *TObjEneGibbles__sub_80156780(Obj_80156780 *self, Part_80156780 *src, s32 count);
void *TPlayerBattleCtrl4P__sub_801BA74C(u32 id);
extern s32 TObjPlayer__data_8050D460[];
extern s32 lbl_805D5868;
void *TPhotonMylla__sub_80154CB4(u16 id);
M2C_UNK copy_short_fields__6TLobbyFPvPv(void *, void *);
s32 TLobby__sub_80156A80(u8 *arg0, s32 arg1, s16 arg2);
void TLobby__sub_80156BA8(Pkt_80154954 *pkt);
void update_and_send_60__6TLobbyFi(Pkt_80154954 *pkt);
void TObjPlayer__sub_80154954(Player_80154954 *self, State_80154954 *src);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 TObjPlayer__data_805DB298;
s32 get_player_data__10TObjPlayerFi(s32);
s32 TObjPlayer__sub_801557BC(void *, s32, void *);
s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1);
void* find_actor_body_contact(u8* arg0, u8* arg1, f32 limit);
void TObjPlayer__sub_801564A0(void *arg0);
}

extern "C" {

void TOTrapAncient02R__sub_80154D78(void);
void TObjPlayer__sub_801542F4(s32 a);
void apply_status_effect__10TObjPlayerFi(s32 a);
s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 check_flags__10TObjPlayerFii(s32 arg0, s32 arg1);
void clear_player_status_flag__10TObjPlayerFPviUi(void *arg0, s32 arg1, u32 arg2);
s32 find_or_alloc_slot__10TObjPlayerFUi(u32 arg0);
void init_all_slots__10TObjPlayerFv(void);
void reset_global_table(void);
void reset_photon_effect__10TObjPlayerFPv(void* p);
void set_indexed_flags(void *arg0, s32 index, s32 flags);
u8 test_elt_flag__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
int TLobby__sub_801A1FDC(void*, void*);
M2C_UNK TObjPlayer__sub_8015434C(s32, s32, s32);
int TObjPlayer__sub_80154B60(void*);
u32 get_battle_param__10TObjPlayerFi(s32);
int memset(void*, void*, void*);

extern s32 lbl_805D586C;

void apply_status_effect__10TObjPlayerFi(s32 a) {
    TObjPlayer__sub_8015434C(a, 0, lbl_805D586C);
}

extern s32 lbl_805D586C;
extern s32 lbl_805D5870;

void TObjPlayer__sub_801542F4(s32 a) {
    TObjPlayer__sub_8015434C(a, lbl_805D586C, lbl_805D5870);
}

    extern unsigned char lbl_8050DAD0[];
    extern int lbl_805D5878;

void TObjPlayer__sub_8015431C(u8 *arg0) {
    TObjPlayer__sub_8015434C((s32)(arg0), (s32)(lbl_805D586C + lbl_805D5870), (s32)(TObjPlayer__data_805D5874));
}

void reset_global_table(void) { memset(lbl_8050DAD0, (void*)0, (void*)128); lbl_805D5878 = 0; }

void clear_player_status_flag__10TObjPlayerFPviUi(void *arg0, s32 arg1, u32 arg2) {
    arg0 = M2C_FIELD(arg0, void **, 0xA4);
    if (arg0 != 0) {
        arg0 = (char*)arg0 + (arg1 * 0x2C);
        M2C_FIELD(arg0, u32 *, 0x18) &= ~arg2;
    }
}

void set_indexed_flags(void *arg0, s32 index, s32 flags) {
    void *entry;

    entry = (void *)M2C_FIELD(arg0, u32 *, 0xA4);
    if (entry != NULL) {
        entry = (void *)((u8 *)entry + (index * 0x2C));
        M2C_FIELD(entry, s32 *, 0x18) =
            (s32)(M2C_FIELD(entry, s32 *, 0x18) | flags);
    }
}

u8 test_elt_flag__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    struct Elt_801542CC *temp_r3;

    temp_r3 = M2C_FIELD(arg0, struct Elt_801542CC **, 0xA4);
    if (temp_r3 != 0) {
        return (u8) ((arg2 & temp_r3[arg1].f18) != 0);
    }
    return 0U;
}

f32 TObjPlayer__sub_801547E0(Obj_801547E0 *self, s32 i) {
    if (self->arr != 0) {
        return self->arr[i].f;
    }
    return TObjPlayer__data_805DB270;
}

void TObjPlayer__sub_80154954(Player_80154954 *self, State_80154954 *src) {
    State_80154954 st;
    Obj_80154954 *obj;
    if (src != 0) {
        copy_short_fields__6TLobbyFPvPv(&st, src);
    } else {
        TLobby__sub_80156A80((u8 *)self, (s32)&st, 1);
    }
    obj = self->obj;
    if (obj != 0) {
        Pkt_80154954 pkt;
        TLobby__sub_80156BA8(&pkt);
        pkt.id = self->id;
        pkt.state = st.a;
        pkt.kind = obj->kind;
        update_and_send_60__6TLobbyFi(&pkt);
    }
}

void TObjPlayer__sub_801549D0(void) {
    s32 i;
    for (i = 0; i < 0x18c; i++) {
        TObjPlayer__data_8050D460[i] = 0;
    }
    lbl_805D5868 = 0;
}

void reset_photon_effect__10TObjPlayerFPv(void* p) { TLobby__sub_801A1FDC(p, (void*)0); TObjPlayer__sub_80154B60(p); }

void *TPhotonMylla__sub_80154CB4(u16 id) {
    s32 lo;
    s32 mid;
    s32 hi;
    Ent_80154CB4 *e;
    if (id == 0xffff) {
        return 0;
    }
    if (id < 12) {
        return TPlayerBattleCtrl4P__sub_801BA74C(id);
    }
    lo = 0;
    hi = lbl_805D5868 - 1;
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (((Ent_80154CB4 **)TObjPlayer__data_8050D460)[mid]->id < id) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    e = ((Ent_80154CB4 **)TObjPlayer__data_8050D460)[lo];
    if (e != 0 && e->id == id) {
        return e;
    }
    return 0;
}

void TOTrapAncient02R__sub_80154D78(void) {  }
void init_all_slots__10TObjPlayerFv(void) { { int i; for (i = 0; i < 16; i++) { TObjPlayer__sub_80154E28((int)((void*)i), (int)((void*)0)); } } }
s32 find_or_alloc_slot__10TObjPlayerFUi(u32 arg0) {
    s32 var_r31;
    u32 temp_r3;

    var_r31 = 0;
loop_1:
    temp_r3 = get_battle_param__10TObjPlayerFi(var_r31);
    if (temp_r3 == arg0) {
        return var_r31;
    }
    if (temp_r3 == 0U) {
        return TObjPlayer__sub_80154E28((int)((void*)(var_r31)), (int)((void*)(arg0)));
    }
    var_r31 += 1;
    if (var_r31 >= 0x10) {
        return -1;
    }
    goto loop_1;
}

int TObjPlayer__sub_80154E28(int a0, int a1) {
  long long new_var;
  new_var = a0;
  lbl_8050DA90[new_var] = a1;
  return a0;
}

u8 * TObjPlayer__sub_80155028(s32 arg0, s32 arg1) {
    *(M2CCopy_60 *)(arg0) = *(const M2CCopy_60 *)(arg1);
    return (u8 *)arg0;
}

s32 TObjPlayer__sub_80155050(M2C_UNK arg0, u8 *arg1, u32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_80155050, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80155050, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80155050, sp14) == 0xC) ? 1 : -1];
    Stack_80155050 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg1 + 0x1C));
    stack.spC = TObjPlayer__data_805DB270;
    stack.sp14 = M2C_FIELD(arg1, f32 *, 0xC);
    if (arg2 != 0U) {
        TObjPlayer__sub_801550B8((u8 *)((void *) (arg2)), (u8 *)((void *) (&stack.sp8)));
        return 1;
    }
    return 0;
}

void TObjPlayer__sub_801550B8(u8 *arg0, u8 *arg1) {
    *(M2CCopy_C *)(arg0) = *(const M2CCopy_C *)(arg1);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}

s32 resolve_actor_sphere_contact(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    Vec_801550DC displacement;
    f32 tangentScale;
    M2C_UNK var_r31;
    f32 temp_f1;
    u16 temp_r3;
    if (TObjPlayer__sub_80141CF8((void *) (arg0 + 0x38), (void *) (arg0 + 0x44)) < lbl_805DB27C) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (&displacement), (void *) (arg2 + 0x1C));
    TBoss6Type1__sub_803D9370((void *) (&displacement), (void *) (arg0 + 0x44));
    temp_r3 = TBoss4Type2__sub_80141FA8((s32) (lbl_804400F0 * get_ad_end_text_start__10TObjPlayerFv(displacement.x, displacement.z)), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    if ((s32) temp_r3 < 0x4000) {
        tangentScale = lbl_805DB280;
        var_r31 = 0x4000;
        goto block_7;
    }
    var_r31 = 0xC000;
    if ((s32) temp_r3 < 0xC000) {
        return 0;
    }
    tangentScale = lbl_805DB280;
block_7:
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U) {
        TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490));
        TObjPlayer__sub_803D9214((int) (0), (int) (var_r31));
        TObjPlayer__sub_803D9990((void *) (&displacement), (void *) (&displacement));
        TObjPlayer__sub_803D9B78();
        if (lbl_805DB284 < ((displacement.x * displacement.x) + (displacement.z * displacement.z))) {
            displacement.y = TObjPlayer__data_805DB270;
            TNpcPlayer__sub_803D97B4((void *) (&displacement));
            temp_f1 = displacement.x * tangentScale;
            displacement.x = temp_f1;
            displacement.z *= tangentScale;
            TBoss4Zako__sub_803D8910((void *) (&displacement), (void *) (arg0 + 0x44));
            if (TObjPlayer__sub_80156844((void *) (arg0), (void *) (&displacement), (int) (0)) != 0) {
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&displacement));
                return 1;
            }
        }
    }
    if (TObjPlayer__sub_80156844((void *) (arg0), (void *) (arg0 + 0x44), (int) (0)) != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x44));
        return 1;
    }
    return 0;
}

s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((arg0 & 0x2000) && (arg1 & 0x100)) || ((arg0 & 0x100) && (arg1 & 0x2000))) {
        return 1;
    }
    if (((arg0 & 0x4000) && (arg1 & 0x200)) || ((arg0 & 0x200) && (arg1 & 0x4000))) {
        return 1;
    }
    if (((arg0 & 0x8000) && (arg1 & 0x400)) || ((arg0 & 0x400) && (arg1 & 0x8000))) {
        return 1;
    }
    if (((arg0 & 0x10000) && (arg1 & 0x800)) || ((arg0 & 0x800) && (arg1 & 0x10000))) {
        return 1;
    }
    if (((arg0 & 0x40000) && (arg1 & 0x1000)) || ((arg0 & 0x1000) && (arg1 & 0x40000))) {
        return 1;
    }
    return 0;
}

s32 check_flags__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 temp_r5;

    temp_r5 = arg0 & arg1;
    if (!(temp_r5 & 1)) {
        return 0;
    }
    if (!(temp_r5 & 6)) {
        return 0;
    }
    if (((arg0 & 8) && (arg1 & 0x2000)) || ((arg1 & 8) && (arg0 & 0x2000))) {
        return 0;
    }
    if (((arg0 & 0x10) && (arg1 & 0x4000)) || ((arg1 & 0x10) && (arg0 & 0x4000))) {
        return 0;
    }
    if (((arg0 & 0x20) && (arg1 & 0x8000)) || ((arg1 & 0x20) && (arg0 & 0x8000))) {
        return 0;
    }
    if (((arg0 & 0x40) && (arg1 & 0x10000)) || ((arg1 & 0x40) && (arg0 & 0x10000))) {
        return 0;
    }
    if (((arg0 & 0x80) && (arg1 & 0x40000)) || ((arg1 & 0x80) && (arg0 & 0x40000))) {
        return 0;
    }
    return 1;
}

void* find_actor_body_contact(u8* arg0, u8* arg1, f32 limit) {
    CollisionBody_80155FBC source, destination;
    void* result;
    if (arg1!=arg0 && arg1 && !(*(u32*)(arg0+0x30)&0x800) && !(*(u32*)(arg1+0x30)&0x80000800)) {
        if (limit<TObjPlayer__sub_80141CF8((void *)(arg0+0x38), (void *)(arg1+0x38))) return 0;
        void* data=*(void**)(arg0+0xA4);
        if (data && *(void**)(arg1+0xA4)) {
            source.colliders=data;
            source.count=*(s32*)(arg0+0xA8);
            VecCopy__FP3VecPC3Vec((void *)(&source.position), (void *)(arg0+0x38));
            source.facing=*(s32*)(arg0+0x60);
            destination.colliders=*(void**)(arg1+0xA4);
            destination.count=*(s32*)(arg1+0xA8);
            VecCopy__FP3VecPC3Vec((void *)(&destination.position), (void *)(arg1+0x38));
            destination.facing=*(s32*)(arg1+0x60);
            result=TObjPlayer__sub_80155C54(source,destination);
            if (result) {find_or_alloc_slot__10TObjPlayerFUi((u32)(arg1));return result;}
        }
    }
    return 0;
}

void update_enemy_collision_flags__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r30;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r5;
    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFEDFFFFF);
        for (var_r30 = lbl_805D586C + lbl_805D5870; var_r30 < (s32) lbl_805D5868; var_r30++) {
            temp_r3 = get_player_data__10TObjPlayerFi(var_r30);
            if (temp_r3 != 0) {
                temp_r3_2 = find_actor_body_contact((u8*)(arg0), (u8*)(temp_r3), TObjPlayer__data_805DB298);
                if ((temp_r3_2 != NULL) && (check_flag_pair__10TObjPlayerFii(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18), M2C_FIELD(temp_r3_2, s32 *, 0x18)) == 0) && (TObjPlayer__sub_801557BC(arg0, temp_r3, temp_r3_2) != 0)) {
                    temp_r3_3 = M2C_FIELD(arg0, void **, 0xA4);
                    M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 0x01200000);
                }
            }
        }
    }
}

void TObjPlayer__sub_801564A0(void *arg0) {
    Player_801564A0 *self = (Player_801564A0 *)arg0;
    Player_801564A0 *other;
    s32 i;
    Coll_801564A0 *ct;
    if (self->coll != 0) {
        self->coll->flags &= ~0x900000;
        for (i = lbl_805D586C; i < lbl_805D586C + lbl_805D5870; i++) {
            other = (Player_801564A0 *)get_player_data__10TObjPlayerFi(i);
            if (other != 0) {
                if (self->room == other->room || self->id < 0x1000) {
                    ct = (Coll_801564A0 *)find_actor_body_contact((u8 *)self, (u8 *)other, TObjPlayer__data_805DB298);
                    if (ct != 0) {
                        self->coll->flags |= 0x100000;
                        if (check_flag_pair__10TObjPlayerFii(self->coll->flags, ct->flags) == 0 &&
                            TObjPlayer__sub_801557BC(self, (s32)other, ct) != 0) {
                            self->coll->flags |= 0x800000;
                        }
                    }
                }
            }
        }
    }
}

void check_object_collisions__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;
    s32 var_r29;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r5;
    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFB7FFFF);
        for (var_r29 = 0; var_r29 < (s32) lbl_805D586C; var_r29++) {
            temp_r3 = ((void *)get_player_data__10TObjPlayerFi(var_r29));
            if ((temp_r3 != NULL) && ((u16) M2C_FIELD(temp_r3, u16 *, 0x1C) < 0x1000U)) {
                temp_r3_2 = find_actor_body_contact((u8*)((void *)(arg0)), (u8*)((s32)(temp_r3)), TObjPlayer__data_805DB298);
                if (temp_r3_2 != NULL) {
                    temp_r3_3 = M2C_FIELD(arg0, void **, 0xA4);
                    M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 0x80000);
                    if ((check_flag_pair__10TObjPlayerFii(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18), M2C_FIELD(temp_r3_2, s32 *, 0x18)) == 0) && (TObjPlayer__sub_801557BC((void *)(arg0), (s32)(temp_r3), (void *)(temp_r3_2)) != 0)) {
                        temp_r3_4 = M2C_FIELD(arg0, void **, 0xA4);
                        M2C_FIELD(temp_r3_4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x18) | 0x400000);
                    }
                }
            }
        }
        if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x480000)) {
            TObjPlayer__sub_80154E3C(arg0);
        }
    }
}
void update_collisions__10TObjPlayerFPv(void* p) { check_object_collisions__10TObjPlayerFPv((void *)(p)); TObjPlayer__sub_801564A0((void *)(p)); }
void clear_obj_links(void* p) { *(s32*)((char*)p + 0x9c) = 0; *(s32*)((char*)p + 0xa4) = 0; }
void* initialize_linked_object_reference(void* p, void* a1) { *(int*)((char*)p + 0xa8) = 1; *(void**)((char*)p + 0xa4) = a1; *(void**)((char*)p + 0x9c) = (char*)p + 0xa0; TObjPlayer__sub_80154E3C((void *)(p)); return *(void**)((char*)p + 0xa4); }
int TObjEneGibbles__sub_80156720(void) { return 0; }

Part_80156780 *TObjEneGibbles__sub_80156780(Obj_80156780 *self, Part_80156780 *src, s32 count) {
    s32 n;
    s32 i;
    if (self->parts == 0) {
        self->count = count;
        self->parts = (Part_80156780 *)alloc_buffer__11TOBoss4RockFPv(self->count * 0x2c);
        for (i = 0; i < self->count; i++) {
            fn_8002B630(&self->parts[i], src++);
        }
        TObjPlayer__sub_80154E3C(self);
    }
    if (self->f9c == 0) {
        n = self->count;
        self->f9c = TCheckRoomSequence__sub_80396920(alloc_buffer__11TOBoss4RockFPv(n * 4 + 0x10), init_forward__10TObjPlayerFPv, 0, 4, n);
    }
    return self->parts;
}

void release_member_90__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x90); if (m) TObjPlayer__sub_80019828(m); }
void TObjPlayer__sub_80156934(void) { TObjPlayer__sub_801549D0(); init_all_slots__10TObjPlayerFv(); }
void reset__10TObjPlayerFv(void) { (*(int *)&lbl_805D5868) = 0; (*(int *)&lbl_805D586C) = 0; (*(int *)&lbl_805D5870) = 0; (*(int *)&TObjPlayer__data_805D5874) = 0; TObjPlayer__sub_801549D0(); init_all_slots__10TObjPlayerFv(); }
void *destroy_particle_controller__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AF8A0;
        M2C_FIELD(arg0, M2C_UNK *, 0xA8) = 0;
        M2C_FIELD(arg0, M2C_UNK *, 0xA4) = 0;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void TObjPlayer__sub_80156A68(void* p) { *(s16*)((char*)p + 0x96) = 0; }
void TObjPlayer__sub_80156A74(void* p) { *(s32*)((char*)p + 0x0) = 0; }
s32 TLobby__sub_80156A80(u8 *arg0, s32 arg1, s16 arg2) {
    s16 temp_r31;
    u8 *temp_r3;
    temp_r3 = M2C_FIELD(arg0, u8 **, 0x80);
    if (temp_r3 == NULL) {
        return 0;
    }
    temp_r31 = M2C_FIELD(temp_r3, s16 *, 4);
    if ((temp_r31 < 0) || (temp_r31 > 0xB9F)) {
        return 0;
    }
    if (arg2 == 0) {
        copy_short_fields__6TLobbyFPvPv((void *) (TLobby__data_805D6140 + (temp_r31 * 4)), (void *) (arg1));
    }
    if (arg2 == 1) {
        copy_short_fields__6TLobbyFPvPv((void *) (arg1), (void *) (TLobby__data_805D6140 + (temp_r31 * 4)));
    }
    return 1;
}

}
