#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_803C0720(int);
M2C_UNK TLobby__sub_803C4630();
M2C_UNK TLobby__sub_803C4660();
M2C_UNK TLobby__sub_803CC030(int, int);
M2C_UNK TLobby__sub_803CC050(int, int);

void TLobby__sub_803C9DB4(u8 *arg0) {
    void **temp_r3;
    u8 *temp_r4;

    TLobby__sub_803C4660();
    TLobby__sub_803CC050((int) (M2C_FIELD(arg0, s32 *, 0xC)), (int) (0));
    TLobby__sub_803CC030((int) (M2C_FIELD(arg0, s32 *, 0xC)), (int) (0));
    TLobby__sub_803C0720((int) (M2C_FIELD(arg0, s32 *, 4)));
    if ((s32) M2C_FIELD(arg0, u8 *, 2) == 2) {
        temp_r3 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_r3 != NULL) {
            temp_r4 = (unsigned char *) (*temp_r3);
            M2C_FIELD(temp_r4, M2C_UNK (**)(void *), 0xC)(temp_r4);
        }
    }
    M2C_FIELD(arg0, void ***, 0x14) = NULL;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    TLobby__sub_803C4630();
}

}
