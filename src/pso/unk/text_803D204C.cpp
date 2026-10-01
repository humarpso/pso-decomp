#include "types.h"
struct Obj_803D2234 {
    u8 pad[0x1C];
    void (*cb)(s32, s32);
    s32 cbArg;
};

struct Buf_803D2234 { void *ptr; s32 len; };

extern "C" {
void TLobby__sub_803D1FD4(void);
void lock_enter__6TLobbyFv(void);
void TLobby__sub_803D2234(Obj_803D2234 *arg0, u32 arg1, Buf_803D2234 *arg2);
}

extern "C" {

void TLobby__sub_803D2234(Obj_803D2234 *arg0, u32 arg1, Buf_803D2234 *arg2) {
    if (arg2->len <= 0 || arg2->ptr == 0) {
        return;
    }
    lock_enter__6TLobbyFv();
    if (arg1 > 1) {
        arg2->len = 0;
        arg2->ptr = 0;
        if (arg0->cb != 0) {
            arg0->cb(arg0->cbArg, -3);
        }
    }
    TLobby__sub_803D1FD4();
}

}
