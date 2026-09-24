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
}

extern "C" {

void dispatch_action__10TNpcPlayerFPvi(void *arg0, s32 arg1);
void handle_action__10TNpcPlayerFPvi(void *arg0, s32 arg1);
void quick_sort__10TNpcPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TNpcPlayer__sub_8014F28C();
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

void quick_sort__10TNpcPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 < arg3) {
        temp_r3 = TNpcPlayer__sub_8014F28C();
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
