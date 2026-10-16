#ifndef PSO_MISC_TODOORANCIENT08_H
#define PSO_MISC_TODOORANCIENT08_H

#include "types.h"
#include "pso/unk/TUnk_804B0BB8.h"

struct TODoorAncient08 : public TUnk_804B0BB8 {
    virtual ~TODoorAncient08();
    u16 m_d4;
    u16 m_d6;
    u16 m_d8;
    u8 _padDA[0x2];
    u32 m_dc;
    u32 m_e0;
    u32 m_e4;
    u32 m_e8;
    void play_open_sound();
    void draw_switch_lights();
    virtual void render();
    static void *create(void *arg0);
    static void free_objects();
    static void load_resources();};

typedef char TODoorAncient08_size[sizeof(TODoorAncient08) == 0xEC ? 1 : -1];
#endif
