#include "types.h"
#include "pso/system/MaterialAlphaCompare.h"
#include "pso/unk/text_80141A30.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80141A30_lbl_8050C000 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141A30_lbl_8050C028 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 GXSetAlphaCompare(int, int, int, int, int);
s32 GXSetZMode(int, int, int);
s32 GXSetZCompLoc(int);
extern RecoveredGlobal_80141A30_lbl_8050C000 depth_buffer_settings;
extern RecoveredGlobal_80141A30_lbl_8050C028 saved_depth_alpha_scene_state;
typedef char RecoveredGlobal_80141A30_lbl_8050C000_size[sizeof(RecoveredGlobal_80141A30_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141A30_lbl_8050C028_size[sizeof(RecoveredGlobal_80141A30_lbl_8050C028) == 0x18 ? 1 : -1];
void restore_saved_depth_alpha_state(void) {
    ((TObjPlayer *)(&depth_buffer_settings.value))->copy_config((void *)&saved_depth_alpha_scene_state.value);
    GXSetAlphaCompare((int) (*(s32 *)((s8 *)&depth_buffer_settings.value + 0)), 0, 0, 7, 0);
    GXSetZCompLoc((int) (*(u8 *)((s8 *)&depth_buffer_settings.value + 4)));
    GXSetZMode((int) (*(u8 *)((s8 *)&depth_buffer_settings.value + 5)), (int) (*(s32 *)((s8 *)&depth_buffer_settings.value + 8)), (int) (*(u8 *)((s8 *)&depth_buffer_settings.value + 0xC)));
    set_material_alpha_compare_reference((*(u8 *)((s8 *)&depth_buffer_settings.value + 0xD)));
}
}
#pragma fp_contract on
u32 calc_pulse_flash_color(u8 r, u8 g, u8 b, s32 frame, s32 period, s32 start, s32 peak, s32 end) {
    f32 t;
    s32 m;
    m = frame % period;
    if (m < start || m > end) {
        return 0xFF000000 | (r << 16) | (g << 8) | b;
    }
    if (m < peak) {
        t = (f32)(m - start) / (f32)(peak - start);
    } else {
        t = (f32)(end - m) / (f32)(end - peak);
    }
    r = (f32)(0xFF - r) * t + r;
    g = (f32)(0xFF - g) * t + g;
    b = (f32)(0xFF - b) * t + b;
    return 0xFF000000 | (r << 16) | (g << 8) | b;
}
