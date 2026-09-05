#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TAdStorySelectGC__sub_80207D44(int);
extern s32 TLobby__data_805D5E78;
void TLobby__sub_801E73B4(s32 arg0);
}

extern "C" {

void request_1c38_1_7__6TLobbyFv(void);
void reset_and_set_mode__6TLobbyFv(void);
M2C_UNK TLobby__sub_801F1C38(M2C_UNK, M2C_UNK);
int TLobby__sub_801F1C8C(void*, void*);

void request_1c38_1_7__6TLobbyFv(void) {
    TLobby__sub_801F1C38(1, 7);
}

    extern int TLobby__data_805D5EA4;
void reset_and_set_mode__6TLobbyFv(void) { TLobby__data_805D5EA4 = 0; TLobby__sub_801F1C8C((void*)1, (void*)7); }
void TLobby__sub_801E73B4(s32 arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC));
    switch (temp_r0) {
    case 0:
        TAdStorySelectGC__sub_80207D44((int) (0));
        return;
    case 1:
        TAdStorySelectGC__sub_80207D44((int) (1));
        return;
    }
}

}
