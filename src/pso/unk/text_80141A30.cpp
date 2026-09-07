#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80141A30_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141A30_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK copy_config__10TObjPlayerFPvPv(void *, void *);
M2C_UNK GXSetAlphaCompare(int, int, int, int, int);
M2C_UNK GXSetZMode(int, int, int);
M2C_UNK GXSetZCompLoc(int);
M2C_UNK set_current_scene__6TSceneFi(int);
extern RecoveredGlobal_80141A30_lbl_8050C000 lbl_8050C000;
extern RecoveredGlobal_80141A30_lbl_8050C028 lbl_8050C028;
void fn_80141A30(void);
}

extern "C" {

typedef char RecoveredGlobal_80141A30_lbl_8050C000_size[sizeof(RecoveredGlobal_80141A30_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141A30_lbl_8050C028_size[sizeof(RecoveredGlobal_80141A30_lbl_8050C028) == 0x18 ? 1 : -1];
void fn_80141A30(void) {
    copy_config__10TObjPlayerFPvPv((void *) (&lbl_8050C000.value), (void *) (&lbl_8050C028.value));
    GXSetAlphaCompare((int) (M2C_FIELD(&lbl_8050C000.value, s32 *, 0)), (int) (0), (int) (0), (int) (7), (int) (0));
    GXSetZCompLoc((int) (M2C_FIELD(&lbl_8050C000.value, u8 *, 4)));
    GXSetZMode((int) (M2C_FIELD(&lbl_8050C000.value, u8 *, 5)), (int) (M2C_FIELD(&lbl_8050C000.value, s32 *, 8)), (int) (M2C_FIELD(&lbl_8050C000.value, u8 *, 0xC)));
    set_current_scene__6TSceneFi((int) (M2C_FIELD(&lbl_8050C000.value, u8 *, 0xD)));
}

}
