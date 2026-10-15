#include "types.h"

struct RecoveredGlobal_801418C4_lbl_8050C000 {
    s32 value;
    u8 remaining[0x24];
};

extern "C" {
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
s32 GXSetAlphaCompare(int, void *, int, int, int);
extern RecoveredGlobal_801418C4_lbl_8050C000 depth_buffer_settings;
void setup_alpha_test_render_state(u8 arg0);
}

extern "C" {

typedef char RecoveredGlobal_801418C4_lbl_8050C000_size[sizeof(RecoveredGlobal_801418C4_lbl_8050C000) == 0x28 ? 1 : -1];
void setup_alpha_test_render_state(u8 arg0) {
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 4) = 0;
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 5) = 1;
    *(s32 *)((s8 *)(&depth_buffer_settings.value) + 8) = 3;
    *(s8 *)((s8 *)(&depth_buffer_settings.value) + 0xC) = 1;
    *(u8 *)((s8 *)(&depth_buffer_settings.value) + 0xD) = arg0;
    GXSetZCompLoc(0);
    GXSetZMode(1U, 3, 1);
    GXSetAlphaCompare((int) (4), (void *) (arg0), (int) (0), (int) (7), (int) (0));
}

}
