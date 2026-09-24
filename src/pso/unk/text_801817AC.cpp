#include "types.h"
struct E_801819CC { s32 a; s32 b; };

struct O_801819CC { u8 pad[0x430]; E_801819CC *entries; };

struct E_801819E4 { s32 a; s32 b; s32 c; s32 d; };

struct O_801819E4 { u8 pad[0x42c]; E_801819E4 *entries; };

extern "C" {
extern O_801819CC *lbl_805D5B28;
s32 TLobby__sub_801819CC(s32 i);
extern O_801819CC *lbl_805D5B28;
s32 TLobby__sub_801819E4(s32 i);
}

extern "C" {

s32 TLobby__sub_801819CC(s32 i) {
    return lbl_805D5B28->entries[i].b;
}
s32 TLobby__sub_801819E4(s32 i) {
    return (*(O_801819E4 * *)&lbl_805D5B28)->entries[i].c;
}

}
