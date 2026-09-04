#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjBoss2Tunnel__sub_802F2348(void);
void TObjBoss2Tunnel__sub_802F23FC(void);
void init_effect__15TObjBoss2TunnelFPv(void *arg0);
s32 TObjBoss2Tunnel__sub_802F22F4(void);
M2C_UNK TObjBoss2Tunnel__sub_802F25AC(void *);
M2C_UNK TObjBoss2Tunnel__sub_802F2664(void *, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK advance_effect_timer__15TObjBoss2TunnelFPv();
s32 is_phase_active__15TObjBoss2TunnelFv(s32 a0 = 0);

int TObjBoss2Tunnel__sub_802F2348(void) { return 0; }

void TObjBoss2Tunnel__sub_802F23FC(void) {  }

extern M2C_UNK lbl_804E49A0[];
extern s32 lbl_805D6968;

void init_effect__15TObjBoss2TunnelFPv(void *arg0) {
    advance_effect_timer__15TObjBoss2TunnelFPv();
    TObjBoss2Tunnel__sub_802F2664(arg0, lbl_804E49A0, 0x1F, 0);
    if (lbl_805D6968 & 0x200) {
        lbl_805D6968 &= 0xFFFFFDFF;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
    }
    TObjBoss2Tunnel__sub_802F25AC(arg0);
}

}
