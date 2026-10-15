#include "types.h"

typedef void (*RecoveredCallback_1268626c296b)(void *);
struct Obj_803C1A24 { u8 pad[0xAC]; void *fac; };

extern "C" {
void TLobby__sub_803C1A00(u8 *arg0, s32 arg1);
extern RecoveredCallback_1268626c296b lbl_805D7514;
void invoke_notify_callback__6TLobbyFPv(Obj_803C1A24 *arg0);
}

extern "C" {

void TLobby__sub_803C19D8(void);
extern s32 (*lbl_805D7510)();

void TLobby__sub_803C19D8(void) {
    lbl_805D7510();
}
void TLobby__sub_803C1A00(u8 *arg0, s32 arg1) {
    *(s32 *)((s8 *)arg0 + 0xB0) = arg1;
    *(u32 *)((s8 *)arg0 + 0xB4) = (u32) (arg1 / 96);
}
void invoke_notify_callback__6TLobbyFPv(Obj_803C1A24 *arg0) {
    if (arg0->fac != 0) {
        lbl_805D7514(arg0->fac);
    }
}

}
