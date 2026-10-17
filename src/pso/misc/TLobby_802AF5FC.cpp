#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

u8 *TObjMistCtrl__ct(u8 *arg0, s32 parent, u32 arg2);
void *__nw__7TObjectFUl(int);

void *TLobby::create_mist_ctrl(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = TObjMistCtrl__ct((u8 *)o, (s32)arg0, (u32)arg1);
    }
    return o;
}

}
