#include "types.h"
#include "pso/render/depth_buffer.h"

struct RecoveredGlobal_80141944_lbl_8050C000 {
    s32 value;
    u8 remaining[0x24];
};

extern "C" {
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
void set_material_alpha_compare_reference(s32);
extern RecoveredGlobal_80141944_lbl_8050C000 depth_buffer_settings;
void GXSetAlphaCompare(s32, s32, s32, s32, s32);
typedef char RecoveredGlobal_80141944_lbl_8050C000_size[sizeof(RecoveredGlobal_80141944_lbl_8050C000) == 0x28 ? 1 : -1];
}
void set_depth_buffer_settings_1(void) {
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 4) = 0;
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 5) = 1;
    *(s32 *)((s8 *)(&depth_buffer_settings.value) + 8) = 3;
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 0xC) = 0;
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 0xD) = 0;
    GXSetZCompLoc(0);
    GXSetZMode(1U, 3, 0);
    set_material_alpha_compare_reference(0);
}
extern "C" {
}
void set_depth_buffer_settings_3(void) {
    depth_buffer_settings.value = 7;
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 4) = 1;
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 5) = 1;
    *(s32 *)((s8 *)(&depth_buffer_settings.value) + 8) = 1;
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 0xC) = 1;
    *(u8 *)((s8 *)(&depth_buffer_settings.value) + 0xD) = 0xBF;
    GXSetAlphaCompare(7, 0, 0, 7, 0);
    GXSetZCompLoc(1);
    GXSetZMode(1U, 1, 1);
    set_material_alpha_compare_reference(*(u8 *)((s8 *)(&depth_buffer_settings.value) + 0xD));
}
extern "C" {

}
