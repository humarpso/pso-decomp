#include "types.h"

extern "C" {

int TLobby__sub_803291C8(void);
s32 TLobby__sub_803291D0(s32 arg0);
s32 TLobby__sub_802A7994(s32, s32, s32, s32);
s32 apply_state_6c84__6TLobbyFv();
s32 TLobby__sub_80329628();
s32 init_object_flag__6TLobbyFv();
s32 set_flag_1_at_6c84__6TLobbyFv();

int TLobby__sub_803291C8(void) { return 1; }
s32 TLobby__sub_803291D0(s32 arg0) {
    if (set_flag_1_at_6c84__6TLobbyFv() == 0) {
        init_object_flag__6TLobbyFv();
        TLobby__sub_802A7994(arg0, 0, 0, 0);
    }
    if (TLobby__sub_80329628() == 0) {
        apply_state_6c84__6TLobbyFv();
        TLobby__sub_802A7994(arg0, 1, 1, 0);
    }
    return 1;
}

}
