#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK TObjLight__sub_80133D78();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK TLobby__sub_80227FB4();
M2C_UNK create_boss8_demo_objects();
M2C_UNK fn_802FEA0C();
extern M2C_UNK lbl_804651A0[];

s32 load_dragon2_scene(void) {
    get_global_state__14TOKeyMachine01Fv();
    TLobby__sub_80227FB4();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    fn_802FEA0C();
    TObjLight__sub_80133D78();
    create_tasks__6TLobbyFv();
    create_boss8_demo_objects();
    TObjBgmColCtrl__sub_802274B8(lbl_804651A0);
    return 1;
}

}
