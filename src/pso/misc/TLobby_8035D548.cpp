#include "types.h"

extern "C" {

s32 TWindowMessageScroll__ct(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TLobby__sub_80269DA4(s32 a0 = 0, s32 a1 = 0);
s32 TLobby__sub_80269CA4(s32 a0 = 0);
s32 TLobby__sub_80269C90(void);
s32 __nw__7TObjectFUl(s32 a0 = 0);
void set_timer__6TLobbyFPvf(void* p, f32 v);

s32 open_message_scroll_window__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r31;

    TLobby__sub_80269CA4(0x23);
    TLobby__sub_80269DA4(arg1, 1);
    var_r31 = __nw__7TObjectFUl(0x9C);
    if (var_r31 != 0) {
        var_r31 = TWindowMessageScroll__ct(var_r31, arg0, arg2);
    }
    TLobby__sub_80269C90();
    return var_r31;
}

}
