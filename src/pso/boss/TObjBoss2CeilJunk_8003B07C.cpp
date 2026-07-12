#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjBoss2CeilJunk__sub_8003B07C(void);
M2C_UNK TObjBoss2Tunnel__sub_8003B138(f32);

extern const f32 lbl_805D85D8;

void TObjBoss2CeilJunk__sub_8003B07C(void) {
    TObjBoss2Tunnel__sub_8003B138(lbl_805D85D8);
}

}
