#ifndef PSO_OBJECT_TOBJLOBBYMAIN_H
#define PSO_OBJECT_TOBJLOBBYMAIN_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TObjLobbyMain : public TUnk_804AFBF8 {
    virtual ~TObjLobbyMain();
    u32 m_c8;
    u8 _padCC[0x4];
    s16 m_d0;
    u8 unk_D2[0x2];
    f32 m_d4;
    u32 m_d8;
    u32 m_dc;
    virtual void render();
    virtual void run_task();
    static void *create(void *arg0);
    static void release_static_instance();
    static void load_resources();};

typedef char TObjLobbyMain_size[sizeof(TObjLobbyMain) == 0xE0 ? 1 : -1];
#endif
