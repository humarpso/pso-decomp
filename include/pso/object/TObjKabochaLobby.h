#ifndef PSO_OBJECT_TOBJKABOCHALOBBY_H
#define PSO_OBJECT_TOBJKABOCHALOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjKabochaLobby : public TUnk_804AFBF8 {
    virtual ~TObjKabochaLobby();
    u32 m_c8;
    void render();
    void run_task();
    static void *create(void *arg0);
    static void unload_static_data();
    static void load_resources();
    u8 unk_CC[0x4];
};

typedef char TObjKabochaLobby_size[sizeof(TObjKabochaLobby) == 0xD0 ? 1 : -1];
#endif
