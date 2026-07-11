#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_difficulty__6TLobbyFv(void);
M2C_UNK TLobby__sub_8001DC30();
M2C_UNK TLobby__sub_8001E2B8();
M2C_UNK clamp_difficulty__6TLobbyFi(s32);
M2C_UNK TLobby__sub_8001E5C8();

extern s32 TLobby__data_805D4AB4;
extern s32 TLobby__data_805D4AB8;
extern s32 lbl_805D5550;

void update_difficulty__6TLobbyFv(void) {
    s32 temp_r31;
    s32 temp_r30;

    temp_r31 = TLobby__data_805D4AB4;
    temp_r30 = TLobby__data_805D4AB8;
    clamp_difficulty__6TLobbyFi(lbl_805D5550);
    TLobby__sub_8001E5C8();
    TLobby__sub_8001E2B8();
    if (((s32) TLobby__data_805D4AB4 != temp_r31) || ((s32) TLobby__data_805D4AB8 != temp_r30)) {
        TLobby__sub_8001DC30();
    }
}

}
