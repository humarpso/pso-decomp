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

typedef struct Vec_8014E3B0 { f32 x, y, z; } Vec_8014E3B0;

extern "C" {
void TNpcPlayer__sub_801528B8(s32, s32);
void TNpcPlayer__sub_8014E33C(u8 *arg0, u32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TObjButterflyLobby__sub_8007A5D8(s32, s32, M2C_UNK);
s32 TNpcPlayer__sub_8014F0D4(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
void TNpcPlayer__sub_8014E090(u8 *arg0, u32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TObjButterflyLobby__sub_8007A5D8(s32, s32, M2C_UNK);
s32 TNpcPlayer__sub_800D87EC(void *);
bool TNpcPlayer__sub_8014F728(u8 *arg0, u16 arg1);
s32 is_any_teammate_in_state__10TObjPlayerFv(void *self);
s32 obj_getField1c(void *obj);
char *fn_8034D9E0(s32 state, u16 id);
void open__11TWindowCtrlFiii(u16 id, char *text, s32 kind);
s32 TNpcPlayer__sub_80152900(void *timer, s32 a, s32 b);
extern Text_8014E250 lbl_804F0280[];
void TNpcPlayer__sub_8014E250(Npc_8014E250 *self);
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
u8 *TObjButterflyLobby__sub_8007A5D8(s32, s32, M2C_UNK);
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

void dispatch_action__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi((void *)(arg0), (s32)(arg1));
        } else {
            TNpcPlayer__sub_80150A34(arg0, 0xF);
        }
        if (M2C_FIELD(arg0, s32 *, 0x80) & 0x200) {
            TNpcPlayer__sub_8014E33C((u8 *)(arg0), (u32)(0x13));
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

void TNpcPlayer__sub_8014E250(Npc_8014E250 *self) {
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
    if (TNpcPlayer__sub_80152900(self->timer, 0, 0x190) != 0) {
        self->state = 0x19;
    }
}

void TNpcPlayer__sub_8014E33C(u8 *arg0, u32 arg1) {
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
    TNpcPlayer__sub_801528B8((s32) (arg0 + 0x5C), 0);
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
    contact = TObjButterflyLobby__sub_8007A5D8((s32) from, (s32) to, 0x2100);
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

s32 TNpcPlayer__sub_8014F0D4(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(TObjButterflyLobby__sub_8007A5D8(arg1, arg2, 0x2100));
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
bool TNpcPlayer__sub_8014F728(u8 *arg0, u16 arg1) {
    Stack_8014F728 stack;
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void *)((void *) (&stack.sp8)), (int)((void *) (TNpcPlayer__sub_800D87EC((void *) (arg1)) + 0x2FC)));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x94));
    stack.spC = M2C_FIELD(temp_r3, f32 *, 0x300);
    return ((s32)TObjButterflyLobby__sub_8007A5D8((s32)((void *) (temp_r3 + 0x2FC)), (s32)((void *) (&stack.sp8)), (M2C_UNK)((int) (0x2100)))) == 0;
}

}
