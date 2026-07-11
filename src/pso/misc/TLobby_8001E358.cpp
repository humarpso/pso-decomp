#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_boss4_rock__6TLobbyFv(void);
void free__11TOBoss4RockFUi(void*);

extern u32 TLobby__data_805D4AA0;
extern s32 TLobby__data_805D4AA4;
extern s32 TLobby__data_805D4AA8;
extern s32 TLobby__data_805D4AAC;
extern s32 TLobby__data_805D4AB0;

void free_boss4_rock__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D4AA0 != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D4AA0);
        TLobby__data_805D4AA0 = 0U;
    }
    TLobby__data_805D4AA4 = 0;
    TLobby__data_805D4AA8 = 0;
    TLobby__data_805D4AAC = 0;
    TLobby__data_805D4AB0 = 0;
}

}
