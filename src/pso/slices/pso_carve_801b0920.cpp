#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK TFontSmallLobby__sub_801C0480(M2C_UNK *);
M2C_UNK TFontSmallLobby__sub_801C0494(M2C_UNK *);

void send_font_state__6TLobbyFi(s32 arg0) {
    s8 sp8[8];

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        TFontSmallLobby__sub_801C0480((M2C_UNK *)&sp8);
        M2C_FIELD(&sp8, s16 *, 2) = obj_getField1c(arg0);
        TFontSmallLobby__sub_801C0494((M2C_UNK *)&sp8);
    }
}

}
