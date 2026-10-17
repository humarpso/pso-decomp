#include "types.h"
#include "pso/object/TObjWarpLobby_801A0A34.h"
#include "pso/object/TObjWarpLobby.h"

extern "C" {

s32 TObjAreaWarp__ct();

extern s32 __vt__13TObjWarpLobby[];
extern s32 lbl_805D34A0;
extern void *TObjWarpLobby__instance;
extern const f32 lbl_805DC06C;

void *TObjWarpLobby__ct(void *arg0) {

    TObjAreaWarp__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjWarpLobby;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D34A0;
    ((TObjWarpLobby *)arg0)->m_c8 = (f32) lbl_805DC06C;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DC06C;
    ((TObjWarpLobby *)arg0)->m_cc = 0;
    *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    *(s32 *)((s8 *)arg0 + 0xD4) = 0;
    *(s32 *)((s8 *)arg0 + 0xD8) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)TObjWarpLobby__instance + 0x430)) + 4);
    *(s32 *)((s8 *)arg0 + 0xDC) = 0;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x88) < 0) {
        *(s32 *)((s8 *)arg0 + 0x88) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x88) > 1) {
        *(s32 *)((s8 *)arg0 + 0x88) = 1;
    }
    switch (*(s32 *)((s8 *)arg0 + 0x88)) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0xCC) = 1;
        break;
    case 1:
        *(s32 *)((s8 *)arg0 + 0xCC) = 0;
        break;
    default:
        *(s32 *)((s8 *)arg0 + 0xCC) = 1;
        break;
    }
    return arg0;
}

}
