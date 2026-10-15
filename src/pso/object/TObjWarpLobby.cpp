#include "types.h"

struct Sub_801A0B38 { u8 pad[0xc]; s32 value; };

struct Obj_801A0B38 { u8 pad[0x42c]; Sub_801A0B38 *sub; };

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern u8 warp_lobby_resource_descriptor[];
extern s32 TObjWarpLobby__instance;
extern s32 lbl_805D5CCC;
void TObjWarpLobby__sub_801A0B38(void);
}

extern "C" {

void release_static__13TObjWarpLobbyFv(void);
s32 TLobby__sub_8001FE7C(s32, s32);

extern s32 TObjWarpLobby__instance;

void release_static__13TObjWarpLobbyFv(void) {
    TLobby__sub_8001FE7C(TObjWarpLobby__instance, 1);
    TObjWarpLobby__instance = 0;
}
void TObjWarpLobby__sub_801A0B38(void) {
    u8 *p = (u8 *)alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    if (p != 0) {
        p = load_resource_from_descriptor(p, 1, warp_lobby_resource_descriptor, 0, 0, 0);
    }
    TObjWarpLobby__instance = (s32)p;
    lbl_805D5CCC = ((Obj_801A0B38 *)TObjWarpLobby__instance)->sub->value;
}

}
