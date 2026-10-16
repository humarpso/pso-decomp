#ifndef PSO_OBJECT_TOBJONLINEENDING_H
#define PSO_OBJECT_TOBJONLINEENDING_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjOnlineEnding : public TUnk_804B9870 {
    virtual ~TObjOnlineEnding();
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u8 _padA8[0xA0];
    u32 m_148;
    u32 m_14c;
    static s16 get_card_window_value();
    static int get_instance();
    static void*get_attack_entry(int a0);
    void close_window();
    void create_result_window();
    static void *create(void *arg0);
    u8 unk_150[0x8];
};

typedef char TObjOnlineEnding_size[sizeof(TObjOnlineEnding) == 0x158 ? 1 : -1];
#endif
