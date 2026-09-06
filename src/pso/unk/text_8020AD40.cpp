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
M2C_UNK TLobby__sub_8020AD40(int, int, int, int);
M2C_UNK TLobby__sub_8020B308();
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E8;
extern s32 TLobby__data_805D6148;
s32 TLobby__sub_8020AFA4(void);
}

extern "C" {

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
        TLobby__sub_8020AD40((int) (var_r31), (int) (stack.sp8), (int) (stack.spC), (int) (stack.sp10));
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
