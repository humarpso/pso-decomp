#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8014F728 {
    M2C_UNK sp8;
    f32 spC;
};

struct Text_8014E250 { char text[0x36]; };

struct Owner_8014E250 { u8 pad[0x94]; void *obj; };

struct Npc_8014E250 {
    u8 pad[0x24];
    s32 state;
    u8 pad28[0x5C - 0x28];
    u8 timer[0x78 - 0x5C];
    Owner_8014E250 *owner;
    u8 pad7c[4];
    u32 flags;
};

struct Actor_8014F140 {
    u8 pad0[0x30];
    u32 flags30;
    u8 pad1[0x60 - 0x34];
    s32 field_0x60;
};

struct Contact_8014F140 {
    u8 pad0[0x18];
    u32 flags18;
};

struct Probe_8014F140 {
    u8 pad0[0x38];
    u8 pos38[0x60 - 0x38];
    s32 field_0x60;
};

struct View_8014F140 {
    u8 pad0[0x8C];
    u32 flags8c;
    u8 pad1[0x94 - 0x90];
    Probe_8014F140 *target94;
    s32 field_0x98;
    u8 pad2[0xA8 - 0x9C];
    Probe_8014F140 *probe;
    u8 pad3[0xD8 - 0xAC];
    u8 hit_d8[0x104 - 0xD8];
    s32 field_0x104;
};

struct Cand_8014F424 { u32 id; s32 idx; f32 dist; };
struct View_8014F424 { s32 count; Cand_8014F424 c[10]; };
struct Actor_8014F424 { u8 pad[0xA4]; u8 *cols; s32 ncols; };

struct Col_8014F57C { u8 pad[0x18]; u32 flags; u8 pos[0x2C - 0x1C]; };

struct Actor_8014F57C { u8 pad0[0x30]; u32 flags30; u8 pad1[0xA4 - 0x34]; Col_8014F57C *cols; s32 ncols; };

struct View_8014F57C { s32 count; Cand_8014F424 c[10]; u8 pad[0x94 - 0x7C]; void *f94; };

extern "C" {
s32 is_alive__9TObjEneDDFPv(void *);
f32 horizontal_distance_squared(void *, void *);
Actor_8014F424 *find_entity_by_id(s32);
s32 TNpcPlayer__sub_8014F424(View_8014F424 *view, void *pos, s32 id, f32 range);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
void rotate_matrix_y(s32, s32);
void push_matrix_from(void *);
void TCameraCtrl__sub_803D9858(s32);
extern u8 lbl_8058D490[];
extern const f32 TNpcPlayer__data_805DB1F0;
extern const f32 TNpcPlayer__data_805DB204;
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
s32 get_stat_by_key_state__10TObjPlayerFPv(void *);
s32 get_game_mode__6TLobbyFv(void);
s32 get_enemy_count__9TObjEneDDFv(void);
Actor_8014F140 *get_player_data__10TObjPlayerFi(s32);
s32 is_active__12TTecReverserFPv(void *);
f32 horizontal_distance_squared(void *, void *);
s32 obj_getField1c(void *obj);
void quick_sort__10TNpcPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern const f32 TNpcPlayer__data_805DB1F0;
s32 TNpcPlayer__sub_8014F57C(View_8014F57C *view, void *pos, f32 range);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *csnVector(s32, s32, M2C_UNK);
extern const f32 TNpcPlayer__data_805DB1F0;
extern const f32 TNpcPlayer__data_805DB204;
extern const f32 lbl_805DB208;
extern const f32 TNpcPlayer__data_805DB20C;
}

typedef struct Vec_8014E3B0 { f32 x, y, z; } Vec_8014E3B0;

extern "C" {
void reset_partner_counter(s32, s32);
void request_chatter__10TNpcPlayerFPvUi(u8 *arg0, u32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *csnVector(s32, s32, M2C_UNK);
s32 TNpcPlayer__sub_8014F0D4(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
void TNpcPlayer__sub_8014E090(u8 *arg0, u32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *csnVector(s32, s32, M2C_UNK);
s32 find_active_entity_by_id(void *);
bool TNpcPlayer__sub_8014F728(u8 *arg0, u16 arg1);
s32 is_any_teammate_in_state__10TObjPlayerFv(void *self);
s32 obj_getField1c(void *obj);
char *fn_8034D9E0(s32 state, u16 id);
void open__11TWindowCtrlFiii(u16 id, char *text, s32 kind);
s32 npc_counter_reset_if_reached(void *timer, s32 a, s32 b);
extern Text_8014E250 lbl_804F0280[];
void deliver_partner_chatter(Npc_8014E250 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
Actor_8014F140 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv(void);
M2C_UNK fn_8002B630(void *, void *);
s32 get_enemy_count__9TObjEneDDFv(void);
s32 TObjPlayer__sub_80152F40(void);
Contact_8014F140 *find_actor_body_contact(void *, void *, f32);
extern const f32 lbl_805DB210;
s32 TNpcPlayer__sub_8014F140(View_8014F140 *view);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *csnVector(s32, s32, M2C_UNK);
f32 TBoss6Kakusan__sub_803D8BD8(Vec_8014E3B0 *);
void TNpcPlayer__sub_803D97B4(Vec_8014E3B0 *);
extern const f32 TNpcPlayer__data_805DB1F0;
extern const f32 TNpcPlayer__data_805DB1F4;
s32 TNpcPlayer__sub_8014E3B0(void *self, f32 *from, f32 *to, f32 *out);
}

extern "C" {

void dispatch_action__10TNpcPlayerFPvi(void *arg0, s32 arg1);
void handle_action__10TNpcPlayerFPvi(void *arg0, s32 arg1);
void quick_sort__10TNpcPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
struct Ent_8014F28C { s32 a; s32 b; f32 key; };
M2C_UNK TNpcPlayer__sub_80152988(s32, Ent_8014F28C *, Ent_8014F28C *);
s32 TNpcPlayer__sub_8014F28C(s32 self, Ent_8014F28C *a, s32 lo, s32 hi);
M2C_UNK TNpcPlayer__sub_80150A34(void *, M2C_UNK);
s32 fn_801B7C78(s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_801B7F4C(s32, s32, void *);
s32 get_condition__10TNpcPlayerFPv(s32);

extern "C" {
void TCameraCtrl__sub_803D8934(s32, Vec_8014E3B0 *, Vec_8014E3B0 *);
f32 TObjPlayer__sub_803D89C0(Vec_8014E3B0 *, Vec_8014E3B0 *);
f32 TBoss6Kakusan__sub_803D8BD8(Vec_8014E3B0 *);
void TNpcPlayer__sub_803D97B4(Vec_8014E3B0 *);
void TNpcPlayer__sub_8014ECD8(u8 *self, Vec_8014E3B0 *from, Vec_8014E3B0 *to, Vec_8014E3B0 *d, Vec_8014E3B0 *out);
}

typedef struct Obj_8014EE98 { u8 pad[0x2FC]; Vec_8014E3B0 pos; } Obj_8014EE98;

typedef struct Owner_8014EE98 { u8 pad[0x94]; Obj_8014EE98 *obj; } Owner_8014EE98;

typedef struct Self_8014EE98 {
    u8 pad[0x74];
    Owner_8014EE98 *f74;
    Owner_8014EE98 *f78;
    u8 pad7C[0xDC - 0x7C];
    u8 fDC[4];
} Self_8014EE98;

typedef struct Line_8014EE98 { Vec_8014E3B0 p; Vec_8014E3B0 d; } Line_8014EE98;

extern "C" {
f32 TObjPlayer__sub_803D89C0(Vec_8014E3B0 *, Vec_8014E3B0 *);
f32 TBoss6Kakusan__sub_803D8BD8(Vec_8014E3B0 *);
void TNpcPlayer__sub_803D97B4(Vec_8014E3B0 *);
void TNpcPlayer__sub_803E18C0(void *, Line_8014EE98 *, Vec_8014E3B0 *);
s32 TNpcPlayer__sub_8014EE98(Self_8014EE98 *self, Vec_8014E3B0 *from, Vec_8014E3B0 *to, Vec_8014E3B0 *d, Vec_8014E3B0 *out, Vec_8014E3B0 *out2);
}

void dispatch_action__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi((void *)(arg0), (s32)(arg1));
        } else {
            TNpcPlayer__sub_80150A34(arg0, 0xF);
        }
        if (M2C_FIELD(arg0, s32 *, 0x80) & 0x200) {
            request_chatter__10TNpcPlayerFPvUi((u8 *)(arg0), (u32)(0x13));
        }
        return;
    case 1:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi((void *)(arg0), (s32)(arg1));
            return;
        }
        break;
    case 2:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi((void *)(arg0), (s32)(arg1));
            return;
        }
        TNpcPlayer__sub_80150A34(arg0, 0x10);
        return;
    case 3:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi((void *)(arg0), (s32)(arg1));
            return;
        }
        TNpcPlayer__sub_80150A34(arg0, 0x11);
        break;
    }
}

void TNpcPlayer__sub_8014E090(u8 *arg0, u32 arg1) {
    M2C_FIELD(arg0, u32 *, 0x7C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFEFFF);
    switch (arg1) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFFFCF);
        VecCopy__FP3VecPC3Vec((void *)((void *) ((u8 *)(arg0) + 0xDC)), (int)((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x2FC)));
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFFFEF);
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) | 0x20);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFFFDF);
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) | 0x10);
        return;
    case 8:
        VecCopy__FP3VecPC3Vec((void *)((void *) ((u8 *)(arg0) + 0xDC)), (int)((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x2FC)));
        return;
    case 16:
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFFFEF);
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) | 0x20);
    default:
        return;
    }
}

void handle_action__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;

    switch (arg1) {
    case 0:
        temp_r3 = fn_801B7C78(M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94), 3, 0);
        if (temp_r3 != -1) {
            temp_r5 = M2C_FIELD(arg0, void **, 0x78);
            fn_801B7F4C(M2C_FIELD(temp_r5, s32 *, 0x94), temp_r3, temp_r5);
            M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) | 0x10000);
        }
        break;
    case 1:
        temp_r3_2 = fn_801B7C78(M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94), 3, 1);
        if (temp_r3_2 != -1) {
            temp_r5_2 = M2C_FIELD(arg0, void **, 0x78);
            fn_801B7F4C(M2C_FIELD(temp_r5_2, s32 *, 0x94), temp_r3_2, temp_r5_2);
            return;
        }
        break;
    case 2:
        temp_r3_3 = fn_801B7C78(M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94), 3, 6);
        if (temp_r3_3 != -1) {
            temp_r5_3 = M2C_FIELD(arg0, void **, 0x78);
            fn_801B7F4C(M2C_FIELD(temp_r5_3, s32 *, 0x94), temp_r3_3, temp_r5_3);
        }
        break;
    }
}

void deliver_partner_chatter(Npc_8014E250 *self) {
    u16 id;
    char *text;
    if (self->state >= 0x19) {
        self->flags &= ~4;
        self->state = 0x19;
        return;
    }
    if (is_any_teammate_in_state__10TObjPlayerFv(self) != 0) {
        return;
    }
    id = obj_getField1c(self->owner->obj);
    if (id != 0xFFFF) {
        text = fn_8034D9E0(self->state, id);
        if (text != 0) {
            open__11TWindowCtrlFiii(id, text, 0x1B);
        } else {
            text = lbl_804F0280[self->state].text;
            if (text[0] != 0) {
                open__11TWindowCtrlFiii(id, text, 0x1B);
            }
        }
    }
    self->flags &= ~4;
    if (npc_counter_reset_if_reached(self->timer, 0, 0x190) != 0) {
        self->state = 0x19;
    }
}

void request_chatter__10TNpcPlayerFPvUi(u8 *arg0, u32 arg1) {
  u32 *new_var;
  int new_var2;
  new_var = (u32 *) (((s8 *) arg0) + 0x24);
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x84)))) != 0)
  {
    if (arg1 != 4U)
    {
      if (arg1 == 0x11U)
      {
        return;
      }
      goto block_4;
    }
  }
  else
  {
    new_var2 = 0x24;
    block_4:
    reset_partner_counter((s32) (arg0 + 0x5C), 0);
    if (arg1 != ((u32) (*((u32 *) (((s8 *) arg0) + new_var2)))))
    {
      *new_var = arg1;
      *((s32 *) (((s8 *) arg0) + 0x80)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x80))) | 4);
    }
  }
}

#pragma push
#pragma fp_contract on
s32 TNpcPlayer__sub_8014E3B0(void *self, f32 *from, f32 *to, f32 *out) {
    Vec_8014E3B0 dir;
    u8 *contact;
    contact = csnVector((s32) from, (s32) to, 0x2100);
    if (contact != NULL) {
        dir.x = to[0] - from[0];
        dir.y = TNpcPlayer__data_805DB1F0;
        dir.z = to[2] - from[2];
        if (TNpcPlayer__data_805DB1F0 != TBoss6Kakusan__sub_803D8BD8(&dir)) {
            TNpcPlayer__sub_803D97B4(&dir);
        }
        VecCopy__FP3VecPC3Vec(out, M2C_FIELD(contact, s32 *, 4));
        out[0] = -((TNpcPlayer__data_805DB1F4 * dir.x) - out[0]);
        out[1] = -((TNpcPlayer__data_805DB1F4 * dir.y) - out[1]);
        out[2] = -((TNpcPlayer__data_805DB1F4 * dir.z) - out[2]);
        return 1;
    }
    return 0;
}
#pragma pop

#pragma push
#pragma fp_contract on
void TNpcPlayer__sub_8014ECD8(u8 *self, Vec_8014E3B0 *from, Vec_8014E3B0 *to, Vec_8014E3B0 *d, Vec_8014E3B0 *out) {
    Vec_8014E3B0 dir;
    Vec_8014E3B0 save;
    Vec_8014E3B0 a;
    Vec_8014E3B0 b;
    Vec_8014E3B0 diff;
    dir.x = -d->x;
    dir.y = TNpcPlayer__data_805DB1F0;
    dir.z = -d->z;
    if (TNpcPlayer__data_805DB1F0 != TBoss6Kakusan__sub_803D8BD8(&dir)) {
        TNpcPlayer__sub_803D97B4(&dir);
    }
    VecCopy__FP3VecPC3Vec(&save, (int)&dir);
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, 0x4000);
    TCameraCtrl__sub_803D8934(0, &dir, &a);
    TCameraCtrl__sub_803D9858(1);
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, -0x4000);
    TCameraCtrl__sub_803D8934(0, &dir, &b);
    TCameraCtrl__sub_803D9858(1);
    diff.x = to->x - from->x;
    diff.y = TNpcPlayer__data_805DB1F0;
    diff.z = to->z - from->z;
    if (TNpcPlayer__data_805DB1F0 != TBoss6Kakusan__sub_803D8BD8(&diff)) {
        TNpcPlayer__sub_803D97B4(&diff);
    }
    if (TObjPlayer__sub_803D89C0(&diff, &a) > TNpcPlayer__data_805DB1F0) {
        VecCopy__FP3VecPC3Vec(&dir, (int)&b);
    } else {
        VecCopy__FP3VecPC3Vec(&dir, (int)&a);
    }
    if ((s8)self[0x8C] >= 0x14) {
        out->x = -((TNpcPlayer__data_805DB204 * dir.x) - from->x);
        out->y = from->y;
        out->z = -((TNpcPlayer__data_805DB204 * dir.z) - from->z);
    } else {
        out->x = TNpcPlayer__data_805DB204 * dir.x + from->x;
        out->y = from->y;
        out->z = TNpcPlayer__data_805DB204 * dir.z + from->z;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
s32 TNpcPlayer__sub_8014EE98(Self_8014EE98 *self, Vec_8014E3B0 *from, Vec_8014E3B0 *to, Vec_8014E3B0 *d, Vec_8014E3B0 *out, Vec_8014E3B0 *out2) {
    Line_8014EE98 line;
    Vec_8014E3B0 dir;
    Vec_8014E3B0 perp;
    Vec_8014E3B0 hit;
    Vec_8014E3B0 tmp;
    Vec_8014E3B0 v;
    f32 len;
    f32 s;
    dir.x = to->x - from->x;
    dir.y = TNpcPlayer__data_805DB1F0;
    dir.z = to->z - from->z;
    len = TBoss6Kakusan__sub_803D8BD8(&dir);
    if (TNpcPlayer__data_805DB1F0 != len) {
        TNpcPlayer__sub_803D97B4(&dir);
    }
    perp.x = d->z;
    perp.y = TNpcPlayer__data_805DB1F0;
    perp.z = -d->x;
    if (TObjPlayer__sub_803D89C0(&dir, &perp) < TNpcPlayer__data_805DB1F0) {
        perp.x = -perp.x;
        perp.z = -perp.z;
    }
    line.p.x = self->f78->obj->pos.x;
    line.p.y = self->f78->obj->pos.y;
    line.p.z = self->f78->obj->pos.z;
    line.d.x = perp.x;
    line.d.y = TNpcPlayer__data_805DB1F0;
    line.d.z = perp.z;
    TNpcPlayer__sub_803E18C0(self->fDC, &line, &hit);
    s = lbl_805DB208 * len;
    if (s <= TNpcPlayer__data_805DB204) {
        s = TNpcPlayer__data_805DB204;
    }
    out->x = perp.x * s + from->x;
    out->y = from->y;
    out->z = perp.z * s + from->z;
    VecCopy__FP3VecPC3Vec(&tmp, (int)&self->f74->obj->pos);
    if (csnVector((s32)((s32)&tmp), (s32)((s32)&hit), (M2C_UNK)(0x2100)) != 0) {
        hit.x = TNpcPlayer__data_805DB20C * perp.x + hit.x;
        hit.z = TNpcPlayer__data_805DB20C * perp.z + hit.z;
        return 0;
    }
    v.x = self->f74->obj->pos.x - hit.x;
    v.z = self->f74->obj->pos.z - hit.z;
    v.y = TNpcPlayer__data_805DB1F0;
    if (TNpcPlayer__data_805DB1F0 != TBoss6Kakusan__sub_803D8BD8(&v)) {
        TNpcPlayer__sub_803D97B4(&v);
    }
    out2->x = TNpcPlayer__data_805DB20C * perp.x + hit.x;
    out2->z = TNpcPlayer__data_805DB20C * perp.z + hit.z;
    out2->y = TNpcPlayer__data_805DB1F0;
    return 1;
}
#pragma pop

s32 TNpcPlayer__sub_8014F0D4(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(csnVector(arg1, arg2, 0x2100));
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg3), (int) (M2C_FIELD(temp_r3, s32 *, 4)));
        VecCopy__FP3VecPC3Vec((void *) (arg4), (int) (M2C_FIELD(temp_r3, s32 *, 4) + 0xC));
        return 1;
    }
    return 0;
}

s32 TNpcPlayer__sub_8014F140(View_8014F140 *view) {
    s32 i;
    Actor_8014F140 *actor;
    Contact_8014F140 *contact;
    Probe_8014F140 *probe;
    probe = view->probe;
    if (probe == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(probe->pos38, (int)(M2C_FIELD(view, s32 *, 0x94) + 0x38));
    view->probe->field_0x60 = view->field_0x98;
    for (i = get_game_mode__6TLobbyFv(); i < get_game_mode__6TLobbyFv() + get_enemy_count__9TObjEneDDFv() + TObjPlayer__sub_80152F40(); i++) {
        actor = get_player_data__10TObjPlayerFi(i);
        if ((actor != NULL) && !(actor->flags30 & 0x80000000)) {
            contact = find_actor_body_contact(view->probe, actor, lbl_805DB210);
            if (contact != NULL) {
                if (actor->flags30 & 0x40000000) {
                    if (!(contact->flags18 & 8) && !(contact->flags18 & 0x100) && !(contact->flags18 & 0x200)) {
                        fn_8002B630(view->hit_d8, contact);
                        view->field_0x104 = actor->field_0x60;
                        view->flags8c |= 0x20;
                        return 1;
                    }
                } else if (actor->flags30 & 0x20000000) {
                    if (!(contact->flags18 & 8) && !(contact->flags18 & 0x100) && !(contact->flags18 & 0x200)) {
                        view->flags8c |= 0x80;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

s32 TNpcPlayer__sub_8014F28C(s32 self, Ent_8014F28C *a, s32 lo, s32 hi) {
    Ent_8014F28C tmp;
    f32 pivot;
    s32 i;
    s32 j;

    j = hi;
    i = lo - 1;
    pivot = a[hi].key;
    for (;;) {
        while (a[++i].key < pivot) {
        }
        while (i < --j && pivot < a[j].key) {
        }
        if (i >= j || i >= 10 || j >= 10) {
            break;
        }
        TNpcPlayer__sub_80152988(self, &a[i], &tmp);
        TNpcPlayer__sub_80152988(self, &a[j], &a[i]);
        TNpcPlayer__sub_80152988(self, &tmp, &a[j]);
    }
    TNpcPlayer__sub_80152988(self, &a[i], &tmp);
    TNpcPlayer__sub_80152988(self, &a[hi], &a[i]);
    TNpcPlayer__sub_80152988(self, &tmp, &a[hi]);
    return i;
}

void quick_sort__10TNpcPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 < arg3) {
        temp_r3 = ((s32 (*)(void))TNpcPlayer__sub_8014F28C)();
        quick_sort__10TNpcPlayerFiiii((s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(temp_r3 - 1));
        quick_sort__10TNpcPlayerFiiii((s32)(arg0), (s32)(arg1), (s32)(temp_r3 + 1), (s32)(arg3));
    }
}
s32 TNpcPlayer__sub_8014F424(View_8014F424 *view, void *pos, s32 id, f32 range) {
    Actor_8014F424 *actor;
    s32 found;
    s32 i;
    f32 d;
    s32 j;

    view->count = 0;
    found = 0;
    for (j = 0; j < 10; j++) {
        view->c[j].id = 0xFFFF;
        view->c[j].dist = TNpcPlayer__data_805DB1F0;
    }
    actor = find_entity_by_id(id);
    if (is_alive__9TObjEneDDFPv(actor) != 0) {
        range = range * range;
        for (i = 0; i < actor->ncols; i++) {
            if (actor->cols == 0) {
                break;
            }
            d = horizontal_distance_squared(pos, actor->cols + i * 0x2C + 0x1C);
            if (d < range) {
                found = 1;
                view->c[view->count].id = (u16)obj_getField1c(actor);
                view->c[view->count].dist = d;
                view->c[view->count].idx = i;
                if (view->count >= 9) {
                    break;
                }
                view->count++;
            }
        }
    }
    quick_sort__10TNpcPlayerFiiii((s32)view, (s32)&view->c[0], 0, view->count - 1);
    return found;
}

s32 TNpcPlayer__sub_8014F57C(View_8014F57C *view, void *pos, f32 range) {
    f32 origin[3];
    Actor_8014F57C *actor;
    s32 found;
    s32 i;
    s32 c;
    s32 j;
    f32 d;
    found = 0;
    get_stat_by_key_state__10TObjPlayerFPv(view->f94);
    VecCopy__FP3VecPC3Vec(origin, (int)pos);
    view->count = 0;
    for (j = 0; j < 10; j++) {
        view->c[j].id = 0xFFFF;
        view->c[j].dist = TNpcPlayer__data_805DB1F0;
    }
    i = get_game_mode__6TLobbyFv();
    range = range * range;
    for (; i < get_game_mode__6TLobbyFv() + get_enemy_count__9TObjEneDDFv(); i++) {
        actor = (Actor_8014F57C *)get_player_data__10TObjPlayerFi(i);
        if (is_active__12TTecReverserFPv(actor) == 0 || !(actor->flags30 & 0x20000000)) {
            continue;
        }
        for (c = 0; c < actor->ncols; c++) {
            if (actor->cols == 0) {
                break;
            }
            if (!(actor->cols[c].flags & 0x8000)) {
                continue;
            }
            d = horizontal_distance_squared(origin, actor->cols[c].pos);
            if (d < range) {
                found = 1;
                view->c[view->count].id = (u16)obj_getField1c(actor);
                view->c[view->count].dist = d;
                view->c[view->count].idx = c;
                if (view->count >= 9) {
                    break;
                }
                view->count++;
            }
        }
    }
    quick_sort__10TNpcPlayerFiiii((s32)view, (s32)&view->c[0], 0, view->count - 1);
    return found;
}

bool TNpcPlayer__sub_8014F728(u8 *arg0, u16 arg1) {
    Stack_8014F728 stack;
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void *)((void *) (&stack.sp8)), (int)((void *) (find_active_entity_by_id((void *) (arg1)) + 0x2FC)));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x94));
    stack.spC = M2C_FIELD(temp_r3, f32 *, 0x300);
    return ((s32)csnVector((s32)((void *) (temp_r3 + 0x2FC)), (s32)((void *) (&stack.sp8)), (M2C_UNK)((int) (0x2100)))) == 0;
}

}
