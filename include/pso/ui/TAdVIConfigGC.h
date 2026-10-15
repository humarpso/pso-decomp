#ifndef PSO_UI_TADVICONFIGGC_H
#define PSO_UI_TADVICONFIGGC_H

#include "types.h"

struct TAdVIConfigGC
{
    u8 _pad1C[0x2C];
    u32 m_48;
    u8 *init(f32 farg0);
    void render();
    void set_field48_clear_global();
    static void enable_progressive_mode(void * _w0);
    static int disable_progressive_mode(void* _w0);
    void run_task();
    static s32 draw_with_layer(s32 arg0, s32 arg1, s32 arg2);
    void set_field_2c(s32 v);
    static void apply_config_if_valid(s32 arg0, s32 arg1);
};

#endif
