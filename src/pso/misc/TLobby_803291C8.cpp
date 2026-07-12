#include "types.h"

extern "C" {

int TLobby__sub_803291C8(void);
s32 TLobby__sub_803291D0(s32 arg0);
s32 TLobby__sub_802A7994(s32, s32, s32, s32);
s32 TLobby__sub_80329600();
s32 TLobby__sub_80329628();
s32 TLobby__sub_80329650();
s32 TLobby__sub_80329678();

int TLobby__sub_803291C8(void) { return 1; }
s32 TLobby__sub_803291D0(s32 arg0) {
    if (TLobby__sub_80329678() == 0) {
        TLobby__sub_80329650();
        TLobby__sub_802A7994(arg0, 0, 0, 0);
    }
    if (TLobby__sub_80329628() == 0) {
        TLobby__sub_80329600();
        TLobby__sub_802A7994(arg0, 1, 1, 0);
    }
    return 1;
}

}
