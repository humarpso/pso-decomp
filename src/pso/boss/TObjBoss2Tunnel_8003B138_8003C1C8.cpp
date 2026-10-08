#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_8003C21C { u8 pad[0x1f]; u8 x; };

struct O_8003C21C { u8 pad[0x5c]; s32 p; };

extern "C" {
s32 is_flag_set__15TObjBoss2TunnelFv(s32 a0 = 0);
s32 TObjBoss2Tunnel__sub_8003C1C8(void);
s32 TObjBoss2Tunnel__sub_8003C1E0(s32 arg0);
u8 *TObjBoss2Tunnel__sub_8003C21C(O_8003C21C *self);
}

extern "C" {

extern u32 TObjBoss2Tunnel__global_flags;

s32 TObjBoss2Tunnel__sub_8003C1C8(void) {
    return ((u32) TObjBoss2Tunnel__global_flags >> 0xDU) & 1;
}

extern u32 TObjBoss2Tunnel__global_flags;

s32 is_flag_set__15TObjBoss2TunnelFv(s32 _w0) {
    return ((u32) TObjBoss2Tunnel__global_flags >> 0xCU) & 1;
}
s32 TObjBoss2Tunnel__sub_8003C1E0(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;
    temp_r31 = TObjBoss2Tunnel__sub_8003C1C8();
    temp_r3 = is_flag_set__15TObjBoss2TunnelFv((s32)(arg0));
    return temp_r3 | temp_r31;
}
u8 *TObjBoss2Tunnel__sub_8003C21C(O_8003C21C *self) {
    if (self->p == 0) {
        return 0;
    }
    return &((S_8003C21C *)self->p)->x;
}

}
