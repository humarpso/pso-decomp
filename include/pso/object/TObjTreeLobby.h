#ifndef PSO_OBJECT_TOBJTREELOBBY_H
#define PSO_OBJECT_TOBJTREELOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjTreeLobby : public TUnk_804AFBF8 {
    virtual ~TObjTreeLobby();
    u32 m_c8;
    virtual void render();
    virtual void run_task();
    static void *create(void *arg0);
    static void destroy_static_instance();
    static void load_resources();
    u8 unk_CC[0x4];
};

typedef char TObjTreeLobby_size[sizeof(TObjTreeLobby) == 0xD0 ? 1 : -1];
extern "C" {
void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2);
void *__dt__13TObjTreeLobbyFv(void *arg0, s16 arg1);
void *__dt__13TUnk_804F2B60Fv(void *arg0, s16 arg1);
}

#endif
