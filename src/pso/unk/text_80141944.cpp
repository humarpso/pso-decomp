#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80141944_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
void set_current_scene__6TSceneFi(s32);
extern RecoveredGlobal_80141944_lbl_8050C000 lbl_8050C000;
void set_depth_buffer_settings_1__Fv(void);
void GXSetAlphaCompare(s32, s32, s32, s32, s32);
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
void set_current_scene__6TSceneFi(s32);
extern RecoveredGlobal_80141944_lbl_8050C000 lbl_8050C000;
void set_depth_buffer_settings_3__Fv(void);
}

extern "C" {

typedef char RecoveredGlobal_80141944_lbl_8050C000_size[sizeof(RecoveredGlobal_80141944_lbl_8050C000) == 0x28 ? 1 : -1];
void set_depth_buffer_settings_1__Fv(void) {
    M2C_FIELD(&lbl_8050C000.value, s8 *, 4) = 0;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 5) = 1;
    M2C_FIELD(&lbl_8050C000.value, s32 *, 8) = 3;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 0xC) = 0;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 0xD) = 0;
    GXSetZCompLoc(0);
    GXSetZMode(1U, 3, 0);
    set_current_scene__6TSceneFi(0);
}
void set_depth_buffer_settings_3__Fv(void) {
    lbl_8050C000.value = 7;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 4) = 1;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 5) = 1;
    M2C_FIELD(&lbl_8050C000.value, s32 *, 8) = 1;
    M2C_FIELD(&lbl_8050C000.value, s8 *, 0xC) = 1;
    M2C_FIELD(&lbl_8050C000.value, u8 *, 0xD) = 0xBF;
    GXSetAlphaCompare(7, 0, 0, 7, 0);
    GXSetZCompLoc(1);
    GXSetZMode(1U, 1, 1);
    set_current_scene__6TSceneFi(M2C_FIELD(&lbl_8050C000.value, u8 *, 0xD));
}

}
