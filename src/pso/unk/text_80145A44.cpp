#include "types.h"

extern "C" {
s32 TLobby__sub_803F524C(s32, s32);
s32 strlen(void *);
bool fn_80145A44(s32 arg0);
}

extern "C" {

bool fn_80145A44(s32 dst) {
    if (TLobby__sub_803F524C(dst, 0x20) == 0) {
        return strlen((void *) (dst)) != 0;
    }
    return 0;
}

}
