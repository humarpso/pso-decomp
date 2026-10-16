#ifndef PSO_OBJECT_TOBJRAINBOWLOBBY_H
#define PSO_OBJECT_TOBJRAINBOWLOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjRainbowLobby : public TUnk_804AFBF8 {
    virtual ~TObjRainbowLobby();
    u32 m_c8;
    virtual void render();
    virtual void run_task();
    static void *create(void *arg0);
    static void free_static_data();
    static void load_shared_resource();
    u8 unk_CC[0x4];
};

typedef char TObjRainbowLobby_size[sizeof(TObjRainbowLobby) == 0xD0 ? 1 : -1];
#endif
