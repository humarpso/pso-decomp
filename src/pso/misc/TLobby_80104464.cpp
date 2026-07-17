#include "types.h"

extern "C" {

void TLobby__sub_80104464(void);
void handle_select_confirm__6TLobbyFv(void);
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
s32 mark_selected__6TLobbyFv();
s32 fn_80077788();
s32 fn_80077790();
s32 fn_801058E8();

void TLobby__sub_80104464(void) {  }
void handle_select_confirm__6TLobbyFv(void) {
    if ((fn_80077790() == 1) || (fn_80077788() == 1)) {
        mark_selected__6TLobbyFv();
        if (get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF) != 0U) {
            fn_801058E8();
        }
    }
}

}
