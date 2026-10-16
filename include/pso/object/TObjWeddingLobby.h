#ifndef PSO_OBJECT_TOBJWEDDINGLOBBY_H
#define PSO_OBJECT_TOBJWEDDINGLOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjWeddingLobby : public TUnk_804AFBF8 {
    virtual ~TObjWeddingLobby();
    u32 m_c8;
    virtual void render();
    virtual void run_task();
    static void *create(void *arg0);
    static void release();
    static void load_resources();
    u8 unk_CC[0x8];
};

typedef char TObjWeddingLobby_size[sizeof(TObjWeddingLobby) == 0xD4 ? 1 : -1];
#endif
