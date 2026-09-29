#include "types.h"
extern "C" {
void TLobby__sub_8020EF40(void *);
void TLobby__sub_8020EEFC(void *arg0, s32 arg1);
}

extern "C" {

void TLobby__sub_8020EEFC(void *arg0, s32 arg1) {
    while (arg1-- > 0) {
        TLobby__sub_8020EF40(arg0);
    }
}

}
