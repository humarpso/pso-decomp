#ifndef PSO_OBJECT_TOBJCURTAINLOBBY_H
#define PSO_OBJECT_TOBJCURTAINLOBBY_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjCurtainLobby : public TUnk_804AFBF8 {
    virtual ~TObjCurtainLobby();
    u32 m_c8;
    virtual void render();
    virtual void run_task();
    static void *create(void *arg0);
    static void close_dialog_window();
    static void load_resources();
    u8 unk_CC[0x4];
};

typedef char TObjCurtainLobby_size[sizeof(TObjCurtainLobby) == 0xD0 ? 1 : -1];
#endif
