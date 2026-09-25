#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Sub_801A0B38 { u8 pad[0xc]; s32 value; };

struct Obj_801A0B38 { u8 pad[0x42c]; Sub_801A0B38 *sub; };

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
extern u8 lbl_804B975C[];
extern s32 TObjWarpLobby__data_805D5CC8;
extern s32 lbl_805D5CCC;
void TObjWarpLobby__sub_801A0B38(void);
}

extern "C" {

void release_static__13TObjWarpLobbyFv(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);

extern s32 TObjWarpLobby__data_805D5CC8;

void release_static__13TObjWarpLobbyFv(void) {
    TLobby__sub_8001FE7C(TObjWarpLobby__data_805D5CC8, 1);
    TObjWarpLobby__data_805D5CC8 = 0;
}
void TObjWarpLobby__sub_801A0B38(void) {
    u8 *p = (u8 *)alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    if (p != 0) {
        p = TLobby__sub_80020004(p, 1, lbl_804B975C, 0, 0, 0);
    }
    TObjWarpLobby__data_805D5CC8 = (s32)p;
    lbl_805D5CCC = ((Obj_801A0B38 *)TObjWarpLobby__data_805D5CC8)->sub->value;
}

}
