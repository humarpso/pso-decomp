#ifndef PSO_MISC_TOSYMBOLCHATCOLLI_H
#define PSO_MISC_TOSYMBOLCHATCOLLI_H

#include "types.h"

struct TOSymbolchatColli
{
    u8 _pad1C[0x1C];
    void* m_38;
    s32 get_state();
    void init_collision_params();
    void render();
    static void *create(void *arg0);
    static void free_rock();
    static void load_symbol_chat_data();
};

#endif
