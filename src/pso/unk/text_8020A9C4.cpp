#include "types.h"
struct SpawnRecord_8020A9C4 {
    s16 type;
    u16 flags;
    s16 index;
    s16 children;
    u16 reserved;
    s16 actor_id;
    u8 pad[0x48 - 0xC];
};

extern "C" {
s32 TLobby__sub_8020BFE4(s32, SpawnRecord_8020A9C4 *);
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60EC;
void TLobby__sub_8020A9C4(SpawnRecord_8020A9C4 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TLobby__sub_8020A9C4(SpawnRecord_8020A9C4 *arg0, s32 arg1, s32 arg2) {
    SpawnRecord_8020A9C4 *r;
    s32 i;
    s32 n;
    for (i = 0; i < arg1; i++) {
        r = &arg0[i];
        r->actor_id = TLobby__data_805D60EC++ + 0x1000;
        r->index = TLobby__data_805D60E4++;
        if (r->children > 0) {
            TLobby__data_805D60E4 += r->children;
            TLobby__data_805D60EC += r->children;
        } else {
            n = TLobby__sub_8020BFE4(arg2, r);
            if (n > 0) {
                TLobby__data_805D60E4 += n;
                TLobby__data_805D60EC += n;
                r->children = n;
            }
        }
    }
}

}
