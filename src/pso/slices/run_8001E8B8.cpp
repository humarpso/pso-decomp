#include "types.h"

extern "C" {

s32 TLobby__sub_8001E8B8(void) {
    return 0x1A5E00;
}

s32 TLobby__sub_8001E8FC();

s32 TLobby__sub_8001E8C4(void) {
    return (TLobby__sub_8001E8FC() / 2592) % 1000;
}

}
