#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020D94C(void);
void free__11TOBoss4RockFUi(void*);

extern u32 TLobby__data_805D611C;
extern s32 TLobby__data_805D6120;
extern u32 TLobby__data_805D6124;
extern s32 TLobby__data_805D6128;

void TLobby__sub_8020D94C(void) {
    if ((u32) TLobby__data_805D611C != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D611C);
        TLobby__data_805D611C = 0U;
        TLobby__data_805D6120 = 0;
    }
    if ((u32) TLobby__data_805D6124 != 0U) {
        free__11TOBoss4RockFUi((void*)TLobby__data_805D6124);
        TLobby__data_805D6124 = 0U;
        TLobby__data_805D6128 = 0;
    }
}

}
