#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK TObjLight__sub_80133D78();
M2C_UNK TOKeyMachine01__sub_802034A8();
M2C_UNK TLobby__sub_80226E44(M2C_UNK);
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK TLobby__sub_80227FB4();
extern M2C_UNK lbl_8043F198[];

s32 init_ship_scene(void) {
    TOKeyMachine01__sub_802034A8();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    if (is_split_screen() != 0) {
        TObjBgmColCtrl__sub_802274B8(lbl_8043F198);
    } else {
        TLobby__sub_80226E44(3);
    }
    return 1;
}

}
