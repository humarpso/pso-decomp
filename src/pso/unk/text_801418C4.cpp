#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801418C4_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
M2C_UNK GXSetAlphaCompare(int, void *, int, int, int);
extern RecoveredGlobal_801418C4_lbl_8050C000 lbl_8050C000;
void setup_alpha_test_render_state(u8 arg0);
}

extern "C" {

typedef char RecoveredGlobal_801418C4_lbl_8050C000_size[sizeof(RecoveredGlobal_801418C4_lbl_8050C000) == 0x28 ? 1 : -1];
void setup_alpha_test_render_state(u8 arg0) {
    M2C_FIELD(&lbl_8050C000.value, s8 *, 4) = 0;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 5) = 1;
    M2C_FIELD(&lbl_8050C000.value, s32 *, 8) = 3;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 0xC) = 1;
    M2C_FIELD(&lbl_8050C000.value, u8 *, 0xD) = arg0;
    GXSetZCompLoc(0);
    GXSetZMode(1U, 3, 1);
    GXSetAlphaCompare((int) (4), (void *) (arg0), (int) (0), (int) (7), (int) (0));
}

}
