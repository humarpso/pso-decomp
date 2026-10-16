#ifndef PSO_OBJECT_TOBJTREELOBBY_H
#define PSO_OBJECT_TOBJTREELOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjTreeLobby : public TUnk_804AFBF8 {
    virtual ~TObjTreeLobby();
    u32 m_c8;
    void render();
    void run_task();
    static void *create(void *arg0);
    static void destroy_static_instance();
    static void load_resources();
    void send_destroy_to_player();
    u8 unk_CC[0x4];
};

typedef char TObjTreeLobby_size[sizeof(TObjTreeLobby) == 0xD0 ? 1 : -1];
#endif
