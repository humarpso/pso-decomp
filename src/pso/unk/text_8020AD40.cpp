#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8020AF0C {
    s32 sp8;
    M2C_UNK spC;
    M2C_UNK sp10;
};

struct Stack_8020AFA4 {
    s32 sp8;
    M2C_UNK spC;
    M2C_UNK sp10;
};

struct Item_8020AD40 { s32 id; u8 pad[8]; };

struct Sub_8020AD40 { Item_8020AD40 *items; s32 count; };

struct Grp_8020AD40 { Sub_8020AD40 *subs; s32 count; };

struct Rec_8020AD40 { u8 pad0[2]; s16 f2; u8 pad4[0x40]; };

extern "C" {
s32 TLobby__sub_800F8AE8();
M2C_UNK TLobby__sub_801A2514(int);
s32 TLobby__sub_802077CC(int, void *);
M2C_UNK TLobby__sub_8020AB50(int, int, int, int);
M2C_UNK TLobby__sub_8020B2DC();
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60EC;
extern s32 TLobby__data_805D614C;
s32 TLobby__sub_8020AF0C(void);
s32 TLobby__sub_800F8AE8();
M2C_UNK TLobby__sub_801A2528(int);
s32 TLobby__sub_802077CC(int, void *);
M2C_UNK TLobby__sub_8020B308();
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E8;
extern s32 TLobby__data_805D6148;
s32 TLobby__sub_8020AFA4(void);
s32 TLobby__sub_800F9DF4(void *, Rec_8020AD40 *);
void debug_print__6TLobbyFii(void *, ...);
void TLobby__sub_801317E4(void *, s32, void *);
void TLobby__sub_802081AC(Rec_8020AD40 *);
void TLobby__sub_8020AA94(Rec_8020AD40 *, s32, s32);
void TLobby__sub_8020B3E4(s32, Rec_8020AD40 *, s32);
s32 TLobby__sub_8030A7B0();
extern u8 lbl_8044BBB0[];
extern u8 lbl_8044BBB8[];
extern u8 lbl_8044BBDC[];
extern u8 lbl_8044BBE8[];
extern Grp_8020AD40 *TLobby__data_805D6068;
extern Rec_8020AD40 *TLobby__data_805D60F0;
extern s32 TLobby__data_805D60F4;
s32 load_area_object_set(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

s32 load_area_object_set(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    char name[0x20];
    Sub_8020AD40 *subs;
    Item_8020AD40 *items;
    s32 id;
    s32 len;
    Rec_8020AD40 *r;
    s32 n;
    s32 i;
    subs = TLobby__data_805D6068[arg1].subs;
    if (subs == NULL || TLobby__data_805D6068[arg1].count - 1 < arg2) {
        debug_print__6TLobbyFii(lbl_8044BBB8);
        return 0;
    }
    items = subs[arg2].items;
    if (items == NULL || subs[arg2].count - 1 < arg3) {
        debug_print__6TLobbyFii(lbl_8044BBB8);
        return 0;
    }
    id = items[arg3].id;
    if (arg1 == 0 || arg1 == 0x12) {
        switch (TLobby__sub_8030A7B0()) {
        case 0:
            TLobby__sub_801317E4(name, id, lbl_8044BBB0);
            break;
        case 1:
            TLobby__sub_801317E4(name, id, lbl_8044BBDC);
            break;
        case 2:
            TLobby__sub_801317E4(name, id, lbl_8044BBE8);
            break;
        }
    } else {
        TLobby__sub_801317E4(name, id, lbl_8044BBB0);
    }
    len = TLobby__sub_800F9DF4(name, TLobby__data_805D60F0);
    if (len < 0) {
        return 0;
    }
    if (len > TLobby__data_805D60F4) {
        return 0;
    }
    r = TLobby__data_805D60F0;
    n = len / sizeof(Rec_8020AD40);
    for (i = 0; i < n; i++, r++) {
        TLobby__sub_802081AC(r);
        r->f2 = 0;
    }
    TLobby__sub_8020AA94(TLobby__data_805D60F0, n, arg1);
    TLobby__sub_8020B3E4(arg0, TLobby__data_805D60F0, len);
    return 1;
}

s32 TLobby__sub_8020AF0C(void) {
    Stack_8020AF0C stack;
    s32 var_r31;
    var_r31 = 0;
loop_1:
    if ((TLobby__sub_802077CC((int) (var_r31), (void *) (&stack.sp8)) == 1) && (stack.sp8 >= 0)) {
        if (TLobby__sub_800F8AE8() != 0) {
            return 0;
        }
        TLobby__sub_8020AB50((int) (var_r31), (int) (stack.sp8), (int) (stack.spC), (int) (stack.sp10));
        goto block_6;
    }
block_6:
    var_r31 += 1;
    if (var_r31 >= 0x12) {
        TLobby__sub_801A2514((int) ((u16) TLobby__data_805D60EC));
        TLobby__data_805D614C = TLobby__data_805D60E4;
        TLobby__sub_8020B2DC();
        return 1;
    }
    goto loop_1;
}
s32 TLobby__sub_8020AFA4(void) {
    Stack_8020AFA4 stack;
    s32 var_r31;
    var_r31 = 0;
loop_1:
    if ((TLobby__sub_802077CC((int) (var_r31), (void *) (&stack.sp8)) == 1) && (stack.sp8 >= 0)) {
        if (TLobby__sub_800F8AE8() != 0) {
            return 0;
        }
        load_area_object_set((s32)((int) (var_r31)), (s32)((int) (stack.sp8)), (s32)((int) (stack.spC)), (s32)((int) (stack.sp10)));
        goto block_6;
    }
block_6:
    var_r31 += 1;
    if (var_r31 >= 0x12) {
        TLobby__sub_801A2528((int) ((u16) TLobby__data_805D60E8));
        TLobby__data_805D6148 = TLobby__data_805D60E0;
        TLobby__sub_8020B308();
        return 1;
    }
    goto loop_1;
}

}
