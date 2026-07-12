#include "types.h"

extern "C" {

s32 TLobby__sub_8006F9E0(s32 arg0);
s32 TLobby__sub_8006F364();
s32 TLobby__sub_8006FAA8(s32);

s32 TLobby__sub_8006F9E0(s32 arg0) {
    if ((arg0 == 0) || (TLobby__sub_8006F364() != 0)) {
        return 0;
    }
    return TLobby__sub_8006FAA8(arg0);
}

}
