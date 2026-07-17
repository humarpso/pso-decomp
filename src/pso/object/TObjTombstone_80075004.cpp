#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_owner__13TObjTombstoneFPv(void *arg0);
s32 TObjPlayer__sub_800196EC();
s32 is_flag_set__6TLobbyFv();
s32 TLobby__sub_80293080();
s32 is_not_split_screen__13TRaderMapCoreFv();

void handle_6x96(void);

void handle_6x96(void) {  }
s32 check_owner__13TObjTombstoneFPv(void *arg0) {
    s32 var_r3;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r3 = TLobby__sub_80293080();
    } else {
        var_r3 = is_flag_set__6TLobbyFv();
    }
    if ((var_r3 == 0) || ((s8) M2C_FIELD(arg0, u8 *, 0xC2) != TObjPlayer__sub_800196EC())) {
        return 1;
    }
    return 0;
}

}
