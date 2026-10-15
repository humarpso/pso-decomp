#include "types.h"

extern "C" {

s32 is_confirmed__17TAdExNetConfirmGCFv(void);

s32 TLobby__sub_8042EE4C(s32 *);

s32 is_confirmed__17TAdExNetConfirmGCFv(void) {
    s32 sp8;

    TLobby__sub_8042EE4C(&sp8);
    return (u32) __cntlzw(1 - sp8) >> 5;
}

}
