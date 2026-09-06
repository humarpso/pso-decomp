#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern const f32 lbl_805D8B18;
void fn_800548E4(u8 *arg0);
}

extern "C" {

void fn_800548E4(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
    M2C_FIELD(arg0, s32 *, 0x3D4) = 1;
    M2C_FIELD(arg0, f32 *, 0x3DC) = (f32) lbl_805D8B18;
    TBoss3Volopt__sub_8022675C(0x4003A822, (u32) (arg0 + 0x38), 0, 1);
}

}
