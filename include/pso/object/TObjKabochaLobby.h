#ifndef PSO_OBJECT_TOBJKABOCHALOBBY_H
#define PSO_OBJECT_TOBJKABOCHALOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjKabochaLobby : public TUnk_804AFBF8 {
    virtual ~TObjKabochaLobby();
    u32 m_c8;
    virtual void render();
    virtual void run_task();
    static void *create(void *arg0);
    static void unload_static_data();
    static void load_resources();
    u8 unk_CC[0x4];
};

typedef char TObjKabochaLobby_size[sizeof(TObjKabochaLobby) == 0xD0 ? 1 : -1];

extern "C" {
void *TObjKabochaLobby__ct(TObjKabochaLobby *arg0, s32 arg1, s32 arg2);
void *__dt__16TObjKabochaLobbyFv(void *arg0, s16 arg1);
}

#endif
