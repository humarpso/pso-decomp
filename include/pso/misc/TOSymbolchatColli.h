#ifndef PSO_MISC_TOSYMBOLCHATCOLLI_H
#define PSO_MISC_TOSYMBOLCHATCOLLI_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TOSymbolchatColli : public TUnk_804806E8 {
    virtual ~TOSymbolchatColli();
    s32 get_state();
    void init_collision_params();
    void render();
    static void *create(void *arg0);
    static void free_rock();
    static void load_symbol_chat_data();
    u8 unk_334[0x50];
};

typedef char TOSymbolchatColli_size[sizeof(TOSymbolchatColli) == 0x384 ? 1 : -1];
#endif
