#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_collision__18TObjBoss7TunnelColFPv(void *);
M2C_UNK copy_position__16TBoss8DragonDemoFPv(int, void *);
f32 TBoss8DragonDemo__sub_802F2CB4(int);
f32 TBoss8DragonDemo__sub_802F2CBC(int);
void fn_802F1ED0(u8 *arg0);
}

extern "C" {

void fn_802F1ED0(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = TBoss8DragonDemo__sub_802F2CBC((int) (M2C_FIELD(arg0, s32 *, 0x34)));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) - TBoss8DragonDemo__sub_802F2CB4((int) (M2C_FIELD(arg0, s32 *, 0x34))));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x40) == 4) {
        copy_position__16TBoss8DragonDemoFPv((int) (M2C_FIELD(arg0, s32 *, 0x34)), (void *) (arg0 + 0x1C));
    }
    if (M2C_FIELD(arg0, f32 *, 0x24) <= -M2C_FIELD(arg0, f32 *, 0x44)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    update_collision__18TObjBoss7TunnelColFPv((void *) (arg0));
}

}
