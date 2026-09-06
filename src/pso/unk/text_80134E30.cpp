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

extern "C" {
int bswap_packet_header__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_801E44D8(void *, void *);
void TLobby__sub_80135458(s32 arg0);
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

void TLobby__sub_80135FFC(void) {  }

}
