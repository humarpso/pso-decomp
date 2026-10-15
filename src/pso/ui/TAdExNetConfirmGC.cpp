#include "types.h"
#include "pso/ui/TAdExNetConfirmGC.h"

extern "C" {

s32 TLobby__sub_8042EE4C(s32 *);

s32 TAdExNetConfirmGC::is_confirmed() {
    s32 sp8;

    TLobby__sub_8042EE4C(&sp8);
    return (u32) __cntlzw(1 - sp8) >> 5;
}

}
