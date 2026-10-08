#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjWarpLobby__ct(void *arg0);
M2C_UNK TObjAreaWarp__ct();

extern M2C_UNK __vt__13TObjWarpLobby[];
extern s32 lbl_805D34A0;
extern void *TObjWarpLobby__instance;
extern const f32 lbl_805DC06C;

void *TObjWarpLobby__ct(void *arg0) {
    s32 temp_r0;

    TObjAreaWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjWarpLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D34A0;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DC06C;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DC06C;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xD8) = (s32) M2C_FIELD(M2C_FIELD(TObjWarpLobby__instance, void **, 0x430), s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0xDC) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0) {
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) > 1) {
        M2C_FIELD(arg0, s32 *, 0x88) = 1;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
        break;
    }
    return arg0;
}

}
