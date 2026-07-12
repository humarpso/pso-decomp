#include "types.h"

extern "C" {

s32 TLobby__sub_8006FA28(void);
s32 decode_slot__6TLobbyFUi();

s32 TLobby__sub_8006FA28(void) {
    s32 var_r3;

    var_r3 = decode_slot__6TLobbyFUi();
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}
