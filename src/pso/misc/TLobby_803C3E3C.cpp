#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_record__6TLobbyFPv(u8 *arg0);
M2C_UNK TLobby__sub_803CB538(int);
M2C_UNK memset(void *, int, int);

void clear_record__6TLobbyFPv(u8 *arg0) {
    if (arg0 != NULL) {
        TLobby__sub_803CB538((int) (M2C_FIELD(arg0, s32 *, 8)));
        memset((void *) (arg0), (int) (0), (int) (0xB8));
        M2C_FIELD(arg0, s16 *, 0) = 0;
    }
}

}
