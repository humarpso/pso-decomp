#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_effect_timer__15TObjBoss2TunnelFPv(void *arg0);
void TObjBoss2Tunnel__sub_802F273C(void);

extern const f32 lbl_805DEC68;
extern const f32 lbl_805DECFC;

void advance_effect_timer__15TObjBoss2TunnelFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) (M2C_FIELD(arg0, f32 *, 0x5C) + lbl_805DECFC);
    if (M2C_FIELD(arg0, f32 *, 0x5C) > lbl_805DEC68) {
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805DEC68;
    }
}

void TObjBoss2Tunnel__sub_802F273C(void) {  }

}
