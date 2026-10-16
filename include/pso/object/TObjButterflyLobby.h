#ifndef PSO_OBJECT_TOBJBUTTERFLYLOBBY_H
#define PSO_OBJECT_TOBJBUTTERFLYLOBBY_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjButterflyLobby : public TUnk_804B9870 {
    virtual ~TObjButterflyLobby();
    u32 m_90;
    u8 _pad94[0x28];
    s16 m_bc;
    s16 m_be;
    u8 m_c0;
    u8 m_c1;
    u8 m_c2;
    u8 _padC3[0x1];
    u32 m_c4;
    u32 m_c8;
    static void free_singleton_805D4E6C();
    static void alloc_scene_buffer();
    void init_params();
    virtual void render();
    void update_fade();
    virtual void run_task();
    static void destroy_instance();};

typedef char TObjButterflyLobby_size[sizeof(TObjButterflyLobby) == 0xCC ? 1 : -1];
#endif
