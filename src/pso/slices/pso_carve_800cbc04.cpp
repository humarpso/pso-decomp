#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjEneMe1Gee__sub_800CBC04(u8 *arg0);
void TObjEneMe1Gee__sub_800CBC1C(u8 *arg0);
}

extern "C" {

int enemy_has_live_target(void*);
int TObjEneEpsilon__sub_800B96A4(void*);
int update_velocity__9TObjEneDDFPv(void*);
int update_angle__13TObjEneMe1GeeFPv(void*);
void update__13TObjEneMe1GeeFPv(void* p);
int TObjEneMe1Gee__vt87(void* p);
int TObjEneDD__vt86(void*);

void TObjEneMe1Gee__sub_800CBC04(u8 *arg0) {
    u8 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, u8 **, 0xA4);
    M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & ~0x28);
}
void TObjEneMe1Gee__sub_800CBC1C(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = M2C_FIELD(arg0, u8 **, 0xA4);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 0x28);
}

}
