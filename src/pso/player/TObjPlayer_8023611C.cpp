#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80236290 {
    M2C_UNK sp8;
    u8 trailing_storage[0x8];
};

struct RecoveredGlobal_80236290_lbl_80516150 {
    M2C_UNK value;
    u8 remaining[0x84];
};

#include "pso/technique/TechniqueContact.h"

struct Vec_80236154 { f32 x, y, z; };

struct Contact_80236154 { u8 pad[0x18]; u32 flags; };

struct PlayerData_80236154 { u8 pad[0x30]; u32 flags; };

struct List_80236154 {
    PlayerData_80236154 *actors[16];
    Contact_80236154 *bodies[16];
    s32 count;
    u32 reserved84;
};

struct RecoveredGlobal_80236290_lbl_80516150;
struct PlayerData_80236154;
struct Vec_80236378 { f32 x, y, z; };

struct Contact_80236378 { u8 pad[0x18]; u32 flags; };

struct PD_80236378 { u8 pad[0x30]; u32 flags; };

struct List_80236378 {
    PD_80236378 *actors[16];
    Contact_80236378 *bodies[16];
    s32 count;
    u32 reserved84;
};

struct Vec_802364D8 { f32 x, y, z; };

struct Contact_802364D8 { u8 pad[0x18]; u32 flags; };

struct PD_802364D8 { u8 pad[0x30]; u32 flags; };

struct List_802364D8 {
    PD_802364D8 *actors[16];
    Contact_802364D8 *bodies[16];
    s32 count;
    u32 reserved84;
};

struct Vec_802367D8 { f32 x, y, z; };

struct Contact_802367D8 { u8 pad[0x18]; u32 flags; };

struct PD_802367D8 { u8 pad[0x30]; u32 flags; };

struct List_802367D8 {
    PD_802367D8 *actors[16];
    Contact_802367D8 *bodies[16];
    s32 count;
    u32 reserved84;
};

struct Sub_802367D8 { u8 pad[0xC]; f32 fC; f32 f10; };

struct Proxy_802367D8 { u8 pad[0xA4]; Sub_802367D8 *a4; };

struct Self_802367D8 { u8 pad[0x128]; Proxy_802367D8 *proxy; f32 f12c; };

struct Vec_80236A20 { f32 x, y, z; };

struct Contact_80236A20 { u8 pad[0x18]; u32 flags; };

struct PD_80236A20 { u8 pad[0x30]; u32 flags; };

struct List_80236A20 {
    PD_80236A20 *actors[16];
    Contact_80236A20 *bodies[16];
    s32 count;
    u32 reserved84;
};

struct Sub_80236A20 { u8 pad[0xC]; f32 fC; f32 f10; };

struct Proxy_80236A20 { u8 pad[0xA4]; Sub_80236A20 *a4; };

struct Self_80236A20 { u8 pad[0x128]; Proxy_80236A20 *proxy; f32 f12c; };

extern "C" {
void find_area_contact__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
void collect_body_contacts_for_target__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
void find_support_technique_contact_for_target__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
void gather_contacts_for_self__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 find_actor_body_contact(void *, int, f32);
s32 get_player_by_client_id(int);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
extern const f32 lbl_805DC89C;
M2C_UNK *gather_player_contacts__10TObjPlayerFiUiii(s32 arg0, u32 arg1, s32 _w2, s32 _w3);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
void resetTechniqueContactQuery();
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 find_actor_body_contact(void *, int, f32);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
void resetTechniqueContactQuery();
PlayerData_80236154 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 get_lobby_flag__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
extern const f32 lbl_805DC898;
extern const f32 lbl_805DC89C;
s32 find_support_technique_contact(void *self, int target, void *_w2, void *_w3);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 find_actor_body_contact(void *, int, f32);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
void resetTechniqueContactQuery();
PlayerData_80236154 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 get_lobby_flag__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
extern const f32 lbl_805DC898;
u16 obj_getField1c(void *);
s32 find_area_technique_contact(void *self, int target, void *_w2, void *arg3);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
extern const f32 lbl_805DC89C;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 find_actor_body_contact(void *, int, f32);
void resetTechniqueContactQuery();
u16 obj_getField1c(void *);
s32 get_lobby_flag__6TLobbyFv();
s32 get_field_3e4__10TObjPlayerFPv(void *);
u8 *find_entity_by_id(u16);
PlayerData_80236154 *get_player_data__10TObjPlayerFi(s32);
s32 collect_body_contacts__10TObjPlayerFPviPvPv(void *self, int target, void *_w2, void *arg3);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
extern const f32 lbl_805DC890;
extern const f32 lbl_805DC898;
extern const f32 lbl_805DC89C;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 find_actor_body_contact(void *, int, f32);
void resetTechniqueContactQuery();
u16 obj_getField1c(void *);
s32 get_game_mode__6TLobbyFv();
s32 get_lobby_flag__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
void* get_pos_ptr__10TObjPlayerFPv(void* p);
f32 vector_length(void *);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
PlayerData_80236154 *get_player_data__10TObjPlayerFi(s32);
u8 *query_technique_enemy_contacts(void *self, s32 arg);
extern RecoveredGlobal_80236290_lbl_80516150 lbl_80516150;
extern const f32 lbl_805DC890;
extern const f64 lbl_8044D8D0[];
u8 *find_entity_by_id(u16);
extern const f32 lbl_805DC898;
extern const f32 lbl_805DC89C;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 find_actor_body_contact(void *, int, f32);
void resetTechniqueContactQuery();
u16 obj_getField1c(void *);
s32 get_lobby_flag__6TLobbyFv();
s32 get_global_state__14TOKeyMachine01Fv();
void* get_pos_ptr__10TObjPlayerFPv(void* p);
f32 vector_length(void *);
void copy_xyz__10TObjPlayerFPvPv(void *, void *);
PlayerData_80236154 *get_player_data__10TObjPlayerFi(s32);
u8 *query_technique_player_contacts(void *self, s32 arg);
}

extern "C" {

void* get_pos_ptr__10TObjPlayerFPv(void* p);
s32 is_valid_and_active__10TObjPlayerFUi(u32 arg0);
s32 obj_is_hit_receivable();

s32 is_valid_and_active__10TObjPlayerFUi(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    if (obj_is_hit_receivable()) {
        return 1;
    }
    return 0;
}

typedef char RecoveredGlobal_80236290_lbl_80516150_size[sizeof(RecoveredGlobal_80236290_lbl_80516150) == 0x88 ? 1 : -1];

struct RecoveredGlobal_80236290_lbl_80516150;
s32 find_support_technique_contact(void *self, int target, void *_w2, void *_w3) {
    Vec_80236154 pos;
    f32 range;
    s32 i;
    PlayerData_80236154 *pd;
    Contact_80236154 *c;
    if (get_global_state__14TOKeyMachine01Fv() == 0xE) {
        range = lbl_805DC898;
    } else {
        range = lbl_805DC89C;
    }
    VecCopy__FP3VecPC3Vec(&pos, (u8 *)self + 0x20);
    resetTechniqueContactQuery();
    if ((u32)target == 0) {
        return (s32)&lbl_80516150;
    }
    VecCopy__FP3VecPC3Vec((u8 *)target + 0x38, &pos);
    for (i = get_game_mode__6TLobbyFv(); i < get_lobby_flag__6TLobbyFv(); i++) {
        pd = get_player_data__10TObjPlayerFi(i);
        if (pd != 0 && (pd->flags & 0x20000000)) {
            c = (Contact_80236154 *)find_actor_body_contact((void *)target, (int)pd, range);
            if (c != 0 && ((c->flags & 1) || !(c->flags & 0x02000000))) {
                ((List_80236154 *)&lbl_80516150)->bodies[((List_80236154 *)&lbl_80516150)->count] = c;
                ((List_80236154 *)&lbl_80516150)->actors[((List_80236154 *)&lbl_80516150)->count] = pd;
                if (++((List_80236154 *)&lbl_80516150)->count >= 16) {
                    ((List_80236154 *)&lbl_80516150)->count = 15;
                    break;
                }
            }
        }
    }
    return (s32)&lbl_80516150;
}

M2C_UNK *gather_player_contacts__10TObjPlayerFiUiii(s32 arg0, u32 arg1, s32 _w2, s32 _w3) {
    Stack_80236290 stack;
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r29;
    u32 temp_r3_2;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x20));
    resetTechniqueContactQuery();
    if (arg1 == 0U) {
        return &lbl_80516150.value;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg1 + 0x38), (void *) (&stack.sp8));
    var_r29 = 0;
loop_3:
    temp_r3 = get_player_by_client_id((int) (var_r29));
    if ((temp_r3 != 0) && (temp_r3_2 = find_actor_body_contact((void *) (arg1), (int) (temp_r3), (f32) (lbl_805DC89C)), ((temp_r3_2 == 0U) == 0)) && (M2C_FIELD(((u8 *)&lbl_80516150.value + (M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) * 4)), u32 *, 0x40) = temp_r3_2, M2C_FIELD(&lbl_80516150.value, M2C_UNK *, (M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) * 4)) = temp_r3, temp_r0 = M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) + 1, M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) = temp_r0, ((temp_r0 < 0x10) == 0))) {
        M2C_FIELD(&lbl_80516150.value, s32 *, 0x80) = 0xF;
    } else {
        var_r29 += 1;
        if (var_r29 < 4) {
            goto loop_3;
        }
    }
    return &lbl_80516150.value;
}

s32 find_area_technique_contact(void *self, int target, void *_w2, void *arg3) {
    Vec_80236378 pos;
    f32 range;
    PD_80236378 *pd;
    s32 i;
    Contact_80236378 *c;
    if (get_global_state__14TOKeyMachine01Fv() == 0xE) {
        range = lbl_805DC898;
    } else {
        range = lbl_805DC898;
    }
    VecCopy__FP3VecPC3Vec(&pos, (u8 *)self + 0x20);
    resetTechniqueContactQuery();
    if ((u32)target == 0) {
        return (s32)&lbl_80516150;
    }
    VecCopy__FP3VecPC3Vec((u8 *)target + 0x38, &pos);
    for (i = get_game_mode__6TLobbyFv(); i < get_lobby_flag__6TLobbyFv(); i++) {
        pd = (PD_80236378 *)get_player_data__10TObjPlayerFi(i);
        if (pd != 0 && (pd->flags & 0x20000000) && obj_getField1c(pd) != obj_getField1c(arg3)) {
            c = (Contact_80236378 *)find_actor_body_contact((void *)target, (int)pd, range);
            if (c != 0 && ((c->flags & 1) || !(c->flags & 0x02000000))) {
                ((List_80236378 *)&lbl_80516150)->bodies[((List_80236378 *)&lbl_80516150)->count] = c;
                ((List_80236378 *)&lbl_80516150)->actors[((List_80236378 *)&lbl_80516150)->count] = pd;
                if (++((List_80236378 *)&lbl_80516150)->count >= 16) {
                    ((List_80236378 *)&lbl_80516150)->count = 15;
                    break;
                }
            }
        }
    }
    return (s32)&lbl_80516150;
}

s32 collect_body_contacts__10TObjPlayerFPviPvPv(void *self, int target, void *_w2, void *arg3) {
    Vec_802364D8 pos;
    PD_802364D8 *e;
    PD_802364D8 *pd;
    s32 i;
    s32 n;
    s32 ok;
    Contact_802364D8 *c;
    s32 j;
    VecCopy__FP3VecPC3Vec(&pos, (u8 *)self + 0x20);
    resetTechniqueContactQuery();
    if ((u32)target == 0) {
        return (s32)&lbl_80516150;
    }
    VecCopy__FP3VecPC3Vec((u8 *)target + 0x38, &pos);
    if (obj_getField1c(arg3) < 4) {
        n = get_lobby_flag__6TLobbyFv();
        for (i = 0; i < n; i++) {
            pd = (PD_802364D8 *)get_player_data__10TObjPlayerFi(i);
            if (pd != 0 && obj_getField1c(pd) != obj_getField1c(arg3)) {
                ok = 1;
                if (obj_getField1c(pd) < 4) {
                    if (get_field_3e4__10TObjPlayerFPv(arg3) == get_field_3e4__10TObjPlayerFPv(pd)) {
                        ok = 1;
                    } else {
                        ok = 0;
                    }
                }
                if (ok != 0 && ((pd->flags & 0x20000000) || (pd->flags & 0x10000000))) {
                    c = (Contact_802364D8 *)find_actor_body_contact((void *)target, (int)pd, lbl_805DC89C);
                    if (c != 0 && ((c->flags & 1) || !(c->flags & 0x02000000))) {
                        ((List_802364D8 *)&lbl_80516150)->bodies[((List_802364D8 *)&lbl_80516150)->count] = c;
                        ((List_802364D8 *)&lbl_80516150)->actors[((List_802364D8 *)&lbl_80516150)->count] = pd;
                        if (++((List_802364D8 *)&lbl_80516150)->count >= 16) {
                            ((List_802364D8 *)&lbl_80516150)->count = 15;
                            break;
                        }
                    }
                }
            }
        }
    } else {
        for (j = 0; j < 4; j++) {
            e = (PD_802364D8 *)find_entity_by_id(j);
            if (e != 0 && obj_getField1c(e) != obj_getField1c(arg3) && (e->flags & 0x10000000)) {
                c = (Contact_802364D8 *)find_actor_body_contact((void *)target, (int)e, lbl_805DC89C);
                if (c != 0) {
                    ((List_802364D8 *)&lbl_80516150)->bodies[((List_802364D8 *)&lbl_80516150)->count] = c;
                    ((List_802364D8 *)&lbl_80516150)->actors[((List_802364D8 *)&lbl_80516150)->count] = e;
                    if (++((List_802364D8 *)&lbl_80516150)->count >= 16) {
                        ((List_802364D8 *)&lbl_80516150)->count = 15;
                        break;
                    }
                }
            }
        }
    }
    return (s32)&lbl_80516150;
}

void find_area_contact__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    find_area_technique_contact((void *)((void *) (arg0)), (int)((int) (M2C_FIELD(arg0, s32 *, 0xE8))), (void *)((void *) (arg0 + 0xBC)), (void *)((void *) (arg1)));
}

void collect_body_contacts_for_target__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    collect_body_contacts__10TObjPlayerFPviPvPv((void *)((void *) (arg0)), (int)((int) (M2C_FIELD(arg0, s32 *, 0xE8))), (void *)((void *) (arg0 + 0xBC)), (void *)((void *) (arg1)));
}

void find_support_technique_contact_for_target__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    find_support_technique_contact((void *)((void *) (arg0)), (int)((int) (M2C_FIELD(arg0, s32 *, 0xdc))), (void *)((void *) (arg0 + 0xb0)), (void *)((void *) (arg1)));
}

void gather_contacts_for_self__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    gather_player_contacts__10TObjPlayerFiUiii((s32)((void *) (arg0)), (u32)((int) (M2C_FIELD(arg0, s32 *, 0xdc))), (s32)((void *) (arg0 + 0xb0)), (s32)((void *) (arg1)));
}

u8 *query_technique_enemy_contacts(void *self, s32 arg) {
    Vec_802367D8 pos;
    Vec_802367D8 d;
    f32 range;
    f32 *pp;
    PD_802367D8 *pd;
    s32 i;
    Contact_802367D8 *c;
    Self_802367D8 *s = (Self_802367D8 *)self;
    if (get_global_state__14TOKeyMachine01Fv() == 0xE) {
        range = lbl_805DC898;
    } else {
        range = lbl_805DC89C;
    }
    VecCopy__FP3VecPC3Vec(&pos, (u8 *)self + 0x20);
    resetTechniqueContactQuery();
    if (s->proxy == 0) {
        return (u8 *)&lbl_80516150;
    }
    pp = (f32 *)((void *)get_pos_ptr__10TObjPlayerFPv((void*)(self)));
    d.x = pos.x - pp[0];
    d.y = pos.y - pp[1];
    d.z = pos.z - pp[2];
    {
        f32 len = vector_length(&d);
        s->proxy->a4->f10 = s->f12c;
        s->proxy->a4->fC = lbl_805DC890 * len;
    }
    pos.x = lbl_805DC890 * (pos.x + pp[0]);
    pos.y = lbl_805DC890 * (pos.y + pp[1]);
    pos.z = lbl_805DC890 * (pos.z + pp[2]);
    VecCopy__FP3VecPC3Vec((u8 *)s->proxy + 0x38, &pos);
    copy_xyz__10TObjPlayerFPvPv((u8 *)s->proxy + 0x5C, (u8 *)self + 0x54);
    for (i = get_game_mode__6TLobbyFv(); i < get_lobby_flag__6TLobbyFv(); i++) {
        pd = (PD_802367D8 *)get_player_data__10TObjPlayerFi(i);
        if (pd == 0) continue;
        if (pd->flags & 0x20000000) {
            if (obj_getField1c(pd) == obj_getField1c((void *)arg)) continue;
            c = (Contact_802367D8 *)find_actor_body_contact(s->proxy, (int)pd, range);
            if (c != 0 && ((c->flags & 1) || !(c->flags & 0x02000000))) {
                ((List_802367D8 *)&lbl_80516150)->bodies[((List_802367D8 *)&lbl_80516150)->count] = c;
                ((List_802367D8 *)&lbl_80516150)->actors[((List_802367D8 *)&lbl_80516150)->count] = pd;
                if (++((List_802367D8 *)&lbl_80516150)->count >= 16) {
                    ((List_802367D8 *)&lbl_80516150)->count = 15;
                    break;
                }
            }
        } else if ((pd->flags & 0x40000000) && !(pd->flags & 0x80000000)) {
            if (find_actor_body_contact(s->proxy, (int)pd, lbl_805DC89C) != 0) {
                return 0;
            }
        }
    }
    return (u8 *)&lbl_80516150;
}

u8 *query_technique_player_contacts(void *self, s32 arg) {
    Vec_80236A20 pos;
    Vec_80236A20 d;
    f32 range;
    f32 *pp;
    PD_80236A20 *e;
    PD_80236A20 *pd;
    s32 i;
    s32 n;
    Contact_80236A20 *c;
    s32 j;
    Self_80236A20 *s = (Self_80236A20 *)self;
    if (get_global_state__14TOKeyMachine01Fv() == 0xE) {
        range = lbl_805DC898;
    } else {
        range = lbl_805DC89C;
    }
    VecCopy__FP3VecPC3Vec(&pos, (u8 *)self + 0x20);
    resetTechniqueContactQuery();
    if (s->proxy == 0) {
        return (u8 *)&lbl_80516150;
    }
    pp = (f32 *)((void *)get_pos_ptr__10TObjPlayerFPv((void*)(self)));
    d.x = pos.x - pp[0];
    d.y = pos.y - pp[1];
    d.z = pos.z - pp[2];
    {
        f32 len = vector_length(&d);
        s->proxy->a4->f10 = s->f12c;
        s->proxy->a4->fC = lbl_8044D8D0[0] * len;
    }
    pos.x = lbl_805DC890 * (pos.x + pp[0]);
    pos.y = lbl_805DC890 * (pos.y + pp[1]);
    pos.z = lbl_805DC890 * (pos.z + pp[2]);
    VecCopy__FP3VecPC3Vec((u8 *)s->proxy + 0x38, &pos);
    copy_xyz__10TObjPlayerFPvPv((u8 *)s->proxy + 0x5C, (u8 *)self + 0x54);
    if (obj_getField1c((void *)arg) < 4) {
        n = get_lobby_flag__6TLobbyFv();
        for (i = 0; i < n; i++) {
            pd = (PD_80236A20 *)get_player_data__10TObjPlayerFi(i);
            if (pd == 0) continue;
            if (obj_getField1c(pd) == obj_getField1c((void *)arg)) continue;
            c = (Contact_80236A20 *)find_actor_body_contact(s->proxy, (int)pd, range);
            if (c != 0 && ((pd->flags & 0x20000000) || (pd->flags & 0x10000000)) && ((c->flags & 1) || !(c->flags & 0x02000000))) {
                ((List_80236A20 *)&lbl_80516150)->bodies[((List_80236A20 *)&lbl_80516150)->count] = c;
                ((List_80236A20 *)&lbl_80516150)->actors[((List_80236A20 *)&lbl_80516150)->count] = pd;
                if (++((List_80236A20 *)&lbl_80516150)->count >= 16) {
                    ((List_80236A20 *)&lbl_80516150)->count = 15;
                    break;
                }
            }
        }
    } else {
        for (j = 0; j < 4; j++) {
            e = (PD_80236A20 *)find_entity_by_id(j);
            if (e == 0) continue;
            if (obj_getField1c(e) == obj_getField1c((void *)arg)) continue;
            c = (Contact_80236A20 *)find_actor_body_contact(s->proxy, (int)e, lbl_805DC89C);
            if (c != 0 && (e->flags & 0x10000000)) {
                ((List_80236A20 *)&lbl_80516150)->bodies[((List_80236A20 *)&lbl_80516150)->count] = c;
                ((List_80236A20 *)&lbl_80516150)->actors[((List_80236A20 *)&lbl_80516150)->count] = e;
                if (++((List_80236A20 *)&lbl_80516150)->count >= 16) {
                    ((List_80236A20 *)&lbl_80516150)->count = 15;
                    break;
                }
            }
        }
    }
    return (u8 *)&lbl_80516150;
}

void resetTechniqueContactQuery() {
    for (s32 i=0;i<16;++i) {
        (*(TechniqueContactList *)&lbl_80516150).actors[i]=0;
        (*(TechniqueContactList *)&lbl_80516150).bodies[i]=0;
    }
    (*(TechniqueContactList *)&lbl_80516150).count=0;
}

void* get_pos_ptr__10TObjPlayerFPv(void* p) { return (char*)p + 0x78; }

}
