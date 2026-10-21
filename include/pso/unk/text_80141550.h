#ifndef PSO_UNK_TEXT_80141550_H
#define PSO_UNK_TEXT_80141550_H

#include "types.h"

extern "C" {
void TObjPlayer__sub_801416AC(void);
}
void restore_default_scene(void);
void set_scene_override(u8 scene);
void set_shadow_material_state(void);

void set_depth_buffer_settings_1();
void set_depth_buffer_settings_2();
void set_depth_buffer_settings_3();
void set_depth_buffer_settings_id(u32 id);
void save_depth_buffer_settings();
void restore_depth_buffer_settings();
void restore_draw_list_mask();

#endif
