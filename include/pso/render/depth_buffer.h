#ifndef PSO_RENDER_DEPTH_BUFFER_H
#define PSO_RENDER_DEPTH_BUFFER_H

#include "types.h"

void restore_depth_buffer_settings(void);
void save_depth_buffer_settings(void);
void set_depth_buffer_settings_1(void);
void set_depth_buffer_settings_2(void);
void set_depth_buffer_settings_3(void);
void set_depth_buffer_settings_id(u32 id);

#endif
