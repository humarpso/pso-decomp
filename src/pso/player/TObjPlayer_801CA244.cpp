#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_revivable__10TObjPlayerFi(s32 arg0);
void update_lobby_font__10TObjPlayerFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK init_revive_packet__10TObjPlayerFPv(void *);
M2C_UNK bswap_font_lobby2__10TObjPlayerFPv(void *);

s32 handle_revivable__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

s32 obj_isState2_324();
s16 obj_getField1c(s32);

struct S801CA274 { s8 b[2]; s16 h; };
void update_lobby_font__10TObjPlayerFi(s32 arg0) {
    struct S801CA274 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        init_revive_packet__10TObjPlayerFPv(&sp8);
        sp8.h = obj_getField1c(arg0);
        bswap_font_lobby2__10TObjPlayerFPv(&sp8);
    }
}

}
