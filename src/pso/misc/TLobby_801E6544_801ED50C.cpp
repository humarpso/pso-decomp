#include "types.h"
#include "pso/boss/TBoss1Dragon.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK setControlOverride__12TBoss1DragonFs(int, void *);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801ED52C(s32 arg0);
s32 is_split_screen();
s32 TLobby__sub_80070F4C();
s32 TLobby__sub_8029299C();
void TLobby__sub_801ED55C(s32 arg0);
s32 is_split_screen();
s32 TLobby__sub_80070FD8();
s32 TLobby__sub_80292A34();
void TLobby__sub_801ED5B4(s32 arg0);
}

extern "C" {

void TLobby__sub_801ED50C(void* p);

void TLobby__sub_801ED50C(void* p) { TBoss1Dragon::clearControlOverride(); }
void TLobby__sub_801ED52C(s32 arg0) {
    setControlOverride__12TBoss1DragonFs((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}
void TLobby__sub_801ED55C(s32 arg0) {
    if (is_split_screen() == 1) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_8029299C();
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80070F4C();
}
void TLobby__sub_801ED5B4(s32 arg0) {
    if (is_split_screen() == 1) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80292A34();
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80070FD8();
}

}
