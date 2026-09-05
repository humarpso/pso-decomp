#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 obj_isState2_324(void *);
s16 obj_getField1c(void *);
s32 TFontSmallLobby__sub_801AFEE0();
s32 TObjPlayer__sub_801B3814(void *, void *);
M2C_UNK TObjPlayer__sub_801C0E40(void *);
M2C_UNK TObjPlayer__sub_801C0E5C(void *);
u32 start_inventory_update__10TObjPlayerFPvi(s32, s32);
void *get_owner_if_alive__10TObjPlayerFPv();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_801B7F4C(void *arg0, s32 arg1);
}

extern "C" {

struct S801B7F4C { s8 b[2]; s16 h; s32 w; };
s32 fn_801B7F4C(void *arg0, s32 arg1) {
    struct S801B7F4C sp8;
    void *temp;
    if (TFontSmallLobby__sub_801AFEE0() != 0) {
        return 0;
    }
    if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
        return 0;
    }
    temp = get_owner_if_alive__10TObjPlayerFPv();
    if (temp == NULL) {
        return 0;
    }
    if (TObjPlayer__sub_801B3814(arg0, temp) == 0) {
        TBoss3Volopt__sub_8022675C(0x3816, 0, 0, 0);
        return 0;
    }
    if ((arg0 != NULL) && (obj_isState2_324(arg0) != 0)) {
        return 0;
    }
    TObjPlayer__sub_801C0E40(&sp8);
    sp8.h = obj_getField1c(arg0);
    sp8.w = arg1;
    TObjPlayer__sub_801C0E5C(&sp8);
    return 1;
}

}
