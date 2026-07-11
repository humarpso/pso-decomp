#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_801B51D0(s32 arg0);
void TObjPlayer__sub_801B5200(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
M2C_UNK set_code_45_1__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801C0AA4(void *);

s32 TObjPlayer__sub_801B51D0(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

s32 obj_isState2_324();
s16 obj_getField1c(s32);

struct S801B5200 { s8 b[2]; s16 h; };
void TObjPlayer__sub_801B5200(s32 arg0) {
    struct S801B5200 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_45_1__10TObjPlayerFPv(&sp8);
        sp8.h = obj_getField1c(arg0);
        TObjPlayer__sub_801C0AA4(&sp8);
    }
}

}
