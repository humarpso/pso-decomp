#include "types.h"

extern "C" {

s32 TLobby__sub_800F9DA0(void);
int TLobby__sub_800FD944(void*);
s32 TLobby__sub_803CC500();
s32 TLobby__sub_803CCE9C(s32);
s32 TLobby__sub_803CD3A8(s32, s32);
int TScene__sub_800F9D80(void* p);

s32 TLobby__sub_800F9DA0(void) {
    s32 temp_r31;
    s32 temp_r3;
    s32 uninit;

    temp_r3 = TLobby__sub_803CD3A8(uninit, 0);
    if (temp_r3 == 0) {
        return -1;
    }
    temp_r31 = TLobby__sub_803CC500();
    TLobby__sub_803CCE9C(temp_r3);
    return temp_r31;
}

}
