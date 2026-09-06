#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80135458 {
    s8 sp8;
    s8 sp9;
    s16 spA;
};

struct Stack_80135598 {
    M2C_UNK sp8;
    u8 trailing_storage[0x488];
};

extern "C" {
int bswap_packet_header__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_801E44D8(void *, void *);
void TLobby__sub_80135458(s32 arg0);
s32 TLobby__sub_8013A4A8(int, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
s32 TObjPlayer__sub_801B4CE4(void *, void *);
s32 TObjPlayer__sub_801B4FD8(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
extern s32 lbl_805D53A0;
void TLobby__sub_80135598(s32 arg0);
}

extern "C" {

void TLobby__sub_80135FFC(void);

void TLobby__sub_80135458(s32 arg0) {
    Stack_80135458 stack;
    stack.sp8 = 0x71;
    stack.sp9 = 1;
    stack.spA = 0;
    bswap_packet_header__6TLobbyFPv(&stack.sp8);
    TLobby__sub_801E44D8((void *) (&stack.sp8), (void *) (arg0));
}

void TLobby__sub_80135598(s32 arg0) {
    Stack_80135598 stack;
    u8 *temp_r3;
    TObjPlayer__sub_801B4FD8((void *) (&stack.sp8));
    temp_r3 = (u8 *)(alloc_buffer__11TOBoss4RockFPv(0x494));
    if (temp_r3 != NULL) {
        TObjPlayer__sub_801B4CE4((void *) (TPlayerBattleCtrl4P__sub_801BA74C((void *) (lbl_805D53A0))), (void *) (temp_r3 + 8));
        M2C_FIELD(temp_r3, s8 *, 0) = 0x70;
        M2C_FIELD(temp_r3, s8 *, 1) = 0;
        M2C_FIELD(temp_r3, s16 *, 2) = (s16) lbl_805D53A0;
        M2C_FIELD(temp_r3, s32 *, 4) = 0x494;
        TLobby__sub_8013A4A8((int) (temp_r3), (void *) (arg0));
        free__11TOBoss4RockFUi((int) (temp_r3));
    }
}

void TLobby__sub_80135FFC(void) {  }

}
