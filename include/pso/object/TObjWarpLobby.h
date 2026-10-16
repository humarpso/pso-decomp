#ifndef PSO_OBJECT_TOBJWARPLOBBY_H
#define PSO_OBJECT_TOBJWARPLOBBY_H

#include "types.h"
#include "pso/object/TObjAreaWarp.h"

struct TObjWarpLobby : public TObjAreaWarp {
    virtual ~TObjWarpLobby();
    void run_task();
    u8 unk_AC[0x4];
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    u32 m_dc;
    static void release_static();
    void open_lobby_menu();
    void render();
    u8 unk_C4[0x1C];
};

typedef char TObjWarpLobby_size[sizeof(TObjWarpLobby) == 0xE0 ? 1 : -1];
#endif
