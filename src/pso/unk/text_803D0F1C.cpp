#include "types.h"
#include "pso/misc/TLobby.h"
struct Obj_803D0F1C { u8 pad[3]; u8 val; };

extern "C" {
extern char lbl_8047DCF0[];
void TLobby__sub_803D0F1C(Obj_803D0F1C *p, u8 v);
void TLobby__sub_803D0F1C(Obj_803D0F1C *p, u8 v) {
    if (p == 0) {
        TLobby::log_printf(lbl_8047DCF0);
        return;
    }
    p->val = v;
}

}
