#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiChgGameModeGC__sub_8036E050(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E100(void *arg0);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, M2C_UNK);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E224(void *);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E26C(void *);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E2AC(void *, M2C_UNK);
s32 TAdMultiChgGameModeGC__sub_8036E624();
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
M2C_UNK TLobby__sub_80269C6C(u32, s32, M2C_UNK);
s32 TWindowSubComCard__sub_8007341C(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
M2C_UNK TWindow__close(void *);
s32 TAdMultiChgGameModeGC__sub_8036DE10(void *, M2C_UNK, s32);

void TAdMultiChgGameModeGC__sub_8036E050(void *arg0) {
    s32 temp_r3;

    if (TAdMultiChgGameModeGC__sub_8036E624() == 0) {
        if (M2C_FIELD(arg0, void **, 0x34) != 0) {
            if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, void **, 0x34)) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, void **, 0x34));
                switch (temp_r3) {
                case 0:
                    TAdMultiChgGameModeGC__sub_8036E224(arg0);
                    TAdMultiChgGameModeGC__sub_8036E26C(arg0);
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 5);
                    return;
                case 1:
                    TAdMultiChgGameModeGC__sub_8036E26C(arg0);
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858(arg0, 8);
        }
    }
}

void TAdMultiChgGameModeGC__sub_8036E100(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E2AC(arg0, 0);
    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 4);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TLobby__sub_80269C6C(M2C_FIELD(arg0, u32 *, 0x30), TAdMultiChgGameModeGC__sub_8036DE10(arg0, 1, M2C_FIELD(arg0, s32 *, 0x24)), 3);
    }
}

}
