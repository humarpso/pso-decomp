#include "types.h"

extern "C" {
typedef s32 (*Fn_8020CCF4)(void *);
struct Out_8020CCF4 { s32 a; Fn_8020CCF4 fn; };
s32 TLobby__sub_8020CC48(void *, void *);
s32 TLobby__sub_8020CCF4(u8 *arg0) {
    Out_8020CCF4 o;
    if (TLobby__sub_8020CC48(arg0, &o) >= 0) {
        return o.fn(arg0 + 4);
    }
    return 0;
}

}
