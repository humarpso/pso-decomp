#include "types.h"
extern "C" {
s32 TLobby__sub_8006FBE4(void);
s32 fn_80074724(void);
}

extern "C" {

s32 fn_80074724(void) {
    return (TLobby__sub_8006FBE4() <= 1) ? 1 : 0;
}

}
