#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_laser__15TBoss7LaserPtclFPv(u8 *arg0);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
M2C_UNK TBoss7LaserPtcl__sub_8035AA98();
s32 TBoss8Dragon__sub_8008741C(void *, int, int);
M2C_UNK TOSwitchAttack__sub_80087278(void *, int, int);
f64 TObjPlayer__sub_80019760(f32, f32);
M2C_UNK clamp_velocity__15TObjBoss2TunnelFPv(void *);

extern const f64 lbl_804796D8;
extern const f32 lbl_805E00F4;

void init_laser__15TBoss7LaserPtclFPv(u8 *arg0) {
    TBoss7LaserPtcl__sub_8035AA98();
    TBoss6Type1__sub_803D9370((void *) (arg0 + 0x2C), (void *) (arg0 + 0x20));
    clamp_velocity__15TObjBoss2TunnelFPv((void *) (arg0 + 0x2C));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805E00F4;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (lbl_804796D8 * TObjPlayer__sub_80019760((f32) (M2C_FIELD(arg0, f32 *, 0x2C)), (f32) (M2C_FIELD(arg0, f32 *, 0x34))));
    TOSwitchAttack__sub_80087278((void *) (arg0 + 0x20), (int) (0x20A), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0x44) = TBoss8Dragon__sub_8008741C((void *) (arg0 + 0x20), (int) (0x177), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
}

}
