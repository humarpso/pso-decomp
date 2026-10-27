#ifndef PSO_MISC_TLANGUAGE_H
#define PSO_MISC_TLANGUAGE_H

#include "types.h"

struct TLanguage
{
    static void load_fonts(s32 language);
    static s8 get_default_language();
    static void draw_string(void *arg0, void *arg1, s32 arg2);
    static void decode_font_data(void *arg0, void *arg1, s32 arg2, s32 arg3);
    static void read_into_buffer(s32 arg0, s32 arg1);
    static s32 read_u32_le();
    static s32 read_u16_le();
    void set_index(s32 arg1);
    static void set_entry_index(s32 i, s32 x);
    static void load_container_fragment_textures();
    static void load_lobby_textures();
};

#endif
