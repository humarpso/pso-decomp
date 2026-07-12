#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_flags__18TObjEneRe4SorcererFPv(u8 *arg0);

struct ED300Base_800ed300 { char pad[0x14]; };
struct ED300Obj_800ed300 : ED300Base_800ed300 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3(void *);
};

void set_state_flags__18TObjEneRe4SorcererFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFB);
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x308);
    ((ED300Obj_800ed300*)(arg0 + 0x3DC))->m3(arg0);
}

}
