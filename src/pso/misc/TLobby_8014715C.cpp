#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8014715C(void* p, void* q);
void TLobby__sub_80147168(void);
M2C_UNK TLobby__sub_8040A3C0();
M2C_UNK TLobby__sub_8040AD64();

void TLobby__sub_8014715C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

extern s32 lbl_805D570C;

void TLobby__sub_80147168(void) {
    if ((s32) lbl_805D570C != 0) {
        TLobby__sub_8040AD64();
        TLobby__sub_8040A3C0();
        lbl_805D570C = 0;
    }
}

}
