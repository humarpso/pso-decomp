#include "types.h"

extern "C" {
s32 TLobby__sub_803F524C(s32, s32);
s32 strlen(void *);
bool fn_80145A44(s32 arg0);
}

extern "C" {

bool fn_80145A44(s32 arg0) {
    if (TLobby__sub_803F524C(arg0, 0x20) == 0) {
        return strlen((void *) (arg0)) != 0;
    }
    return 0;
}

}
