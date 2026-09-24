#include "types.h"

extern "C" {
s32 TLobby__sub_8006FBE4(void);
s32 fn_80074724(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 fn_80074758(void);
}

extern "C" {

s32 fn_80074724(void) {
    return (TLobby__sub_8006FBE4() <= 1) ? 1 : 0;
}
s32 fn_80074758(void) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0x12:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
        return 0;
    }
    return 1;
}

}
