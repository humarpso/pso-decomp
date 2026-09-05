#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
extern "C" {
M2C_UNK TObjPlayer__sub_803E20B0();
M2C_UNK TObjPlayer__sub_803E21B8();
M2C_UNK TObjPlayer__sub_803E21DC();
void TObjBoss2Tunnel__sub_803E2D10(s32 arg0);
}

extern "C" {

void reset_player_state__15TObjBoss2TunnelFv(void);
M2C_UNK TObjPlayer__sub_803E2248();

void reset_player_state__15TObjBoss2TunnelFv(void) {
    TObjPlayer__sub_803E2248();
}
void TObjBoss2Tunnel__sub_803E2D10(s32 arg0) {
    TObjPlayer__sub_803E20B0();
    if (arg0 != 0) {
        TObjPlayer__sub_803E21DC();
        return;
    }
    TObjPlayer__sub_803E21B8();
}

}
